/*
 * XREFs of TppDirectExecuteCallback @ 0x18006D650
 * Callers:
 *     <none>
 * Callees:
 *     TppIopExecuteCallback @ 0x18001EF70 (TppIopExecuteCallback.c)
 *     TppWaitCompletion @ 0x18001FE00 (TppWaitCompletion.c)
 *     TppAlpcpExecuteCallback @ 0x1800258C0 (TppAlpcpExecuteCallback.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TppFreeDirectParams @ 0x18006D790 (TppFreeDirectParams.c)
 *     TpPostTask @ 0x18006EFB0 (TpPostTask.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TppDirectExecuteCallback(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  volatile signed __int64 *v8; // rcx
  void (__fastcall *v9)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int128 v10; // [rsp+30h] [rbp-28h]
  __int128 v11; // [rsp+40h] [rbp-18h] BYREF

  v11 = 0LL;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a2 + 32), (volatile signed __int32 **)a2, a3);
  v5 = *(_QWORD **)(a2 + 40);
  v6 = (_QWORD *)(a2 + 40);
  if ( v5 == (_QWORD *)(a2 + 40) )
  {
    v5 = 0LL;
  }
  else
  {
    if ( (_QWORD *)v5[1] != v6 || (v7 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v6 = v7;
    *(_QWORD *)(v7 + 8) = v6;
  }
  v8 = (volatile signed __int64 *)(a2 + 32);
  if ( (_QWORD *)*v6 == v6 )
  {
    RtlReleaseSRWLockExclusive(v8);
  }
  else
  {
    RtlReleaseSRWLockExclusive(v8);
    TpPostTask(a2, a1[16], 1LL);
  }
  if ( v5 )
  {
    v10 = *((_OWORD *)v5 - 2);
    v11 = *((_OWORD *)v5 - 1);
    TppFreeDirectParams();
    a1[11] = *(_QWORD *)(a2 + 56);
    a1[12] = a2;
    v9 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(a2 + 56);
    if ( (char *)v9 == (char *)TppWaitCompletion )
    {
      TppWaitCompletion((__int64)a1, a2, *((__int64 *)&v10 + 1), (__int64)&v11);
    }
    else if ( v9 == TppAlpcpExecuteCallback )
    {
      TppAlpcpExecuteCallback((__int64)a1, a2, *((__int64 *)&v10 + 1), (unsigned __int64)&v11);
    }
    else if ( (char *)v9 == (char *)TppIopExecuteCallback )
    {
      TppIopExecuteCallback((__int64)a1, a2, *((__int64 *)&v10 + 1), (__int64)&v11);
    }
    else
    {
      v9(a1, a2, *((_QWORD *)&v10 + 1), &v11);
    }
  }
}
