/*
 * XREFs of MiLoadDataIntoVsmEnclave @ 0x140A2A630
 * Callers:
 *     NtLoadEnclaveData @ 0x140A29800 (NtLoadEnclaveData.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 *     MiMakeProtectionMask @ 0x14034C5B0 (MiMakeProtectionMask.c)
 *     MmSizeOfMdl @ 0x14044DA00 (MmSizeOfMdl.c)
 *     MiCountCommittedPages @ 0x14048CFA4 (MiCountCommittedPages.c)
 *     PsLoadVsmEnclaveData @ 0x1405E4194 (PsLoadVsmEnclaveData.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiDecommitRegion @ 0x1408DA3B0 (MiDecommitRegion.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiLoadDataIntoVsmEnclave(
        __int64 a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        KPROCESSOR_MODE a4,
        __int64 a5,
        int a6,
        int *a7,
        unsigned __int64 Base,
        SIZE_T a9,
        int a10,
        _QWORD *a11)
{
  __int64 v12; // rdi
  __int64 result; // rax
  unsigned int ProtectionMask; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  int VsmEnclaveData; // esi
  SIZE_T v18; // rax
  __int64 Pool; // rax
  int v20; // ecx
  int *v21; // r14
  __int64 v22; // r8
  __int64 v23; // r9
  __int16 v25; // [rsp+64h] [rbp-C4h] BYREF
  int v26; // [rsp+68h] [rbp-C0h] BYREF
  SIZE_T Length; // [rsp+70h] [rbp-B8h]
  int *v28; // [rsp+78h] [rbp-B0h]
  _QWORD *v29; // [rsp+80h] [rbp-A8h]
  ULONG_PTR BugCheckParameter1; // [rsp+88h] [rbp-A0h]
  __int64 v31; // [rsp+90h] [rbp-98h]
  ULONG_PTR v32; // [rsp+98h] [rbp-90h]
  __int64 v33; // [rsp+A0h] [rbp-88h]
  __int64 v34; // [rsp+A8h] [rbp-80h]
  int *v35; // [rsp+B0h] [rbp-78h]
  _BYTE v36[48]; // [rsp+B8h] [rbp-70h] BYREF

  BugCheckParameter1 = a2;
  v32 = a3;
  v34 = a5;
  v28 = a7;
  v35 = a7;
  Length = a9;
  v29 = a11;
  v25 = 0;
  v26 = 0;
  memset(v36, 0, sizeof(v36));
  v12 = 0LL;
  *a11 = 0LL;
  if ( a9 != 4096 )
    return 3221225714LL;
  if ( a6 != 4 )
    return 3221225476LL;
  if ( *a7 != 1 && *a7 != 2 )
  {
    if ( *a7 == 3 )
      goto LABEL_11;
    if ( *a7 != 4 )
    {
      if ( *a7 != 5 )
        return 3221225485LL;
LABEL_11:
      if ( Base )
        return 3221225713LL;
      goto LABEL_15;
    }
  }
  if ( !Base )
    return 3221225477LL;
LABEL_15:
  ProtectionMask = MiMakeProtectionMask(a10 & 0x5FFFFFFF);
  if ( (ProtectionMask & 7) == 0 || ProtectionMask > 7 || (ProtectionMask & 5) == 5 )
    return 3221225541LL;
  if ( (ProtectionMask & 2) != 0
    && ((__int64)KeGetCurrentThread()->ApcState.Process[4].ThreadListHead.Flink & 0x100) != 0
    && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x40000) == 0 )
  {
    return 3221227012LL;
  }
  v33 = a5 + 4095;
  if ( MiCountCommittedPages(a5, a5 + 4095, v15, v16 + 1024) )
    return 3221225505LL;
  result = MiCommitExistingVad(a3, a5, 4096LL, a10, 0, 0LL, 0, 0, 0LL, &v26, &v25);
  VsmEnclaveData = result;
  if ( (int)result >= 0 )
  {
    if ( Base )
    {
      v18 = MmSizeOfMdl((PVOID)Base, Length);
      Pool = MiAllocatePool(0x40uLL, v18, 1818520909);
      v12 = Pool;
      v31 = Pool;
      if ( !Pool )
      {
        VsmEnclaveData = -1073741670;
        goto LABEL_33;
      }
      *(_QWORD *)Pool = 0LL;
      v20 = Length;
      *(_WORD *)(Pool + 8) = 8 * ((((Base & 0xFFF) + Length + 4095) >> 12) + 6);
      *(_WORD *)(Pool + 10) = 0;
      *(_QWORD *)(Pool + 32) = Base & 0xFFFFFFFFFFFFF000uLL;
      *(_DWORD *)(Pool + 44) = Base & 0xFFF;
      *(_DWORD *)(Pool + 40) = v20;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v36);
      MmProbeAndLockPages((PMDL)v12, a4, IoReadAccess);
      v21 = v28;
      KiUnstackDetachProcess((__int64)v36, 0, v22, v23);
      if ( VsmEnclaveData < 0 )
        goto LABEL_33;
    }
    else
    {
      v21 = v28;
    }
    VsmEnclaveData = PsLoadVsmEnclaveData(*(_QWORD **)(a3 + 72), a5, *v21, a10, v12);
    if ( VsmEnclaveData >= 0 )
    {
      *v29 = 4096LL;
LABEL_34:
      if ( v12 )
      {
        if ( (*(_BYTE *)(v12 + 10) & 2) != 0 )
          MmUnlockPages((PMDL)v12);
        ExFreePoolWithTag((PVOID)v12, 0);
      }
      return (unsigned int)VsmEnclaveData;
    }
LABEL_33:
    MiDecommitRegion(a3, a5);
    goto LABEL_34;
  }
  return result;
}
