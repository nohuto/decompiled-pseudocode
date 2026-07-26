/*
 * XREFs of ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x14016AEF0
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1400768C0 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     _lambda_1b37a015b038c0fb9460a3d4ca11395f_::_lambda_invoker_cdecl_ @ 0x14014F110 (_lambda_1b37a015b038c0fb9460a3d4ca11395f_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?insertSorted@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@P6A_NAEBV34@1@Z@Z @ 0x14014F08C (-insertSorted@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROT.c)
 *     ?IsAlive@BindState@Ndis@@QEBA_NXZ @ 0x140160A10 (-IsAlive@BindState@Ndis@@QEBA_NXZ.c)
 *     ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x14016AE00 (-LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z.c)
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x14016B070 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_dele.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x14016B1A0 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x14016B210 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x14016B2C0 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 */

Ndis::BindState *__fastcall Ndis::BindStack::CreateDynamicBinding(
        __int64 a1,
        struct NDIS_BIND_DRIVER_BASE **a2,
        __int64 a3,
        enum Ndis::BindSource::Flags a4)
{
  _QWORD *v8; // rbx
  unsigned __int64 v9; // r10
  unsigned __int64 i; // r9
  Ndis::BindState **v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  Ndis::BindState *v14; // rdi
  NDIS_BIND_LINK_BASE *v15; // rbx
  char inserted; // al
  PVOID P[5]; // [rsp+20h] [rbp-28h] BYREF

  Ndis::BindStack::BuildProtocolLink(a1, P, a2);
  v8 = P[0];
  if ( P[0] )
  {
    v9 = *(unsigned int *)(a1 + 4);
    for ( i = 0LL; i != v9; ++i )
    {
      if ( i >= v9 )
        __fastfail(5u);
      v11 = (Ndis::BindState **)(*(_QWORD *)(a1 + 8) + 8 * i);
      if ( (a4 != UnsolicitedOpen || !Ndis::BindState::IsAlive(*v11)) && (*v11)[1].m_AdditionalContext == (void *)v8[10] )
      {
        Ndis::BindState::SetSource(*v11, AddBindSource, a4);
        v14 = *v11;
        v15 = (NDIS_BIND_LINK_BASE *)P[0];
        P[0] = 0LL;
LABEL_8:
        if ( v15 )
        {
          KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&v15[1], v12, v13);
          NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v15);
          ExFreePoolWithTag(v15, 0x4C745042u);
        }
        return v14;
      }
    }
    *v8 = a3;
    NDIS_BIND_LINK_BASE::LinkToDriver((NDIS_BIND_LINK_BASE *)P[0], *a2);
    Ndis::BindState::SetSource((Ndis::BindState *)P[0], AddBindSource, a4);
    v14 = (Ndis::BindState *)P[0];
    inserted = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::insertSorted(
                 a1,
                 (__int64)P);
    v15 = (NDIS_BIND_LINK_BASE *)P[0];
    P[0] = 0LL;
    if ( inserted )
    {
      ++*(_DWORD *)(a1 + 96);
      *(_BYTE *)(a3 + 5224) = 1;
      goto LABEL_8;
    }
    if ( v15 )
    {
      KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&v15[1], v12, v13);
      NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v15);
      ExFreePoolWithTag(v15, 0x4C745042u);
    }
  }
  else
  {
    P[0] = 0LL;
  }
  return 0LL;
}
