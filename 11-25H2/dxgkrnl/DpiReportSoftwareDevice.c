/*
 * XREFs of DpiReportSoftwareDevice @ 0x140235990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiReportSoftwareDevice(PDRIVER_OBJECT DriverObject)
{
  unsigned int v2; // ebx
  _DWORD *DriverObjectExtension; // rax
  _DWORD *v4; // rdi
  NTSTATUS v5; // eax

  if ( DriverObject )
  {
    DriverObjectExtension = IoGetDriverObjectExtension(DriverObject, DriverObject);
    v4 = DriverObjectExtension;
    if ( DriverObjectExtension && DriverObjectExtension[4] == 1953656900 && DriverObjectExtension[5] == 1 )
    {
      v5 = IoReportRootDevice(DriverObject);
      v2 = v5;
      if ( v5 >= 0 )
      {
        WdLogSingleEntry1(4LL, v4);
        WdLogGlobalForLineNumber = 4245;
      }
      else
      {
        WdLogSingleEntry1(2LL, v5);
        WdLogGlobalForLineNumber = 4238;
      }
    }
    else
    {
      v2 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 4219;
    }
  }
  else
  {
    v2 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 4201;
  }
  return v2;
}
