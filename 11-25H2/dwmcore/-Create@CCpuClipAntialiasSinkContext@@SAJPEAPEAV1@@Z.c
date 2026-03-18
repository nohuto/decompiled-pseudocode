/*
 * XREFs of ?Create@CCpuClipAntialiasSinkContext@@SAJPEAPEAV1@@Z @ 0x180127668
 * Callers:
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x1800A6FE0 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180127840 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCpuClipAntialiasSinkContext::Create(struct CCpuClipAntialiasSinkContext **a1)
{
  int Current; // eax
  struct CThreadContext *v3; // rcx
  _QWORD *v4; // rbx
  int v5; // edx
  HANDLE ProcessHeap; // rax
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  Current = CThreadContext::GetCurrent(&v9);
  if ( Current < 0 )
    ModuleFailFastForHRESULT(Current, retaddr);
  v3 = v9;
  v4 = 0LL;
  v5 = *((_DWORD *)v9 + 45);
  if ( v5 )
  {
    v4 = (_QWORD *)*((_QWORD *)v9 + 23);
    *((_QWORD *)v9 + 23) = *v4;
    *((_DWORD *)v3 + 45) = v5 - 1;
  }
  if ( v4 || (ProcessHeap = GetProcessHeap(), (v4 = HeapAlloc(ProcessHeap, 0, 0x3D0uLL)) != 0LL) )
  {
    memset_0(v4, 0, 0x3D0uLL);
    *v4 = &CCpuClipAntialiasSinkContext::`vftable';
    v4[4] = v4 + 113;
    v4[2] = v4 + 5;
    v4[3] = v4 + 5;
    *((_DWORD *)v4 + 242) = 0;
    (*(void (__fastcall **)(_QWORD *))*v4)(v4);
    result = 0LL;
    *a1 = (struct CCpuClipAntialiasSinkContext *)v4;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)0x11,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  return result;
}
