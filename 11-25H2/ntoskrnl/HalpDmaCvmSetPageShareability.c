/*
 * XREFs of HalpDmaCvmSetPageShareability @ 0x1406F41CC
 * Callers:
 *     HalpDmaAllocateMapRegisterFrame @ 0x14054C488 (HalpDmaAllocateMapRegisterFrame.c)
 *     HalpDmaFreeMapRegisterFrame @ 0x14054CEA4 (HalpDmaFreeMapRegisterFrame.c)
 *     HalpDmaCvmMakeContiguousVirtualBufferPrivate @ 0x1406F3E98 (HalpDmaCvmMakeContiguousVirtualBufferPrivate.c)
 *     HalpDmaCvmMakeContiguousVirtualBufferShared @ 0x1406F3F14 (HalpDmaCvmMakeContiguousVirtualBufferShared.c)
 *     HalpDmaCvmMakeMdlDevicePrivate @ 0x1406F4038 (HalpDmaCvmMakeMdlDevicePrivate.c)
 *     HalpDmaCvmMakeMdlDeviceShared @ 0x1406F40C4 (HalpDmaCvmMakeMdlDeviceShared.c)
 *     HalpDmaInitMemory @ 0x140BFF824 (HalpDmaInitMemory.c)
 * Callees:
 *     HalpDmaCvmHandleUnrecoverableFrames @ 0x14054CAB8 (HalpDmaCvmHandleUnrecoverableFrames.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpDmaCvmSetPageShareability(__int64 a1, unsigned int a2, char a3, __int64 *a4)
{
  __int64 v6; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx

  v6 = qword_140FC0348;
  v8 = a1;
  if ( byte_140FC0341 )
  {
    if ( a4 )
      *a4 = a1;
  }
  else
  {
    if ( !a3 )
      v8 = ~qword_140FC0348 & a1;
    if ( (int)guard_dispatch_icall_no_overrides(v8 >> 12) >= 0 )
    {
      if ( a4 )
      {
        if ( a3 )
          *a4 = v8 | v6;
        else
          *a4 = v8;
      }
    }
    else if ( !a3 )
    {
      HalpDmaCvmHandleUnrecoverableFrames(v10, v9, a2);
    }
  }
}
