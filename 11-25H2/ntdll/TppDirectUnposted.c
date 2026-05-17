/*
 * XREFs of TppDirectUnposted @ 0x18015DAF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppFreeDirectParams @ 0x18003BEA0 (TppFreeDirectParams.c)
 */

__int64 __fastcall TppDirectUnposted(__int64 a1)
{
  volatile signed __int32 *v1; // rsi
  _QWORD **v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  __int64 result; // rax

  v1 = (volatile signed __int32 *)(a1 + 32);
  v2 = (_QWORD **)(a1 + 40);
  while ( 1 )
  {
    RtlAcquireSRWLockExclusive(v1);
    v3 = *v2;
    if ( *v2 == v2 )
    {
      v3 = 0LL;
    }
    else
    {
      if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
        __fastfail(3u);
      *v2 = v4;
      v4[1] = v2;
    }
    result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)v1);
    if ( !v3 )
      break;
    TppFreeDirectParams((__int64)(v3 - 4));
  }
  return result;
}
