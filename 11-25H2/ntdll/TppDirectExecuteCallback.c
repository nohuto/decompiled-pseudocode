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

__int64 __fastcall TppDirectExecuteCallback(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  volatile signed __int64 *v7; // rcx
  __int64 result; // rax
  __int64 (__fastcall *v9)(_QWORD *, __int64, _QWORD, __int128 *); // rax
  __int128 v10; // [rsp+30h] [rbp-28h]
  __int128 v11; // [rsp+40h] [rbp-18h] BYREF

  v11 = 0LL;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a2 + 32));
  v4 = *(_QWORD **)(a2 + 40);
  v5 = (_QWORD *)(a2 + 40);
  if ( v4 == (_QWORD *)(a2 + 40) )
  {
    v4 = 0LL;
  }
  else
  {
    if ( (_QWORD *)v4[1] != v5 || (v6 = *v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v5 = v6;
    *(_QWORD *)(v6 + 8) = v5;
  }
  v7 = (volatile signed __int64 *)(a2 + 32);
  if ( (_QWORD *)*v5 == v5 )
  {
    result = RtlReleaseSRWLockExclusive(v7);
  }
  else
  {
    RtlReleaseSRWLockExclusive(v7);
    result = TpPostTask(a2, a1[16], 1LL);
  }
  if ( v4 )
  {
    v10 = *((_OWORD *)v4 - 2);
    v11 = *((_OWORD *)v4 - 1);
    TppFreeDirectParams();
    a1[11] = *(_QWORD *)(a2 + 56);
    a1[12] = a2;
    v9 = *(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int128 *))(a2 + 56);
    if ( (char *)v9 == (char *)TppWaitCompletion )
    {
      return TppWaitCompletion(a1, a2, *((_QWORD *)&v10 + 1), &v11);
    }
    else if ( (char *)v9 == (char *)TppAlpcpExecuteCallback )
    {
      return TppAlpcpExecuteCallback(a1, a2, *((_QWORD *)&v10 + 1), &v11);
    }
    else if ( (char *)v9 == (char *)TppIopExecuteCallback )
    {
      return TppIopExecuteCallback(a1, a2, *((_QWORD *)&v10 + 1), &v11);
    }
    else
    {
      return v9(a1, a2, *((_QWORD *)&v10 + 1), &v11);
    }
  }
  return result;
}
