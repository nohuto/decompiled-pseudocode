/*
 * XREFs of ?CreateMonitorDpiInfo@@YAPEAU_REFCOUNTED_DPI_INFORMATION@@XZ @ 0x14000B584
 * Callers:
 *     ?PreAllocateForPrimaryMonitorChange@@YAHXZ @ 0x14000B480 (-PreAllocateForPrimaryMonitorChange@@YAHXZ.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x14000C568 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ?AllocationFailure@Monitors@InputTraceLogging@@SAXXZ @ 0x14019DD8C (-AllocationFailure@Monitors@InputTraceLogging@@SAXXZ.c)
 */

struct _REFCOUNTED_DPI_INFORMATION *CreateMonitorDpiInfo(void)
{
  void *v0; // rbx

  v0 = Win32AllocPoolZInitImpl(0x100uLL, 0x64uLL, 0x70776455u);
  if ( !v0 )
  {
    UserSetLastError(8LL);
    InputTraceLogging::Monitors::AllocationFailure();
  }
  return (struct _REFCOUNTED_DPI_INFORMATION *)v0;
}
