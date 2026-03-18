/*
 * XREFs of ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x180155D70
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800368D0 (-IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800370D0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800373C0 (-IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180154670 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?DecreasePendingEffectCompilations@CChannelContext@@QEAAXXZ @ 0x180154AE8 (-DecreasePendingEffectCompilations@CChannelContext@@QEAAXXZ.c)
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x180154D20 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x180156004 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 *     ?IncreasePendingEffectCompilations@CChannelContext@@QEAAXXZ @ 0x1801567B0 (-IncreasePendingEffectCompilations@CChannelContext@@QEAAXXZ.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180180980 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x1801E1A5C (-GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z @ 0x1802A62BC (-ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompiledEffectTemplate::ProcessUpdate(
        CChannelContext **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPILEDEFFECTTEMPLATE *a3)
{
  int v5; // esi
  int v6; // r8d
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rcx
  bool (__fastcall *v10)(__int64, int); // rax
  bool v11; // al
  CSharedSectionBase *v12; // rcx
  const void *v13; // rbx
  int v14; // ebx
  struct Windows::UI::Composition::IEffectDescription *v15; // rcx
  unsigned int v17; // eax
  __int64 v18; // r14
  int v19; // ebx
  int ChannelCallbackId; // eax
  __int64 v21; // rdx
  int v22; // eax
  _QWORD v23[2]; // [rsp+40h] [rbp-10h] BYREF
  struct Windows::UI::Composition::IEffectDescription *v24; // [rsp+80h] [rbp+30h] BYREF
  BSTR bstrString; // [rsp+98h] [rbp+48h] BYREF

  v5 = 0;
  v24 = 0LL;
  if ( this[10] )
  {
    v14 = -2003303422;
    v17 = 36;
  }
  else if ( (unsigned int)HANDLE_TABLE::ValidEntry((struct CResourceTable *)((char *)a2 + 16), *((_DWORD *)a3 + 2))
         && (v8 = *(_QWORD *)(v7 + 40) + (unsigned int)(*(_DWORD *)(v7 + 24) * v6), (v9 = *(_QWORD *)(v8 + 8)) != 0)
         && ((v10 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v9 + 64LL), v10 == CKeyframeAnimation::IsOfType)
           ? (v11 = CKeyframeAnimation::IsOfType(v9, 157))
           : v10 != CVisual::IsOfType
           ? (v10 != CSharedSection::IsOfType
            ? (v11 = v10(v9, 157))
            : (v11 = CSharedSection::IsOfType(v9, 157)))
           : (v11 = CVisual::IsOfType(v9, 157)),
             v11 && (v12 = *(CSharedSectionBase **)(v8 + 8)) != 0LL) )
  {
    v13 = CSharedSectionBase::ResolveAllocation(v12, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 4));
    if ( v13 )
    {
      SetRestrictedErrorInfo(0LL);
      v5 = DeserializeEffectDescription(v13, *((unsigned int *)a3 + 4), &v24);
      v14 = v5;
      if ( v5 < 0 )
      {
        v17 = 55;
      }
      else
      {
        CChannelContext::IncreasePendingEffectCompilations(this[7]);
        v14 = CEffectCompilationService::BeginCompile(
                *((CEffectCompilationService **)this[3] + 81),
                (struct CCompiledEffectTemplate *)this,
                v24,
                this + 10);
        if ( v14 >= 0 )
        {
          (*((void (__fastcall **)(CChannelContext **, _QWORD, _QWORD))*this + 10))(this, 0LL, 0LL);
          v14 = 0;
          goto LABEL_14;
        }
        CChannelContext::DecreasePendingEffectCompilations(this[7]);
        CComposition::ScheduleCompositionPass((__int64)g_pComposition, 0, 0x1000000u);
        v17 = 71;
      }
    }
    else
    {
      v14 = -2147024882;
      v17 = 49;
    }
  }
  else
  {
    v14 = -2003303421;
    v17 = 44;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, v17, 0LL);
  if ( CNotificationResource::ShouldNotify((CNotificationResource *)this) )
  {
    v18 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this[3] + 799) + 72LL))(
            *((_QWORD *)this[3] + 799),
            5LL);
    if ( v18 )
    {
      v19 = -2147467259;
      bstrString = 0LL;
      if ( v5 < 0 )
      {
        v19 = v5;
        CEffectCompilationTask::GetRestrictedErrorDescription(&bstrString);
      }
      ChannelCallbackId = CNotificationResource::GetChannelCallbackId((CNotificationResource *)this);
      v23[1] = *((unsigned int *)this + 18);
      v22 = CoreUICallSend(v18, v23, 2LL, 5LL, 1, &unk_18032BF1D, v19, v21, ChannelCallbackId);
      v14 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x68u, 0LL);
      SysFreeString(bstrString);
    }
  }
  if ( v5 < 0 )
    v14 = 0;
LABEL_14:
  v15 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)v15 + 8LL))(v15);
  }
  return (unsigned int)v14;
}
