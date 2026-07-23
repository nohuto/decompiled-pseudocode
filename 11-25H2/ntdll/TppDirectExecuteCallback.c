/*
 * XREFs of TppDirectExecuteCallback @ 0x18003BD60
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppFreeDirectParams @ 0x18003BEA0 (TppFreeDirectParams.c)
 *     TpPostTask @ 0x18003D360 (TpPostTask.c)
 *     TppIopExecuteCallback @ 0x180040230 (TppIopExecuteCallback.c)
 *     TppWaitCompletion @ 0x180041270 (TppWaitCompletion.c)
 *     TppAlpcpExecuteCallback @ 0x18007FCA0 (TppAlpcpExecuteCallback.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TppDirectExecuteCallback(_TP_CALLBACK_INSTANCE *Io, _RTL_SRWLOCK *a2)
{
  _RTL_SRWLOCK *Value; // rbx
  unsigned __int64 *v5; // rax
  unsigned __int64 v6; // rcx
  _RTL_SRWLOCK *v7; // rcx
  __int64 (__fastcall *v8)(PTP_CALLBACK_INSTANCE); // rax
  __int128 v9; // [rsp+30h] [rbp-28h]
  __int128 v10; // [rsp+40h] [rbp-18h] BYREF

  v10 = 0LL;
  RtlAcquireSRWLockExclusive(a2 + 4);
  Value = (_RTL_SRWLOCK *)a2[5].Value;
  v5 = (unsigned __int64 *)&a2[5];
  if ( Value == &a2[5] )
  {
    Value = 0LL;
  }
  else
  {
    if ( (unsigned __int64 *)Value[1].Value != v5 || (v6 = Value->Value, *(_RTL_SRWLOCK **)(Value->Value + 8) != Value) )
      __fastfail(3u);
    *v5 = v6;
    *(_QWORD *)(v6 + 8) = v5;
  }
  v7 = a2 + 4;
  if ( (unsigned __int64 *)*v5 == v5 )
  {
    RtlReleaseSRWLockExclusive(v7);
  }
  else
  {
    RtlReleaseSRWLockExclusive(v7);
    TpPostTask(a2, Io->Pool, 1LL);
  }
  if ( Value )
  {
    v9 = *(_OWORD *)&Value[-4].0;
    v10 = *(_OWORD *)&Value[-2].0;
    TppFreeDirectParams();
    Io->Callback = a2[7].Ptr;
    Io->Context = a2;
    v8 = (__int64 (__fastcall *)(PTP_CALLBACK_INSTANCE))a2[7].Value;
    if ( v8 == TppWaitCompletion )
    {
      TppWaitCompletion(Io);
    }
    else if ( (char *)v8 == (char *)TppAlpcpExecuteCallback )
    {
      TppAlpcpExecuteCallback(Io, a2, *((_QWORD *)&v9 + 1), &v10);
    }
    else if ( (char *)v8 == (char *)TppIopExecuteCallback )
    {
      TppIopExecuteCallback((PTP_IO)Io);
    }
    else
    {
      ((void (__fastcall *)(_TP_CALLBACK_INSTANCE *, _RTL_SRWLOCK *, _QWORD, __int128 *))v8)(
        Io,
        a2,
        *((_QWORD *)&v9 + 1),
        &v10);
    }
  }
}
