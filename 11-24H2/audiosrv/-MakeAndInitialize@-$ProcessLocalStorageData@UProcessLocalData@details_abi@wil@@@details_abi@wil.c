/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x1800A93D0
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800A87FC (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180021540 (--3@YAXPEAX@Z.c)
 *     ??$?0$00X@?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@PEAX@Z @ 0x18009FB98 (--$-0$00X@-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@PEAX@Z.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     ??$?8XUprocess_heap_deleter@wil@@@wistd@@YA_NAEBV?$unique_ptr@XUprocess_heap_deleter@wil@@@0@$$T@Z @ 0x1800A81BC (--$-8XUprocess_heap_deleter@wil@@@wistd@@YA_NAEBV-$unique_ptr@XUprocess_heap_deleter@wil@@@0@$$T.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x1800A8740 (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x1800A8A74 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x1800A9644 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800AA558 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?release@?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAPEAXXZ @ 0x1800AA698 (-release@-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAPEAXXZ.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        char *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  void *v6; // rax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // r8
  _WORD *v10; // rbx
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rax
  __int64 v14; // rax
  __int128 v15; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  void *v17; // [rsp+60h] [rbp+30h] BYREF

  *a3 = 0LL;
  v6 = wil::details::ProcessHeapAlloc(8u, 0x78uLL, (unsigned __int64)a3);
  wistd::unique_ptr<void,wil::process_heap_deleter>::unique_ptr<void,wil::process_heap_deleter>(&v17, (__int64)v6);
  if ( wistd::operator==<void,wil::process_heap_deleter>(&v17) )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x148, (int)"wil", (const char *)0x8007000ELL);
    if ( v17 )
      operator delete(v17);
    return 2147942414LL;
  }
  else
  {
    v10 = v17;
    v15 = 0LL;
    if ( ((unsigned __int8)v17 & 3) != 0 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v7);
    v11 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(
            (wil::details_abi::SemaphoreValue *)&v15,
            a1,
            v8,
            (unsigned __int64)v17 >> 2);
    v12 = v11;
    if ( v11 >= 0 )
    {
      *(_DWORD *)v10 = 1;
      *((_QWORD *)v10 + 1) = *a2;
      v13 = v15;
      *a2 = 0LL;
      *(_QWORD *)&v15 = 0LL;
      *((_QWORD *)v10 + 2) = v13;
      v14 = *((_QWORD *)&v15 + 1);
      *((_QWORD *)&v15 + 1) = 0LL;
      *((_QWORD *)v10 + 3) = v14;
      memset_0(v10 + 16, 0, 0x58uLL);
      v10[16] = 88;
      *((_DWORD *)v10 + 9) = 1;
      memset_0(v10 + 20, 0, 0x50uLL);
      *a3 = wistd::unique_ptr<void,wil::process_heap_deleter>::release(&v17);
      wil::details_abi::SemaphoreValue::~SemaphoreValue((void **)&v15);
      if ( v17 )
        operator delete(v17);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x14B, (int)"wil", (const char *)(unsigned int)v11);
      wil::details_abi::SemaphoreValue::~SemaphoreValue((void **)&v15);
      if ( v10 )
        operator delete(v10);
      return v12;
    }
  }
}
