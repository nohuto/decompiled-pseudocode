/*
 * XREFs of DrvPrepareModeListCacheAndLeaveUserCrit @ 0x1401CB320
 * Callers:
 *     NtUserEnumDisplaySettings @ 0x14016C140 (NtUserEnumDisplaySettings.c)
 * Callees:
 *     DrvGetDeviceFromName @ 0x140017410 (DrvGetDeviceFromName.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x140025380 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     ??1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ @ 0x140070780 (--1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvPrepareModeListCacheAndLeaveUserCrit(struct _UNICODE_STRING *a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 DeviceFromName; // rax
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 DxgkWin32kInterface; // rax
  PCUNICODE_STRING String1; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = -1073741585;
  if ( a1 )
  {
    String1 = 0LL;
    if ( (int)DrvProbeAndCaptureString(a1, (struct AUTO_FREE_STRING *)&String1) >= 0 )
    {
      DeviceFromName = DrvGetDeviceFromName(String1, v4);
      v2 = DeviceFromName;
      if ( DeviceFromName )
      {
        if ( !*(_QWORD *)(DeviceFromName + 136) )
          v2 = -(__int64)((*(_DWORD *)(DeviceFromName + 160) & 0x6000008) != 0) & DeviceFromName;
      }
    }
    DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((char **)&String1);
  }
  else
  {
    if ( !a2 )
    {
LABEL_12:
      UserSessionSwitchLeaveCritWithNonPaged();
      return v3;
    }
    v2 = *(_QWORD *)(a2 + 2568);
  }
  if ( !v2 || (*(_DWORD *)(v2 + 160) & 0x800000) == 0 )
    goto LABEL_12;
  v6 = *(_QWORD *)(v2 + 240);
  v7 = *(_DWORD *)(v2 + 248);
  UserSessionSwitchLeaveCritWithNonPaged();
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v8);
  return (*(unsigned int (__fastcall **)(__int64, _QWORD))(DxgkWin32kInterface + 816))(v6, v7);
}
