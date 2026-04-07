/*
 * XREFs of ?GetCaptureWindowExclusionList@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_BUILDCAPTUREWINDOWVISUALEXCLUSIONLIST@@AEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1800EFF2C
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800915A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180070218 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009AB7C (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVCVisualProxy@@@?$vector@PEAVCVisualProxy@@V?$allocator@PEAVCVisualProxy@@@std@@@std@@AEAAPEAPEAVCVisualProxy@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800ABDC8 (--$_Emplace_reallocate@AEBQEAVCVisualProxy@@@-$vector@PEAVCVisualProxy@@V-$allocator@PEAVCVisual.c)
 *     ??$_Reallocate@$0A@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@AEAAXAEA_K@Z @ 0x1800ED450 (--$_Reallocate@$0A@@-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@AEAAXAEA_K@Z.c)
 *     ULongLongMult @ 0x1800F466C (ULongLongMult.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowList::GetCaptureWindowExclusionList(void *a1, __int64 a2, __int64 a3)
{
  void *v5; // rbx
  HANDLE CurrentProcess; // rax
  NTSTATUS v7; // eax
  ULONGLONG v8; // rdx
  unsigned int v9; // ebx
  void *v11; // rdx
  _QWORD *v12; // rbx
  __int64 v13; // rsi
  ULONGLONG v14; // rcx
  ULONGLONG *v15; // rdx
  HANDLE v16; // rax
  PVOID v17; // rbx
  HANDLE v18; // rax
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-20h] BYREF
  union _LARGE_INTEGER SectionOffset; // [rsp+58h] [rbp-18h] BYREF
  PVOID *p_BaseAddress; // [rsp+60h] [rbp-10h]
  char v22; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  PVOID BaseAddress; // [rsp+A0h] [rbp+30h] BYREF
  void *v25; // [rsp+A8h] [rbp+38h] BYREF
  ULONGLONG pullResult; // [rsp+B8h] [rbp+48h] BYREF

  BaseAddress = a1;
  v25 = *(void **)(a2 + 12);
  v5 = v25;
  SectionOffset.QuadPart = 0LL;
  ViewSize = 0LL;
  BaseAddress = 0LL;
  CurrentProcess = GetCurrentProcess();
  v7 = NtMapViewOfSection(v5, CurrentProcess, &BaseAddress, 0LL, 0LL, &SectionOffset, &ViewSize, ViewUnmap, 0, 2u);
  if ( v7 >= 0 )
  {
    p_BaseAddress = &BaseAddress;
    v22 = 1;
    pullResult = 0LL;
    if ( ULongLongMult(*(unsigned int *)(a2 + 20), v8, &pullResult) < 0 || ViewSize < pullResult )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2206,
        (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)0x80070057LL);
      v17 = BaseAddress;
      if ( BaseAddress )
      {
        v18 = GetCurrentProcess();
        NtUnmapViewOfSection(v18, v17);
      }
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v25);
      return 2147942487LL;
    }
    else
    {
      v11 = *(void **)a3;
      if ( *(_QWORD *)a3 != *(_QWORD *)(a3 + 8) )
        *(_QWORD *)(a3 + 8) = v11;
      pullResult = *(unsigned int *)(a2 + 20);
      if ( pullResult > (__int64)(*(_QWORD *)(a3 + 16) - (_QWORD)v11) >> 3 )
        std::vector<HWND__ *>::_Reallocate<0>(a3, &pullResult);
      v12 = BaseAddress;
      v13 = 0LL;
      if ( *(_DWORD *)(a2 + 20) )
      {
        do
        {
          v14 = v12[v13];
          pullResult = v14;
          v15 = *(ULONGLONG **)(a3 + 8);
          if ( v15 == *(ULONGLONG **)(a3 + 16) )
          {
            std::vector<CVisualProxy *>::_Emplace_reallocate<CVisualProxy * const &>(
              (void **)a3,
              (__int64)v15,
              &pullResult);
          }
          else
          {
            *v15 = v14;
            *(_QWORD *)(a3 + 8) += 8LL;
          }
          v13 = (unsigned int)(v13 + 1);
        }
        while ( (unsigned int)v13 < *(_DWORD *)(a2 + 20) );
        v12 = BaseAddress;
      }
      if ( v12 )
      {
        v16 = GetCurrentProcess();
        NtUnmapViewOfSection(v16, v12);
      }
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v25);
      return 0LL;
    }
  }
  else
  {
    v9 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x21F8,
           (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
           (const char *)(unsigned int)v7);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v25);
    return v9;
  }
}
