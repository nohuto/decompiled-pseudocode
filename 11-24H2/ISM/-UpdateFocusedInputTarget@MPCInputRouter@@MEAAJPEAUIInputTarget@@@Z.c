/*
 * XREFs of ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180012D20
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012DD0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180013478 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCInputRouter_UpdateFocusedInputTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@_NPEAUIMPCInputPostProcessor@@@Z @ 0x180013604 (-MPCInputRouter_UpdateFocusedInputTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@_NPEAUIMPCInputPost.c)
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180013700 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800BC5E8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x1800FECE4 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCInputRouter::UpdateFocusedInputTarget(MPCInputRouter *this, struct IInputTarget *a2)
{
  struct IMPCInputPostProcessor *v4; // rbp
  char *v5; // rsi
  char v6; // al
  ISMTracing *v7; // rcx
  int updated; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct IMPCInputPostProcessor *)*((_QWORD *)this + 84);
  v5 = (char *)this + 720;
  if ( ISMTracing::IsEnabled((unsigned __int8)this, (unsigned __int64)a2) )
  {
    ISMTracing::Instance();
    v6 = std::_Atomic_storage<bool,1>::load(v5);
    ISMTracing::MPCInputRouter_UpdateFocusedInputTarget_(v7, a2, v6, v4);
  }
  if ( (unsigned __int8)std::_Atomic_storage<bool,1>::load(v5) )
    MPCInputRouter::UpdateFocusedInputTarget3D(this, a2);
  updated = DWMInputRouter::UpdateFocusedInputTarget(this, a2);
  if ( updated < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xF9,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)updated,
      v10);
  return 0LL;
}
