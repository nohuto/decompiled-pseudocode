/*
 * XREFs of ?SetInputDeliveryServer@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoInputDeliveryServerPrincipal@@@Z @ 0x180092A80
 * Callers:
 *     ?SetInputDeliveryServer@BamoInputSystemPrincipal@@UEAAXPEAVBamoInputDeliveryServerPrincipal@@@Z @ 0x18000EC90 (-SetInputDeliveryServer@BamoInputSystemPrincipal@@UEAAXPEAVBamoInputDeliveryServerPrincipal@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSetInputDeliveryServer@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoInputDeliveryServerPrincipal@@@Z @ 0x180092B40 (-LogSetInputDeliveryServer@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoInputDeliveryServ.c)
 *     ?UpdateInputDeliveryServerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18012EE14 (-UpdateInputDeliveryServerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoSt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall BamoImpl::BamoInputSystemPrincipalImpl::SetInputDeliveryServer(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        struct BamoInputDeliveryServerPrincipal *a2)
{
  __int64 v4; // rsi
  __int64 i; // rbx
  int updated; // eax
  unsigned int v7; // esi
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct BamoInputDeliveryServerPrincipal *))a2)(a2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  BamoImpl::BamoInputSystemPrincipalImpl::LogSetInputDeliveryServer(this, a2);
  for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_BYTE *)(i + 56) )
    {
      updated = BamoImpl::BamoInputSystemPrincipalImpl::UpdateInputDeliveryServerRemoteCacheStatic(
                  (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                  this);
      v7 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x273,
          (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
          (const char *)(unsigned int)updated);
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x369E,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v7,
          v8);
      }
    }
  }
}
