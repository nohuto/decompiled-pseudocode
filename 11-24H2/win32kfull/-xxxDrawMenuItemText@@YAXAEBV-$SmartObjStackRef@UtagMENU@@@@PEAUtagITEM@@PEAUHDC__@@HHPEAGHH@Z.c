/*
 * XREFs of ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x14003C16C
 * Callers:
 *     xxxRealDrawMenuItem @ 0x14003B17C (xxxRealDrawMenuItem.c)
 * Callees:
 *     xxxClientExtTextOutW @ 0x14003C3AC (xxxClientExtTextOutW.c)
 *     GetPrefixCount @ 0x14003D38C (GetPrefixCount.c)
 *     PopAndFreeW32ThreadLock @ 0x14003E6B0 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetAppCompatFlags2 @ 0x140049EF0 (GetAppCompatFlags2.c)
 *     MNIspItemValid @ 0x14006B1A4 (MNIspItemValid.c)
 *     GreExtTextOutW @ 0x14007A7F4 (GreExtTextOutW.c)
 *     ?CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z @ 0x14007C360 (-CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@G$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEAX@Z@Z @ 0x140116D40 (--$ManualLock@X@-$Win32RawLockedItemBase@G$1-Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEA.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1402E9060 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1402ECC34 (xxxPSMTextOut.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

ULONG_PTR __fastcall xxxDrawMenuItemText(
        __int64 **a1,
        __int64 a2,
        HDC a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        int a7,
        int a8)
{
  ULONG_PTR v12; // rax
  ULONG_PTR result; // rax
  const WCHAR *SourceString; // rbx
  __int64 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // [rsp+30h] [rbp-D0h]
  char v23; // [rsp+38h] [rbp-C8h]
  int PrefixCount; // [rsp+40h] [rbp-C0h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h]
  struct tagTHREADINFO *v27; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v28; // [rsp+68h] [rbp-98h]
  __int64 v29; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+88h] [rbp-78h]
  char v31; // [rsp+90h] [rbp-70h] BYREF

  v29 = a6;
  v27 = PtiCurrent();
  v30 = 0LL;
  v12 = *(_QWORD *)(a2 + 88);
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v28 = v12;
  v26 = -1LL;
  if ( a7 < 255 )
  {
    SourceString = (const WCHAR *)&v31;
  }
  else
  {
    result = Win32AllocPoolZInit(2LL * (a7 + 1), 1953657685LL);
    SourceString = (const WCHAR *)result;
    if ( !result )
      goto LABEL_20;
    Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
      (ULONG_PTR)BugCheckParameter2,
      result);
  }
  PrefixCount = GetPrefixCount(a6, (unsigned int)a7, SourceString, (unsigned int)a7);
  v22 = a7 - HIWORD(PrefixCount);
  if ( !(unsigned int)CALL_LPK(v27) )
  {
    GreExtTextOutW(a3, 0LL, (__int64)SourceString, v22, v23);
LABEL_12:
    if ( a8
      || (*(_DWORD *)(W32GetUserSessionState(v17, v16) + 67056) & 0x20000) != 0
      || (v21 = *(unsigned int *)(W32GetUserSessionState(v19, v18) + 67060), (v21 & 0x20) != 0)
      || *(int *)(W32GetUserSessionState(v21, v20) + 67060) >= 0
      || (result = GetAppCompatFlags2(1024LL), (result & 2) != 0) )
    {
      if ( (unsigned int)CALL_LPK(v27) )
        result = xxxPSMTextOut(a3, a7, 0x200000);
      else
        result = xxxDrawItemUnderline(a1, a2, a3, a4, a5, SourceString, (unsigned __int16)PrefixCount);
    }
    goto LABEL_20;
  }
  xxxClientExtTextOutW(a3, 0LL, SourceString, v22);
  v15 = a1[2];
  if ( !v15 )
    v15 = (__int64 *)**a1;
  result = MNIspItemValid(v15, a2);
  if ( (_BYTE)result )
  {
    result = v28;
    if ( v28 == *(_QWORD *)(a2 + 88) )
      goto LABEL_12;
  }
LABEL_20:
  if ( v26 != -1 )
    return PopAndFreeW32ThreadLock(BugCheckParameter2);
  return result;
}
