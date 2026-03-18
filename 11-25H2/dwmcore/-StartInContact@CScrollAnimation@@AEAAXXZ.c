/*
 * XREFs of ?StartInContact@CScrollAnimation@@AEAAXXZ @ 0x1802564DC
 * Callers:
 *     ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1800F2EEC (-CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x1800320D0 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     _tlgKeywordOn @ 0x1801CAD80 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180226980 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScrollAnimation::StartInContact(CScrollAnimation *this)
{
  __int64 v2; // rax
  void (__fastcall *v3)(CScrollAnimation *); // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  CScrollAnimation *v7; // [rsp+60h] [rbp+8h] BYREF

  *((_QWORD *)this + 43) = CComposition::GetFrameTargetTime(*((CComposition **)this + 3));
  v2 = *(_QWORD *)this;
  *((_OWORD *)this + 26) = 0LL;
  v3 = *(void (__fastcall **)(CScrollAnimation *))(v2 + 320);
  *((_QWORD *)this + 54) = 0LL;
  v3(this);
  *((_DWORD *)this + 80) = 1;
  if ( (unsigned int)dword_180404D18 > 4 && tlgKeywordOn((__int64)&dword_180404D18, 2LL) )
  {
    v7 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      v4,
      byte_1803DA2A2,
      v5,
      v6,
      (__int64)&v7);
  }
}
