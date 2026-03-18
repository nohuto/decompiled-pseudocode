/*
 * XREFs of ?CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEBUExpressionReferenceInfo@@PEAVCResource@@1@Z @ 0x1802A7298
 * Callers:
 *     ?ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z @ 0x1802A4EE4 (-ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@44@Z @ 0x180004038 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x18003D970 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x18003F160 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?HasInteraction@CVisual@@QEBA_NXZ @ 0x1800FA870 (-HasInteraction@CVisual@@QEBA_NXZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180137C40 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     _tlgKeywordOn @ 0x1801CAD80 (_tlgKeywordOn.c)
 *     ??1?$com_ptr_t@VCInteractionTracker@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18020CD9C (--1-$com_ptr_t@VCInteractionTracker@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker::CheckTargetsForInteractionSource(
        const struct ExpressionReferenceInfo *a1,
        struct CResource *a2,
        struct CResource *a3)
{
  __int64 v6; // r8
  __int64 v7; // rax
  CVisual *v8; // rbx
  struct CInteraction *InteractionInternal; // rax
  struct CInteraction *v10; // r10
  __int64 v11; // rcx
  CVisual *v12; // r10
  CVisual *v13[4]; // [rsp+40h] [rbp-30h] BYREF
  CResource *v14; // [rsp+60h] [rbp-10h] BYREF

  if ( (unsigned int)dword_180404D18 > 4
    && tlgKeywordOn((__int64)&dword_180404D18, 2LL)
    && a2
    && v6
    && (unsigned int)(*(_DWORD *)a1 - 1) <= 1
    && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 182LL)
    && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a3 + 64LL))(a3, 89LL) )
  {
    wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
      v13,
      (__int64)a2);
    v7 = *(_QWORD *)a3;
    v14 = a3;
    (*(void (__fastcall **)(struct CResource *))(v7 + 8))(a3);
    v8 = v13[0];
    *((_BYTE *)v13[0] + 107) |= 8u;
    if ( InteractionSourceManager::TryGetActiveChainingHelper((struct CResource *)((char *)a3 + 208)) )
    {
      if ( CVisual::HasInteraction(v8) )
      {
        InteractionInternal = CVisual::GetInteractionInternal(v8);
        if ( InteractionInternal == v10
          && (unsigned int)dword_180404D18 > 4
          && tlgKeywordOn((__int64)&dword_180404D18, 2LL) )
        {
          v13[1] = v12;
          v13[2] = a3;
          v13[3] = v8;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v11,
            (__int64)&unk_1803D8F6B);
        }
      }
    }
    wil::com_ptr_t<CInteractionTracker,wil::err_returncode_policy>::~com_ptr_t<CInteractionTracker,wil::err_returncode_policy>(&v14);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v13);
  }
}
