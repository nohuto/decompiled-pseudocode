/*
 * XREFs of ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x180156004
 * Callers:
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x180155D70 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEM.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18008E308 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x18008E3EC (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x180154D20 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ??8EffectDescriptionKey@@QEBA_NAEBU0@@Z @ 0x180156430 (--8EffectDescriptionKey@@QEBA_NAEBU0@@Z.c)
 *     ?AddTemplate_RenderThread@CEffectCompilationTask@@AEAAJPEAVCCompiledEffectTemplate@@@Z @ 0x180156470 (-AddTemplate_RenderThread@CEffectCompilationTask@@AEAAJPEAVCCompiledEffectTemplate@@@Z.c)
 *     ?TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z @ 0x18015651C (-TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z.c)
 *     ??0CEffectCompilationTask@@AEAA@PEAVCEffectCompilationService@@PEAUIEffectDescription@Composition@UI@Windows@@@Z @ 0x180157DA0 (--0CEffectCompilationTask@@AEAA@PEAVCEffectCompilationService@@PEAUIEffectDescription@Compositio.c)
 *     ?Initialize@CEffectCompilationTask@@AEAAJXZ @ 0x180157F38 (-Initialize@CEffectCompilationTask@@AEAAJXZ.c)
 *     ??$emplace@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@std@@_N@1@AEAUEffectDescriptionKey@@$$QEAPEAVCEffectCompilationTask@@@Z @ 0x1801DCC5C (--$emplace@AEAUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@-$_Hash@V-$_Umap_traits@UEffec.c)
 *     McTemplateU0pdsddt_EventWriteTransfer @ 0x180207480 (McTemplateU0pdsddt_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??$_Erase@UEffectDescriptionKey@@@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBUEffectDescriptionKey@@@Z @ 0x18025EF48 (--$_Erase@UEffectDescriptionKey@@@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectComp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEffectCompilationService::BeginCompile(
        CEffectCompilationService *this,
        struct CCompiledEffectTemplate *a2,
        struct Windows::UI::Composition::IEffectDescription *a3,
        struct CEffectCompilationTask **a4)
{
  __int64 v4; // rax
  PTP_WORK *v6; // rbx
  unsigned __int8 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r15
  PTP_WORK *v16; // rdi
  int v17; // eax
  int v18; // edi
  __int64 *v19; // r15
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  unsigned int v23; // ecx
  int v24; // esi
  __int64 v25; // r10
  __int64 v26; // r9
  __int64 v27; // rdx
  struct CEffectCompilationTask *v28; // rax
  CEffectCompilationTask *v30; // rax
  CEffectCompilationTask *v31; // rax
  __int64 v32; // rax
  const char *v33; // r15
  int (__fastcall *v34)(struct Windows::UI::Composition::IEffectDescription *, PVOID *); // rdi
  PVOID v35; // rcx
  char v36; // di
  int ChannelCallbackId; // eax
  int v38; // edx
  unsigned int v39; // eax
  unsigned int v40; // [rsp+20h] [rbp-40h]
  _QWORD v41[2]; // [rsp+40h] [rbp-20h] BYREF
  char v42[16]; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+38h]
  PVOID pv; // [rsp+A0h] [rbp+40h] BYREF
  char *v45; // [rsp+B0h] [rbp+50h]
  struct CEffectCompilationTask **v46; // [rsp+B8h] [rbp+58h]

  v46 = a4;
  v4 = *(_QWORD *)a3;
  v6 = 0LL;
  v41[1] = a3;
  pv = 0LL;
  v9 = 1;
  v10 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(v4 + 104))(a3);
  v11 = *((_QWORD *)this + 15);
  v45 = (char *)this + 96;
  v12 = v10 & *((_QWORD *)this + 18);
  v41[0] = v10;
  v13 = 2 * v12;
  v14 = *(_QWORD *)(v11 + 8 * v13 + 8);
  if ( v14 == *((_QWORD *)this + 13) )
  {
LABEL_6:
    v14 = 0LL;
  }
  else
  {
    v15 = *(_QWORD *)(v11 + 8 * v13);
    while ( !(unsigned __int8)EffectDescriptionKey::operator==(v41, v14 + 16) )
    {
      if ( v14 == v15 )
        goto LABEL_6;
      v14 = *(_QWORD *)(v14 + 8);
    }
  }
  if ( v14 && v14 != *((_QWORD *)this + 13) )
  {
    v16 = *(PTP_WORK **)(v14 + 32);
    if ( v16 )
    {
      (*(void (__fastcall **)(PTP_WORK *))*v16)(v16);
      v6 = v16;
    }
    CEffectCompilationService::TryReviveDeadTask(this, (const struct CEffectCompilationTask *)v6);
    goto LABEL_12;
  }
  v30 = (CEffectCompilationTask *)DefaultHeap::AllocClear(0x68uLL);
  if ( !v30 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v31 = CEffectCompilationTask::CEffectCompilationTask(v30, this, a3);
  Microsoft::WRL::ComPtr<CManipulationContext>::operator=(&pv, (void (__fastcall ***)(_QWORD))v31);
  v6 = (PTP_WORK *)pv;
  if ( !pv )
  {
    v18 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x70u, 0LL);
    goto LABEL_33;
  }
  if ( CCommonRegistryData::EnableEffectCaching )
    std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::emplace<EffectDescriptionKey &,CEffectCompilationTask *>(
      (char *)this + 96,
      v42,
      v41,
      &pv);
  v17 = CEffectCompilationTask::Initialize(v6);
  v18 = v17;
  if ( v17 >= 0 )
  {
    v9 = 0;
LABEL_12:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v32 = *(_QWORD *)a3;
      pv = 0LL;
      v33 = "null";
      v34 = *(int (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *, PVOID *))(v32 + 88);
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&pv);
      if ( v34(a3, &pv) >= 0 )
        v33 = (const char *)(*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)pv + 16LL))(pv);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      {
        v36 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)a3 + 32LL))(a3);
        (*(void (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)a3 + 80LL))(a3);
        ChannelCallbackId = CNotificationResource::GetChannelCallbackId(a2);
        McTemplateU0pdsddt_EventWriteTransfer(v9, v38, (_DWORD)v6, ChannelCallbackId, (__int64)v33, v38, v36, v9);
      }
      v35 = pv;
      if ( pv )
      {
        pv = 0LL;
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v35 + 8LL))(v35);
      }
    }
    v17 = CEffectCompilationTask::AddTemplate_RenderThread((CEffectCompilationTask *)v6, a2);
    v18 = v17;
    if ( v17 >= 0 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
      v19 = (__int64 *)((char *)this + 64);
      v20 = 0LL;
      v21 = *((_QWORD *)this + 8);
      v22 = *((unsigned int *)this + 22);
      while ( (unsigned int)v20 < (unsigned int)v22 )
      {
        if ( v6 == *(PTP_WORK **)(v21 + 8 * v20) )
          goto LABEL_23;
        v20 = (unsigned int)(v20 + 1);
      }
      v23 = v22 + 1;
      pv = v6;
      if ( (int)v22 + 1 < (unsigned int)v22 )
      {
        v18 = -2147024362;
        v39 = 181;
        v24 = -2147024362;
      }
      else
      {
        v24 = 0;
        if ( v23 <= *((_DWORD *)this + 21) )
        {
          *(_QWORD *)(v21 + 8 * v22) = v6;
          *((_DWORD *)this + 22) = v23;
LABEL_21:
          v18 = v24;
          if ( *((_BYTE *)v6 + 96) )
          {
            v25 = *v19;
            v26 = *((unsigned int *)this + 50);
            v27 = *(_QWORD *)(*v19 + 8LL * (unsigned int)(*((_DWORD *)this + 22) - 1));
            *(_QWORD *)(v25 + 8LL * (unsigned int)(*((_DWORD *)this + 22) - 1)) = *(_QWORD *)(*v19 + 8 * v26);
            *(_QWORD *)(v25 + 8 * v26) = v27;
            ++*((_DWORD *)this + 50);
            SetEvent(*((HANDLE *)this + 7));
          }
LABEL_23:
          if ( this != (CEffectCompilationService *)-16LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
          if ( !v9 )
            SubmitThreadpoolWork(v6[8]);
          v28 = (struct CEffectCompilationTask *)v6;
          v6 = 0LL;
          *v46 = v28;
          if ( v18 < 0 )
            goto LABEL_33;
          goto LABEL_28;
        }
        v24 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 64, 8, 1, &pv);
        v18 = v24;
        if ( v24 >= 0 )
          goto LABEL_21;
        v39 = 192;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, v39, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x9Cu, 0LL);
      if ( this != (CEffectCompilationService *)-16LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
      goto LABEL_33;
    }
    v40 = 148;
    goto LABEL_32;
  }
  v40 = 119;
LABEL_32:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, v40, 0LL);
LABEL_33:
  if ( !v6 )
    return (unsigned int)v18;
  std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::_Erase<EffectDescriptionKey>(
    v45,
    v41);
LABEL_28:
  if ( v6 )
    (*((void (__fastcall **)(PTP_WORK *))*v6 + 1))(v6);
  return (unsigned int)v18;
}
