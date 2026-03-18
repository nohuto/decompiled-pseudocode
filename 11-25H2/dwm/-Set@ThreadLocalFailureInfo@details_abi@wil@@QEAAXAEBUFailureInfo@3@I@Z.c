/*
 * XREFs of ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x14000AD10
 * Callers:
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x14000AFBC (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 * Callees:
 *     memset_0 @ 0x140005D98 (memset_0.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x140006CF0 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x140009B7C (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBD@Z @ 0x14000AB68 (-ResultStringSize@details@wil@@YA_KPEBD@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBG@Z @ 0x14000AB94 (-ResultStringSize@details@wil@@YA_KPEBG@Z.c)
 *     memcpy_s @ 0x14000C48C (memcpy_s.c)
 */

void __fastcall wil::details_abi::ThreadLocalFailureInfo::Set(
        wil::details_abi::ThreadLocalFailureInfo *this,
        const struct wil::FailureInfo *a2,
        int a3)
{
  char **v3; // rbx
  char **v4; // rsi
  __int64 v7; // r14
  const char *v8; // rdx
  __int64 v9; // r14
  const char *v10; // rdx
  SIZE_T v11; // r14
  SIZE_T *v12; // rdi
  LPVOID v13; // r15
  void *v14; // rbx
  HANDLE ProcessHeap; // rax
  char *v16; // rcx
  const char *v17; // rdi
  char *v18; // rax
  char *v19; // rax
  const unsigned __int16 *v20; // rdx
  wil::details *v21; // rcx
  char *v22; // rbx
  rsize_t v23; // rax
  const void *v24; // rcx
  rsize_t v25; // rbp

  *((_DWORD *)this + 1) = a3;
  v3 = (char **)((char *)this + 32);
  v4 = (char **)((char *)this + 56);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_QWORD *)this + 2) = 0LL;
  *((_WORD *)this + 12) = *((_WORD *)a2 + 32);
  *((_BYTE *)this + 26) = *(_BYTE *)a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 17);
  *((_QWORD *)this + 6) = *((_QWORD *)a2 + 18);
  *((_QWORD *)this + 7) = 0LL;
  v7 = wil::details::ResultStringSize(*((wil::details **)a2 + 3), (const unsigned __int16 *)a2);
  v9 = wil::details::ResultStringSize(*((wil::details **)a2 + 7), v8) + v7;
  v11 = wil::details::ResultStringSize(*((wil::details **)a2 + 16), v10) + v9;
  v12 = (SIZE_T *)((char *)this + 72);
  if ( !*((_QWORD *)this + 8) || *v12 < v11 )
  {
    v13 = wil::details::ProcessHeapAlloc(8u, v11);
    if ( v13 )
    {
      v14 = (void *)*((_QWORD *)this + 8);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v14);
      *((_QWORD *)this + 8) = v13;
      v3 = (char **)((char *)this + 32);
      *v12 = v11;
    }
  }
  v16 = (char *)*((_QWORD *)this + 8);
  if ( v16 )
  {
    v17 = &v16[*v12];
    v18 = wil::details::WriteResultString<char const *>(v16, v17, *((wil::details **)a2 + 7), (char **)this + 2);
    v19 = wil::details::WriteResultString<char const *>(v18, v17, *((wil::details **)a2 + 16), v3);
    v21 = (wil::details *)*((_QWORD *)a2 + 3);
    v22 = v19;
    if ( v19 != v17
      && v21
      && *(_WORD *)v21
      && (v23 = wil::details::ResultStringSize(v21, v20), v25 = v23, v17 - v22 >= v23) )
    {
      memcpy_s(v22, v17 - v22, v24, v23);
      if ( v4 )
        *v4 = v22;
      v22 += v25;
    }
    else if ( v4 )
    {
      *v4 = 0LL;
    }
    memset_0(v22, 0, v17 - v22);
  }
}
