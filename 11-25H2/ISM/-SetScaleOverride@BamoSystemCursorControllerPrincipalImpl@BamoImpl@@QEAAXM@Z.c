/*
 * XREFs of ?SetScaleOverride@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAXM@Z @ 0x180092DEC
 * Callers:
 *     ?SetScaleOverride@BamoSystemCursorControllerPrincipal@@UEAAXM@Z @ 0x180092DA0 (-SetScaleOverride@BamoSystemCursorControllerPrincipal@@UEAAXM@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogSetScaleOverride@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@AEAAXM@Z @ 0x180092E78 (-LogSetScaleOverride@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@AEAAXM@Z.c)
 *     ?UpdateScaleOverrideRemoteCacheStatic@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800F64D8 (-UpdateScaleOverrideRemoteCacheStatic@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@CAJPEAVB.c)
 */

void __fastcall BamoImpl::BamoSystemCursorControllerPrincipalImpl::SetScaleOverride(
        BamoImpl::BamoSystemCursorControllerPrincipalImpl *this,
        float a2)
{
  __int64 i; // rbx
  int updated; // eax
  unsigned int v5; // esi
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((float *)this + 10) = a2;
  BamoImpl::BamoSystemCursorControllerPrincipalImpl::LogSetScaleOverride(this, a2);
  for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_BYTE *)(i + 56) )
    {
      updated = BamoImpl::BamoSystemCursorControllerPrincipalImpl::UpdateScaleOverrideRemoteCacheStatic(
                  (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                  this);
      v5 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x273,
          (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
          (const char *)(unsigned int)updated);
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x8D07,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v5,
          v6);
      }
    }
  }
}
