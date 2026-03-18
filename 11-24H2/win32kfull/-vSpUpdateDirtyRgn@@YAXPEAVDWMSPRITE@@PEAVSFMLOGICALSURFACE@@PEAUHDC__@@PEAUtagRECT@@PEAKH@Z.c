/*
 * XREFs of ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1400CCECC
 * Callers:
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1400CB024 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1400CBC4C (-GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1400CE900 (GreAddBitmapD3DDirtyRgn.c)
 *     GreTransferSpriteStateToDwmState @ 0x140169AB8 (GreTransferSpriteStateToDwmState.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1401D99F0 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x1403212B0 (-SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140001CB0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1400BB03C (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1400CDC4C (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1400CDC98 (--1DCOBJA@@QEAA@XZ.c)
 *     ?vIntersectDirtyRectWithMoveData@METAREGION@@AEAAXPEAUtagRECT@@@Z @ 0x1400CDCE8 (-vIntersectDirtyRectWithMoveData@METAREGION@@AEAAXPEAUtagRECT@@@Z.c)
 *     ?vCalculateNoMoveDirty@METAREGION@@AEAAXXZ @ 0x1400CDE98 (-vCalculateNoMoveDirty@METAREGION@@AEAAXXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400CDFD8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1401482C8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 *     ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1401DB914 (-vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall vSpUpdateDirtyRgn(
        struct DWMSPRITE *a1,
        struct SFMLOGICALSURFACE *a2,
        HDC a3,
        struct _RECTL *a4,
        unsigned int *a5,
        int a6)
{
  METAREGION *v6; // rsi
  int v7; // ebx
  __int64 v12; // rcx
  int v13; // eax
  DC *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  struct _RECTL v20; // xmm0
  __int64 v21; // rcx
  LONG v22; // ecx
  __int64 v23; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // rbx
  int v30; // eax
  __int64 v31; // [rsp+40h] [rbp-A9h] BYREF
  __int64 v32; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v33; // [rsp+50h] [rbp-99h] BYREF
  __int64 v34; // [rsp+58h] [rbp-91h] BYREF
  __int64 v35; // [rsp+60h] [rbp-89h] BYREF
  __int64 v36; // [rsp+68h] [rbp-81h] BYREF
  DC *v37[10]; // [rsp+70h] [rbp-79h] BYREF
  struct _RECTL v38; // [rsp+C0h] [rbp-29h] BYREF
  struct _RECTL v39; // [rsp+D0h] [rbp-19h] BYREF

  v6 = (struct SFMLOGICALSURFACE *)((char *)a2 + 128);
  v7 = 0;
  LODWORD(v34) = 0;
  if ( !*((_QWORD *)a2 + 16) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v31);
    *(_QWORD *)v6 = v31;
  }
  if ( !*((_QWORD *)a2 + 10) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v31);
    v23 = *(_QWORD *)a2;
    *((_QWORD *)a2 + 10) = v31;
    EtwTraceLifetimeAccum(v23, 1LL);
    LODWORD(v34) = 1;
  }
  if ( !*((_QWORD *)a2 + 23) )
  {
    v31 = *(_QWORD *)v6;
    RGNOBJ::vSet((RGNOBJ *)&v31);
    if ( *((_QWORD *)a2 + 10) )
    {
      *(_QWORD *)&v38.left = *((_QWORD *)a2 + 10);
      RGNOBJ::vSet((RGNOBJ *)&v38);
      EtwTraceLifetimeAccum(*(_QWORD *)a2, 1LL);
    }
  }
  v36 = *(_QWORD *)v6;
  Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v32);
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v32, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v32);
  Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v33);
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v33, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v33);
  Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v35);
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v35, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v35);
  if ( v36 && v32 && v33 && v35 )
  {
    RGNOBJ::vSet((RGNOBJ *)&v32, a4);
    if ( (*((_DWORD *)a2 + 63) & 1) == 0 || !a3 )
    {
LABEL_39:
      if ( !a1 )
        goto LABEL_44;
      Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v31);
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v31, 0x70u);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v31);
      v22 = *((_DWORD *)a1 + 16) - *((_DWORD *)a1 + 14);
      *(_QWORD *)&v38.left = 0LL;
      v38.right = v22;
      v38.bottom = *((_DWORD *)a1 + 17) - *((_DWORD *)a1 + 15);
      if ( v31 )
      {
        RGNOBJ::vSet((RGNOBJ *)&v31, &v38);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v33, (struct RGNOBJ *)&v32, (struct RGNOBJ *)&v31, 8u) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v33, (struct RGNOBJ *)&v32);
          v7 = 1;
        }
      }
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v31);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v31);
      if ( !v7 )
LABEL_44:
        RGNOBJ::vSet((RGNOBJ *)&v32);
LABEL_26:
      if ( !RGNOBJ::bMerge((RGNOBJ *)&v33, (struct RGNOBJ *)&v36, (struct RGNOBJ *)&v32, 0xEu) )
      {
LABEL_32:
        if ( *((_QWORD *)a2 + 10) )
        {
          v31 = *((_QWORD *)a2 + 10);
          if ( RGNOBJ::bMerge((RGNOBJ *)&v35, (struct RGNOBJ *)&v31, (struct RGNOBJ *)&v32, 0xEu) )
          {
            RGNOBJ::vSwap((RGNOBJ *)&v35, (struct RGNOBJ *)&v31);
            v19 = *(_QWORD *)a2;
            *((_QWORD *)a2 + 10) = v31;
            EtwTraceLifetimeAccum(v19, 1LL);
          }
          if ( !(_DWORD)v34 && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v31) == 2 )
          {
            v39 = 0LL;
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v34);
            if ( v34 )
            {
              v20 = *(struct _RECTL *)(v31 + 52);
              *(_QWORD *)&v38.left = *((_QWORD *)a2 + 10);
              v39 = v20;
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v38);
              RGNOBJ::vSet((RGNOBJ *)&v34, &v39);
              v21 = *(_QWORD *)a2;
              *((_QWORD *)a2 + 10) = v34;
              EtwTraceLifetimeAccum(v21, 1LL);
            }
          }
        }
        goto LABEL_7;
      }
      RGNOBJ::vSwap((RGNOBJ *)&v33, (struct RGNOBJ *)&v36);
      v17 = *(_QWORD *)a2;
      if ( a6 )
      {
        EtwTranslationUpdateOffset(v17, *((unsigned int *)a2 + 38), HIDWORD(*((_QWORD *)a2 + 19)));
        EtwTranslationUpdate(
          *(_QWORD *)a2,
          (unsigned int)a4->left,
          (unsigned int)a4->top,
          (unsigned int)a4->right,
          a4->bottom);
        v29 = v36;
        v30 = METAREGION::vApplyMoveData(
                v6,
                (struct _RECTL *)a2 + 7,
                (struct _POINTL *)a2 + 13,
                *((struct REGION **)a2 + 12));
        *(_QWORD *)v6 = v29;
        if ( !v30 )
        {
LABEL_30:
          v18 = *((_DWORD *)a2 + 63);
          if ( (v18 & 2) == 0 )
          {
            *((_DWORD *)a2 + 63) = v18 | 2;
            *a5 |= 1u;
          }
          goto LABEL_32;
        }
      }
      else
      {
        EtwDirtyRectUpdate(v17, (unsigned int)a4->left, (unsigned int)a4->top, (unsigned int)a4->right, a4->bottom);
        *(_QWORD *)v6 = v36;
        METAREGION::vIntersectDirtyRectWithMoveData(v6, (struct tagRECT *)a4);
      }
      METAREGION::vCalculateNoMoveDirty(v6);
      goto LABEL_30;
    }
    DCOBJA::DCOBJA((DCOBJA *)v37, a3);
    v14 = v37[0];
    if ( !v37[0] || (*((_DWORD *)v37[0] + 9) & 1) == 0 )
    {
LABEL_25:
      DCOBJA::~DCOBJA((DCOBJA *)v37);
      if ( v7 )
        goto LABEL_26;
      goto LABEL_39;
    }
    v15 = *((_QWORD *)v37[0] + 146);
    if ( !v15 || (*((_DWORD *)v37[0] + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v37[0]) )
    {
      if ( !*((_QWORD *)v14 + 144) )
      {
        if ( !*((_QWORD *)v14 + 145) || (*((_DWORD *)v14 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v14) )
          v16 = *((_QWORD *)v14 + 143);
        goto LABEL_22;
      }
      if ( !v15 )
        goto LABEL_46;
    }
    if ( (*((_DWORD *)v14 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v14) )
LABEL_46:
      v16 = *((_QWORD *)v14 + 144);
LABEL_22:
    *(_QWORD *)&v38.left = v16;
    if ( v16 )
    {
      if ( RGNOBJ::bMerge((RGNOBJ *)&v33, (struct RGNOBJ *)&v38, (struct RGNOBJ *)&v32, 8u) )
      {
        RGNOBJ::vSwap((RGNOBJ *)&v33, (struct RGNOBJ *)&v32);
        v7 = 1;
      }
      else
      {
        RGNOBJ::vSet((RGNOBJ *)&v33);
      }
    }
    goto LABEL_25;
  }
LABEL_7:
  v13 = *((_DWORD *)a2 + 63);
  if ( (v13 & 0x20) != 0 )
  {
    if ( (v13 & 4) != 0 )
      *a5 |= 2u;
    *((_DWORD *)a2 + 63) &= ~0x20u;
  }
  if ( a1 )
  {
    if ( (*((_DWORD *)a1 + 35) & 2) != 0 && (*a5 & 1) != 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process )
        {
          v27 = *(_DWORD *)(CurrentProcessWin32Process + 276);
          if ( (v27 & 2) == 0 )
          {
            *(_DWORD *)(CurrentProcessWin32Process + 276) = v27 | 2;
            if ( (unsigned int)dword_140398BB8 > 5 )
            {
              if ( (unsigned __int8)tlgKeywordOn(&dword_140398BB8, 0x400000000000LL, v25, v26) )
              {
                *(_QWORD *)&v38.left = 0x2000000LL;
                LODWORD(v34) = 1;
                LODWORD(v31) = 1;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                  v28,
                  (__int64)&unk_14036A17D);
              }
            }
          }
        }
      }
    }
  }
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v35);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v35);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v33);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v33);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v32);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v32);
}
