/*
 * XREFs of MmWriteSystemImageTracepoint @ 0x14067EDF0
 * Callers:
 *     KiTpWriteBreakpoint @ 0x1405C6D4C (KiTpWriteBreakpoint.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x140232930 (RtlLookupFunctionEntry.c)
 *     MiUnlockLoadedDataTableEntry @ 0x1402BBA24 (MiUnlockLoadedDataTableEntry.c)
 *     MiLockLoadedDataTableEntry @ 0x1402BBABC (MiLockLoadedDataTableEntry.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     MiLockDriverPageRange @ 0x14066C080 (MiLockDriverPageRange.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiPrepareDriverPatchState @ 0x1407E83FC (MiPrepareDriverPatchState.c)
 *     MiUnlockDriverPages @ 0x140A33EDC (MiUnlockDriverPages.c)
 *     MiInitializeDriverPatchState @ 0x140A958C8 (MiInitializeDriverPatchState.c)
 */

__int64 __fastcall MmWriteSystemImageTracepoint(DWORD64 ControlPc, char a2, char a3, __int64 a4)
{
  char v4; // si
  __int64 v7; // rdi
  char v8; // r15
  char *AnyMultiplexedVm; // rbx
  __int64 v10; // rdx
  unsigned int *v11; // r12
  int v12; // ebx
  unsigned int v13; // r14d
  unsigned int BeginAddress; // esi
  PRUNTIME_FUNCTION v15; // rax
  unsigned __int64 ImageBase; // [rsp+38h] [rbp-C8h] BYREF
  char *v20; // [rsp+40h] [rbp-C0h]
  __int64 v21; // [rsp+48h] [rbp-B8h]
  _BYTE v22[112]; // [rsp+50h] [rbp-B0h] BYREF
  char v23[8]; // [rsp+C0h] [rbp-40h] BYREF
  DWORD64 v24; // [rsp+C8h] [rbp-38h]
  unsigned int v25; // [rsp+D0h] [rbp-30h]
  unsigned int v26; // [rsp+D4h] [rbp-2Ch]
  char v27; // [rsp+D8h] [rbp-28h]

  v4 = a2;
  v21 = a4;
  memset_0(v22, 0, 0x68uLL);
  ImageBase = 0LL;
  if ( a4 )
  {
    v7 = a4;
  }
  else
  {
    v7 = MiLockLoadedDataTableEntry(ControlPc, 1);
    if ( !v7 )
      return (unsigned int)-1073741811;
  }
  v8 = 0;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v20 = AnyMultiplexedVm;
  v11 = (unsigned int *)(v10 + 64);
  while ( 1 )
  {
    MiInitializeDriverPatchState(v7, v22);
    v12 = MiPrepareDriverPatchState(v22, AnyMultiplexedVm);
    if ( v12 < 0 )
      break;
    if ( v8 )
    {
      v13 = *v11;
      BeginAddress = 0;
    }
    else
    {
      if ( !v4 )
      {
        v13 = 1;
        BeginAddress = ControlPc - *(_DWORD *)(v7 + 48);
        goto LABEL_18;
      }
      v15 = RtlLookupFunctionEntry(ControlPc, &ImageBase, 0LL);
      if ( !v15 )
        goto LABEL_13;
      BeginAddress = v15->BeginAddress;
      v13 = v15->EndAddress - v15->BeginAddress;
    }
    if ( !v13 )
      goto LABEL_13;
LABEL_18:
    if ( BeginAddress >= *v11 || *v11 - BeginAddress < v13 )
    {
LABEL_13:
      v12 = -1073741811;
      break;
    }
    v12 = MiLockDriverPageRange((__int64)v22, BeginAddress >> 12, (v13 + BeginAddress - 1) >> 12, 2 * v8 + 1, 0LL);
    if ( v12 < 0 )
      break;
    memset_0(v23, 0, 0x68uLL);
    v27 = a3;
    v24 = ControlPc;
    v25 = BeginAddress;
    v26 = v13;
    v12 = VslpEnterIumSecureMode(2u, 0x58u, 0, (__int64)v23);
    if ( v12 != -1073741267 )
      break;
    if ( v8 )
    {
      v12 = -1073741637;
      break;
    }
    MiUnlockDriverPages(v22);
    AnyMultiplexedVm = v20;
    v8 = 1;
    v4 = a2;
  }
  MiUnlockDriverPages(v22);
  if ( !v21 )
    MiUnlockLoadedDataTableEntry(v7, 1);
  return (unsigned int)v12;
}
