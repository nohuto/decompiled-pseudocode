/*
 * XREFs of ?ShrinkQueuedStateChanges@CExpressionManager@@AEAAXXZ @ 0x18003D9E0
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x1800ACB80 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@UQueuedAnimationStateChange@@$00@@QEAAJI@Z @ 0x18003DB1C (-RemoveAt@-$DynArray@UQueuedAnimationStateChange@@$00@@QEAAJI@Z.c)
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18003DBB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x18003DBC8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800E56E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CExpressionManager::ShrinkQueuedStateChanges(CExpressionManager *this)
{
  int v1; // ebx
  _QWORD *v2; // r14
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  int v6; // r8d
  int v7; // r9d
  int v8; // [rsp+60h] [rbp+8h] BYREF
  unsigned int ChannelCallbackId; // [rsp+68h] [rbp+10h] BYREF
  int v10; // [rsp+70h] [rbp+18h] BYREF

  v1 = *((_DWORD *)this + 62) - 1;
  if ( v1 >= 0 )
  {
    v2 = (_QWORD *)((char *)this + 224);
    v3 = 16LL * v1;
    do
    {
      v4 = *(_QWORD *)(*v2 + v3 + 8);
      v5 = *(_QWORD *)(v4 + 56);
      if ( (!v5 || !*(_DWORD *)(v5 + 108) || !*(_DWORD *)(v4 + 72)) && !CPtrArray<CVisual>::GetCount(v4 + 32) )
      {
        if ( (unsigned int)dword_180404D18 > 4 && (byte_180404D28 & 4) != 0 && (qword_180404D30 & 4) == qword_180404D30 )
        {
          v8 = *(_DWORD *)(v4 + 72);
          ChannelCallbackId = CNotificationResource::GetChannelCallbackId((CNotificationResource *)v4);
          v10 = (*(__int64 (**)(void))(*(_QWORD *)v4 + 144LL))();
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_180404D18,
            (unsigned int)&unk_1803D84B0,
            v6,
            v7,
            (__int64)&v10,
            (__int64)&ChannelCallbackId,
            (__int64)&v8);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        DynArray<QueuedAnimationStateChange,1>::RemoveAt(v2, (unsigned int)v1);
      }
      v3 -= 16LL;
      --v1;
    }
    while ( v1 >= 0 );
  }
}
