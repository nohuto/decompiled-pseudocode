/*
 * XREFs of DisplayBootBitmap @ 0x140539C2C
 * Callers:
 *     DisplayFilter @ 0x140539DF0 (DisplayFilter.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     InbvIsBootDriverInstalled @ 0x1404FA650 (InbvIsBootDriverInstalled.c)
 *     InbvAcquireLock @ 0x14058F22C (InbvAcquireLock.c)
 *     InbvBitBlt @ 0x14058F25C (InbvBitBlt.c)
 *     InbvGetResourceAddress @ 0x14058F440 (InbvGetResourceAddress.c)
 *     InbvReleaseLock @ 0x14058F4BC (InbvReleaseLock.c)
 *     InbvReleaseResources @ 0x14058F4EC (InbvReleaseResources.c)
 *     InbvSetScrollRegion @ 0x14058F5C0 (InbvSetScrollRegion.c)
 *     InbvSetTextColor @ 0x14058F5F0 (InbvSetTextColor.c)
 *     InbvSolidColorFill @ 0x14058F660 (InbvSolidColorFill.c)
 *     RotBarInit @ 0x14058F7E0 (RotBarInit.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     PsCreateSystemThread @ 0x140A22450 (PsCreateSystemThread.c)
 */

NTSTATUS __fastcall DisplayBootBitmap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  char v5; // di
  __int64 ResourceAddress; // rdi
  __int64 v7; // rsi
  NTSTATUS result; // eax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdi
  HANDLE ThreadHandle; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0;
  v5 = a1;
  if ( byte_140E0F350 )
  {
    InbvAcquireLock();
    RotBarSelection = 0;
    InbvReleaseLock();
  }
  ShowProgressBar = 0;
  if ( v5 )
  {
    InbvSetTextColor(15LL);
    InbvSolidColorFill(0, 0, 639, 479, 0);
    InbvSolidColorFill(0, 421, 639, 479, 0);
    ResourceAddress = InbvGetResourceAddress(6LL);
    v4 = 0;
    v7 = InbvGetResourceAddress(7LL);
    result = InbvSetScrollRegion(32LL, 80LL, 631LL, 400LL);
    if ( v7 )
      result = InbvBitBlt(v7, v9, 419LL);
    if ( ResourceAddress )
      result = InbvBitBlt(ResourceAddress, v9, 0LL);
    goto LABEL_17;
  }
  if ( !InbvIsBootDriverInstalled(a1, a2, a3, a4) )
    return InbvReleaseResources();
  qword_140E65D48 = (__int64)DisplayFilter;
  v10 = InbvGetResourceAddress(1LL);
  v12 = InbvGetResourceAddress(4LL);
  if ( v10 )
  {
    v4 = 1;
    InbvBitBlt(v10, v11, 0LL);
  }
  if ( v12 )
    InbvBitBlt(v12, v11, 0LL);
  if ( !byte_140E0F350 )
  {
    ThreadHandle = 0LL;
    result = PsCreateSystemThread(&ThreadHandle, 0, 0LL, 0LL, 0LL, InbvRotateGuiBootDisplay, 0LL);
    if ( result >= 0 )
    {
      result = ZwClose(ThreadHandle);
      byte_140E0F350 = 1;
    }
LABEL_17:
    if ( !byte_140E0F350 )
      return result;
  }
  InbvAcquireLock();
  RotBarSelection = v4;
  if ( v4 == 1 )
    RotBarInit();
  return InbvReleaseLock();
}
