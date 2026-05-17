/*
 * XREFs of TpSetDefaultPoolMaxThreads @ 0x1800EDE60
 * Callers:
 *     RtlRegisterWait @ 0x18006DF00 (RtlRegisterWait.c)
 *     RtlpTpInitializeData @ 0x18006ECC0 (RtlpTpInitializeData.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x18006A510 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18006D7D0 (TppPoolpDereferenceGlobalPool.c)
 *     TpSetPoolMaxThreads @ 0x1800ABE00 (TpSetPoolMaxThreads.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x1800EE0C8 (TpPoolReferenceExistingGlobalPool.c)
 */

__int64 __fastcall TpSetDefaultPoolMaxThreads(unsigned int a1)
{
  __int64 v2; // rax
  volatile signed __int32 **v3; // rdx
  unsigned __int64 v4; // r8
  int v5; // ecx
  __int64 v6; // rsi
  int v7; // ebp
  unsigned int v8; // ebp
  int v9; // r14d
  unsigned int v10; // r14d
  __int64 result; // rax
  int v12; // edi

  v2 = TpPoolReferenceExistingGlobalPool();
  v5 = TppPoolpGlobalPoolMaxThreadsOverride;
  v6 = v2;
  if ( TppPoolpGlobalPoolMaxThreadsOverride )
  {
    v8 = TppPoolpGlobalPoolMaxThreadsOverride;
  }
  else
  {
    if ( !v2 || (v7 = *(_DWORD *)(v2 + 440), v5 = TppPoolpGlobalPoolMaxThreadsOverride, !v7) )
      v7 = MEMORY[0x7FFE03C0];
    v8 = 8 * v7;
    if ( v8 < 0x300 )
      v8 = 768;
  }
  if ( v5 )
  {
    v10 = 0;
  }
  else
  {
    if ( !v2 || (v9 = *(_DWORD *)(v2 + 440)) == 0 )
      v9 = MEMORY[0x7FFE03C0];
    v10 = 4 * v9;
    if ( v10 < 0x180 )
      v10 = 384;
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
  if ( a1 <= v10 )
    return result;
  result = v8;
  if ( a1 > v8 )
    goto LABEL_15;
LABEL_16:
  if ( !(_DWORD)result )
    return result;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&TppPoolpGlobalPoolLock, v3, v4);
  v12 = 0;
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( a1 > TppPoolpGlobalPoolMaxThreads )
      goto LABEL_28;
  }
  else if ( a1 > v10 )
  {
    v12 = v8;
    if ( a1 <= v8 )
    {
LABEL_29:
      if ( v12 )
        TppPoolpGlobalPoolMaxThreads = v12;
      goto LABEL_31;
    }
LABEL_28:
    v12 = a1;
    goto LABEL_29;
  }
LABEL_31:
  result = RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  if ( v12 )
  {
    if ( v6 )
    {
      TpSetPoolMaxThreads(v6, v12);
      TpSetPoolMaxThreadsSoftLimit(v6, 0);
      return TppPoolpDereferenceGlobalPool(
               (const void **)&TppPoolpGlobalPool,
               (volatile signed __int32 *)&TppPoolpGlobalPoolLock);
    }
  }
  return result;
}
