/*
 * XREFs of xxxPSMTextOut @ 0x1402ECC34
 * Callers:
 *     xxxRealDrawMenuItem @ 0x14003B17C (xxxRealDrawMenuItem.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x14003C16C (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1401FF370 (xxxDrawMenuBarUnderlines.c)
 * Callees:
 *     GetPrefixCount @ 0x14003D38C (GetPrefixCount.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreSetBkColor @ 0x14007A308 (GreSetBkColor.c)
 *     GreExtTextOutW @ 0x14007A7F4 (GreExtTextOutW.c)
 *     ?CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z @ 0x14007C360 (-CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z.c)
 *     _GetTextMetricsW @ 0x14007CEE4 (_GetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x14007E5DC (GreGetTextExtentW.c)
 *     GreGetTextColor @ 0x14021820C (GreGetTextColor.c)
 *     xxxClientPSMTextOut @ 0x1402BC690 (xxxClientPSMTextOut.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall xxxPSMTextOut(HDC a1, __int64 a2, unsigned int a3, WCHAR *a4, unsigned int a5, int a6)
{
  unsigned int v8; // r15d
  __int64 v10; // r12
  void *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rax
  int PrefixCount; // edi
  int v16; // ebx
  int v17; // r13d
  unsigned int v18; // edi
  int TextColor; // eax
  int v20; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-61h] BYREF
  _OWORD v23[2]; // [rsp+58h] [rbp-51h] BYREF
  __int128 v24; // [rsp+78h] [rbp-31h]
  __int64 v25; // [rsp+88h] [rbp-21h]
  int v26; // [rsp+90h] [rbp-19h]
  _DWORD v27[4]; // [rsp+98h] [rbp-11h] BYREF

  v8 = a2;
  memset(v23, 0, sizeof(v23));
  v10 = W32GetUserSessionState(a1, a2) + 57064;
  v25 = 0LL;
  v11 = (void *)v10;
  v26 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v24 = 0LL;
  v14 = PtiCurrent(v13, v12);
  if ( (unsigned int)CALL_LPK(v14) )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, a4);
    xxxClientPSMTextOut(a1, v8, a3, (char **)&DestinationString, a5, a6);
  }
  else if ( a5 < 0xFF || (v11 = (void *)Win32AllocPoolZInit(2LL * (int)(a5 + 1), 1953657685LL)) != 0LL )
  {
    PrefixCount = GetPrefixCount((__int16 *)a4, a5, (__int64)v11, a5);
    if ( (a6 & 0x200000) == 0 )
      GreExtTextOutW(a1, v8, a3, 0, 0LL, (__int64)v11, a5 - HIWORD(PrefixCount));
    if ( (_WORD)PrefixCount != 0xFFFF && (a6 & 0x100000) == 0 )
    {
      if ( (unsigned int)GetTextMetricsW(a1, (__int64)v23) )
      {
        v16 = v24;
        v17 = DWORD1(v23[0]);
      }
      else
      {
        v16 = 0;
        v17 = 0;
      }
      if ( (_WORD)PrefixCount )
      {
        GreGetTextExtentW(a1, (__int64)v11, (unsigned __int16)PrefixCount, (__int64)&DestinationString);
        v8 += *(_DWORD *)&DestinationString.Length - v16;
      }
      GreGetTextExtentW(a1, (__int64)v11 + 2 * (unsigned __int16)PrefixCount, 1LL, (__int64)&DestinationString);
      v27[0] = v8;
      v18 = v17 + a3 + 1;
      v27[1] = v18;
      v27[3] = v18 + 1;
      v27[2] = v8 + DestinationString.Length - v16 / 2;
      TextColor = GreGetTextColor(a1);
      v20 = GreSetBkColor(a1, TextColor);
      GreExtTextOutW(a1, v8, v18, 2, (__int64)v27, (__int64)&pszFormat, 0);
      GreSetBkColor(a1, v20);
    }
    if ( v11 != (void *)v10 )
      Win32FreePool(v11);
  }
}
