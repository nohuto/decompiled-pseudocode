/*
 * XREFs of ?Deliver@NonBamoInputDeliveryServer@@UEAAJPEBUtagMsgRoutingInfo@@PEBX_K@Z @ 0x18003F240
 * Callers:
 *     <none>
 * Callees:
 *     ?MsgRoutingInfoToInputRoutingInfo@NonBamoInputDeliveryServer@@AEAA_NPEBUtagMsgRoutingInfo@@PEAUtagInputRoutingInfo@@@Z @ 0x18003F358 (-MsgRoutingInfoToInputRoutingInfo@NonBamoInputDeliveryServer@@AEAA_NPEBUtagMsgRoutingInfo@@PEAUt.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall NonBamoInputDeliveryServer::Deliver(
        NonBamoInputDeliveryServer *this,
        const struct tagMsgRoutingInfo *a2,
        const void *a3,
        int a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  _DWORD v10[14]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  memset(v10, 0, 48);
  if ( !NonBamoInputDeliveryServer::MsgRoutingInfoToInputRoutingInfo(this, a2, (struct tagInputRoutingInfo *)v10) )
    return 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, const void *))(**((_QWORD **)this + 8) + 64LL))(
         *((_QWORD *)this + 8),
         v10[0],
         v10[1],
         a3);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD1,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
    (const char *)(unsigned int)v7,
    a4);
  return v8;
}
