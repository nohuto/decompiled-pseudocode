/*
 * XREFs of ??0?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x18001BF40
 * Callers:
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180016B70 (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuf.c)
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x180019FE0 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@.c)
 *     ?ResetBuffer@ContextualProcessorBuffer@@UEAAXXZ @ 0x18001B6B0 (-ResetBuffer@ContextualProcessorBuffer@@UEAAXXZ.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18001F350 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?EventStreamEndedAndProcessFinalDecision@ContextualProcessorBuffer@@AEAAXXZ @ 0x180021F00 (-EventStreamEndedAndProcessFinalDecision@ContextualProcessorBuffer@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>(
        __int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rdi
  char *v5; // rcx
  __int64 v6; // rax
  const struct std::nothrow_t *v7; // rdx
  _QWORD *v8; // rax
  char *v10; // r8
  char *v11; // rcx

  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v2 = operator new(0x20uLL);
  *v2 = v2;
  v2[1] = v2;
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = operator new(0x80uLL);
  v5 = *(char **)(a1 + 24);
  v6 = (__int64)(*(_QWORD *)(a1 + 40) - (_QWORD)v5) >> 3;
  if ( v6 )
  {
    v7 = (const struct std::nothrow_t *)(8 * v6);
    if ( (unsigned __int64)(8 * v6) >= 0x1000 )
    {
      v7 = (const struct std::nothrow_t *)((char *)v7 + 39);
      v10 = (char *)*((_QWORD *)v5 - 1);
      v11 = (char *)(v5 - v10);
      if ( (unsigned __int64)(v11 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v11, v7);
        __debugbreak();
        JUMPOUT(0x18001C05ELL);
      }
      v5 = v10;
    }
    operator delete(v5, v7);
  }
  *(_QWORD *)(a1 + 24) = v4;
  v8 = v4 + 16;
  *(_QWORD *)(a1 + 32) = v4 + 16;
  *(_QWORD *)(a1 + 40) = v4 + 16;
  do
    *v4++ = v3;
  while ( v4 != v8 );
  return a1;
}
