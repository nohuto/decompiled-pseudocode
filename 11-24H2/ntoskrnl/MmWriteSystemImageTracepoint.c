/*
 * XREFs of MmWriteSystemImageTracepoint @ 0x14067DBF0
 * Callers:
 *     KiTpWriteBreakpoint @ 0x1405C961C (KiTpWriteBreakpoint.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     RtlLookupFunctionEntry @ 0x14027D3A0 (RtlLookupFunctionEntry.c)
 *     MiUnlockLoadedDataTableEntry @ 0x1402C6EA4 (MiUnlockLoadedDataTableEntry.c)
 *     MiLockLoadedDataTableEntry @ 0x1402C6F3C (MiLockLoadedDataTableEntry.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     MiLockDriverPageRange @ 0x14066AEB0 (MiLockDriverPageRange.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiPrepareDriverPatchState @ 0x1407E7E2C (MiPrepareDriverPatchState.c)
 *     MiUnlockDriverPages @ 0x140A3E5CC (MiUnlockDriverPages.c)
 *     MiInitializeDriverPatchState @ 0x140A9A35C (MiInitializeDriverPatchState.c)
 */

__int64 __fastcall MmWriteSystemImageTracepoint(unsigned __int64 a1, char a2, char a3, __int64 a4)
{
  char v4; // si
  __int64 v7; // rdi
  char v8; // r15
  char *AnyMultiplexedVm; // rbx
  __int64 v10; // rdx
  unsigned int *v11; // r12
  int v12; // ebx
  unsigned int v13; // r14d
  unsigned int v14; // esi
  unsigned int *v15; // rax
  unsigned __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  char *v20; // [rsp+40h] [rbp-C0h]
  __int64 v21; // [rsp+48h] [rbp-B8h]
  _BYTE v22[112]; // [rsp+50h] [rbp-B0h] BYREF
  char v23[8]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+C8h] [rbp-38h]
  unsigned int v25; // [rsp+D0h] [rbp-30h]
  unsigned int v26; // [rsp+D4h] [rbp-2Ch]
  char v27; // [rsp+D8h] [rbp-28h]

  v4 = a2;
  v21 = a4;
  memset_0(v22, 0, 0x68uLL);
  v19 = 0LL;
  if ( a4 )
  {
    v7 = a4;
  }
  else
  {
    v7 = MiLockLoadedDataTableEntry(a1, 1);
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
      v14 = 0;
    }
    else
    {
      if ( !v4 )
      {
        v13 = 1;
        v14 = a1 - *(_DWORD *)(v7 + 48);
        goto LABEL_18;
      }
      v15 = RtlLookupFunctionEntry(a1, &v19, 0LL);
      if ( !v15 )
        goto LABEL_13;
      v14 = *v15;
      v13 = v15[1] - *v15;
    }
    if ( !v13 )
      goto LABEL_13;
LABEL_18:
    if ( v14 >= *v11 || *v11 - v14 < v13 )
    {
LABEL_13:
      v12 = -1073741811;
      break;
    }
    v12 = MiLockDriverPageRange((__int64)v22, v14 >> 12, (v13 + v14 - 1) >> 12, 2 * v8 + 1, 0LL);
    if ( v12 < 0 )
      break;
    memset_0(v23, 0, 0x68uLL);
    v27 = a3;
    v24 = a1;
    v25 = v14;
    v26 = v13;
    v12 = VslpEnterIumSecureMode(2u, 88LL, 0, (__int64)v23);
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
