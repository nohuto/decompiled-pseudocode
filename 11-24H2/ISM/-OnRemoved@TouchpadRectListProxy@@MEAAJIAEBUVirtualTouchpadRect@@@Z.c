/*
 * XREFs of ?OnRemoved@TouchpadRectListProxy@@MEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x18013B530
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ @ 0x1801A12E8 (-GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ.c)
 *     ?OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z @ 0x1801A14C4 (-OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z.c)
 */

__int64 __fastcall TouchpadRectListProxy::OnRemoved(
        TouchpadRectListProxy *this,
        __int64 a2,
        const struct VirtualTouchpadRect *a3)
{
  VirtualTouchpadContextProvider *Instance; // rax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Instance = VirtualTouchpadContextProvider::GetInstance();
  v5 = VirtualTouchpadContextProvider::OnTouchpadRemoved(Instance, *(_QWORD *)a3);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x26,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\systemcontext\\endpoint\\touchpadrectlistproxy.cpp",
      (const char *)(unsigned int)v5);
  return 0LL;
}
