/*
 * XREFs of HalpDmaCvmSetPageShareability @ 0x1406FDBFC
 * Callers:
 *     HalpDmaAllocateMapRegisterFrame @ 0x14054C72C (HalpDmaAllocateMapRegisterFrame.c)
 *     HalpDmaFreeMapRegisterFrame @ 0x14054D144 (HalpDmaFreeMapRegisterFrame.c)
 *     HalpDmaCvmMakeContiguousVirtualBufferPrivate @ 0x1406FD8C8 (HalpDmaCvmMakeContiguousVirtualBufferPrivate.c)
 *     HalpDmaCvmMakeContiguousVirtualBufferShared @ 0x1406FD944 (HalpDmaCvmMakeContiguousVirtualBufferShared.c)
 *     HalpDmaCvmMakeMdlDevicePrivate @ 0x1406FDA68 (HalpDmaCvmMakeMdlDevicePrivate.c)
 *     HalpDmaCvmMakeMdlDeviceShared @ 0x1406FDAF4 (HalpDmaCvmMakeMdlDeviceShared.c)
 * Callees:
 *     HalpDmaCvmHandleUnrecoverableFrames @ 0x14054CD5C (HalpDmaCvmHandleUnrecoverableFrames.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpDmaCvmSetPageShareability(__int64 a1, __int64 a2, char a3, __int64 *a4)
{
  __int64 v6; // rsi
  unsigned int v7; // r14d
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx

  v6 = qword_140FC0D48;
  v7 = a2;
  v8 = a1;
  if ( byte_140FC0D41 )
  {
    if ( a4 )
      *a4 = a1;
  }
  else
  {
    if ( !a3 )
      v8 = ~qword_140FC0D48 & a1;
    if ( (int)guard_dispatch_icall_no_overrides(v8 >> 12, a2) >= 0 )
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
      HalpDmaCvmHandleUnrecoverableFrames(v10, v9, v7);
    }
  }
}
