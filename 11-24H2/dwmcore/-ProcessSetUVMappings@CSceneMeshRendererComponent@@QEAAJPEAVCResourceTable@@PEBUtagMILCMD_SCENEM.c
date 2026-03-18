/*
 * XREFs of ?ProcessSetUVMappings@CSceneMeshRendererComponent@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENEMESHRENDERERCOMPONENT_SETUVMAPPINGS@@PEBXI@Z @ 0x1802A4458
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180043280 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?SetOrAppendUVMappings@CSceneMeshRendererComponent@@QEAAJAEBV?$span@$$CBUSceneMeshMaterialAttributeData@@$0?0@gsl@@_N@Z @ 0x1802A4650 (-SetOrAppendUVMappings@CSceneMeshRendererComponent@@QEAAJAEBV-$span@$$CBUSceneMeshMaterialAttrib.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSceneMeshRendererComponent::ProcessSetUVMappings(
        CSceneMeshRendererComponent *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SCENEMESHRENDERERCOMPONENT_SETUVMAPPINGS *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v5; // eax
  __int64 v9; // r8
  int appended; // ebx
  __int64 v11; // rdx
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = *((_DWORD *)a3 + 3);
  if ( v5 != a5 || (a5 & 7) != 0 )
  {
    appended = -2003303421;
    v11 = 159LL;
  }
  else
  {
    gsl::details::extent_type<-1>::extent_type<-1>(v13, (unsigned __int64)v5 >> 3);
    v13[1] = a4;
    if ( v13[0] == -1LL || !a4 && v13[0] )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    LOBYTE(v9) = *((_BYTE *)a3 + 8);
    appended = CSceneMeshRendererComponent::SetOrAppendUVMappings(this, v13, v9);
    if ( appended >= 0 )
      return 0LL;
    v11 = 164LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scenemeshrenderercomponent.cpp",
    (const char *)(unsigned int)appended);
  return (unsigned int)appended;
}
