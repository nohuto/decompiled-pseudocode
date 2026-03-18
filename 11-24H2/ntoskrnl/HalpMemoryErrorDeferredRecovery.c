/*
 * XREFs of HalpMemoryErrorDeferredRecovery @ 0x1405554D8
 * Callers:
 *     HalpHvMceConsumedMemoryErrorRecovery @ 0x14054ABE0 (HalpHvMceConsumedMemoryErrorRecovery.c)
 *     HalpMceRecovery @ 0x140554990 (HalpMceRecovery.c)
 *     HalpMceRecoveryNotRequiredIntel @ 0x140554E60 (HalpMceRecoveryNotRequiredIntel.c)
 *     HalpGenericErrorSourceRecovery @ 0x14055525C (HalpGenericErrorSourceRecovery.c)
 * Callees:
 *     HalpHvSetMachineCheckRecoveryState @ 0x14054B808 (HalpHvSetMachineCheckRecoveryState.c)
 *     HalpAcquireDrsPool @ 0x1405550F8 (HalpAcquireDrsPool.c)
 *     HalpFreeDrsPool @ 0x14055522C (HalpFreeDrsPool.c)
 *     WheaRequestDeferredRecovery @ 0x14065DC00 (WheaRequestDeferredRecovery.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpMemoryErrorDeferredRecovery(
        __int64 a1,
        char a2,
        __int64 a3,
        int a4,
        __int16 a5,
        char a6,
        char a7,
        char a8)
{
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ebx
  int v17; // eax

  v13 = HalpAcquireDrsPool();
  if ( v13 )
  {
    if ( !HalpHvWheaEnlightenedCpuManager )
    {
LABEL_12:
      *(_WORD *)(v13 + 58) = a5;
      *(_BYTE *)(v13 + 60) = a6;
      *(_BYTE *)(v13 + 61) = a7;
      *(_QWORD *)(v13 + 48) = a1;
      *(_BYTE *)(v13 + 56) = a2;
      *(_DWORD *)(v13 + 92) = 0;
      *(_QWORD *)(v13 + 100) = 0LL;
      *(_BYTE *)(v13 + 62) = a8 & 1;
      *(_QWORD *)(v13 + 64) = a3;
      *(_DWORD *)(v13 + 72) = a4;
      *(_DWORD *)(v13 + 76) = 1;
      *(_DWORD *)(v13 + 80) = 1;
      if ( (unsigned __int8)WheaRequestDeferredRecovery(v13 + 8, v13 + 48) )
        return 0;
      HalpFreeDrsPool((_DWORD *)v13);
      return (unsigned int)-1073741757;
    }
    if ( a3 )
    {
      if ( !qword_140FC0F40 )
      {
        v16 = -1073741823;
        goto LABEL_10;
      }
      v17 = guard_dispatch_icall_no_overrides(a3, v12, v14, v15);
    }
    else
    {
      v17 = HalpHvSetMachineCheckRecoveryState(1, v12, v14, v15);
    }
    v16 = v17;
LABEL_10:
    if ( v16 < 0 )
    {
      HalpFreeDrsPool((_DWORD *)v13);
      return (unsigned int)v16;
    }
    goto LABEL_12;
  }
  return (unsigned int)-1073741757;
}
