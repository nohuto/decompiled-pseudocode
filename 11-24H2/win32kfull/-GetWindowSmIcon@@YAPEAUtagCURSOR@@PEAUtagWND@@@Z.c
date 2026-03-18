/*
 * XREFs of ?GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z @ 0x14007C108
 * Callers:
 *     xxxRealDrawMenuItem @ 0x14003B17C (xxxRealDrawMenuItem.c)
 *     xxxDrawCaptionTemp @ 0x14007B5FC (xxxDrawCaptionTemp.c)
 *     SendDwmIconChange @ 0x140091358 (SendDwmIconChange.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x14007C214 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1400B4D30 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 */

struct tagCURSOR *__fastcall GetWindowSmIcon(struct tagWND *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v6, *((_QWORD *)a1 + 17));
  v3 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 264LL);
  if ( !v3 || (LOBYTE(v2) = 3, (v4 = HMValidateHandleNoSecure(v3, v2)) == 0) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)v6[0] + 112LL);
    if ( !v4 )
      v4 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)v6[0], v2) + 35184);
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v6);
  return (struct tagCURSOR *)v4;
}
