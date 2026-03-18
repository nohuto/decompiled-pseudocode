/*
 * XREFs of ?DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME@@@Z @ 0x1401CCF80
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x140010CB0 (EnterSharedCrit.c)
 *     DrvGetDeviceFromName @ 0x140017410 (DrvGetDeviceFromName.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName(
        struct _D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME *a1)
{
  struct _D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME *v2; // rdx
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 DeviceFromName; // rax
  void *p_VidPnSourceId; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  WCHAR SourceString[40]; // [rsp+30h] [rbp-68h] BYREF

  DestinationString = 0LL;
  memset(SourceString, 0, 0x44uLL);
  v2 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (struct _D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME *)MmUserProbeAddress;
  RtlCopyVolatileMemory(SourceString, v2, 0x44uLL);
  v3 = 0;
  SourceString[31] = 0;
  EnterSharedCrit(1u, 1u);
  RtlInitUnicodeString(&DestinationString, SourceString);
  DeviceFromName = DrvGetDeviceFromName(&DestinationString, v4);
  if ( DeviceFromName && (*(_DWORD *)(DeviceFromName + 160) & 0x4000000) != 0 )
  {
    p_VidPnSourceId = &a1->VidPnSourceId;
    if ( (unsigned __int64)&a1->VidPnSourceId >= MmUserProbeAddress )
      p_VidPnSourceId = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(p_VidPnSourceId, (const void *)(DeviceFromName + 248), 4uLL);
  }
  else
  {
    v3 = -1073741811;
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v3;
}
