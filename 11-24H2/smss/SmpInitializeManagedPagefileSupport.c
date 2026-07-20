/*
 * XREFs of SmpInitializeManagedPagefileSupport @ 0x14000EA24
 * Callers:
 *     SmpMakeSystemManagedPagingFileDescriptor @ 0x14000CEB0 (SmpMakeSystemManagedPagingFileDescriptor.c)
 * Callees:
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     SmpComputeDesiredPfSizeForCrashDump @ 0x14000E8C0 (SmpComputeDesiredPfSizeForCrashDump.c)
 *     SmpComputeDesiredPfSizeBasedOnHistory @ 0x14000F56C (SmpComputeDesiredPfSizeBasedOnHistory.c)
 */

void SmpInitializeManagedPagefileSupport()
{
  unsigned __int64 v0; // rcx
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( SmpManagedPfInitialized != 1 )
  {
    v0 = 0x40000000LL;
    if ( (unsigned __int64)SmpMemorySize > 0x40000000 )
    {
      v0 = ((unsigned __int64)(SmpMemorySize - 0x40000000) >> 3) + 0x40000000;
      if ( v0 > 0x800000000LL )
        v0 = 0x800000000LL;
    }
    SmpDesiredPfSizeBasedOnRAM = v0;
    SmpDesiredPfSizeForCrashDump = SmpComputeDesiredPfSizeForCrashDump();
    v1 = SmpComputeDesiredPfSizeBasedOnHistory();
    v2 = 0LL;
    SmpDesiredPfSizeBasedOnHistory = v1;
    if ( SmpClientSku == 1 )
    {
      if ( (unsigned __int64)SmpMemorySize >= 0xA38E38E3 )
        v3 = 0LL;
      else
        v3 = 2744006883LL - SmpMemorySize;
      v2 = (v3 >> 4) + v3;
    }
    SmpDesiredPfSizeForApps = v2;
    v4 = TpAllocTimer(&v5, SmpUpdatePagefileUsageCallback, 0LL, &SmpCallbackEnviron);
    if ( v4 < 0 )
    {
      SmpLogFailure((__int64)"SmpInitializeManagedPagefileSupport", 704, v4);
    }
    else
    {
      v6 = -36000000000LL;
      TpSetTimer(v5, &v6, 3600000LL, 300000LL);
    }
    SmpManagedPfInitialized = 1;
  }
}
