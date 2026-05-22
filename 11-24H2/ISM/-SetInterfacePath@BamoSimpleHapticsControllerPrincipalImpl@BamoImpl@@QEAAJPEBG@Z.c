/*
 * XREFs of ?SetInterfacePath@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAJPEBG@Z @ 0x18018705C
 * Callers:
 *     ?SetInterfacePath@BamoSimpleHapticsControllerPrincipal@@UEAAJPEBG@Z @ 0x180187010 (-SetInterfacePath@BamoSimpleHapticsControllerPrincipal@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$reset@PEAG@?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@wistd@@@wistd@@QEAAXPEAG@Z @ 0x1801141AC (--$reset@PEAG@-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@wistd@@@wistd@@QEAAXPEAG@Z.c)
 *     ?CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z @ 0x1801156DC (-CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z.c)
 *     ?LogSetInterfacePath@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEBG@Z @ 0x180185E00 (-LogSetInterfacePath@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEBG@Z.c)
 *     ?UpdateInterfacePathRemoteCacheStatic@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1801877C4 (-UpdateInterfacePathRemoteCacheStatic@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@CAJPEAV.c)
 */

__int64 __fastcall BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::SetInterfacePath(
        void **this,
        Microsoft::BamoImpl::Util *a2,
        unsigned __int16 **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  struct Microsoft::BamoImpl::BamoStubImpl *i; // rbx
  int updated; // eax
  unsigned int v10; // esi
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  const struct std::nothrow_t *v13; // [rsp+40h] [rbp+18h] BYREF

  v13 = 0LL;
  v5 = Microsoft::BamoImpl::Util::CopyString(a2, (unsigned __int16 *)&v13, a3);
  v6 = v5;
  if ( v5 >= 0 )
  {
    wistd::unique_ptr<unsigned short [0],wistd::default_delete<unsigned short [0]>>::reset<unsigned short *>(
      this + 6,
      v13);
    BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::LogSetInterfacePath(
      (BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *)this,
      (const unsigned __int16 *)a2);
    for ( i = (struct Microsoft::BamoImpl::BamoStubImpl *)this[4];
          i;
          i = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)i + 5) )
    {
      if ( *((_BYTE *)i + 56) )
      {
        updated = BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::UpdateInterfacePathRemoteCacheStatic(
                    i,
                    (struct BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *)this);
        v10 = updated;
        if ( updated < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x273,
            (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)updated);
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x8879,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
            (const char *)v10,
            v11);
        }
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8C7B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v5);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8876,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)v6);
    return v6;
  }
}
