/*
 * XREFs of ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x18003DFC8
 * Callers:
 *     ?Complete_RenderThread@CEffectCompilationTask@@AEAAXXZ @ 0x18003DF70 (-Complete_RenderThread@CEffectCompilationTask@@AEAAXXZ.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18003D670 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18003DBB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?DecreasePendingEffectCompilations@CChannelContext@@QEAAXXZ @ 0x18003E0D4 (-DecreasePendingEffectCompilations@CChannelContext@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompiledEffectTemplate::OnCompilationCompleted(CCompiledEffectTemplate *this)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  CChannelContext *v4; // rcx
  __int64 v5; // rsi
  CNotificationResource *v6; // rcx
  int v7; // eax
  unsigned int v8; // r10d
  int v9; // eax
  CNotificationResource *v11; // rcx
  int ChannelCallbackId; // eax
  unsigned int v13; // r10d
  __int64 v14; // rdx
  int v15; // r8d
  int v16; // eax
  int v17; // [rsp+30h] [rbp-28h]
  __int64 v18; // [rsp+38h] [rbp-20h]
  __int64 v19; // [rsp+40h] [rbp-18h] BYREF
  __int64 v20; // [rsp+48h] [rbp-10h]

  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6416LL) + 72LL))(
         *(_QWORD *)(*((_QWORD *)this + 3) + 6416LL),
         5LL);
  v4 = (CChannelContext *)*((_QWORD *)this + 7);
  v5 = v3;
  if ( v4 )
    CChannelContext::DecreasePendingEffectCompilations(v4);
  if ( *(_DWORD *)(*((_QWORD *)this + 10) + 72LL) == 2 )
  {
    if ( CNotificationResource::ShouldNotify(this) )
    {
      if ( v5 )
      {
        ChannelCallbackId = CNotificationResource::GetChannelCallbackId(v11);
        v20 = *((unsigned int *)this + 18);
        v16 = CoreUICallSend(v5, &v19, v13, 5LL, 1, &unk_180336E5D, v15, v14, ChannelCallbackId);
        v2 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xA1u, 0LL);
      }
    }
  }
  else if ( *(_DWORD *)(*((_QWORD *)this + 10) + 72LL) == 3 )
  {
    if ( CNotificationResource::ShouldNotify(this)
      && v5
      && (v7 = CNotificationResource::GetChannelCallbackId(v6),
          v20 = *((unsigned int *)this + 18),
          v9 = CoreUICallSend(v5, &v19, v8, 5LL, 0, &unk_180336E53, v17, v18, v7),
          v2 = v9,
          v9 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x93u, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(CCompiledEffectTemplate *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
    }
  }
  return v2;
}
