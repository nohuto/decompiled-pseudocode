/*
 * XREFs of ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1800E2EDC
 * Callers:
 *     ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1800E1630 (-CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack.c)
 *     ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1800E45B0 (-CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueSt.c)
 * Callees:
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x1800E19D8 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x1800E3B58 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1800E3F48 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x1800E3F90 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?TryGetChainingHelper@CScrollAnimation@@AEBAPEAVCChainingHelper@@XZ @ 0x1800E40C4 (-TryGetChainingHelper@CScrollAnimation@@AEBAPEAVCChainingHelper@@XZ.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x1800E42A8 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x1800E42C4 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@55555555555@Z @ 0x1800E4CC8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3.c)
 *     ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@Z @ 0x180205280 (-RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@.c)
 *     ?ChainToParent@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N@Z @ 0x180213BD0 (-ChainToParent@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N@Z.c)
 *     ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x180214908 (-ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z.c)
 *     ?UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z @ 0x1802223FC (-UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z.c)
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x18024693C (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall CScrollAnimation::UpdateValueWithChaining(__int64 a1, double a2, float a3, unsigned int a4)
{
  __int128 v4; // xmm0
  __int128 v6; // xmm7
  char v8; // bl
  struct CChainingHelper *ChainingHelper; // r14
  InteractionSourceManager *v10; // rsi
  int v11; // r13d
  InteractionSourceManager *v12; // rcx
  unsigned __int8 ShouldChainForAxis; // r12
  InteractionSourceManager *v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // ecx
  char v17; // al
  int v18; // eax
  int v19; // ecx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  int v23; // r8d
  char *v24; // r13
  char v25; // cl
  _BYTE *v26; // r9
  int v27; // edx
  int v28; // edx
  int v29; // ecx
  float v31; // xmm3_4
  __int64 v32; // r9
  char ShouldChainAllForAxis; // al
  __int64 v34; // rcx
  __int64 v35; // r9
  InteractionSourceManager *v36; // rcx
  struct CManipulation *v37; // rax
  __int64 v38; // rcx
  InteractionSourceManager *v39; // rcx
  struct CManipulation *v40; // rax
  __int64 v41; // rcx
  char v42; // r13
  __int64 v43; // r9
  InteractionSourceManager *v44; // rcx
  struct CManipulation *v45; // rax
  __int64 v46; // rcx
  char v47; // r13
  __int64 v48; // r9
  InteractionSourceManager *v49; // rcx
  struct CManipulation *v50; // rax
  __int64 v51; // rcx
  int v52; // ecx
  char v53; // r13
  __int64 v54; // r9
  InteractionSourceManager *v55; // rcx
  struct CManipulation *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // r9
  InteractionSourceManager *v59; // rcx
  struct CManipulation *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rcx
  int v63; // [rsp+20h] [rbp-F0h]
  int v64; // [rsp+94h] [rbp-7Ch]
  int v65; // [rsp+98h] [rbp-78h] BYREF
  int v66; // [rsp+9Ch] [rbp-74h] BYREF
  int v67; // [rsp+A0h] [rbp-70h] BYREF
  int v68; // [rsp+A4h] [rbp-6Ch] BYREF
  int v69; // [rsp+A8h] [rbp-68h] BYREF
  int v70; // [rsp+ACh] [rbp-64h] BYREF
  int v71; // [rsp+B0h] [rbp-60h] BYREF
  float v72; // [rsp+B4h] [rbp-5Ch] BYREF
  unsigned int v73; // [rsp+B8h] [rbp-58h] BYREF
  int v74; // [rsp+BCh] [rbp-54h] BYREF
  int v75; // [rsp+C0h] [rbp-50h] BYREF
  struct CManipulation *ActiveManipulation; // [rsp+C8h] [rbp-48h] BYREF
  const wchar_t *v77; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v78; // [rsp+D8h] [rbp-38h] BYREF
  struct CInteractionTracker *InteractionTracker; // [rsp+E0h] [rbp-30h]

  v6 = *(_OWORD *)&a2;
  InteractionTracker = CScrollAnimation::GetInteractionTracker((CScrollAnimation *)a1);
  v8 = 0;
  ChainingHelper = CScrollAnimation::TryGetChainingHelper((CScrollAnimation *)a1);
  if ( ChainingHelper )
  {
    v10 = (struct CInteractionTracker *)((char *)InteractionTracker + 208);
    v64 = 0;
    v11 = 0;
    if ( InteractionSourceManager::HasActiveManipulation((struct CInteractionTracker *)((char *)InteractionTracker + 208)) )
    {
      v11 = *((_DWORD *)InteractionSourceManager::TryGetActiveManipulation(v12) + 107);
      v64 = v11;
    }
    ShouldChainForAxis = 0;
    ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(v10);
    if ( InteractionSourceManager::TryGetActiveChainingHelper(v14) && ActiveManipulation )
      ShouldChainForAxis = CInteractionTracker::ShouldChainForAxis(
                             v15,
                             *(unsigned int *)(a1 + 324),
                             ActiveManipulation,
                             0LL);
    if ( (unsigned int)dword_1803F8D18 > 4 && (byte_1803F8D28 & 2) != 0 && (qword_1803F8D30 & 2) == qword_1803F8D30 )
    {
      v16 = *(unsigned __int8 *)(a1 + 436);
      v17 = *(_BYTE *)(a1 + 436);
      v68 = LODWORD(a2);
      v65 = v17 & 1;
      v67 = ShouldChainForAxis;
      v69 = *(_DWORD *)(a1 + 432);
      v70 = *(_DWORD *)(a1 + 424);
      v71 = *(_DWORD *)(a1 + 428);
      v74 = *(_DWORD *)(a1 + 420);
      v18 = *(_DWORD *)(a1 + 416);
      v66 = (v16 >> 1) & 1;
      v19 = *(_DWORD *)(a1 + 324);
      LODWORD(ActiveManipulation) = v18;
      v72 = a3;
      v73 = a4;
      v75 = v11;
      v77 = ScrollAxisToString(v19);
      v78 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v20,
        (unsigned int)&unk_1803CF1CE,
        v21,
        v22,
        (__int64)&v78,
        (__int64)&v77,
        (__int64)&ActiveManipulation,
        (__int64)&v75,
        (__int64)&v74,
        (__int64)&v73,
        (__int64)&v72,
        (__int64)&v71,
        (__int64)&v70,
        (__int64)&v69,
        (__int64)&v68,
        (__int64)&v67,
        (__int64)&v66,
        (__int64)&v65);
    }
    v23 = v64;
    v24 = (char *)(a1 + 436);
    v25 = *(_BYTE *)(a1 + 436);
    v26 = (_BYTE *)(a1 + 436);
    if ( (v25 & 2) == 0 && v64 == 2 )
    {
      if ( InteractionSourceManager::TryGetActiveChainingHelper(v10)
        && InteractionSourceManager::HasActiveManipulation(v10) )
      {
        v40 = InteractionSourceManager::TryGetActiveManipulation(v39);
        ShouldChainAllForAxis = CInteractionTracker::ShouldChainAllForAxis(v41, *(unsigned int *)(a1 + 324), v40);
      }
      else
      {
        ShouldChainAllForAxis = 0;
      }
      LOBYTE(v32) = ShouldChainForAxis;
      LOBYTE(v63) = ShouldChainAllForAxis;
      CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
        ChainingHelper,
        *(unsigned int *)(a1 + 324),
        a4,
        v32,
        v63);
      v26 = (_BYTE *)(a1 + 436);
      v23 = v64;
      v34 = 3LL * *(int *)(a1 + 324);
      *((_BYTE *)ChainingHelper + 4 * v34) &= 0xFAu;
      *((_DWORD *)ChainingHelper + v34 + 2) = 0;
      *((_BYTE *)ChainingHelper + 36) |= 2u;
      *v24 |= 2u;
      v25 = *v24;
    }
    v27 = *(_DWORD *)(a1 + 416);
    if ( v27 )
    {
      v28 = v27 - 2;
      if ( !v28 )
      {
        CScrollAnimation::UpdateChainingDirection((CScrollAnimation *)a1, a3);
        v29 = *(_DWORD *)(a1 + 420);
        if ( v29 && ShouldChainForAxis )
        {
          if ( ((v29 - 1) & 0xFFFFFFFD) == 0 && a4 == v29 )
          {
            v4 = COERCE_UNSIGNED_INT((float)((float)(a3 - *(float *)(a1 + 424)) > 0.0));
            if ( *(float *)&v4 < 0.0 )
            {
              v47 = 0;
              if ( InteractionSourceManager::TryGetActiveChainingHelper(v10)
                && InteractionSourceManager::HasActiveManipulation(v10) )
              {
                v50 = InteractionSourceManager::TryGetActiveManipulation(v49);
                v47 = CInteractionTracker::ShouldChainAllForAxis(v51, *(unsigned int *)(a1 + 324), v50);
              }
              LOBYTE(v48) = v47;
              CChainingHelper::ChainToParent(ChainingHelper, *(unsigned int *)(a1 + 324), a4, v48);
            }
          }
          v52 = *(_DWORD *)(a1 + 420);
          if ( (unsigned int)(v52 - 2) <= 1 && a4 == v52 )
          {
            v4 = COERCE_UNSIGNED_INT((float)((float)(a3 - *(float *)(a1 + 424)) > 0.0));
            if ( *(float *)&v4 > 0.0 )
            {
              v53 = 0;
              if ( InteractionSourceManager::TryGetActiveChainingHelper(v10)
                && InteractionSourceManager::HasActiveManipulation(v10) )
              {
                v56 = InteractionSourceManager::TryGetActiveManipulation(v55);
                v53 = CInteractionTracker::ShouldChainAllForAxis(v57, *(unsigned int *)(a1 + 324), v56);
              }
              LOBYTE(v54) = v53;
              CChainingHelper::ChainToParent(ChainingHelper, *(unsigned int *)(a1 + 324), a4, v54);
            }
          }
          if ( !a4 )
          {
            if ( InteractionSourceManager::TryGetActiveChainingHelper(v10)
              && InteractionSourceManager::HasActiveManipulation(v10) )
            {
              v60 = InteractionSourceManager::TryGetActiveManipulation(v59);
              v8 = CInteractionTracker::ShouldChainAllForAxis(v61, *(unsigned int *)(a1 + 324), v60);
            }
            LOBYTE(v58) = ShouldChainForAxis;
            LOBYTE(v63) = v8;
            CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
              ChainingHelper,
              *(unsigned int *)(a1 + 324),
              0LL,
              v58,
              v63);
            goto LABEL_18;
          }
          goto LABEL_29;
        }
        if ( a4 && ShouldChainForAxis )
        {
          if ( InteractionSourceManager::TryGetActiveChainingHelper(v10)
            && InteractionSourceManager::HasActiveManipulation(v10) )
          {
            v37 = InteractionSourceManager::TryGetActiveManipulation(v36);
            v8 = CInteractionTracker::ShouldChainAllForAxis(v38, *(unsigned int *)(a1 + 324), v37);
          }
          LOBYTE(v35) = v8;
          CChainingHelper::ChainToParent(ChainingHelper, *(unsigned int *)(a1 + 324), a4, v35);
LABEL_29:
          *(double *)&v4 = CInteractionTracker::ClampValueToBoundary(InteractionTracker, *(unsigned int *)(a1 + 324));
          v6 = v4;
LABEL_18:
          *(_DWORD *)(a1 + 416) = v64;
          *(float *)(a1 + 428) = a3;
          *(_DWORD *)(a1 + 420) = a4;
          return (__m128)v6;
        }
        if ( (*(_BYTE *)(a1 + 436) & 1) == 0 )
        {
          v4 = *(unsigned int *)(a1 + 432);
          if ( *(float *)&v4 != 0.0 )
          {
            v31 = a3 - *(float *)(a1 + 424);
            v4 = COERCE_UNSIGNED_INT((float)(*(float *)&v4 > 0.0));
            if ( (float)(v31 > 0.0) != *(float *)&v4 && v31 != 0.0 )
            {
              v62 = 3LL * *(int *)(a1 + 324);
              *((_BYTE *)ChainingHelper + 4 * v62) &= 0xFAu;
              *((_DWORD *)ChainingHelper + v62 + 2) = 0;
              *((_BYTE *)ChainingHelper + 36) |= 2u;
              *(_DWORD *)(a1 + 432) = 0;
            }
          }
        }
LABEL_17:
        if ( !a4 || !ShouldChainForAxis )
          goto LABEL_18;
        goto LABEL_29;
      }
      if ( v28 != 1 )
        goto LABEL_17;
      if ( *(_DWORD *)(a1 + 420) && ShouldChainForAxis )
      {
        if ( v23 != 2 )
          goto LABEL_17;
        v42 = 0;
        if ( InteractionSourceManager::TryGetActiveChainingHelper(v10)
          && InteractionSourceManager::HasActiveManipulation(v10) )
        {
          v45 = InteractionSourceManager::TryGetActiveManipulation(v44);
          v42 = CInteractionTracker::ShouldChainAllForAxis(v46, *(unsigned int *)(a1 + 324), v45);
        }
        LOBYTE(v43) = ShouldChainForAxis;
        LOBYTE(v63) = v42;
        CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
          ChainingHelper,
          *(unsigned int *)(a1 + 324),
          a4,
          v43,
          v63);
        goto LABEL_42;
      }
      if ( v23 != 2 )
        goto LABEL_17;
      *v24 = v25 | 1;
    }
    else
    {
      *v26 = v25 | 1;
      if ( v23 != 2 )
        goto LABEL_17;
    }
    *(_DWORD *)(a1 + 424) = *(_DWORD *)(a1 + 428);
LABEL_42:
    CScrollAnimation::UpdateChainingDirection((CScrollAnimation *)a1, a3);
    goto LABEL_17;
  }
  return (__m128)v6;
}
