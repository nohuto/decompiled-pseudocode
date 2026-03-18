/*
 * XREFs of ?_InterruptDpcThunk@FxInterrupt@@CAXPEAU_KDPC@@PEAX11@Z @ 0x14004BC00
 * Callers:
 *     <none>
 * Callees:
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x14004BF68 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxInterrupt::_InterruptDpcThunk(
        _KDPC *Dpc,
        unsigned __int64 DeferredContext,
        void *SystemArgument1,
        void *SystemArgument2)
{
  FxSystemWorkItem *v4; // rcx
  void (__fastcall **v6)(unsigned __int64, unsigned __int64); // rdi
  void (__fastcall *v7)(void (__fastcall **)(unsigned __int64, unsigned __int64), __int64, __int64, __int64, char); // rax
  __int64 v8; // rdx
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  char *v11; // r14
  _WORD *v12; // rbp
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int8 v16; // [rsp+58h] [rbp+10h] BYREF

  v4 = *(FxSystemWorkItem **)(DeferredContext + 240);
  if ( v4 )
  {
    FxSystemWorkItem::EnqueueWorker(v4, FxInterrupt::_InterruptWorkItemCallback, (void *)DeferredContext, 0);
  }
  else
  {
    v6 = (void (__fastcall **)(unsigned __int64, unsigned __int64))(DeferredContext + 336);
    v7 = *(void (__fastcall **)(void (__fastcall **)(unsigned __int64, unsigned __int64), __int64, __int64, __int64, char))(unk_1400C80A8 + 8LL);
    if ( v7 )
      v7(v6, 8LL, 2164260864LL, 3938LL, 2);
    v8 = *(_QWORD *)(DeferredContext + 16);
    if ( *(_BYTE *)(v8 + 348) )
      *(_QWORD *)((unsigned int)(unk_1400C8080 * HIDWORD(KeGetPcr()[1].LockArray)) + unk_1400C8070) = v8;
    v9 = (_QWORD *)(DeferredContext + 248);
    v10 = *(_QWORD *)(DeferredContext + 248);
    v11 = (char *)(DeferredContext + 96);
    v12 = (_WORD *)(DeferredContext + 10);
    v13 = DeferredContext ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( v10 )
    {
      v16 = 0;
      (*(void (__fastcall **)(__int64, unsigned __int8 *, void *, void *))(*(_QWORD *)v10 + 16LL))(
        v10,
        &v16,
        SystemArgument1,
        SystemArgument2);
      v15 = *(_QWORD *)v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !*(_WORD *)(*(_QWORD *)v11 + 10LL) )
        v15 = 0LL;
      if ( !*v12 )
        v13 = 0LL;
      (*v6)(v13, v15);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v9 + 24LL))(*v9, v16);
    }
    else
    {
      v14 = *(_QWORD *)v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !*(_WORD *)(*(_QWORD *)v11 + 10LL) )
        v14 = 0LL;
      if ( !*v12 )
        v13 = 0LL;
      ((void (__fastcall *)(unsigned __int64, unsigned __int64, void *, void *))*v6)(
        v13,
        v14,
        SystemArgument1,
        SystemArgument2);
    }
  }
}
