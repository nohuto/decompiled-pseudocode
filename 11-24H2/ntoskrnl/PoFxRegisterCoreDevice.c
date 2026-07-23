/*
 * XREFs of PoFxRegisterCoreDevice @ 0x14074B900
 * Callers:
 *     HalpTimerInitPowerManagement @ 0x140545428 (HalpTimerInitPowerManagement.c)
 *     HalpDmaInitPowerManagement @ 0x14054F5E0 (HalpDmaInitPowerManagement.c)
 *     HalpInterruptInitPowerManagement @ 0x140553CF8 (HalpInterruptInitPowerManagement.c)
 *     PoFxRegisterDebugger @ 0x140C35168 (PoFxRegisterDebugger.c)
 * Callees:
 *     PopFxInsertDevice @ 0x1404A9868 (PopFxInsertDevice.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopFxRegisterDeviceWorker @ 0x14074CF20 (PopFxRegisterDeviceWorker.c)
 *     PopFxConvertV1Components @ 0x140AB7D1C (PopFxConvertV1Components.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PoFxRegisterCoreDevice(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // esi
  void *v6; // rdi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[10]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD *v12; // [rsp+B0h] [rbp+8h] BYREF

  v12 = 0LL;
  v5 = a1;
  if ( a1 && *(_DWORD *)a2 == 1 && *(_QWORD *)(a2 + 24) )
  {
    v6 = (void *)PopFxConvertV1Components(a2 + 48, *(unsigned int *)(a2 + 4));
    if ( v6 )
    {
      memset_0(v11, 0, sizeof(v11));
      v11[0] = *(_QWORD *)(a2 + 8);
      v11[1] = *(_QWORD *)(a2 + 16);
      v11[2] = *(_QWORD *)(a2 + 32);
      v11[6] = *(_QWORD *)(a2 + 24);
      v7 = PopFxRegisterDeviceWorker(
             0,
             v5,
             (unsigned int)v11,
             (_DWORD)v6,
             *(_DWORD *)(a2 + 4),
             *(_QWORD *)(a2 + 40),
             0,
             0LL,
             (__int64)&v12);
      if ( v7 >= 0 )
      {
        PopFxInsertDevice(v9, v8, v12);
        v7 = 0;
      }
      else
      {
        v12 = 0LL;
      }
      ExFreePoolWithTag(v6, 0x4D584650u);
    }
    else
    {
      v7 = -1073741670;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  *a3 = v12;
  return (unsigned int)v7;
}
