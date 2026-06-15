/*
 * XREFs of ?InitializeCommonSpatialTechInfo@AtmosCheck@@AEAAJXZ @ 0x1800497A0
 * Callers:
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x180150BEC (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A320 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 */

__int64 __fastcall AtmosCheck::InitializeCommonSpatialTechInfo(AtmosCheck *this)
{
  int v2; // ebp
  GUID *v3; // r14
  GUID *v4; // r15
  LPOLESTR *v5; // rbx
  HRESULT v6; // eax
  unsigned int v7; // ebx
  GUID v8; // xmm0
  unsigned int v10; // ecx
  char *v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_BYTE *)this + 96) )
  {
    v2 = 0;
    v3 = &AtmosCheck::s_spatialSubtypes;
    v4 = (GUID *)((char *)this + 276);
    while ( (unsigned __int64)v2 < 7 )
    {
      v5 = (LPOLESTR *)((char *)this + 72 * v2);
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        v5 + 37,
        0LL);
      v6 = StringFromCLSID(&AtmosCheck::s_spatialSubtypes + v2, v5 + 37);
      v7 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB6D,
          (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)v6);
        return v7;
      }
      v8 = *v3;
      ++v2;
      ++v3;
      *v4 = v8;
      v4 = (GUID *)((char *)v4 + 72);
    }
  }
  v10 = 0;
  v11 = (char *)this + 273;
  do
  {
    *(_WORD *)(v11 - 1) = 0;
    v11 += 72;
    ++v10;
  }
  while ( v10 < 7 );
  return 0LL;
}
