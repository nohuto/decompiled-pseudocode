/*
 * XREFs of ?ForceFullDirty@CRenderTargetManager@@QEAAXXZ @ 0x18021ABBC
 * Callers:
 *     ?RenderAndPresent@CRenderTargetManager@@QEAAJXZ @ 0x18013EEDC (-RenderAndPresent@CRenderTargetManager@@QEAAJXZ.c)
 *     ?Partition_SwitchRemotingMode@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z @ 0x180223C50 (-Partition_SwitchRemotingMode@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUta.c)
 *     ?OnReevaluateMPOCapabilities@CChannelContext@@QEAAXXZ @ 0x1802296F0 (-OnReevaluateMPOCapabilities@CChannelContext@@QEAAXXZ.c)
 *     ?OnForceRender@CChannelContext@@QEAAXXZ @ 0x18022D2D4 (-OnForceRender@CChannelContext@@QEAAXXZ.c)
 *     ?AdjustStereoEntityCount@CComposition@@QEAAX_N@Z @ 0x1802658C0 (-AdjustStereoEntityCount@CComposition@@QEAAX_N@Z.c)
 *     ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x1802665FC (-UpdateDebugCounter@CComposition@@QEAAX_N@Z.c)
 *     ?OnIsHwProtectionTeardownEnabledChanged@CChannelContext@@QEAAXXZ @ 0x180269928 (-OnIsHwProtectionTeardownEnabledChanged@CChannelContext@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTargetManager::ForceFullDirty(CRenderTargetManager *this)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi

  *((_BYTE *)this + 744) = 1;
  v2 = *((_QWORD *)this + 3);
  v3 = *((_QWORD *)this + 4);
  while ( v2 != v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)v2 + 8LL) + 48LL))(*(_QWORD *)v2 + 8LL);
    v2 += 8LL;
  }
  v4 = (_QWORD *)*((_QWORD *)this + 10);
  v5 = (_QWORD *)*((_QWORD *)this + 11);
  while ( v4 != v5 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 48LL))(*v4);
    ++v4;
  }
  CRenderTargetManager::EndTargetEnumeration(this);
}
