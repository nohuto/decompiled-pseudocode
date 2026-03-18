/*
 * XREFs of xxxPSMGetTextExtent @ 0x14003D240
 * Callers:
 *     xxxRealDrawMenuItem @ 0x14003B17C (xxxRealDrawMenuItem.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x14006AC70 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxDrawMenuBarUnderlines @ 0x1401FF370 (xxxDrawMenuBarUnderlines.c)
 * Callees:
 *     GetPrefixCount @ 0x14003D38C (GetPrefixCount.c)
 *     PopAndFreeW32ThreadLock @ 0x14003E6B0 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z @ 0x14007C360 (-CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z.c)
 *     xxxClientGetTextExtentPointW @ 0x14007CAC8 (xxxClientGetTextExtentPointW.c)
 *     GreGetTextExtentW @ 0x14007E5DC (GreGetTextExtentW.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@G$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEAX@Z@Z @ 0x140116D40 (--$ManualLock@X@-$Win32RawLockedItemBase@G$1-Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEA.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxPSMGetTextExtent(HDC a1, const WCHAR *a2, unsigned int a3, _DWORD *a4)
{
  struct tagTHREADINFO *v8; // r15
  WCHAR *p_SourceString; // rdi
  ULONG_PTR v11; // rax
  ULONG_PTR BugCheckParameter2[2]; // [rsp+30h] [rbp-278h] BYREF
  __int64 v13; // [rsp+40h] [rbp-268h]
  __int64 v14; // [rsp+58h] [rbp-250h]
  WCHAR SourceString; // [rsp+60h] [rbp-248h] BYREF

  v8 = PtiCurrent();
  v14 = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v13 = -1LL;
  if ( a3 < 0xFF )
  {
    p_SourceString = &SourceString;
LABEL_3:
    if ( (unsigned int)GetPrefixCount(a2, a3, p_SourceString, a3) >> 16 )
      a2 = p_SourceString;
    if ( (unsigned int)CALL_LPK(v8) )
      xxxClientGetTextExtentPointW(a1, a2);
    else
      GreGetTextExtentW(a1);
    if ( v13 != -1 )
      PopAndFreeW32ThreadLock(BugCheckParameter2);
    return 1LL;
  }
  v11 = Win32AllocPoolZInit(2LL * (int)(a3 + 1), 1953657685LL);
  p_SourceString = (WCHAR *)v11;
  if ( v11 )
  {
    Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
      (ULONG_PTR)BugCheckParameter2,
      v11);
    goto LABEL_3;
  }
  a4[1] = 0;
  *a4 = 0;
  if ( v13 != -1 )
    PopAndFreeW32ThreadLock(BugCheckParameter2);
  return 0LL;
}
