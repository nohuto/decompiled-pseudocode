/*
 * XREFs of xxxGetWindowSmIcon @ 0x1C003D2A4
 * Callers:
 *     SendDwmIconChange @ 0x1C003F904 (SendDwmIconChange.c)
 *     xxxDrawCaptionTemp @ 0x1C022B7E4 (xxxDrawCaptionTemp.c)
 *     xxxRealDrawMenuItem @ 0x1C0236080 (xxxRealDrawMenuItem.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C0086D04 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     xxxCreateWindowSmIcon @ 0x1C00924C8 (xxxCreateWindowSmIcon.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1C00B4B74 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxGetWindowSmIcon(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 WindowSmIcon; // rax
  __int64 v10; // rdx
  _BYTE *v11; // rcx
  _QWORD v12[2]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v12, *(_QWORD *)(BugCheckParameter2 + 136));
  v5 = *(_QWORD *)(BugCheckParameter2 + 40);
  v6 = *(_QWORD *)(v5 + 264);
  if ( !v6 || (LOBYTE(v4) = 3, (v7 = HMValidateHandleNoSecure(*(_QWORD *)(v5 + 264), v4)) == 0) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)v12[0] + 112LL);
    if ( !v7 )
    {
      v11 = *(_BYTE **)(BugCheckParameter2 + 40);
      if ( (v11[21] & 2) != 0 || (v11[20] & 8) != 0 && (v11[24] & 0x40) != 0 )
        goto LABEL_6;
      if ( a2 )
        goto LABEL_6;
      v13 = 0LL;
      if ( xxxSendTransformableMessageTimeout(BugCheckParameter2, 0, 100, (__int64)&v13, 1, 0) )
        v6 = v13;
      if ( !v6
        || (WindowSmIcon = xxxCreateWindowSmIcon(BugCheckParameter2, v6, 0LL),
            LOBYTE(v10) = 3,
            (v7 = HMValidateHandleNoSecure(WindowSmIcon, v10)) == 0) )
      {
LABEL_6:
        v7 = qword_1C0359CF0;
      }
    }
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v12);
  return v7;
}
