/*
 * XREFs of ?CreateEdgyControllerClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyControllerClientProxy@@@Z @ 0x18015418C
 * Callers:
 *     ?Materialize_BamoEdgyControllerClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18011B5B8 (-Materialize_BamoEdgyControllerClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ?GetConnection@BamoPeer@ISMBamos_AutoBamos@@QEBAPEAVBamoConnection@2@XZ @ 0x18002EFA0 (-GetConnection@BamoPeer@ISMBamos_AutoBamos@@QEBAPEAVBamoConnection@2@XZ.c)
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180079864 (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ??0EdgyControllerClientProxy@@QEAA@AEBV?$ComPtr@VEdgyControllerServer@@@WRL@Microsoft@@@Z @ 0x180153FCC (--0EdgyControllerClientProxy@@QEAA@AEBV-$ComPtr@VEdgyControllerServer@@@WRL@Microsoft@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180154528 (-InternalAddRef@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CreateEdgyControllerClientProxy(
        struct ISMBamos_AutoBamos::BamoPeer *a1,
        struct BamoEdgyControllerClientProxy **a2)
{
  struct ISMBamos_AutoBamos::BamoConnection *Connection; // rax
  __int64 v4; // rbx
  void *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  Connection = ISMBamos_AutoBamos::BamoPeer::GetConnection(a1);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)Connection + 31) + 8LL) + 72LL))(*((_QWORD *)Connection + 31) + 8LL);
  v5 = operator new(0x88uLL);
  v10 = v4;
  v6 = (__int64)v5;
  Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalAddRef(&v10, v7);
  *a2 = (struct BamoEdgyControllerClientProxy *)EdgyControllerClientProxy::EdgyControllerClientProxy(v6, &v10);
  Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(&v10);
  if ( *a2 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x19,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\server\\edgycontrol"
             "lerclientproxy.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
