/*
 * XREFs of ?Initialize@HardwareCursorVisual@SystemCursors@@UEAAJXZ @ 0x1800FBF30
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006885C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18006913C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180093324 (-reset@-$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Commit@WindowsCompositionGlobals@SystemCursors@@QEAAJXZ @ 0x18015FC10 (-Commit@WindowsCompositionGlobals@SystemCursors@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall SystemCursors::HardwareCursorVisual::Initialize(SystemCursors::HardwareCursorVisual *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v10; // rcx
  int CursorController; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+20h] BYREF
  __int64 v14; // [rsp+48h] [rbp+28h] BYREF
  __int64 *v15; // [rsp+50h] [rbp+30h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 **); // [rsp+58h] [rbp+38h] BYREF

  if ( *((_BYTE *)this + 56) )
  {
    v15 = 0LL;
    wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
      &v16,
      **((_QWORD **)this + 1));
    v2 = (__int64)v15;
    v15 = 0LL;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    v3 = (**v16)(v16, &GUID_9cbd9312_070d_4588_9bf3_bbf528cf3e84, &v15);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v16);
    if ( (v3 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\cu"
                 "rsorvisuals2.cpp",
        (const char *)v3);
LABEL_19:
      wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v15);
      return v3;
    }
    v13 = 0LL;
    v4 = *v15;
    v13 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v4 + 24))(v15, *((_QWORD *)this + 6), &v13);
    v3 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\cu"
                 "rsorvisuals2.cpp",
        (const char *)(unsigned int)v5);
LABEL_18:
      wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v13);
      goto LABEL_19;
    }
    v14 = 0LL;
    v6 = (**v13)(v13, &GUID_3b3e3dcf_f20f_4a83_9bf2_7684cde07861, &v14);
    v3 = v6;
    if ( v6 < 0 )
    {
      v8 = 30LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\cu"
                 "rsorvisuals2.cpp",
        (const char *)(unsigned int)v6);
      wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v14);
      goto LABEL_18;
    }
    LOBYTE(v7) = 1;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 88LL))(v14, v7);
    v3 = v6;
    if ( v6 < 0 )
    {
      v8 = 31LL;
      goto LABEL_17;
    }
    wil::com_ptr_t<Windows::UI::Composition::IVisual,wil::err_returncode_policy>::reset((__int64 *)this + 2);
    v6 = (**v13)(v13, &GUID_117e202d_a859_4c89_873b_c2aa566788e3, (__int64 *)this + 2);
    v3 = v6;
    if ( v6 < 0 )
    {
      v8 = 34LL;
      goto LABEL_17;
    }
    if ( *((_BYTE *)this + 33) )
    {
      v6 = SystemCursors::WindowsCompositionGlobals::Commit(*((SystemCursors::WindowsCompositionGlobals **)this + 1));
      v3 = v6;
      if ( v6 < 0 )
      {
        v8 = 38LL;
        goto LABEL_17;
      }
    }
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v14);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v13);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v15);
  }
  v10 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  CursorController = MilCompositionEngine_CreateCursorController(
                       *((_QWORD *)this + 6),
                       (struct IDwmCursorController **)this + 5);
  v3 = CursorController;
  if ( CursorController < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\cursorvisuals2.cpp",
      (const char *)(unsigned int)CursorController);
    return v3;
  }
  return 0LL;
}
