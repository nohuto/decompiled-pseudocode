/*
 * XREFs of GreSelectFontInternal @ 0x1C011A874
 * Callers:
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C001B600 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     FinalUserInit @ 0x1C0096C84 (FinalUserInit.c)
 *     MNSetupAnimationDC @ 0x1C0096EF8 (MNSetupAnimationDC.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00A3B00 (xxxDrawMenuBarUnderlines.c)
 *     ValidateExternalLogFont @ 0x1C00CFF2C (ValidateExternalLogFont.c)
 *     xxxSetNCFonts @ 0x1C00CFFDC (xxxSetNCFonts.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C00D8484 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C01078D0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiSelectFont @ 0x1C01194A0 (NtGdiSelectFont.c)
 *     DrawFrameControl @ 0x1C011A100 (DrawFrameControl.c)
 *     CreateScaledFont @ 0x1C01BEC58 (CreateScaledFont.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0200550 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0208A80 (SfnINLPKDRAWSWITCHWND.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0224F44 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C02255B0 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C022B7E4 (xxxDrawCaptionTemp.c)
 *     _ServerFixupMenuDC @ 0x1C023424C (_ServerFixupMenuDC.c)
 *     xxxDrawMenuItem @ 0x1C02343FC (xxxDrawMenuItem.c)
 *     xxxMNInvertItem @ 0x1C0234DB0 (xxxMNInvertItem.c)
 *     xxxMenuDraw @ 0x1C0235944 (xxxMenuDraw.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C02375AC (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxMNCompute @ 0x1C0237FB0 (xxxMNCompute.c)
 *     ?SelectFont@@YAXPEAU_SELECT_FONT@@@Z @ 0x1C023EAC0 (-SelectFont@@YAXPEAU_SELECT_FONT@@@Z.c)
 *     CreateCompatiblePublicDC @ 0x1C023EC2C (CreateCompatiblePublicDC.c)
 *     xxxDrawState @ 0x1C023EE40 (xxxDrawState.c)
 * Callees:
 *     ??B?$HmgLockResultBase@VMETA@@@@QEBA_NXZ @ 0x1C01389B0 (--B-$HmgLockResultBase@VMETA@@@@QEBA_NXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013DB9C (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$HmgShareLockResult@VLFONT@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C013F6EC (--0-$HmgShareLockResult@VLFONT@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgShareLockResult@VLFONT@@@@QEAA@XZ @ 0x1C013F738 (--1-$HmgShareLockResult@VLFONT@@@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026632C (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreSelectFontInternal(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  __int64 v7; // rdx
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rax
  _QWORD *v10; // rax
  struct UMPDOBJ *v11; // rdx
  DC *v12; // r9
  int v13; // ebx
  struct _DC_ATTR *v14; // rax
  __int64 v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v21; // rbx
  _QWORD v23[5]; // [rsp+20h] [rbp-60h] BYREF
  DC *v24; // [rsp+48h] [rbp-38h] BYREF
  __int64 v25; // [rsp+50h] [rbp-30h]
  _BYTE v26[40]; // [rsp+58h] [rbp-28h] BYREF
  int v27; // [rsp+C8h] [rbp+48h] BYREF

  v4 = 0LL;
  v25 = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v26);
  LOBYTE(v7) = 1;
  v24 = (DC *)HmgLockEx(a1, v7, 0LL);
  if ( v24 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread && (v9 = *ThreadWin32Thread) != 0 && (v10 = (_QWORD *)(v9 + 40), (_QWORD *)*v10 != v10) )
      v11 = (struct UMPDOBJ *)(*v10 - 40LL);
    else
      v11 = 0LL;
    v12 = v24;
    if ( *((_WORD *)v24 + 6) == 1 )
    {
      *((_QWORD *)v24 + 271) = v11;
      *((_DWORD *)v24 + 544) = 0xFFFF;
      v12 = v24;
    }
    else if ( *((struct UMPDOBJ **)v24 + 271) != v11 )
    {
      XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v24, v11);
      goto LABEL_16;
    }
    if ( HIDWORD(v25) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v12 + 6) + 40LL) & 0x8000) == 0 )
      {
LABEL_13:
        _InterlockedDecrement((volatile signed __int32 *)v12 + 3);
LABEL_17:
        v12 = 0LL;
        v24 = 0LL;
LABEL_44:
        if ( v12 )
        {
          if ( (_DWORD)v25 && (*((_DWORD *)v12 + 11) & 2) != 0 )
          {
            if ( !HIDWORD(v25) )
            {
              UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v24);
              if ( UserAttr )
                DC::RestoreAttributes(v24, UserAttr);
              v12 = v24;
            }
            *((_DWORD *)v12 + 11) &= ~2u;
            v12 = v24;
            LODWORD(v25) = 0;
          }
          v27 = 0;
          v21 = *(_QWORD *)v12;
          HmgDecrementExclusiveReferenceCountEx(v12, HIDWORD(v25), &v27);
          if ( v27 )
            GrepDeleteDC(v21, 0x2000000LL);
        }
        goto LABEL_54;
      }
      v13 = *((_DWORD *)v12 + 528);
      if ( v13 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v12 = v24;
        goto LABEL_13;
      }
    }
    else
    {
      if ( !*((_DWORD *)v12 + 528) )
        goto LABEL_24;
      *((_DWORD *)v12 + 528) = 0;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  v12 = v24;
LABEL_24:
  if ( !v12 )
    goto LABEL_54;
  if ( (*((_DWORD *)v12 + 11) & 2) == 0 )
  {
    if ( HIDWORD(v25) )
    {
LABEL_30:
      *((_DWORD *)v12 + 11) |= 2u;
      v12 = v24;
      LODWORD(v25) = 1;
      goto LABEL_31;
    }
    v14 = XDCOBJ::GetUserAttr((XDCOBJ *)&v24);
    if ( !v14 || DC::SaveAttributes(v24, v14) )
    {
      v12 = v24;
      goto LABEL_30;
    }
LABEL_16:
    _InterlockedDecrement((volatile signed __int32 *)v24 + 3);
    goto LABEL_17;
  }
LABEL_31:
  if ( (*((_DWORD *)v12 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v12);
    v12 = v24;
  }
  if ( v12 )
  {
    if ( a3 || (v15 = HmgPentryFromPobj(v12), v12 = v24, (*(_DWORD *)(v15 + 8) & 0xFFFFFFFE) != 0) )
    {
      v16 = (__int64 *)*((_QWORD *)v12 + 19);
      if ( v16 )
        v4 = *v16;
      if ( a2 != v4 )
      {
        LOBYTE(v11) = 10;
        v17 = HmgShareLockCheck(a2, v11);
        HmgShareLockResult<LFONT>::HmgShareLockResult<LFONT>(v23, v17);
        if ( !(unsigned __int8)HmgLockResultBase<META>::operator bool(v23, v18)
          || (*(_BYTE *)(HmgPentryFromPobj(v23[0]) + 15) & 2) != 0 )
        {
          v4 = 0LL;
        }
        else
        {
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct LFONT **)v24 + 19));
          v19 = v23[0];
          v23[0] = 0LL;
          *((_QWORD *)v24 + 19) = v19;
          *(_QWORD *)(*((_QWORD *)v24 + 122) + 296LL) = a2;
          *((_QWORD *)v24 + 218) = 0LL;
          *(_DWORD *)(*((_QWORD *)v24 + 122) + 152LL) |= 0x10u;
          *(_DWORD *)(*((_QWORD *)v24 + 122) + 152LL) &= ~0x20u;
        }
        HmgShareLockResult<LFONT>::~HmgShareLockResult<LFONT>(v23);
        v12 = v24;
      }
    }
    goto LABEL_44;
  }
LABEL_54:
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v26);
  return v4;
}
