/*
 * XREFs of RtlFreeActivationContextStack @ 0x1800AB5A0
 * Callers:
 *     RtlFreeThreadActivationContextStack @ 0x1800AB560 (RtlFreeThreadActivationContextStack.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlReleaseActivationContext @ 0x1800740B0 (RtlReleaseActivationContext.c)
 *     RtlpFreeActivationContextStackFrame @ 0x18008CA60 (RtlpFreeActivationContextStackFrame.c)
 */

void __fastcall RtlFreeActivationContextStack(unsigned __int64 *BaseAddress)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 *v3; // rdi
  unsigned __int64 *v4; // rax
  unsigned __int64 *v5; // r8
  unsigned __int64 **v6; // rcx
  unsigned __int64 v7; // rsi

  if ( BaseAddress )
  {
    v1 = *BaseAddress;
    if ( *BaseAddress )
    {
      do
      {
        v7 = *(_QWORD *)v1;
        if ( (*(_BYTE *)(v1 + 16) & 1) != 0 )
          RtlReleaseActivationContext(*(PACTIVATION_CONTEXT *)(v1 + 8));
        if ( (*(_BYTE *)(v1 + 16) & 8) != 0 )
          RtlpFreeActivationContextStackFrame((__int64)BaseAddress, v1);
        v1 = v7;
      }
      while ( v7 );
    }
    *BaseAddress = 0LL;
    v3 = (unsigned __int64 *)BaseAddress[1];
    while ( v3 != BaseAddress + 1 )
    {
      v4 = (unsigned __int64 *)*v3;
      v5 = v3 - 1;
      if ( *(unsigned __int64 **)(*v3 + 8) != v3 || (v6 = (unsigned __int64 **)v3[1], *v6 != v3) )
        __fastfail(3u);
      *v6 = v4;
      v4[1] = (unsigned __int64)v6;
      v3 = v4;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    }
    if ( (BaseAddress[3] & 2) == 0 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
}
