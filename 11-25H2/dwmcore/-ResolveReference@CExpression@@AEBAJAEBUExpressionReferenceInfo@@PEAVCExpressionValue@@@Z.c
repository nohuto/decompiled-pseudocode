/*
 * XREFs of ?ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z @ 0x1802A4EE4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802404F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x180060BE0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x1801BDF00 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?AddDurationSample@CExpressionPerformanceCounter@@QEAAXW4ExpressionPerformanceLabel@@_J@Z @ 0x1801C83F0 (-AddDurationSample@CExpressionPerformanceCounter@@QEAAXW4ExpressionPerformanceLabel@@_J@Z.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x180227964 (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ @ 0x180297F6C (-ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEBVSubchannelMaskInfo@@@Z @ 0x1802993D0 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEBVSubchannelMaskInfo@@@Z.c)
 *     ?CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEBUExpressionReferenceInfo@@PEAVCResource@@1@Z @ 0x1802A7298 (-CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEBUExpressionReferenceInfo@@PEAVCReso.c)
 *     ?ShouldLogPerfStats@CBaseExpression@@IEBA_NXZ @ 0x1802AAE20 (-ShouldLogPerfStats@CBaseExpression@@IEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExpression::ResolveReference(
        CExpression *this,
        const struct ExpressionReferenceInfo *a2,
        struct CExpressionValue *a3)
{
  __int64 v3; // rbx
  __int64 v7; // rsi
  __int64 v8; // rcx
  const char *v9; // r9
  unsigned int v10; // eax
  __int64 v11; // rcx
  struct CResource *TargetResource; // r15
  LONGLONG Elapsed; // rax
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  int v17; // r9d
  struct CResource *v18; // rax
  unsigned int v20; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  v22 = 0LL;
  v7 = 0LL;
  if ( CBaseExpression::ShouldLogPerfStats(this) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(v8 + 24) + 824LL) + 80LL;
    QpcStopwatch::Start((QpcStopwatch *)&v22);
    v3 = v22;
  }
  v10 = *((_DWORD *)a2 + 4);
  if ( v10 >= *((_DWORD *)this + 92) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x56A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
      v9);
  v11 = *(_QWORD *)(*((_QWORD *)this + 43) + 8LL * v10);
  if ( !v11 || (TargetResource = (struct CResource *)CWeakReference<CGdiSpriteBitmap>::GetTargetResource(v11)) == 0LL )
  {
    v15 = -2147467259;
    v17 = -2147467259;
    v20 = 1397;
    goto LABEL_18;
  }
  if ( v3 )
  {
    Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v22);
    CExpressionPerformanceCounter::AddDurationSample(v7, 3, Elapsed);
  }
  v14 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, struct CExpressionValue *))(*(_QWORD *)TargetResource
                                                                                         + 136LL))(
          TargetResource,
          *(unsigned int *)a2,
          a3);
  v15 = v14;
  if ( v14 < 0 )
  {
    v20 = 1405;
    goto LABEL_14;
  }
  if ( *((_DWORD *)a2 + 3) == 1 )
  {
    v16 = *((_QWORD *)this + 25);
    if ( v16 )
    {
      if ( *(_BYTE *)(v16 + 4) )
      {
        v14 = CExpressionValue::ApplyMaskToValue(a3, (const struct SubchannelMaskInfo *)v16);
        v15 = v14;
        if ( v14 < 0 )
        {
          v20 = 1431;
LABEL_14:
          v17 = v14;
LABEL_18:
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803C7480, 2u, v17, v20, 0LL);
          return v15;
        }
      }
    }
  }
  v18 = CBaseExpression::ResolveTargetNoRef(this);
  CInteractionTracker::CheckTargetsForInteractionSource(a2, v18, TargetResource);
  return v15;
}
