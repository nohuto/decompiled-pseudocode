/*
 * XREFs of RtlFreeActivationContextStack @ 0x180004030
 * Callers:
 *     RtlFreeThreadActivationContextStack @ 0x180003FF0 (RtlFreeThreadActivationContextStack.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlReleaseActivationContext @ 0x18005E4D0 (RtlReleaseActivationContext.c)
 *     RtlpFreeActivationContextStackFrame @ 0x180070180 (RtlpFreeActivationContextStackFrame.c)
 */

void __fastcall RtlFreeActivationContextStack(__int64 ***a1)
{
  __int64 **v1; // rdi
  __int64 **v3; // rdi
  __int64 *v4; // rax
  __int64 **v5; // r8
  __int64 ***v6; // rcx
  __int64 *v7; // rsi

  if ( a1 )
  {
    v1 = *a1;
    if ( *a1 )
    {
      do
      {
        v7 = *v1;
        if ( ((_BYTE)v1[2] & 1) != 0 )
          RtlReleaseActivationContext(v1[1]);
        if ( ((_BYTE)v1[2] & 8) != 0 )
          RtlpFreeActivationContextStackFrame(a1, v1);
        v1 = (__int64 **)v7;
      }
      while ( v7 );
    }
    *a1 = 0LL;
    v3 = a1[1];
    while ( v3 != (__int64 **)(a1 + 1) )
    {
      v4 = *v3;
      v5 = v3 - 1;
      if ( (__int64 **)(*v3)[1] != v3 || (v6 = (__int64 ***)v3[1], *v6 != v3) )
        __fastfail(3u);
      *v6 = (__int64 **)v4;
      v4[1] = (__int64)v6;
      v3 = (__int64 **)v4;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v5);
    }
    if ( ((_BYTE)a1[3] & 2) == 0 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
  }
}
