/*
 * XREFs of TpSetDefaultPoolMaxThreads @ 0x180111770
 * Callers:
 *     RtlRegisterWait @ 0x18003C400 (RtlRegisterWait.c)
 *     RtlpTpInitializeData @ 0x18003D1C0 (RtlpTpInitializeData.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18003DF80 (TppPoolpDereferenceGlobalPool.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18003E034 (TpPoolReferenceExistingGlobalPool.c)
 *     TpSetPoolMaxThreads @ 0x1800FA0A0 (TpSetPoolMaxThreads.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x18010B540 (TpSetPoolMaxThreadsSoftLimit.c)
 */

__int64 __fastcall TpSetDefaultPoolMaxThreads(unsigned int a1)
{
  __int64 v2; // rax
  int v3; // ecx
  __int64 v4; // rsi
  int v5; // ebp
  unsigned int v6; // ebp
  int v7; // r14d
  unsigned int v8; // r14d
  __int64 result; // rax
  int v10; // edi

  v2 = TpPoolReferenceExistingGlobalPool();
  v3 = TppPoolpGlobalPoolMaxThreadsOverride;
  v4 = v2;
  if ( TppPoolpGlobalPoolMaxThreadsOverride )
  {
    v6 = TppPoolpGlobalPoolMaxThreadsOverride;
  }
  else
  {
    if ( !v2 || (v5 = *(_DWORD *)(v2 + 440), v3 = TppPoolpGlobalPoolMaxThreadsOverride, !v5) )
      v5 = MEMORY[0x7FFE03C0];
    v6 = 8 * v5;
    if ( v6 < 0x300 )
      v6 = 768;
  }
  if ( v3 )
  {
    v8 = 0;
  }
  else
  {
    if ( !v2 || (v7 = *(_DWORD *)(v2 + 440)) == 0 )
      v7 = MEMORY[0x7FFE03C0];
    v8 = 4 * v7;
    if ( v8 < 0x180 )
      v8 = 384;
  }
  result = (unsigned int)TppPoolpGlobalPoolMaxThreads;
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( a1 <= TppPoolpGlobalPoolMaxThreads )
      return result;
LABEL_15:
    result = a1;
    goto LABEL_16;
  }
  if ( a1 <= v8 )
    return result;
  result = v6;
  if ( a1 > v6 )
    goto LABEL_15;
LABEL_16:
  if ( !(_DWORD)result )
    return result;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&TppPoolpGlobalPoolLock);
  v10 = 0;
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( a1 > TppPoolpGlobalPoolMaxThreads )
      goto LABEL_28;
  }
  else if ( a1 > v8 )
  {
    v10 = v6;
    if ( a1 <= v6 )
    {
LABEL_29:
      if ( v10 )
        TppPoolpGlobalPoolMaxThreads = v10;
      goto LABEL_31;
    }
LABEL_28:
    v10 = a1;
    goto LABEL_29;
  }
LABEL_31:
  result = RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  if ( v10 )
  {
    if ( v4 )
    {
      TpSetPoolMaxThreads(v4, v10);
      TpSetPoolMaxThreadsSoftLimit(v4, 0);
      return TppPoolpDereferenceGlobalPool(
               (const void **)&TppPoolpGlobalPool,
               (volatile signed __int32 *)&TppPoolpGlobalPoolLock);
    }
  }
  return result;
}
