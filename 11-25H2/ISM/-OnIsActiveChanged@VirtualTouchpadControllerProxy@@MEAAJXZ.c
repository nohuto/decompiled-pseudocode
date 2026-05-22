/*
 * XREFs of ?OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180133A60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ @ 0x180077490 (-GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009B5DC (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?ServerIsActiveChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBX_N@Z @ 0x180134764 (-ServerIsActiveChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBX_N@Z.c)
 *     ?GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ @ 0x180199CF8 (-GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ.c)
 *     ?OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x180199D8C (-OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 *     ?OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z @ 0x180199ED4 (-OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VirtualTouchpadControllerProxy::OnIsActiveChanged(VirtualTouchpadControllerProxy *this)
{
  bool TouchEnabled; // al
  VirtualTouchpadContextProvider *Instance; // rax
  bool v4; // zf
  int v5; // ebx
  __int64 v6; // rdx
  VirtualTouchpadContextProvider *v8; // rax
  int v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  TouchEnabled = BamoShellGesturesClientProxy::GetTouchEnabled((VirtualTouchpadControllerProxy *)((char *)this + 8));
  InputTraceLogging::VirtualTouchpad::ServerIsActiveChanged(this, TouchEnabled);
  if ( *((_BYTE *)this + 228) )
  {
    if ( BamoShellGesturesClientProxy::GetTouchEnabled((VirtualTouchpadControllerProxy *)((char *)this + 8)) )
    {
      Instance = VirtualTouchpadContextProvider::GetInstance();
      v4 = *((_BYTE *)this + 228) == 0;
      *(_QWORD *)v9 = this;
      if ( v4 )
        std::_Throw_bad_optional_access();
      v10 = *(_OWORD *)((char *)this + 212);
      v5 = VirtualTouchpadContextProvider::OnTouchpadAdded(Instance, (const struct VirtualTouchpadRect *)v9);
      if ( v5 < 0 )
      {
        v6 = 182LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v6,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\virtualtouchpadc"
                   "ontroller\\server\\virtualtouchpadcontrollerproxy.cpp",
          (const char *)(unsigned int)v5);
        return (unsigned int)v5;
      }
    }
    else
    {
      v8 = VirtualTouchpadContextProvider::GetInstance();
      v5 = VirtualTouchpadContextProvider::OnTouchpadRemoved(v8, (unsigned __int64)this);
      if ( v5 < 0 )
      {
        v6 = 188LL;
        goto LABEL_7;
      }
    }
  }
  return 0LL;
}
