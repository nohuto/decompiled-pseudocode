/*
 * XREFs of PpCheckInDriverDatabase @ 0x1409AF608
 * Callers:
 *     PnpPrepareDriverLoading @ 0x1409AFA84 (PnpPrepareDriverLoading.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     McTemplateK0j_EtwWriteTransfer @ 0x140576CBC (McTemplateK0j_EtwWriteTransfer.c)
 *     PnpLogEvent @ 0x140717360 (PnpLogEvent.c)
 *     PiLookupInDDBCache @ 0x1409AF4C4 (PiLookupInDDBCache.c)
 *     PiLookupInDDB @ 0x1409AF79C (PiLookupInDDB.c)
 *     IopBuildFullDriverPath @ 0x1409B0AA8 (IopBuildFullDriverPath.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpCheckInDriverDatabase(__int64 a1, __int64 a2, void *a3, unsigned int a4, int a5, _OWORD *a6)
{
  int v8; // ebx
  __int64 v9; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // r8
  PVOID P[2]; // [rsp+38h] [rbp-20h] BYREF

  *(_OWORD *)P = 0LL;
  if ( InitIsWinPEMode || !BYTE1(NlsMbCodePageTag) )
    return 0LL;
  v8 = IopBuildFullDriverPath(a1, a2, P);
  if ( v8 < 0 )
  {
    if ( (PiLoggedErrorEventsMask & 8) == 0 )
    {
      PiLoggedErrorEventsMask |= 8u;
      *(_OWORD *)P = 0LL;
      RtlInitUnicodeString((PUNICODE_STRING)P, L"BUILD DRIVER PATH FAILED");
      PnpLogEvent((const void **)P, 0LL, -1073740947, 0LL, 0);
    }
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiDDBLock, 1u);
    v8 = PiLookupInDDBCache((__int64)P, a3, v11, a6);
    if ( v8 == -1073741823 )
      v8 = PiLookupInDDB(P, a3, a4, a6);
    if ( v8 == -1073740948 )
    {
      if ( !a5 )
        v8 = -1073740949;
    }
    else if ( v8 == -1073740949 && a5 )
    {
      v8 = -1073740948;
    }
    ExReleaseResourceLite(&PiDDBLock);
    KeLeaveCriticalRegion();
    ExFreePoolWithTag(P[1], 0);
  }
  if ( (unsigned int)(v8 + 1073740949) <= 1 )
  {
    if ( (byte_140EEFA6A & 4) != 0 )
      McTemplateK0j_EtwWriteTransfer(
        MS_KernelPnP_Provider_Context,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_Driver_Blocked,
        v9,
        (__int64)a6);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v8;
}
