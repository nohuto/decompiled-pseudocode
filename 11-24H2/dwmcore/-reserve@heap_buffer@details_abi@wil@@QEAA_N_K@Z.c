/*
 * XREFs of ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18021B378
 * Callers:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180213A14 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 * Callees:
 *     memcpy_s_1 @ 0x180213A44 (memcpy_s_1.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x18021B430 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18021B6A8 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x180253850 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 */

char __fastcall wil::details_abi::heap_buffer::reserve(wil::details_abi::heap_buffer *this, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  DWORD v4; // ebp
  unsigned __int64 v5; // r8
  char *v6; // rax
  char *v7; // rsi
  rsize_t v9; // r14
  void *v10; // rdx
  wil::details *v11; // rcx
  char v12; // [rsp+40h] [rbp+8h] BYREF
  DWORD LastError; // [rsp+44h] [rbp+Ch]

  if ( *((_QWORD *)this + 2) - *(_QWORD *)this < a2 )
  {
    v12 = 0;
    v3 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    LastError = GetLastError();
    v4 = LastError;
    v6 = (char *)wil::details::ProcessHeapAlloc(0, v3, v5);
    v7 = v6;
    if ( !v6 )
    {
      SetLastError(v4);
      return 0;
    }
    v9 = *((_QWORD *)this + 1) - *(_QWORD *)this;
    memcpy_s_1(v6, v3, *(const void *const *)this, v9);
    v11 = (wil::details *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = v7;
    if ( v11 )
      wil::details::FreeProcessHeap(v11, v10);
    *(_QWORD *)this = v7;
    *((_QWORD *)this + 1) = &v7[v9];
    *((_QWORD *)this + 2) = &v7[v3];
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v12);
  }
  return 1;
}
