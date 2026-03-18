/*
 * XREFs of ?NotifyOnChanged@CProjectedShadowReceiver@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1802ABAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEBAPEAVCBrush@@XZ @ 0x18011C02C (-GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEBAPEAVCBrush@@XZ.c)
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x18025B630 (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowReceiver::NotifyOnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdx
  struct CBrush *EffectiveMaskBrush; // rax
  CEffectIntermediateProducer **v5; // rcx
  struct CBrush *v6; // rdx

  if ( !CCommonRegistryData::DisableProjectedShadows && a3 )
  {
    if ( a3 == a1 )
    {
      CResource::NotifyOnChanged((_DWORD *)a1, a2, a3);
    }
    else
    {
      v3 = *(_QWORD *)(a1 + 112);
      if ( v3 && a3 == v3 )
      {
        EffectiveMaskBrush = CProjectedShadowReceiver::GetEffectiveMaskBrush((CProjectedShadowReceiver *)a1);
        if ( v6 == EffectiveMaskBrush )
          CProjectedShadowReceiver::InvalidateMaskContent(v5);
      }
    }
  }
}
