/*
 * XREFs of ?StopInteraction@CInteractionContextWrapper@@UEAAJXZ @ 0x1802135E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18012B3DC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionContextWrapper::StopInteraction(
        CInteractionContextWrapper *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // ebx
  int v7; // [rsp+40h] [rbp+8h] BYREF
  CInteractionContextWrapper *v8; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_QWORD *)this + 2) )
  {
    v5 = StopInteractionContext();
    if ( v5 >= 0 )
      (*(void (__fastcall **)(CInteractionContextWrapper *))(*(_QWORD *)this + 64LL))(this);
  }
  else
  {
    v5 = -2147019873;
  }
  if ( (unsigned int)dword_1803F8D18 > 4 && (byte_1803F8D28 & 2) != 0 && (qword_1803F8D30 & 2) == qword_1803F8D30 )
  {
    v7 = v5;
    v8 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1803F8D18,
      byte_1803CFBC7,
      a3,
      a4,
      (__int64)&v8,
      (__int64)&v7);
  }
  return (unsigned int)v5;
}
