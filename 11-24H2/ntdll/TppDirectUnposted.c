/*
 * XREFs of TppDirectUnposted @ 0x18015C590
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TppFreeDirectParams @ 0x18006D790 (TppFreeDirectParams.c)
 */

__int64 __fastcall TppDirectUnposted(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  volatile signed __int32 *v3; // rsi
  _QWORD **v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 result; // rax

  v3 = (volatile signed __int32 *)(a1 + 32);
  v4 = (_QWORD **)(a1 + 40);
  while ( 1 )
  {
    RtlAcquireSRWLockExclusive(v3, a2, a3);
    v5 = *v4;
    if ( *v4 == v4 )
    {
      v5 = 0LL;
    }
    else
    {
      if ( (_QWORD **)v5[1] != v4 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
        __fastfail(3u);
      *v4 = v6;
      v6[1] = v4;
    }
    result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)v3);
    if ( !v5 )
      break;
    TppFreeDirectParams((__int64)(v5 - 4));
  }
  return result;
}
