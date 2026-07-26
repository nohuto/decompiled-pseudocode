/*
 * XREFs of ?AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z @ 0x14016A290
 * Callers:
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x140150970 (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 *     KRegKey::QueryValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b867a1fab03655___ @ 0x140169E80 (KRegKey--QueryValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b.c)
 * Callees:
 *     ??0?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@QEAA@$$QEAV01@@Z @ 0x14007C700 (--0-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@w.c)
 *     ?grow@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAA_N_K@Z @ 0x140140C60 (-grow@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_LIN.c)
 *     Ndis::sortProtocolsByPointer @ 0x14014F0F4 (Ndis--sortProtocolsByPointer.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x14016A440 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z.c)
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x14016B070 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_dele.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x14016B1A0 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x14016B210 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?insertAt@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x14016BA10 (-insertAt@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL.c)
 */

__int64 __fastcall Ndis::BindStack::AddStaticProtocolBinding(Ndis::BindStack *this, const wchar_t *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  NDIS_BIND_LINK_BASE *v8; // rdi
  unsigned __int64 i; // rdi
  unsigned __int64 m_numElements; // rax
  char v11; // al
  NDIS_BIND_LINK_BASE *v12; // rbx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF

  if ( !*a2 )
    return 3221225485LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)a2);
  RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
  ndisBindGetProtocolDriver(&v16, &DestinationString, 0LL);
  if ( v16 )
    Ndis::BindStack::BuildProtocolLink(v4, &P, &v16);
  else
    P = 0LL;
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&v16, v3, v5);
  v8 = (NDIS_BIND_LINK_BASE *)P;
  if ( P )
  {
    for ( i = 0LL; ; ++i )
    {
      m_numElements = this->Protocols.m_numElements;
      if ( i >= m_numElements )
      {
        v11 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::grow(
                &this->Protocols.m_bufferSize,
                (unsigned int)(m_numElements + 1));
        if ( v11 )
        {
          wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>(
            &this->Protocols._p[this->Protocols.m_numElements].__ptr_.__value_,
            (__int64 *)&P);
          ++this->Protocols.m_numElements;
          v11 = 1;
        }
        goto LABEL_9;
      }
      if ( !Ndis::sortProtocolsByPointer((__int64)&this->Protocols._p[i], (__int64)&P) )
        break;
    }
    if ( !Ndis::sortProtocolsByPointer((__int64)&P, (__int64)&this->Protocols._p[i]) )
      goto LABEL_10;
    v11 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::insertAt(
            this,
            i,
            &P);
LABEL_9:
    if ( !v11 )
    {
      v8 = (NDIS_BIND_LINK_BASE *)P;
      goto LABEL_18;
    }
LABEL_10:
    ++this->ChangeEpoch;
    v12 = (NDIS_BIND_LINK_BASE *)P;
    P = 0LL;
    if ( v12 )
    {
      KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&v12[1], v6, v7);
      NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v12);
      ExFreePoolWithTag(v12, 0x4C745042u);
    }
    return 0LL;
  }
  else
  {
LABEL_18:
    P = 0LL;
    if ( v8 )
    {
      KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&v8[1], v6, v7);
      NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v8);
      ExFreePoolWithTag(v8, 0x4C745042u);
    }
    return 3221225626LL;
  }
}
