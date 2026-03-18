/*
 * XREFs of _HasCaptionIcon @ 0x1400B43E8
 * Callers:
 *     FindNCHit @ 0x14006C5C4 (FindNCHit.c)
 *     xxxMNFindWindowFromPoint @ 0x14006DE80 (xxxMNFindWindowFromPoint.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x140073DDC (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x140074CFC (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x14007B5FC (xxxDrawCaptionTemp.c)
 *     SendDwmIconChange @ 0x140091358 (SendDwmIconChange.c)
 *     xxxGetMenuBarInfo @ 0x1401B04B0 (xxxGetMenuBarInfo.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1400B4D30 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 */

__int64 __fastcall HasCaptionIcon(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  __int64 v3; // rsi
  char v4; // r8
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  bool v13; // zf
  __int64 *v15; // [rsp+20h] [rbp-18h] BYREF
  __int64 v16; // [rsp+28h] [rbp-10h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 0;
  v3 = a1;
  v4 = *(_BYTE *)(v1 + 24);
  if ( v4 < 0 )
    return 0LL;
  if ( (*(_BYTE *)(v1 + 30) & 0xC0) != 0x40 && (v4 & 1) == 0 )
    return 1LL;
  v5 = *(_QWORD *)(v1 + 264);
  if ( v5 )
  {
    v13 = v5 == *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, v1) + 19928) + 6968LL);
    goto LABEL_10;
  }
  v6 = *(_QWORD *)(v1 + 272);
  if ( !v6 || (a1 = *(_QWORD *)(W32GetUserSessionState(a1, v1) + 19928), v6 == *(_QWORD *)(a1 + 6976)) )
  {
    v7 = *(_QWORD *)(v3 + 136);
    v8 = PtiCurrent(a1, v1);
    v15 = (__int64 *)gSmartObjNullRef;
    if ( v7 )
    {
      v15 = *(__int64 **)(v7 + 128);
      ++*(_DWORD *)(*(_QWORD *)(v7 + 128) + 8LL);
    }
    v16 = *((_QWORD *)v8 + 209);
    *((_QWORD *)v8 + 209) = &v16;
    v9 = *v15;
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v15);
    if ( *(_QWORD *)(v9 + 112) )
    {
      UserSessionState = W32GetUserSessionState(v11, v10);
      v13 = *(_QWORD *)(v9 + 112) == _HMObjectFromHandle(*(_QWORD *)(*(_QWORD *)(UserSessionState + 19928) + 6968LL));
LABEL_10:
      LOBYTE(v2) = !v13;
      return v2;
    }
    return 0LL;
  }
  return 1LL;
}
