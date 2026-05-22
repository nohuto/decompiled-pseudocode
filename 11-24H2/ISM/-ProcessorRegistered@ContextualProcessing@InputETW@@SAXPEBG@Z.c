/*
 * XREFs of ?ProcessorRegistered@ContextualProcessing@InputETW@@SAXPEBG@Z @ 0x180059560
 * Callers:
 *     ?RegisterProcessor@ContextualProcessorManager@@QEAAJPEAUIContextualProcessor@@W4InputSinkRequirement@1@@Z @ 0x1800594A4 (-RegisterProcessor@ContextualProcessorManager@@QEAAJPEAUIContextualProcessor@@W4InputSinkRequire.c)
 * Callees:
 *     ?Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ @ 0x180017640 (-Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180059800 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

void __fastcall InputETW::ContextualProcessing::ProcessorRegistered(const unsigned __int16 *a1)
{
  const struct _tlgProvider_t *v2; // rax
  int v3; // r8d
  int v4; // r9d
  const unsigned __int16 *v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = InputETW::Provider();
  if ( *(_DWORD *)v2 > 4u && (*((_BYTE *)v2 + 16) & 1) != 0 && (*((_QWORD *)v2 + 3) & 1LL) == *((_QWORD *)v2 + 3) )
  {
    v5 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      (_DWORD)v2,
      (unsigned int)&unk_180226722,
      v3,
      v4,
      (__int64)&v5);
  }
}
