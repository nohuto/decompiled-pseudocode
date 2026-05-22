/*
 * XREFs of ?OnDeviceAttach@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x18003B180
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@XPEAVInputContext@@@std@@QEBAXPEAVInputContext@@@Z @ 0x180036178 (--R-$_Func_class@XPEAVInputContext@@@std@@QEBAXPEAVInputContext@@@Z.c)
 *     ?OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z @ 0x18003B294 (-OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall DWMInputRouter::OnDeviceAttach(__int64 **this, struct DeviceInfo *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 *v7; // rdi
  __int64 *i; // rbx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = DWMInputRouter::OnDeviceChange((DWMInputRouter *)this, a2, 1);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = this[65];
    for ( i = this[64]; i != v7; ++i )
      std::_Func_class<void,InputContext *>::operator()(*i, (__int64)a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v4,
      v9);
    return v5;
  }
}
