/*
 * XREFs of ?MmeOnDeviceStateChanged@@YAJPEBGK@Z @ 0x18006C0E8
 * Callers:
 *     s_mmeNotifyDeviceStateChanged @ 0x18007D430 (s_mmeNotifyDeviceStateChanged.c)
 * Callees:
 *     WPP_SF_Sd @ 0x1800C30FC (WPP_SF_Sd.c)
 */

__int64 __fastcall MmeOnDeviceStateChanged(const unsigned __int16 *a1, char a2)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      25,
      (unsigned int)&WPP_62e65b1aa5e43d79debbf88575ed7e0c_Traceguids,
      (_DWORD)a1,
      a2);
  }
  RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
  _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoShared + 1);
  _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoActual + 1);
  RtlReleaseResource(&PnpInfoResource);
  return 0LL;
}
