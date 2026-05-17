/*
 * XREFs of RtlDosSearchPath_U @ 0x1800AAC20
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlInitUnicodeStringEx @ 0x18006CCF0 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlDoesFileExists_UEx @ 0x1800A24A0 (RtlDoesFileExists_UEx.c)
 *     RtlGetFullPathName_U @ 0x1800AA590 (RtlGetFullPathName_U.c)
 *     RtlDetermineDosPathNameType_U @ 0x1800AC080 (RtlDetermineDosPathNameType_U.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlDosSearchPath_U(
        unsigned __int64 a1,
        const wchar_t *a2,
        const wchar_t *a3,
        unsigned int a4,
        _WORD *a5,
        __int64 *a6)
{
  __int64 v10; // rdx
  const wchar_t *i; // rax
  unsigned int v12; // r15d
  int v13; // ebp
  unsigned int v14; // edi
  const wchar_t *Heap; // rbp
  size_t v16; // r13
  wchar_t *j; // rdi
  wchar_t v18; // ax
  __int64 v19; // r9
  unsigned int FullPathName_U; // ebx
  __int64 v22; // r9
  _OWORD v23[3]; // [rsp+20h] [rbp-38h] BYREF

  v23[0] = 0LL;
  if ( (unsigned int)RtlDetermineDosPathNameType_U(a2) != 5 )
  {
    LOBYTE(v10) = 1;
    if ( RtlDoesFileExists_UEx(a2, v10) )
      return RtlGetFullPathName_U(a2, a4, a5, a6);
    return 0LL;
  }
  for ( i = a2; *i; ++i )
  {
    if ( *i == 46 )
      goto LABEL_30;
  }
  if ( !a3 )
  {
LABEL_30:
    v12 = 0;
    goto LABEL_7;
  }
  if ( (int)RtlInitUnicodeStringEx((__int64)v23, a3) < 0 )
    return 0LL;
  v12 = LOWORD(v23[0]);
LABEL_7:
  if ( (int)RtlInitUnicodeStringEx((__int64)v23, (const wchar_t *)a1) < 0 )
    return 0LL;
  v13 = LOWORD(v23[0]);
  if ( (int)RtlInitUnicodeStringEx((__int64)v23, a2) < 0 )
    return 0LL;
  v14 = LOWORD(v23[0]);
  Heap = (const wchar_t *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, v12 + LOWORD(v23[0]) + v13 + 6LL);
  if ( !Heap )
    return 0LL;
  v16 = v14;
  while ( 1 )
  {
    for ( j = (wchar_t *)Heap; ; ++j )
    {
      v18 = *(_WORD *)a1;
      if ( !*(_WORD *)a1 )
        break;
      a1 += 2LL;
      if ( v18 == 59 )
        break;
      *j = v18;
    }
    if ( j != Heap && *(j - 1) != 92 )
      *j++ = 92;
    a1 &= -(__int64)(*(_WORD *)a1 != 0);
    memmove(j, a2, v16);
    if ( v12 )
      memmove((char *)j + v16, a3, v12 + 2LL);
    else
      *(wchar_t *)((char *)j + v16) = 0;
    if ( RtlDoesFileExists_UEx(Heap, 0LL) )
      break;
    if ( !a1 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap, v19);
      return 0LL;
    }
  }
  FullPathName_U = RtlGetFullPathName_U(Heap, a4, a5, a6);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap, v22);
  return FullPathName_U;
}
