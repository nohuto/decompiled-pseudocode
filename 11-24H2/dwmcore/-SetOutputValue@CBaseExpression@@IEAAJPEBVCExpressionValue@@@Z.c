/*
 * XREFs of ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180154180
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18000F9B0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800129B0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1801534F0 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1802A06E0 (-ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSIO.c)
 * Callees:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18000ED10 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x18000F6E0 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x1800163B0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800F3E30 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1801EF690 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x18023DC94 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?SetValue@CExpressionValue@@QEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18028E234 (-SetValue@CExpressionValue@@QEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_3909349690@@@details@wil@@QEAA_NXZ @ 0x1802A13E0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_3909349690@@@details@wil@@QEAA_NX.c)
 */

__int64 __fastcall CBaseExpression::SetOutputValue(CBaseExpression *this, const struct CExpressionValue *a2)
{
  bool v4; // si
  __int64 v5; // r8
  __int64 v7; // rdx
  unsigned int TracingCookie; // eax
  int v9; // eax
  unsigned int v10; // ebx
  HANDLE EventW; // rbx
  char v12; // al
  __int64 v13; // rcx
  struct CResource *TargetResource; // rax
  int v15; // eax
  unsigned int v16; // ebx
  WCHAR Name[64]; // [rsp+30h] [rbp-A8h] BYREF

  v4 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_3909349690>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_3909349690>::GetImpl'::`2'::impl)
    && *((_DWORD *)a2 + 18) != *((_DWORD *)this + 40) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x22Fu, 0LL);
    return 2147942487LL;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 39) + 4LL) & 0x40000000) != 0 )
    v4 = (unsigned __int8)CExpressionValue::operator==((_DWORD *)this + 20, a2, v5) == 0;
  v7 = *((unsigned int *)a2 + 18);
  if ( (_DWORD)v7 == 11 )
    a2 = (const struct CExpressionValue *)*((_QWORD *)a2 + 8);
  CExpressionValue::SetValue((char *)this + 80, v7, a2);
  if ( v4 )
  {
    CBaseExpression::LogSetOutputValue(this);
    TracingCookie = CBaseExpression::GetTracingCookie(this);
    v9 = StringCchPrintfW(Name, 60LL, L"DwmExpression_SetValue_%d", TracingCookie);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x256u, 0LL);
      return v10;
    }
    EventW = CreateEventW(0LL, 1, 0, Name);
    SetEvent(EventW);
    CloseHandle(EventW);
  }
  v12 = *((_BYTE *)this + 224);
  if ( (v12 & 2) != 0 && (v12 & 1) != 0 )
  {
    v13 = *((_QWORD *)this + 24);
    if ( !v13 || (TargetResource = (struct CResource *)CWeakReference<CGdiSpriteBitmap>::GetTargetResource(v13)) == 0LL )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024782, 0x26Au, 0LL);
      return 2147942514LL;
    }
    v15 = CBaseExpression::SetOutputValueOnTarget(this, TargetResource);
    v16 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x26Du, 0LL);
      return v16;
    }
  }
  return 0LL;
}
