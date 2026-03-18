/*
 * XREFs of ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ @ 0x18008D544
 * Callers:
 *     ?OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008D510 (-OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETTEMPLATE@@@Z @ 0x18008D754 (-ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETTEMPLATE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x18008CE74 (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 *     ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x18008D640 (-HasValidTemplate@CEffectBrush@@AEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEffectBrush::TryCreateEffectInstance(CEffectBrush *this)
{
  unsigned int v1; // ebx
  _QWORD *v2; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, const struct Windows::UI::Composition::ICompiledEffect *); // rbx
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rax
  int v12; // eax

  v1 = 0;
  v2 = (_QWORD *)((char *)this + 128);
  if ( !*((_QWORD *)this + 16) && CEffectBrush::HasValidTemplate(this) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 112) + 80LL) + 56LL);
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 72LL))(v6, v2);
    v1 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x1BDu, 0LL);
      return v1;
    }
    v8 = *((_QWORD *)this + 15);
    if ( v8 )
      *(_QWORD *)(v8 + 80) = ((unsigned __int64)this + 104) & -(__int64)(this != 0LL);
  }
  if ( *v2 )
  {
    if ( !(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 64LL))(*v2) )
    {
      if ( CCompiledEffectTemplate::GetCompiledEffectNoRef(*((CCompiledEffectTemplate **)this + 14)) )
      {
        v9 = *v2;
        v10 = *(__int64 (__fastcall **)(__int64, const struct Windows::UI::Composition::ICompiledEffect *))(*(_QWORD *)v9 + 56LL);
        CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(*((CCompiledEffectTemplate **)this + 14));
        v12 = v10(v9, CompiledEffectNoRef);
        v1 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x1CEu, 0LL);
      }
    }
  }
  return v1;
}
