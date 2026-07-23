/*
 * XREFs of MiLoadSectionIntoVsmEnclave @ 0x140A2A370
 * Callers:
 *     NtLoadEnclaveData @ 0x140A29800 (NtLoadEnclaveData.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiLockVad @ 0x1402926F0 (MiLockVad.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     MiUnlockVad @ 0x1403C870C (MiUnlockVad.c)
 *     MiVadDeleted @ 0x14041C6D0 (MiVadDeleted.c)
 *     MiCountCommittedPages @ 0x14048CFA4 (MiCountCommittedPages.c)
 *     MiDecommitRegion @ 0x1408DA3B0 (MiDecommitRegion.c)
 *     MiPrefetchControlArea @ 0x14093AC84 (MiPrefetchControlArea.c)
 *     VslLoadEnclaveModule @ 0x140A2A9E8 (VslLoadEnclaveModule.c)
 *     MiMapImageForEnclaveUse @ 0x140A2AB18 (MiMapImageForEnclaveUse.c)
 *     MiUnmapImageForEnclaveUse @ 0x140A9CF34 (MiUnmapImageForEnclaveUse.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiLoadSectionIntoVsmEnclave(
        __int64 a1,
        _QWORD *a2,
        char a3,
        int a4,
        unsigned __int64 a5,
        unsigned int a6,
        _QWORD *a7,
        _QWORD *a8)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v12; // rax
  _DWORD *Pool; // rbx
  int EnclaveModule; // edi
  int v16; // r8d
  __int64 v17; // r12
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // rax
  _QWORD *v22; // rcx
  __int16 v23[2]; // [rsp+60h] [rbp-20h] BYREF
  int v24; // [rsp+64h] [rbp-1Ch] BYREF
  __int64 v25; // [rsp+68h] [rbp-18h] BYREF
  __int64 v26; // [rsp+70h] [rbp-10h] BYREF
  __int64 v27; // [rsp+78h] [rbp-8h]
  char v29; // [rsp+C8h] [rbp+48h] BYREF

  v23[0] = 0;
  v24 = 0;
  v26 = 0LL;
  *a8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = a2[9];
  v29 = 0;
  v27 = v12;
  MiUnlockVad((__int64)CurrentThread, (__int64)a2);
  Pool = 0LL;
  v25 = 0LL;
  if ( a6 < 0x10 )
  {
    EnclaveModule = -1073741820;
LABEL_3:
    MiLockVad((__int64)CurrentThread, (__int64)a2);
    goto LABEL_4;
  }
  Pool = (_DWORD *)MiAllocatePool(0x100uLL, 0x30uLL, 1296395597);
  if ( !Pool )
  {
    EnclaveModule = -1073741670;
    goto LABEL_3;
  }
  LOBYTE(v16) = a3;
  EnclaveModule = MiMapImageForEnclaveUse(*a7, a4, v16, (unsigned int)&v25, (__int64)&v26);
  if ( EnclaveModule < 0 )
    goto LABEL_3;
  v17 = v26;
  v18 = a5;
  v19 = (unsigned __int64)*(unsigned int *)(*(_QWORD *)v26 + 8LL) << 12;
  MiLockVad((__int64)CurrentThread, (__int64)a2);
  if ( (unsigned int)MiVadDeleted((__int64)a2) || MiCountCommittedPages(v18, v19 + v18 - 1, (__int64)a2, a1 + 1024) )
  {
    EnclaveModule = -1073741800;
  }
  else
  {
    v20 = v17 + 128;
    v21 = *(_QWORD *)(v17 + 136);
    v26 = v21;
    while ( v20 )
    {
      EnclaveModule = MiCommitExistingVad(
                        (ULONG_PTR)a2,
                        v18 + (((*(_QWORD *)(v20 + 8) << 9) - (v21 << 9)) & 0xFFFFFFFFFFFFF000uLL),
                        (unsigned __int64)*(unsigned int *)(v20 + 44) << 12,
                        4u,
                        0,
                        0LL,
                        0,
                        0,
                        0LL,
                        &v24,
                        v23);
      if ( EnclaveModule < 0 )
        goto LABEL_24;
      v20 = *(_QWORD *)(v20 + 16);
      v21 = v26;
    }
    MiPrefetchControlArea(v17, CLFS_LSN_NULL_EXT, 0LL, 1u, 0, 0xFFFFFFFF);
    EnclaveModule = VslLoadEnclaveModule(
                      *(_QWORD *)(v27 + 24),
                      v18,
                      *(_QWORD *)((*(_QWORD *)(v17 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 64),
                      v25,
                      (__int64)a7,
                      a6,
                      (__int64)&v29,
                      (__int64)(Pool + 9),
                      (__int64)(Pool + 10));
    if ( EnclaveModule < 0 )
    {
LABEL_24:
      MiDecommitRegion((__int64)a2, v18);
      goto LABEL_4;
    }
    if ( v29 )
    {
      Pool[8] = 2;
      *((_QWORD *)Pool + 2) = v18;
      v22 = (_QWORD *)a2[11];
      if ( (_QWORD *)*v22 != a2 + 10 )
        __fastfail(3u);
      *(_QWORD *)Pool = a2 + 10;
      *((_QWORD *)Pool + 1) = v22;
      *v22 = Pool;
      a2[11] = Pool;
      *a8 = Pool;
      Pool = 0LL;
    }
  }
LABEL_4:
  MiUnlockAndDereferenceVad(a2);
  if ( v25 )
    MiUnmapImageForEnclaveUse(v25);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  return (unsigned int)EnclaveModule;
}
