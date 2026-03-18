/*
 * XREFs of FsRtlAddDiskIOCounterInstance @ 0x140A55FE0
 * Callers:
 *     FsRtlDiskIOCounterSetCallback @ 0x140A55F60 (FsRtlDiskIOCounterSetCallback.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExpPcwDisabledStatus @ 0x140A49940 (ExpPcwDisabledStatus.c)
 */

__int64 __fastcall FsRtlAddDiskIOCounterInstance(__int64 a1)
{
  unsigned int v2; // ebx
  ULONG ActiveProcessorCount; // edi
  __int64 Prcb; // rax
  unsigned int v5; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  __int64 v8; // [rsp+50h] [rbp-20h]
  __int64 v9; // [rsp+58h] [rbp-18h]

  DestinationString = 0LL;
  v8 = 0LL;
  v2 = 0;
  v9 = 0LL;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    do
    {
      Prcb = KeGetPrcb(v2++);
      v8 += *(_QWORD *)(Prcb + 36736);
      v9 += *(_QWORD *)(Prcb + 36744);
    }
    while ( v2 < ActiveProcessorCount );
  }
  RtlInitUnicodeString(&DestinationString, L"default");
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
  {
    v5 = guard_dispatch_icall_no_overrides(a1);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  }
  else
  {
    return (unsigned int)ExpPcwDisabledStatus();
  }
  return v5;
}
