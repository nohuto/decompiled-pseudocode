/*
 * XREFs of TppDirectExecuteCallback @ 0x180089F30
 * Callers:
 *     <none>
 * Callees:
 *     TppIopExecuteCallback @ 0x18004B970 (TppIopExecuteCallback.c)
 *     TppWaitCompletion @ 0x18004C800 (TppWaitCompletion.c)
 *     TppAlpcpExecuteCallback @ 0x1800522C0 (TppAlpcpExecuteCallback.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     TppFreeDirectParams @ 0x18008A070 (TppFreeDirectParams.c)
 *     TpPostTask @ 0x18008B890 (TpPostTask.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TppDirectExecuteCallback(PTP_CALLBACK_INSTANCE a1, _RTL_SRWLOCK *a2)
{
  _RTL_SRWLOCK *Value; // rbx
  unsigned __int64 *v5; // rax
  unsigned __int64 v6; // rcx
  _RTL_SRWLOCK *v7; // rcx
  void (__fastcall *v8)(PTP_CALLBACK_INSTANCE, _RTL_SRWLOCK *, _QWORD, __int128 *); // rax
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
    TpPostTask(a2, a1->Pool, 1LL);
  }
  if ( Value )
  {
    v9 = *(_OWORD *)&Value[-4].0;
    v10 = *(_OWORD *)&Value[-2].0;
    TppFreeDirectParams();
    a1->Callback = a2[7].Ptr;
    a1->Context = a2;
    v8 = (void (__fastcall *)(PTP_CALLBACK_INSTANCE, _RTL_SRWLOCK *, _QWORD, __int128 *))a2[7].Value;
    if ( (char *)v8 == (char *)TppWaitCompletion )
    {
      TppWaitCompletion(a1, (__int64)a2, *((__int64 *)&v9 + 1));
    }
    else if ( (char *)v8 == (char *)TppAlpcpExecuteCallback )
    {
      TppAlpcpExecuteCallback(a1, (__int64)a2, *((__int64 *)&v9 + 1));
    }
    else if ( (char *)v8 == (char *)TppIopExecuteCallback )
    {
      TppIopExecuteCallback((PTP_WORK)a1, (__int64)a2, *((__int64 *)&v9 + 1), (__int64)&v10);
    }
    else
    {
      v8(a1, a2, *((_QWORD *)&v9 + 1), &v10);
    }
  }
}
