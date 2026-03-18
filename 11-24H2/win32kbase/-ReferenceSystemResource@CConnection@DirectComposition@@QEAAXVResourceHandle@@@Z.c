/*
 * XREFs of ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x14004C6E4
 * Callers:
 *     ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x14004C1C8 (-CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVR.c)
 *     ?Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@VResourceHandle@@I@Z @ 0x14004C630 (-Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2.c)
 *     ?GetSystemVisualFromCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x140070A68 (-GetSystemVisualFromCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVRes.c)
 * Callees:
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1400750F0 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400755B0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400807E8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 */

void __fastcall DirectComposition::CConnection::ReferenceSystemResource(__int64 a1, int a2)
{
  _QWORD *v4; // r8
  unsigned __int64 v5; // rdx
  DirectComposition::CResourceMarshaler *v6; // rcx

  DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(*(_QWORD *)(a1 + 152) + 32LL));
  v4 = *(_QWORD **)(a1 + 152);
  v5 = (unsigned int)(a2 - 1);
  v6 = 0LL;
  if ( a2 && v5 < v4[18] )
    v6 = *(DirectComposition::CResourceMarshaler **)(v4[19] * v5 + v4[15]);
  DirectComposition::CResourceMarshaler::AddRef(v6);
  DirectComposition::CChannel::Unlock(*(DirectComposition::CChannel **)(a1 + 152));
}
