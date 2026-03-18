/*
 * XREFs of ?DeleteAllTokens@CTokenQueue@@AEAAXXZ @ 0x140010C0C
 * Callers:
 *     ?RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z @ 0x140010BB0 (-RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z.c)
 *     ?DeleteAllTokens@CTokenManager@@UEAAXXZ @ 0x140024770 (-DeleteAllTokens@CTokenManager@@UEAAXXZ.c)
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x14005E490 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 *     ??1CTokenManager@@AEAA@XZ @ 0x140097C68 (--1CTokenManager@@AEAA@XZ.c)
 *     ?ClearAnalogTokenQueue@CTokenManager@@UEAAXXZ @ 0x140097F80 (-ClearAnalogTokenQueue@CTokenManager@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall CTokenQueue::DeleteAllTokens(CTokenQueue *this)
{
  CTokenQueue *v1; // rax
  bool i; // zf
  CTokenQueue **v4; // rcx
  void (__fastcall ***v5)(_QWORD, __int64); // rbx

  v1 = (CTokenQueue *)*((_QWORD *)this + 1);
  for ( i = *(_QWORD *)v1 == (_QWORD)this; ; i = *(_QWORD *)v1 == (_QWORD)this )
  {
    if ( !i || (v4 = (CTokenQueue **)*((_QWORD *)v1 + 1), *v4 != v1) )
      __fastfail(3u);
    *((_QWORD *)this + 1) = v4;
    *v4 = this;
    if ( v1 == this )
      break;
    v5 = (void (__fastcall ***)(_QWORD, __int64))((char *)v1 - 8);
    (*(void (__fastcall **)(_QWORD *))(*((_QWORD *)v1 - 1) + 56LL))((_QWORD *)v1 - 1);
    (**v5)(v5, 1LL);
    v1 = (CTokenQueue *)*((_QWORD *)this + 1);
  }
}
