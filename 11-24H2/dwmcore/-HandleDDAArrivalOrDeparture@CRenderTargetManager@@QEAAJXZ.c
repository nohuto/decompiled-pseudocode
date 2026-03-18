/*
 * XREFs of ?HandleDDAArrivalOrDeparture@CRenderTargetManager@@QEAAJXZ @ 0x180229708
 * Callers:
 *     ?OnReevaluateDDA@CChannelContext@@QEAAXXZ @ 0x18024C2E0 (-OnReevaluateDDA@CChannelContext@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x180103FC0 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderTargetManager::HandleDDAArrivalOrDeparture(CRenderTargetManager *this)
{
  _QWORD *v2; // rbx
  int v3; // edi
  _QWORD *v4; // r14
  int v5; // eax
  int v6; // ebp

  *((_BYTE *)this + 744) = 1;
  v2 = (_QWORD *)*((_QWORD *)this + 3);
  v3 = 0;
  v4 = (_QWORD *)*((_QWORD *)this + 4);
  while ( v2 != v4 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 88LL))(*v2);
    v6 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x91u, 0LL);
    if ( !v3 || v3 >= 0 && v6 < 0 )
      v3 = v6;
    ++v2;
  }
  CRenderTargetManager::EndTargetEnumeration(this);
  return (unsigned int)v3;
}
