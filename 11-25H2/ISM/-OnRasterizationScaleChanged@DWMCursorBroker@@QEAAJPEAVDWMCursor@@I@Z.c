/*
 * XREFs of ?OnRasterizationScaleChanged@DWMCursorBroker@@QEAAJPEAVDWMCursor@@I@Z @ 0x18007CE04
 * Callers:
 *     ?OnRasterizationScaleChanged@DWMCursor@@AEAAJXZ @ 0x18007CDB4 (-OnRasterizationScaleChanged@DWMCursor@@AEAAJXZ.c)
 * Callees:
 *     ?SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z @ 0x18007CE9C (-SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DWMCursorBroker::OnRasterizationScaleChanged(DWMCursorBroker *this, struct DWMCursor *a2, int a3)
{
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+24h] [rbp-44h]
  int v12; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char v14; // [rsp+78h] [rbp+10h] BYREF

  memset_0(&v10, 0, 0x40uLL);
  v6 = *(_QWORD *)a2;
  LOBYTE(v10) = 9;
  v11 = *(_QWORD *)(*(__int64 (__fastcall **)(struct DWMCursor *, char *))(v6 + 48))(a2, &v14);
  v12 = a3;
  v7 = DWMCursorBroker::SendAndVerifyEndpoints(this, (struct CursorMessage *)&v10);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C6,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
    (const char *)(unsigned int)v7,
    v10);
  return v8;
}
