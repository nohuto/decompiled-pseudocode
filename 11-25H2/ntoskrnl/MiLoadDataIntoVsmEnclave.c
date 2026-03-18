/*
 * XREFs of MiLoadDataIntoVsmEnclave @ 0x1409CBB80
 * Callers:
 *     NtLoadEnclaveData @ 0x1409CAD50 (NtLoadEnclaveData.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MiMakeProtectionMask @ 0x1402C2BF0 (MiMakeProtectionMask.c)
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x1402D5660 (MmProbeAndLockPages.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiCommitExistingVad @ 0x1403840D0 (MiCommitExistingVad.c)
 *     MmSizeOfMdl @ 0x140457EF0 (MmSizeOfMdl.c)
 *     MiCountCommittedPages @ 0x140492B64 (MiCountCommittedPages.c)
 *     PsLoadVsmEnclaveData @ 0x1405DAA14 (PsLoadVsmEnclaveData.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MiDecommitRegion @ 0x1408F7010 (MiDecommitRegion.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int16 v23; // [rsp+64h] [rbp-C4h] BYREF
  int v24; // [rsp+68h] [rbp-C0h] BYREF
  SIZE_T Length; // [rsp+70h] [rbp-B8h]
  int *v26; // [rsp+78h] [rbp-B0h]
  _QWORD *v27; // [rsp+80h] [rbp-A8h]
  ULONG_PTR BugCheckParameter1; // [rsp+88h] [rbp-A0h]
  __int64 v29; // [rsp+90h] [rbp-98h]
  ULONG_PTR v30; // [rsp+98h] [rbp-90h]
  __int64 v31; // [rsp+A0h] [rbp-88h]
  __int64 v32; // [rsp+A8h] [rbp-80h]
  int *v33; // [rsp+B0h] [rbp-78h]
  _BYTE v34[48]; // [rsp+B8h] [rbp-70h] BYREF

  BugCheckParameter1 = a2;
  v30 = a3;
  v32 = a5;
  v26 = a7;
  v33 = a7;
  Length = a9;
  v27 = a11;
  v23 = 0;
  v24 = 0;
  memset(v34, 0, sizeof(v34));
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
  v31 = a5 + 4095;
  if ( MiCountCommittedPages(a5, a5 + 4095, v15, v16 + 1024) )
    return 3221225505LL;
  result = MiCommitExistingVad(a3, a5, 4096LL, a10, 0, 0LL, 0, 0, 0LL, &v24, &v23);
  VsmEnclaveData = result;
  if ( (int)result >= 0 )
  {
    if ( Base )
    {
      v18 = MmSizeOfMdl((PVOID)Base, Length);
      Pool = MiAllocatePool(0x40uLL, v18, 1818520909);
      v12 = Pool;
      v29 = Pool;
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
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v34);
      MmProbeAndLockPages((PMDL)v12, a4, IoReadAccess);
      v21 = v26;
      KiUnstackDetachProcess((__int64)v34, 0LL);
      if ( VsmEnclaveData < 0 )
        goto LABEL_33;
    }
    else
    {
      v21 = v26;
    }
    VsmEnclaveData = PsLoadVsmEnclaveData(*(_QWORD **)(a3 + 72), a5, *v21, a10, v12);
    if ( VsmEnclaveData >= 0 )
    {
      *v27 = 4096LL;
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
