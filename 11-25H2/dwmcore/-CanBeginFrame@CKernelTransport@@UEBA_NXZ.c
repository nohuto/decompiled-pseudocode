/*
 * XREFs of ?CanBeginFrame@CKernelTransport@@UEBA_NXZ @ 0x1801EF310
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800E6E20 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x1800031E4 (--$Write@U-$_tlgWrapperByVal@$01@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x1801CAD80 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CKernelTransport::CanBeginFrame(CKernelTransport *this)
{
  __int64 v1; // rcx
  __int16 v3; // bx
  __int64 v4; // rcx

  v1 = *((_QWORD *)this + 3);
  if ( !v1 )
    return 1;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 40LL))(v1);
  if ( (unsigned int)dword_180404D18 > 5 && tlgKeywordOn((__int64)&dword_180404D18, 32LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>>(
      v4,
      (__int64)&unk_1803D7BA9);
  return v3 == 0;
}
