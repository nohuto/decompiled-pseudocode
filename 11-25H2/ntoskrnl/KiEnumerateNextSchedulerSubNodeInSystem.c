/*
 * XREFs of KiEnumerateNextSchedulerSubNodeInSystem @ 0x140305140
 * Callers:
 *     KeConfigureHeteroProcessors @ 0x14042819C (KeConfigureHeteroProcessors.c)
 *     KiGetNumberOfActiveSubNodes @ 0x140428784 (KiGetNumberOfActiveSubNodes.c)
 *     KiRemoveForceParkedProcessorsFromAffinity @ 0x140428F84 (KiRemoveForceParkedProcessorsFromAffinity.c)
 *     KiChooseTargetProcessor @ 0x1404E7040 (KiChooseTargetProcessor.c)
 *     KiConfigureCooperativeIdleSearchContextTargets @ 0x1405B2998 (KiConfigureCooperativeIdleSearchContextTargets.c)
 *     KiGetNextClockOwner @ 0x1405B63C8 (KiGetNextClockOwner.c)
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x140305240 (RtlNumberOfSetBitsEx.c)
 *     KeFindFirstSetRightGroupMask @ 0x140305380 (KeFindFirstSetRightGroupMask.c)
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall KiEnumerateNextSchedulerSubNodeInSystem(unsigned __int16 *a1, _QWORD *a2)
{
  void *i; // rbx
  unsigned __int16 FirstSetRightGroupMask; // ax
  __int64 v6; // rcx
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // edx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  for ( i = a1 + 8; ; RtlCopyVolatileMemory(i, (const void *)(v10 + 16), 0x10uLL) )
  {
    v13[0] = 32LL;
    v13[1] = i;
    if ( RtlNumberOfSetBitsEx(v13) )
      break;
    v8 = *a1;
    if ( a1[1] )
    {
      v11 = (unsigned __int16)KeNumberNodes;
      v12 = *((_DWORD *)a1 + 1) + 1;
      *((_DWORD *)a1 + 1) = v12;
      if ( v12 == v11 )
      {
LABEL_12:
        *a1 = -1;
        return 2147483674LL;
      }
      v9 = *(unsigned int *)(qword_140E2D890 + 4LL * (unsigned int)(v12 + v11 * v8));
    }
    else
    {
      v9 = *a1;
      a1[1] = 1;
    }
    if ( (_DWORD)v9 == -1 )
      goto LABEL_12;
    v10 = KeNodeBlock[v9];
    *((_QWORD *)a1 + 2) = 0LL;
    *((_QWORD *)a1 + 3) = 0LL;
    *((_QWORD *)a1 + 1) = v10;
  }
  FirstSetRightGroupMask = KeFindFirstSetRightGroupMask(i);
  _bittestandreset64((signed __int64 *)i, FirstSetRightGroupMask);
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL * FirstSetRightGroupMask + 32);
  if ( !v6 )
    return 2147483674LL;
  *a2 = v6;
  return 0LL;
}
