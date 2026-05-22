/*
 * XREFs of ?Create@DockProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801B06A0
 * Callers:
 *     <none>
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C070 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VDockProcessor@@U?$default_delete@VDockProcessor@@@std@@@std@@QEAA@XZ @ 0x1801B05C0 (--1-$unique_ptr@VDockProcessor@@U-$default_delete@VDockProcessor@@@std@@@std@@QEAA@XZ.c)
 *     ?Initialize@DockProcessor@@IEAAJXZ @ 0x1801B07B8 (-Initialize@DockProcessor@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DockProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  DockProcessor *v4; // rax
  DockProcessor *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DockProcessor *v12; // [rsp+40h] [rbp+18h] BYREF
  DockProcessor *v13; // [rsp+48h] [rbp+20h]

  v12 = 0LL;
  v4 = (DockProcessor *)RefCountedObject::operator new(0x50uLL);
  v5 = v4;
  v13 = v4;
  if ( v4 )
  {
    v6 = *((_QWORD *)a1 + 1);
    v7 = *(_QWORD *)a1;
    *((_QWORD *)v4 + 2) = &RefCountedObject::`vftable';
    *((_DWORD *)v4 + 6) = 1;
    *((_QWORD *)v4 + 1) = &NonPointerProcessor::`vftable'{for `IInputFocusListener'};
    *((_QWORD *)v4 + 2) = &NonPointerProcessor::`vftable'{for `RefCountedObject'};
    *((_QWORD *)v4 + 6) = 0LL;
    *((_QWORD *)v4 + 7) = 0LL;
    *((_BYTE *)v4 + 64) = 0;
    *((_QWORD *)v4 + 5) = v7;
    *((_QWORD *)v4 + 4) = v6;
    *(_QWORD *)v4 = &DockProcessor::`vftable'{for `IInputProcessor'};
    *((_QWORD *)v4 + 1) = &DockProcessor::`vftable'{for `IInputFocusListener'};
    *((_QWORD *)v4 + 2) = &DockProcessor::`vftable'{for `RefCountedObject'};
    *((_QWORD *)v4 + 9) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  v12 = v5;
  v8 = DockProcessor::Initialize(v5);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v12 = 0LL;
    *a2 = v5;
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\lib\\dockprocessor.cpp",
      (const char *)(unsigned int)v8);
  }
  std::unique_ptr<DockProcessor>::~unique_ptr<DockProcessor>(&v12);
  return v9;
}
