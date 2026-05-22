/*
 * XREFs of ?MsgRoutingInfoToInputRoutingInfo@NonBamoInputDeliveryServer@@AEAA_NPEBUtagMsgRoutingInfo@@PEAUtagInputRoutingInfo@@@Z @ 0x18003F358
 * Callers:
 *     ?Deliver@NonBamoInputDeliveryServer@@UEAAJPEBUtagMsgRoutingInfo@@PEBX_K@Z @ 0x18003F240 (-Deliver@NonBamoInputDeliveryServer@@UEAAJPEBUtagMsgRoutingInfo@@PEBX_K@Z.c)
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x18003F480 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

bool __fastcall NonBamoInputDeliveryServer::MsgRoutingInfoToInputRoutingInfo(
        NonBamoInputDeliveryServer *this,
        const struct tagMsgRoutingInfo *a2,
        struct tagInputRoutingInfo *a3,
        const char *a4)
{
  const struct tagMsgRoutingInfo *v4; // r10
  struct tagInputRoutingInfo *v5; // r11
  __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // r9
  bool result; // al
  unsigned __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = a2;
  v5 = a3;
  if ( *(_OWORD *)a2 == 0LL && !*((_QWORD *)a2 + 2) )
  {
    v15 = *((_QWORD *)a2 + 3) - _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    if ( !v15 )
      v15 = *((_QWORD *)a2 + 4);
    if ( !v15 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xB7,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
        a4);
  }
  v7 = *((_QWORD *)this + 30);
  v8 = *((_QWORD *)this + 33) & (*((unsigned int *)a2 + 1) | ((unsigned __int64)*(unsigned int *)a2 << 32));
  v9 = *((_QWORD *)this + 28);
  v10 = 2 * v8;
  v11 = *(_QWORD *)(v7 + 8 * v10 + 8);
  if ( v11 == v9 )
  {
LABEL_7:
    v13 = 0LL;
  }
  else
  {
    v12 = *(_QWORD *)(v7 + 8 * v10);
    while ( !(unsigned __int8)operator==(v4, v11 + 16) )
    {
      if ( v13 == v12 )
        goto LABEL_7;
      v11 = *(_QWORD *)(v13 + 8);
    }
  }
  if ( !v13 || v13 == v9 )
    return 0;
  result = 1;
  *(_OWORD *)v5 = *(_OWORD *)(v13 + 56);
  *((_OWORD *)v5 + 1) = *(_OWORD *)(v13 + 72);
  *((_OWORD *)v5 + 2) = *(_OWORD *)(v13 + 88);
  return result;
}
