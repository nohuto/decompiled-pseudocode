/*
 * XREFs of ?SetGestureServices@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoGestureServicesPrincipal@@@Z @ 0x1800914E8
 * Callers:
 *     ?SetGestureServices@BamoInputSystemPrincipal@@UEAAXPEAVBamoGestureServicesPrincipal@@@Z @ 0x1800914A0 (-SetGestureServices@BamoInputSystemPrincipal@@UEAAXPEAVBamoGestureServicesPrincipal@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSetGestureServices@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoGestureServicesPrincipal@@@Z @ 0x1800915A8 (-LogSetGestureServices@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoGestureServicesPrinci.c)
 *     ?UpdateGestureServicesRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18012ECB0 (-UpdateGestureServicesRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubIm.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall BamoImpl::BamoInputSystemPrincipalImpl::SetGestureServices(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        struct BamoGestureServicesPrincipal *a2)
{
  __int64 v4; // rsi
  __int64 i; // rbx
  int updated; // eax
  unsigned int v7; // esi
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct BamoGestureServicesPrincipal *))a2)(a2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  BamoImpl::BamoInputSystemPrincipalImpl::LogSetGestureServices(this, a2);
  for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_BYTE *)(i + 56) )
    {
      updated = BamoImpl::BamoInputSystemPrincipalImpl::UpdateGestureServicesRemoteCacheStatic(
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
          (void *)0x367A,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v7,
          v8);
      }
    }
  }
}
