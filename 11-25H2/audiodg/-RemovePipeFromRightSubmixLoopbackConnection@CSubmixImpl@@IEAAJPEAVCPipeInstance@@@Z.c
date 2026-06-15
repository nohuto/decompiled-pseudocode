/*
 * XREFs of ?RemovePipeFromRightSubmixLoopbackConnection@CSubmixImpl@@IEAAJPEAVCPipeInstance@@@Z @ 0x14004CF64
 * Callers:
 *     ?RemovePipeFromLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x14006EB30 (-RemovePipeFromLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSubmixImpl::RemovePipeFromRightSubmixLoopbackConnection(
        CSubmixImpl *this,
        struct CPipeInstance *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 38);
  if ( v3 )
  {
    v9 = 0LL;
    v4 = (**v3)(v3, &GUID_57386a31_7482_4b2f_89c9_c3dcf849c66d, &v9);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x399,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v4);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      return v5;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, struct CPipeInstance *))(*(_QWORD *)v9 + 168LL))(v9, a2);
    v5 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x39B,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v7);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v9);
      return v5;
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v9);
  }
  return 0LL;
}
