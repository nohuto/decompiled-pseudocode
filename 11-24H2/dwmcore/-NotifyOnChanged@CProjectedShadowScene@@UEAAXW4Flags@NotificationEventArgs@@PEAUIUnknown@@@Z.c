/*
 * XREFs of ?NotifyOnChanged@CProjectedShadowScene@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800E7E70
 * Callers:
 *     <none>
 * Callees:
 *     ?RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ @ 0x1800E7EFC (-RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowScene::NotifyOnChanged(__int64 a1)
{
  __int64 ***v1; // rdi
  __int64 **i; // rbx

  if ( !CCommonRegistryData::DisableProjectedShadows )
  {
    *(_QWORD *)(a1 + 112) = 0LL;
    if ( !CCommonRegistryData::DisableProjectedShadows )
    {
      v1 = *(__int64 ****)(a1 + 88);
      for ( i = *v1; i != (__int64 **)v1; i = (__int64 **)*i )
        CProjectedShadowReceiver::RequestRedraw((CProjectedShadowReceiver *)i[2]);
    }
  }
}
