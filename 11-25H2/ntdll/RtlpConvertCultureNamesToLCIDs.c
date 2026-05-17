/*
 * XREFs of RtlpConvertCultureNamesToLCIDs @ 0x180121E10
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlCultureNameToLCID @ 0x18005C370 (RtlCultureNameToLCID.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlInitUnicodeString @ 0x1800A8A00 (RtlInitUnicodeString.c)
 *     LdrpMultiSZCchLength @ 0x1800EC68C (LdrpMultiSZCchLength.c)
 *     wcsnlen @ 0x180129500 (wcsnlen.c)
 *     RtlConvertLCIDToString @ 0x180140650 (RtlConvertLCIDToString.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpConvertCultureNamesToLCIDs(wchar_t *SourceString, __int64 *a2)
{
  unsigned int v2; // ebx
  const wchar_t *v4; // rdi
  __int64 v5; // r14
  unsigned int v6; // esi
  unsigned int i; // ebp
  unsigned int v8; // r15d
  unsigned int j; // edx
  unsigned int v10; // r15d
  __int64 Heap; // rax
  _DWORD *v12; // rdi
  unsigned int k; // ebp
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rax
  int v18; // [rsp+30h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-60h] BYREF
  int v20[4]; // [rsp+48h] [rbp-50h] BYREF

  v2 = 0;
  v18 = 0;
  v4 = SourceString;
  v5 = 0LL;
  v6 = 0;
  DestinationString = 0LL;
  if ( !a2 || !SourceString || *a2 || (int)LdrpMultiSZCchLength(SourceString, (__int64)a2, &v18) < 0 )
    return 3221225485LL;
  for ( i = 2 * v18; v4 && *v4 && i; i += -2 - v8 )
  {
    if ( v6 >= 4
      || (v8 = 2 * wcsnlen(v4, (unsigned __int64)i >> 1),
          RtlInitUnicodeString(&DestinationString, v4),
          !RtlCultureNameToLCID(&DestinationString.Length, &v20[v6])) )
    {
LABEL_16:
      v2 = -1073741811;
      goto LABEL_29;
    }
    for ( j = 0; j < v6; ++j )
    {
      if ( v20[v6] == v20[j] )
        goto LABEL_16;
    }
    v4 = (const wchar_t *)((char *)v4 + v8 + 2);
    ++v6;
  }
  v10 = (unsigned __int16)(((_WORD)v6 << 6) + 4);
  Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int16)(((_WORD)v6 << 6) + 4));
  v5 = Heap;
  if ( Heap )
  {
    v12 = (_DWORD *)Heap;
    for ( k = 0; k < v6; ++k )
    {
      RtlConvertLCIDToString(v20[k], 16, 4, (_DWORD)v12, 32);
      v15 = -1LL;
      do
        ++v15;
      while ( *((_WORD *)v12 + v15) );
      v10 += -2 - v15;
      v16 = -1LL;
      do
        ++v16;
      while ( *((_WORD *)v12 + v16) );
      v12 = (_DWORD *)((char *)v12 + 2 * v16 + 2);
      if ( v10 < 4 )
      {
        v2 = -1073741595;
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5, v14);
        return v2;
      }
    }
    *v12 = 0;
  }
  else
  {
    v2 = -1073741801;
  }
LABEL_29:
  *a2 = v5;
  return v2;
}
