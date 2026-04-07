/*
 * XREFs of ??$_tlgWriteActivityAutoStop@$0A@$03@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1800A6374
 * Callers:
 *     ??1?$_TlgActivityBase@V?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$03@@IEAA@XZ @ 0x18007B094 (--1-$_TlgActivityBase@V-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProvider.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180001B30 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 */

__int64 __fastcall _tlgWriteActivityAutoStop<0,4>(_DWORD *a1, int a2)
{
  __int64 result; // rax

  if ( *a1 > 4u )
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
             (int)a1,
             (int)&unk_18011058A,
             a2);
  return result;
}
