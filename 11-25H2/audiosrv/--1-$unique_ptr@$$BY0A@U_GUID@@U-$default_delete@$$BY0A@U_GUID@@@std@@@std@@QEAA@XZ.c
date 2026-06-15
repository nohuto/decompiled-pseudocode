/*
 * XREFs of ??1?$unique_ptr@$$BY0A@U_GUID@@U?$default_delete@$$BY0A@U_GUID@@@std@@@std@@QEAA@XZ @ 0x1800A6E28
 * Callers:
 *     ?GetDiscoveredEffects@CAudioStream@@AEAAJAEAV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@@Z @ 0x1800087B0 (-GetDiscoveredEffects@CAudioStream@@AEAAJAEAV-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@@.c)
 *     ?PublishAudioEffects@CAudioStream@@AEAAXXZ @ 0x1800C990C (-PublishAudioEffects@CAudioStream@@AEAAXXZ.c)
 *     _CAudioStream::GetDiscoveredEffects_::_1_::dtor$0 @ 0x18015E900 (_CAudioStream--GetDiscoveredEffects_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::unique_ptr<_GUID [0]>::~unique_ptr<_GUID [0]>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
