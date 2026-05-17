/*
 * XREFs of LdrAddDllDirectory @ 0x18010C9F0
 * Callers:
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800FAF6C (LdrpInitializePerUserWindowsDirectory.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180059C40 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlDetermineDosPathNameType_U @ 0x180083CF0 (RtlDetermineDosPathNameType_U.c)
 *     _local_unwind @ 0x180121FB0 (_local_unwind.c)
 *     ZwQueryAttributesFile @ 0x180162430 (ZwQueryAttributesFile.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall LdrAddDllDirectory(__int16 **a1, __int64 *a2)
{
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // edi
  __int64 Heap; // rax
  __int64 v8; // rdi
  volatile signed __int32 **v9; // rdx
  unsigned __int64 v10; // r8
  unsigned int v11; // edx
  _QWORD *v12; // rax
  _UNKNOWN **v13; // rcx
  volatile signed __int32 **v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rbx
  _DWORD v19[18]; // [rsp+0h] [rbp-D8h] BYREF
  __int128 v20; // [rsp+48h] [rbp-90h] BYREF
  __int128 v21; // [rsp+58h] [rbp-80h] BYREF
  __int128 v22; // [rsp+68h] [rbp-70h]
  __int128 v23; // [rsp+78h] [rbp-60h]
  _DWORD *v24; // [rsp+88h] [rbp-50h]
  _BYTE v25[32]; // [rsp+90h] [rbp-48h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-28h]

  v24 = v19;
  memset(v25, 0, sizeof(v25));
  v26 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  *(_QWORD *)&v23 = 0LL;
  DWORD2(v23) = 0;
  if ( (LdrpPolicyBits & 4) == 0 )
    return 3221225485LL;
  v4 = RtlDetermineDosPathNameType_U(a1[1]);
  if ( v4 <= 5 )
  {
    v5 = 41;
    if ( _bittest(&v5, v4) )
      return 3221225485LL;
  }
  v6 = RtlpDosPathNameToRelativeNtPathName(0, (unsigned __int16 *)a1, 0LL, (unsigned __int16 *)&v20, 0LL, 0LL, 0LL);
  if ( v6 >= 0 )
  {
    LODWORD(v21) = 48;
    *((_QWORD *)&v21 + 1) = 0LL;
    DWORD2(v22) = 64;
    *(_QWORD *)&v22 = &v20;
    v23 = 0LL;
    v6 = ZwQueryAttributesFile(&v21, v25);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *((unsigned __int64 *)&v20 + 1));
  }
  if ( v6 < 0 )
    return (unsigned int)v6;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(unsigned __int16 *)a1 + 18LL);
  v8 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memmove((void *)(Heap + 18), a1[1], *(unsigned __int16 *)a1);
  *(_WORD *)(v8 + 16) = *(_WORD *)a1;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpDllDirectoryLock, v9, v10);
  v11 = *(unsigned __int16 *)a1 + (unsigned __int16)word_1801CC808 + 2;
  v19[16] = v11;
  if ( v11 > 0xFFFE )
  {
    v12 = (_QWORD *)local_unwind(v24, &loc_18010CBAE);
  }
  else
  {
    word_1801CC808 = v11;
    v12 = LdrpUserDllDirectories;
    v13 = &LdrpUserDllDirectories;
    if ( *((_UNKNOWN ***)LdrpUserDllDirectories + 1) != &LdrpUserDllDirectories )
      __fastfail(3u);
  }
  *(_QWORD *)v8 = v12;
  *(_QWORD *)(v8 + 8) = v13;
  v12[1] = v8;
  LdrpUserDllDirectories = (_UNKNOWN *)v8;
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpCachedPathLock, v15, v16);
  v17 = RtlpDllSearchPathWithOptions;
  RtlpDllSearchPathWithOptions = 0LL;
  if ( v17 )
  {
    if ( (*(_QWORD *)(v17 + 80))-- != 1LL )
      v17 = 0LL;
  }
  else
  {
    v17 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v17 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v17);
  *a2 = v8;
  return 0LL;
}
