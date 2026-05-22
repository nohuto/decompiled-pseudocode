/*
 * XREFs of ?RequestGripStatusForPanel@HeatGripServiceHost@@MEAAJPEAVBamoHeatGripServiceStub@@AEBUHeatPanelInfo@@@Z @ 0x180192020
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?GetGripStatus@ISMHeatFrameworkHost@@QEAAJPEBUHeatPanelInfo@@PEAUHeatGripStatus@@@Z @ 0x180193890 (-GetGripStatus@ISMHeatFrameworkHost@@QEAAJPEBUHeatPanelInfo@@PEAUHeatGripStatus@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HeatGripServiceHost::RequestGripStatusForPanel(
        HeatGripServiceHost *this,
        struct BamoHeatGripServiceStub *a2,
        const struct HeatPanelInfo *a3)
{
  ISMHeatFrameworkHost *v3; // rcx
  int v6; // eax
  int v7; // eax
  unsigned int v8; // ebx
  int v10[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (ISMHeatFrameworkHost *)*((_QWORD *)this + 7);
  v11 = 0LL;
  *(_OWORD *)v10 = 0LL;
  if ( v3 && !(unsigned int)ISMHeatFrameworkHost::GetGripStatus(v3, a3, (struct HeatGripStatus *)&v11) )
  {
    v6 = *((_DWORD *)a3 + 2);
    *(_QWORD *)&v10[1] = *(_QWORD *)a3;
    v10[3] = v6;
    LOBYTE(v10[0]) = 1;
  }
  v7 = (*(__int64 (__fastcall **)(char *, int *))(*((_QWORD *)a2 + 1) + 24LL))((char *)a2 + 8, v10);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2C,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatgripservicehost.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
