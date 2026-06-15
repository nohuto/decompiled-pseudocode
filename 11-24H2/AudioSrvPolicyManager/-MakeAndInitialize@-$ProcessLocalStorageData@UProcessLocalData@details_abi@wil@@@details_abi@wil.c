/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x18002405C
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180022B9C (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180010AC0 (--3@YAXPEAX@Z.c)
 *     memset_0 @ 0x1800212A8 (memset_0.c)
 *     ??$?0$00X@?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@PEAX@Z @ 0x180021ECC (--$-0$00X@-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@PEAX@Z.c)
 *     ??$?8XUprocess_heap_deleter@wil@@@wistd@@YA_NAEBV?$unique_ptr@XUprocess_heap_deleter@wil@@@0@$$T@Z @ 0x180021EDC (--$-8XUprocess_heap_deleter@wil@@@wistd@@YA_NAEBV-$unique_ptr@XUprocess_heap_deleter@wil@@@0@$$T.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x180022948 (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x180022FA8 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180024674 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180026A44 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        unsigned __int16 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  void *v6; // rax
  wil::details::in1diag3 *v7; // rcx
  size_t *v8; // r8
  _WORD *v10; // rbx
  int v11; // eax
  unsigned int v12; // edi
  void *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  void *v16; // rdx
  __int128 v17; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  void *v19; // [rsp+60h] [rbp+30h] BYREF

  *a3 = 0LL;
  v6 = wil::details::ProcessHeapAlloc(8u, 0x78uLL, (unsigned __int64)a3);
  wistd::unique_ptr<void,wil::process_heap_deleter>::unique_ptr<void,wil::process_heap_deleter>(&v19, (__int64)v6);
  if ( wistd::operator==<void,wil::process_heap_deleter>(&v19) )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x148, (int)"wil", (const char *)0x8007000ELL);
    if ( v19 )
      operator delete(v19);
    return 2147942414LL;
  }
  else
  {
    v10 = v19;
    v17 = 0LL;
    if ( ((unsigned __int8)v19 & 3) != 0 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v7);
    v11 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(
            (wil::details_abi::SemaphoreValue *)&v17,
            a1,
            v8,
            (unsigned __int64)v19 >> 2);
    v12 = v11;
    if ( v11 >= 0 )
    {
      *(_DWORD *)v10 = 1;
      *((_QWORD *)v10 + 1) = *a2;
      *a2 = 0LL;
      v14 = v17;
      *(_QWORD *)&v17 = 0LL;
      *((_QWORD *)v10 + 2) = v14;
      v15 = *((_QWORD *)&v17 + 1);
      *((_QWORD *)&v17 + 1) = 0LL;
      *((_QWORD *)v10 + 3) = v15;
      memset_0(v10 + 16, 0, 0x58uLL);
      v10[16] = 88;
      *((_DWORD *)v10 + 9) = 1;
      memset_0(v10 + 20, 0, 0x50uLL);
      *a3 = v10;
      wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details **)&v17, v16);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x14B, (int)"wil", (const char *)(unsigned int)v11);
      wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details **)&v17, v13);
      if ( v10 )
        operator delete(v10);
      return v12;
    }
  }
}
