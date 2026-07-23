/*
 * XREFs of HalpBlkInitSystem @ 0x140C164B8
 * Callers:
 *     HalpProcInitSystem @ 0x140B4F200 (HalpProcInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1403AE058 (KiInitializeTimer2.c)
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalpBlkInitializeVirtualAddressSpace @ 0x140C14FAC (HalpBlkInitializeVirtualAddressSpace.c)
 */

void __fastcall HalpBlkInitSystem(int a1)
{
  int v1; // eax
  _QWORD v2[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( a1 == 12 )
  {
    qword_140E00C48 = (__int64)HalpBlkPoGetPowerInterface;
    qword_140E00C50 = (__int64)HalpBlkPoGetPackageId;
    qword_140E00C58 = (__int64)HalpBlkPoGetProcessorCount;
    qword_140E00C60 = (__int64)HalpBlkPoGetApicIdByIndex;
    qword_140E00C68 = (__int64)HalpBlkPoRegisterIdleState;
    if ( HalpInterruptBlockedProcessors && HalpInterruptStartHyperthreadSiblings )
    {
      v1 = HalpBlkInitializeVirtualAddressSpace();
      if ( v1 < 0 )
        KeBugCheckEx(0x1DAu, 1uLL, v1, 0LL, 0LL);
      word_140F8EC42 = 0;
      KiInitializeTimer2((unsigned __int64)&HalpBlkWdTimer, (__int64)HalpBlkWdTimerRoutine, 0LL, 8);
      HalpBlkWdWorkItem.Parameter = 0LL;
      HalpBlkWdWorkItem.List.Flink = 0LL;
      HalpBlkWdWorkItem.WorkerRoutine = (void (__fastcall *)(void *))HalpBlkWdWorkerRoutine;
    }
  }
  else if ( a1 == 21 && HalpInterruptBlockedProcessors )
  {
    if ( HalpInterruptStartHyperthreadSiblings )
    {
      v2[0] = 0LL;
      v2[1] = -1LL;
      KeSetTimer2((__int64)&HalpBlkWdTimer, (LARGE_INTEGER)-30000000LL, 30000000LL, (__int64)v2);
    }
  }
}
