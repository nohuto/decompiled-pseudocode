/*
 * XREFs of LdrAddDllDirectory @ 0x18010EA40
 * Callers:
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800FD1A4 (LdrpInitializePerUserWindowsDirectory.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlDetermineDosPathNameType_U @ 0x1800AC080 (RtlDetermineDosPathNameType_U.c)
 *     _local_unwind @ 0x180123A90 (_local_unwind.c)
 *     ZwQueryAttributesFile @ 0x1801639C0 (ZwQueryAttributesFile.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall LdrAddDllDirectory(__int16 **a1, __int64 *a2)
{
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // edi
  __int64 v7; // r9
  __int64 Heap; // rax
  __int64 v9; // rdi
  unsigned int v10; // edx
  _QWORD *v11; // rax
  _UNKNOWN **v12; // rcx
  __int64 v14; // rbx
  __int64 v15; // r9
  _DWORD v17[18]; // [rsp+0h] [rbp-D8h] BYREF
  __int128 v18; // [rsp+48h] [rbp-90h] BYREF
  __int128 v19; // [rsp+58h] [rbp-80h] BYREF
  __int128 v20; // [rsp+68h] [rbp-70h]
  __int128 v21; // [rsp+78h] [rbp-60h]
  _DWORD *v22; // [rsp+88h] [rbp-50h]
  _BYTE v23[32]; // [rsp+90h] [rbp-48h] BYREF
  __int64 v24; // [rsp+B0h] [rbp-28h]

  v22 = v17;
  memset(v23, 0, sizeof(v23));
  v24 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  *(_QWORD *)&v21 = 0LL;
  DWORD2(v21) = 0;
  if ( (LdrpPolicyBits & 4) == 0 )
    return 3221225485LL;
  v4 = RtlDetermineDosPathNameType_U(a1[1]);
  if ( v4 <= 5 )
  {
    v5 = 41;
    if ( _bittest(&v5, v4) )
      return 3221225485LL;
  }
  v6 = RtlpDosPathNameToRelativeNtPathName(0, (unsigned __int16 *)a1, 0LL, (unsigned __int16 *)&v18, 0LL, 0LL, 0LL);
  if ( v6 >= 0 )
  {
    LODWORD(v19) = 48;
    *((_QWORD *)&v19 + 1) = 0LL;
    DWORD2(v20) = 64;
    *(_QWORD *)&v20 = &v18;
    v21 = 0LL;
    v6 = ZwQueryAttributesFile(&v19, v23);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *((__int64 *)&v18 + 1), v7);
  }
  if ( v6 < 0 )
    return (unsigned int)v6;
  Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, *(unsigned __int16 *)a1 + 18LL);
  v9 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memmove((void *)(Heap + 18), a1[1], *(unsigned __int16 *)a1);
  *(_WORD *)(v9 + 16) = *(_WORD *)a1;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpDllDirectoryLock);
  v10 = *(unsigned __int16 *)a1 + (unsigned __int16)word_1801CE808 + 2;
  v17[16] = v10;
  if ( v10 > 0xFFFE )
  {
    v11 = (_QWORD *)local_unwind(v22, &loc_18010EBFE);
  }
  else
  {
    word_1801CE808 = v10;
    v11 = LdrpUserDllDirectories;
    v12 = &LdrpUserDllDirectories;
    if ( *((_UNKNOWN ***)LdrpUserDllDirectories + 1) != &LdrpUserDllDirectories )
      __fastfail(3u);
  }
  *(_QWORD *)v9 = v11;
  *(_QWORD *)(v9 + 8) = v12;
  v11[1] = v9;
  LdrpUserDllDirectories = (_UNKNOWN *)v9;
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpCachedPathLock);
  v14 = RtlpDllSearchPathWithOptions;
  RtlpDllSearchPathWithOptions = 0LL;
  if ( v14 )
  {
    if ( (*(_QWORD *)(v14 + 80))-- != 1LL )
      v14 = 0LL;
  }
  else
  {
    v14 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v14 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v14, v15);
  *a2 = v9;
  return 0LL;
}
