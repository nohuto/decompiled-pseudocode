/*
 * XREFs of HalpDmaCvmSetPageShareability @ 0x1406FFFBC
 * Callers:
 *     HalpDmaAllocateMapRegisterFrame @ 0x14054EDEC (HalpDmaAllocateMapRegisterFrame.c)
 *     HalpDmaFreeMapRegisterFrame @ 0x14054F804 (HalpDmaFreeMapRegisterFrame.c)
 *     HalpDmaCvmMakeContiguousVirtualBufferPrivate @ 0x1406FFC88 (HalpDmaCvmMakeContiguousVirtualBufferPrivate.c)
 *     HalpDmaCvmMakeContiguousVirtualBufferShared @ 0x1406FFD04 (HalpDmaCvmMakeContiguousVirtualBufferShared.c)
 *     HalpDmaCvmMakeMdlDevicePrivate @ 0x1406FFE28 (HalpDmaCvmMakeMdlDevicePrivate.c)
 *     HalpDmaCvmMakeMdlDeviceShared @ 0x1406FFEB4 (HalpDmaCvmMakeMdlDeviceShared.c)
 * Callees:
 *     HalpDmaCvmHandleUnrecoverableFrames @ 0x14054F41C (HalpDmaCvmHandleUnrecoverableFrames.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpDmaCvmSetPageShareability(__int64 a1, __int64 a2, char a3, __int64 *a4)
{
  __int64 v6; // rsi
  unsigned int v7; // r14d
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v11[0] = 0LL;
  v6 = qword_140FC0AE8;
  v7 = a2;
  v8 = a1;
  if ( byte_140FC0AE1 )
  {
    if ( a4 )
      *a4 = a1;
  }
  else
  {
    if ( !a3 )
      v8 = ~qword_140FC0AE8 & a1;
    if ( (int)guard_dispatch_icall_no_overrides(v8 >> 12, a2, a3 != 0 ? 3 : 0, v11) >= 0 )
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
