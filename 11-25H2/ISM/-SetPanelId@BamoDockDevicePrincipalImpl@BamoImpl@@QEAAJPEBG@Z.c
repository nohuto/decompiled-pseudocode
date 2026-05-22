/*
 * XREFs of ?SetPanelId@BamoDockDevicePrincipalImpl@BamoImpl@@QEAAJPEBG@Z @ 0x18018009C
 * Callers:
 *     ?SetPanelId@BamoDockDevicePrincipal@@UEAAJPEBG@Z @ 0x180180050 (-SetPanelId@BamoDockDevicePrincipal@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z @ 0x180113B8C (-CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z.c)
 *     ?LogSetPanelId@BamoDockDevicePrincipalImpl@BamoImpl@@AEAAXPEBG@Z @ 0x18017DEF8 (-LogSetPanelId@BamoDockDevicePrincipalImpl@BamoImpl@@AEAAXPEBG@Z.c)
 *     ?UpdatePanelIdRemoteCacheStatic@BamoDockDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1801809F8 (-UpdatePanelIdRemoteCacheStatic@BamoDockDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Micro.c)
 */

__int64 __fastcall BamoImpl::BamoDockDevicePrincipalImpl::SetPanelId(
        BamoImpl::BamoDockDevicePrincipalImpl *this,
        Microsoft::BamoImpl::Util *a2,
        unsigned __int16 **a3)
{
  int v5; // eax
  const struct std::nothrow_t *v6; // rdx
  unsigned int v7; // ebx
  void *v9; // rcx
  __int64 i; // rbx
  int updated; // eax
  unsigned int v12; // esi
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+18h] BYREF

  v15 = 0LL;
  v5 = Microsoft::BamoImpl::Util::CopyString(a2, (unsigned __int16 *)&v15, a3);
  v7 = v5;
  if ( v5 >= 0 )
  {
    v9 = (void *)*((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = v15;
    if ( v9 )
      operator delete(v9, v6);
    BamoImpl::BamoDockDevicePrincipalImpl::LogSetPanelId(this, (const unsigned __int16 *)a2);
    for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 40) )
    {
      if ( *(_BYTE *)(i + 56) )
      {
        updated = BamoImpl::BamoDockDevicePrincipalImpl::UpdatePanelIdRemoteCacheStatic(
                    (struct Microsoft::BamoImpl::BamoStubImpl *)i,
                    this);
        v12 = updated;
        if ( updated < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x273,
            (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)updated);
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xA9B5,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
            (const char *)v12,
            v13);
        }
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAB9B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v5);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA9B2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)v7);
    return v7;
  }
}
