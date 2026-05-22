/*
 * XREFs of ?SetSystemCursorController@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoSystemCursorControllerPrincipal@@@Z @ 0x180090CC8
 * Callers:
 *     ?SetSystemCursorController@BamoInputSystemPrincipal@@UEAAXPEAVBamoSystemCursorControllerPrincipal@@@Z @ 0x180090C80 (-SetSystemCursorController@BamoInputSystemPrincipal@@UEAAXPEAVBamoSystemCursorControllerPrincipa.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSetSystemCursorController@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoSystemCursorControllerPrincipal@@@Z @ 0x180090D90 (-LogSetSystemCursorController@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoSystemCursorCo.c)
 *     ?UpdateSystemCursorControllerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18012CE7C (-UpdateSystemCursorControllerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBam.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoImpl::BamoInputSystemPrincipalImpl::SetSystemCursorController(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        struct BamoSystemCursorControllerPrincipal *a2)
{
  __int64 v4; // rsi
  __int64 i; // rbx
  int updated; // eax
  unsigned int v7; // esi
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 18);
  *((_QWORD *)this + 18) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct BamoSystemCursorControllerPrincipal *))a2)(a2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  BamoImpl::BamoInputSystemPrincipalImpl::LogSetSystemCursorController(this, a2);
  for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_BYTE *)(i + 56) )
    {
      updated = BamoImpl::BamoInputSystemPrincipalImpl::UpdateSystemCursorControllerRemoteCacheStatic(
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
          (void *)0x2BA2,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v7,
          v8);
      }
    }
  }
}
