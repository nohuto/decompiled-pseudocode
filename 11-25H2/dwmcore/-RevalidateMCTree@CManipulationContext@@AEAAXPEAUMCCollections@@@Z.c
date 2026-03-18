/*
 * XREFs of ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801CAFB8
 * Callers:
 *     ?RevalidateMCTrees@CManipulationContext@@CAXPEAUMCCollections@@@Z @ 0x180223430 (-RevalidateMCTrees@CManipulationContext@@CAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180002EC4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x180002F44 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180002FE0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CEC0 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1800F9974 (-UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1800FAD34 (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x1800FB600 (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x18013A998 (-GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z @ 0x1801CABDC (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z.c)
 *     _tlgKeywordOn @ 0x1801CAD80 (_tlgKeywordOn.c)
 *     ?GetMCRoot@CManipulationContext@@CAPEAVCInteraction@@PEBV2@@Z @ 0x1801CB5C4 (-GetMCRoot@CManipulationContext@@CAPEAVCInteraction@@PEBV2@@Z.c)
 *     ?FindManipulationContext@CManipulationContext@@CAPEAV1@PEBUMCCollections@@PEBVCInteraction@@PEAH@Z @ 0x1801CB5E8 (-FindManipulationContext@CManipulationContext@@CAPEAV1@PEBUMCCollections@@PEBVCInteraction@@PEAH.c)
 *     ?CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z @ 0x1802626A0 (-CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z.c)
 *     ?SetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x180262994 (-SetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationContext::RevalidateMCTree(CManipulationContext *this, struct MCCollections *a2)
{
  int v2; // r8d
  struct MCCollections *v3; // r11
  __int64 *v5; // r13
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // edi
  int *v11; // r12
  __int64 v12; // rsi
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r10
  int v16; // r9d
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // r15d
  __int64 v21; // rbx
  struct CInteraction *v22; // rbx
  struct CInteraction *v23; // rax
  struct CInteraction *ClosestInteractionAncestor; // rsi
  struct CInteraction *i; // rdi
  const struct CVisual *VisualNoRef; // rax
  bool *v27; // rdx
  struct CInteraction *v28; // rdi
  __int64 v29; // rcx
  unsigned __int8 v30; // r15
  unsigned int v31; // edi
  const struct CInteraction *MCRoot; // rax
  int *v33; // r8
  struct CManipulationContext *ManipulationContext; // rax
  __int64 *v35; // rcx
  __int64 v36; // rax
  CResource *v37; // rdi
  struct CVisual *v38; // rax
  __int64 v39; // r12
  struct CInteraction *v40; // rdi
  const struct CVisual *v41; // rax
  bool *v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // r8
  unsigned int v48; // r12d
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r8
  int v52; // r10d
  __int64 v53; // rax
  int v54; // r8d
  __int64 v55; // rdx
  __int64 j; // rcx
  CManipulationContext **v57; // [rsp+20h] [rbp-79h]
  CManipulationContext **v58; // [rsp+28h] [rbp-71h]
  CManipulationContext **v59; // [rsp+30h] [rbp-69h]
  CManipulationContext **v60; // [rsp+38h] [rbp-61h]
  struct CInteraction **v61; // [rsp+40h] [rbp-59h]
  CManipulationContext *v62; // [rsp+50h] [rbp-49h] BYREF
  int *v63; // [rsp+58h] [rbp-41h]
  int v64; // [rsp+60h] [rbp-39h]
  CResource *v65; // [rsp+68h] [rbp-31h] BYREF
  CManipulationContext *v66; // [rsp+70h] [rbp-29h] BYREF
  unsigned __int64 v67; // [rsp+78h] [rbp-21h]
  __int64 v68; // [rsp+80h] [rbp-19h]
  __int64 v69; // [rsp+88h] [rbp-11h]
  struct CInteraction *v70; // [rsp+90h] [rbp-9h] BYREF
  CManipulationContext *v71; // [rsp+98h] [rbp-1h] BYREF
  struct CInteraction *v72; // [rsp+A0h] [rbp+7h]
  struct CInteraction *v73; // [rsp+100h] [rbp+67h] BYREF
  struct MCCollections *v74; // [rsp+108h] [rbp+6Fh]
  unsigned int v75; // [rsp+110h] [rbp+77h]
  unsigned int v76; // [rsp+118h] [rbp+7Fh]

  v74 = a2;
  v2 = 0;
  v3 = a2;
  if ( *((int *)this + 18) > 0 )
  {
    v5 = (__int64 *)((char *)this + 64);
    v6 = 0LL;
    do
    {
      v7 = *(_QWORD *)(v6 + *v5);
      if ( v7 )
      {
        do
        {
          v8 = *(_QWORD *)(v7 + 224);
          *(_QWORD *)(v7 + 216) = v8;
          v7 = v8;
        }
        while ( v8 );
      }
      v9 = *((_DWORD *)this + 18);
      ++v2;
      v6 += 8LL;
    }
    while ( v2 < v9 );
    v10 = 0;
    v11 = (int *)((char *)this + 72);
    v63 = (int *)((char *)this + 72);
    v76 = 0;
    if ( v9 > 0 )
    {
      v12 = 0LL;
      v13 = (_QWORD *)((char *)this + 56);
      v14 = 0LL;
      v69 = 0LL;
      v68 = 0LL;
      do
      {
        v15 = *((int *)v3 + 14);
        v16 = *(_DWORD *)(v14 + *v13);
        v17 = 0LL;
        LODWORD(v73) = v16;
        while ( v17 < v15 )
        {
          v18 = *((_QWORD *)v3 + 5);
          v63 = v11;
          if ( *(_DWORD *)(v18 + 4 * v17) == v16 )
          {
            if ( v17 != -1 )
            {
              v19 = *((_QWORD *)v3 + 6);
              v63 = v11;
              v20 = *(_DWORD *)(v19 + 4 * v17);
              goto LABEL_15;
            }
            break;
          }
          ++v17;
        }
        v20 = 2;
LABEL_15:
        v21 = *v5;
        v75 = v20;
        v22 = *(struct CInteraction **)(v12 + v21);
        v72 = v22;
        if ( v22 )
          (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v22 + 8LL))(v22);
        v23 = (struct CInteraction *)*((_QWORD *)v22 + 26);
        ClosestInteractionAncestor = v22;
        if ( v23 )
        {
          do
          {
            ClosestInteractionAncestor = v23;
            v23 = (struct CInteraction *)*((_QWORD *)v23 + 26);
          }
          while ( v23 );
          v62 = ClosestInteractionAncestor;
          wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)&v62);
          CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
            (char *)this + 56,
            v10,
            &v73,
            &v62);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v62);
        }
        if ( CInteraction::GetVisualNoRef(ClosestInteractionAncestor) )
        {
          for ( i = ClosestInteractionAncestor; i; i = CManipulationContext::GetClosestInteractionAncestor(
                                                         VisualNoRef,
                                                         v27) )
          {
            if ( (unsigned int)dword_180404D18 > 4 && tlgKeywordOn((__int64)&dword_180404D18, 2LL) )
            {
              v73 = i;
              v58 = &v73;
              v62 = this;
              v57 = &v62;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                (__int64)&dword_180404D18,
                (__int64)&unk_1803D63EF);
            }
            *((_BYTE *)i + 200) |= 0x80u;
            VisualNoRef = CInteraction::GetVisualNoRef(i);
          }
        }
        else
        {
          ClosestInteractionAncestor = 0LL;
          v62 = 0LL;
          wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)&v62);
          CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
            (char *)this + 56,
            v10,
            &v73,
            &v62);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v62);
        }
        v28 = v22;
        do
        {
          if ( (unsigned int)dword_180404D18 > 4 && tlgKeywordOn((__int64)&dword_180404D18, 2LL) )
          {
            v73 = v28;
            v58 = &v73;
            v62 = this;
            v57 = &v62;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
              (__int64)&dword_180404D18,
              (__int64)&unk_1803D639E);
          }
          *((_BYTE *)v28 + 201) |= 1u;
          v28 = (struct CInteraction *)*((_QWORD *)v28 + 27);
        }
        while ( v28 );
        if ( (unsigned int)dword_180404D18 > 4 && tlgKeywordOn((__int64)&dword_180404D18, 2LL) )
        {
          v73 = v22;
          v59 = &v73;
          v62 = ClosestInteractionAncestor;
          v58 = &v62;
          v57 = &v66;
          v66 = this;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v29,
            (__int64)&unk_1803D64C2);
        }
        if ( ClosestInteractionAncestor != v22 )
          CManipulationContext::CleanStaleFork(this, v20, v22);
        v30 = 0;
        LOBYTE(v64) = 0;
        if ( ClosestInteractionAncestor )
        {
          while ( 1 )
          {
            v31 = 0;
            MCRoot = CManipulationContext::GetMCRoot(ClosestInteractionAncestor);
            ManipulationContext = CManipulationContext::FindManipulationContext(v74, MCRoot, v33);
            if ( ManipulationContext )
              v31 = *((_DWORD *)ManipulationContext + 8);
            v35 = (__int64 *)*((_QWORD *)this + 5);
            v67 = v31 | 0xFFFFFFFE00000000uLL;
            v36 = *v35;
            v65 = 0LL;
            (*(void (__fastcall **)(__int64 *, unsigned __int64, CResource **))(v36 + 64))(v35, v67, &v65);
            v37 = v65;
            if ( v65 )
            {
              v38 = CInteraction::GetVisualNoRef(ClosestInteractionAncestor);
              CManipulationContext::OnVisualPropertyChange(v38, v37);
              v63 = v11;
            }
            if ( *((_DWORD *)ClosestInteractionAncestor + 51) == 2 )
              v30 = 1;
            CInteraction::UpdateDefaultInteractionForCurrentMC(ClosestInteractionAncestor);
            if ( v30 && (*((_BYTE *)ClosestInteractionAncestor + 200) & 0x10) != 0 )
              (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*((_QWORD *)ClosestInteractionAncestor + 9) + 80LL))(
                (__int64)ClosestInteractionAncestor + 72,
                v75,
                0LL);
            v39 = *((_QWORD *)ClosestInteractionAncestor + 27);
            v40 = ClosestInteractionAncestor;
            v41 = CInteraction::GetVisualNoRef(ClosestInteractionAncestor);
            ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor(v41, v42);
            if ( (unsigned int)dword_180404D18 > 4 && tlgKeywordOn((__int64)&dword_180404D18, 2LL) )
            {
              LODWORD(v73) = v30;
              v61 = &v73;
              v60 = &v66;
              v59 = &v62;
              v58 = &v70;
              v57 = &v71;
              v66 = v40;
              v62 = (CManipulationContext *)v39;
              v70 = ClosestInteractionAncestor;
              v71 = this;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                v43,
                (__int64)&unk_1803D6441);
            }
            if ( (struct CInteraction *)v39 != ClosestInteractionAncestor )
              break;
            if ( ClosestInteractionAncestor )
            {
              v48 = v75;
LABEL_64:
              if ( (*((_BYTE *)ClosestInteractionAncestor + 201) & 1) == 0 )
              {
                if ( !(unsigned int)CInteraction::GetTotalNumContacts(ClosestInteractionAncestor) )
                {
                  LOBYTE(v51) = v52 & *((_BYTE *)this + 28);
                  LOBYTE(v50) = v52;
                  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, CManipulationContext **, CManipulationContext **, CManipulationContext **, CManipulationContext **, struct CInteraction **))(*((_QWORD *)ClosestInteractionAncestor + 9) + 40LL))(
                    (__int64)ClosestInteractionAncestor + 72,
                    v50,
                    v51,
                    v48,
                    v57,
                    v58,
                    v59,
                    v60,
                    v61);
                  v52 = 1;
                }
                v53 = (int)v75 - 1LL;
                if ( v48 - 1 >= 6 )
                  v53 = 0LL;
                *((_DWORD *)ClosestInteractionAncestor + v53 + 64) += v52;
              }
            }
LABEL_70:
            *((_BYTE *)v40 + 200) &= ~0x80u;
            *((_BYTE *)v40 + 201) &= ~1u;
            if ( v65 )
              CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v65);
            v11 = v63;
            if ( !ClosestInteractionAncestor )
            {
              v22 = v72;
              goto LABEL_74;
            }
          }
          v44 = *((_QWORD *)v40 + 29);
          if ( v44 )
            *(_QWORD *)(v44 + 240) = *((_QWORD *)v40 + 30);
          v45 = *((_QWORD *)v40 + 30);
          if ( v45 )
            *(_QWORD *)(v45 + 232) = *((_QWORD *)v40 + 29);
          v46 = *((_QWORD *)v40 + 28);
          if ( v46 && *(struct CInteraction **)(v46 + 248) == v40 )
            *(_QWORD *)(v46 + 248) = *((_QWORD *)v40 + 29);
          *((_QWORD *)v40 + 30) = 0LL;
          v47 = v39;
          v48 = v75;
          *((_QWORD *)v40 + 29) = 0LL;
          *((_QWORD *)v40 + 28) = 0LL;
          CManipulationContext::CleanStaleFork(this, v48, v47);
          if ( !ClosestInteractionAncestor )
            goto LABEL_70;
          *((_QWORD *)v40 + 29) = *((_QWORD *)ClosestInteractionAncestor + 31);
          v49 = *((_QWORD *)ClosestInteractionAncestor + 31);
          if ( v49 )
            *(_QWORD *)(v49 + 240) = v40;
          *((_QWORD *)ClosestInteractionAncestor + 31) = v40;
          *((_QWORD *)v40 + 28) = ClosestInteractionAncestor;
          goto LABEL_64;
        }
LABEL_74:
        (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v22 + 16LL))(v22);
        v13 = (_QWORD *)((char *)this + 56);
        v14 = v68 + 4;
        v9 = *v11;
        v10 = v76 + 1;
        v3 = v74;
        v12 = v69 + 8;
        v76 = v10;
        v68 += 4LL;
        v69 += 8LL;
      }
      while ( (int)v10 < v9 );
      v5 = (__int64 *)((char *)this + 64);
      v11 = (int *)((char *)this + 72);
    }
    v54 = 0;
    if ( v9 > 0 )
    {
      v55 = 0LL;
      do
      {
        for ( j = *(_QWORD *)(v55 + *v5); j; j = *(_QWORD *)(j + 224) )
          *(_QWORD *)(j + 216) = 0LL;
        ++v54;
        v55 += 8LL;
      }
      while ( v54 < *v11 );
    }
  }
}
