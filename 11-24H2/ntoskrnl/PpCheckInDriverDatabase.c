/*
 * XREFs of PpCheckInDriverDatabase @ 0x1409B89D4
 * Callers:
 *     PnpPrepareDriverLoading @ 0x1409B8F8C (PnpPrepareDriverLoading.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     McTemplateK0j_EtwWriteTransfer @ 0x14057744C (McTemplateK0j_EtwWriteTransfer.c)
 *     PnpLogEvent @ 0x140720FF0 (PnpLogEvent.c)
 *     IopBuildFullDriverPath @ 0x1409B78C8 (IopBuildFullDriverPath.c)
 *     PiLookupInDDBCache @ 0x1409B8B68 (PiLookupInDDBCache.c)
 *     PiLookupInDDB @ 0x1409B8CAC (PiLookupInDDB.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpCheckInDriverDatabase(
        UNICODE_STRING *a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6)
{
  int v8; // ebx
  __int64 v9; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // r8
  PVOID P[2]; // [rsp+38h] [rbp-20h] BYREF

  *(_OWORD *)P = 0LL;
  if ( InitIsWinPEMode || !BYTE1(NlsMbCodePageTag) )
    return 0LL;
  v8 = IopBuildFullDriverPath(a1, a2, (UNICODE_STRING *)P);
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
    v8 = PiLookupInDDBCache(P, a3, v11, a6);
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
    if ( (byte_140EEFF62 & 4) != 0 )
      McTemplateK0j_EtwWriteTransfer(
        MS_KernelPnP_Provider_Context,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_Driver_Blocked,
        v9,
        a6);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v8;
}
