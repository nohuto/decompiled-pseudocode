/*
 * XREFs of ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x140169D30
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x14016C8F0 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     ?OpenV2InterfaceKey@BindStack@Ndis@@SAJAEBU_GUID@@KW4NetSetupSubkeyType@@AEAVKRegKey@@@Z @ 0x140169DF0 (-OpenV2InterfaceKey@BindStack@Ndis@@SAJAEBU_GUID@@KW4NetSetupSubkeyType@@AEAVKRegKey@@@Z.c)
 *     KRegKey::QueryValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b867a1fab03655___ @ 0x140169E80 (KRegKey--QueryValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b.c)
 *     KRegKey::QueryValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b___ @ 0x14016A100 (KRegKey--QueryValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b___.c)
 */

char __fastcall Ndis::BindStack::ReadV2InterfaceBindings(
        Ndis::BindStack *this,
        const struct _GUID *a2,
        enum NetSetupSubkeyType a3)
{
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  HANDLE v9; // rcx
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF

  Handle = 0LL;
  if ( Ndis::BindStack::OpenV2InterfaceKey(a2, (unsigned int)a2, a3, (struct KRegKey *)&Handle) < 0
    || (v5 = KRegKey::QueryValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b___(&Handle, v4, this),
        (int)(v5 + 0x80000000) >= 0)
    && v5 != -1073741772 )
  {
    v9 = Handle;
    if ( !Handle )
      return 0;
LABEL_9:
    ZwClose(v9);
    return 0;
  }
  v7 = KRegKey::QueryValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b867a1fab03655___(
         &Handle,
         v6,
         this,
         this);
  if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -1073741772 )
  {
    v9 = Handle;
    if ( !Handle )
      return 0;
    goto LABEL_9;
  }
  if ( Handle )
    ZwClose(Handle);
  return 1;
}
