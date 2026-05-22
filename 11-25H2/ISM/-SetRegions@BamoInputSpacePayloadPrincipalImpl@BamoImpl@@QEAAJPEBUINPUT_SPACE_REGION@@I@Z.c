/*
 * XREFs of ?SetRegions@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@QEAAJPEBUINPUT_SPACE_REGION@@I@Z @ 0x18013E5CC
 * Callers:
 *     ?SetRegions@BamoInputSpacePayloadPrincipal@@UEAAJPEBUINPUT_SPACE_REGION@@I@Z @ 0x18013E570 (-SetRegions@BamoInputSpacePayloadPrincipal@@UEAAJPEBUINPUT_SPACE_REGION@@I@Z.c)
 * Callees:
 *     ??$CopyArray@UINPUT_SPACE_REGION@@@Util@BamoImpl@Microsoft@@YAJPEBUINPUT_SPACE_REGION@@IPEAPEAU3@@Z @ 0x180083B14 (--$CopyArray@UINPUT_SPACE_REGION@@@Util@BamoImpl@Microsoft@@YAJPEBUINPUT_SPACE_REGION@@IPEAPEAU3.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?LogSetRegions@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@AEAAXI@Z @ 0x18013BA5C (-LogSetRegions@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@AEAAXI@Z.c)
 *     ?UpdateRegionsRemoteCacheStatic@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18013E7B8 (-UpdateRegionsRemoteCacheStatic@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl.c)
 */

__int64 __fastcall BamoImpl::BamoInputSpacePayloadPrincipalImpl::SetRegions(
        BamoImpl::BamoInputSpacePayloadPrincipalImpl *this,
        const struct INPUT_SPACE_REGION *Src,
        unsigned int a3,
        const char *a4)
{
  int v6; // eax
  const struct std::nothrow_t *v7; // rdx
  unsigned int v8; // esi
  void *v10; // rcx
  __int64 i; // rbx
  int updated; // eax
  unsigned int v13; // esi
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v16; // [rsp+48h] [rbp+20h] BYREF

  v16 = 0LL;
  v6 = Microsoft::BamoImpl::Util::CopyArray<INPUT_SPACE_REGION>(Src, a3, &v16, a4);
  v8 = v6;
  if ( v6 >= 0 )
  {
    v10 = (void *)*((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = v16;
    if ( v10 )
      operator delete(v10, v7);
    *((_DWORD *)this + 16) = a3;
    BamoImpl::BamoInputSpacePayloadPrincipalImpl::LogSetRegions(this);
    for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 40) )
    {
      if ( *(_BYTE *)(i + 56) )
      {
        updated = BamoImpl::BamoInputSpacePayloadPrincipalImpl::UpdateRegionsRemoteCacheStatic(
                    (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                    this);
        v13 = updated;
        if ( updated < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x273,
            (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)updated);
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x277A,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
            (const char *)v13,
            v14);
        }
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28FA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v6);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2777,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)v8);
    return v8;
  }
}
