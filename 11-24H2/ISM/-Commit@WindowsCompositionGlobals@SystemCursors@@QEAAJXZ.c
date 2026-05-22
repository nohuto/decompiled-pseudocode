/*
 * XREFs of ?Commit@WindowsCompositionGlobals@SystemCursors@@QEAAJXZ @ 0x18015FC10
 * Callers:
 *     ?Initialize@HardwareCursorVisual@SystemCursors@@UEAAJXZ @ 0x1800FBF30 (-Initialize@HardwareCursorVisual@SystemCursors@@UEAAJXZ.c)
 *     ?SetVisible@CompositionVisual@SystemCursors@@UEAAJ_N@Z @ 0x18015FEF0 (-SetVisible@CompositionVisual@SystemCursors@@UEAAJ_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18006913C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemCursors::WindowsCompositionGlobals::Commit(SystemCursors::WindowsCompositionGlobals *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v1 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this)(
         *(_QWORD *)this,
         &GUID_c37ea93a_e7aa_450d_b16f_9746cb0407f3,
         &v6);
  v2 = v1;
  if ( v1 >= 0 )
  {
    v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
    v2 = v1;
    if ( v1 >= 0 )
    {
      v2 = 0;
      goto LABEL_7;
    }
    v3 = 159LL;
  }
  else
  {
    v3 = 158LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\systemcursorservice\\lib\\cursorwc.cpp",
    (const char *)(unsigned int)v1);
LABEL_7:
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v6);
  return v2;
}
