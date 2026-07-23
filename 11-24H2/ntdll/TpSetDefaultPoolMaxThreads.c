/*
 * XREFs of TpSetDefaultPoolMaxThreads @ 0x1800E9040
 * Callers:
 *     RtlRegisterWait @ 0x18008A7E0 (RtlRegisterWait.c)
 *     RtlpTpInitializeData @ 0x18008B5A0 (RtlpTpInitializeData.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     TpSetPoolMaxThreads @ 0x180086280 (TpSetPoolMaxThreads.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180086C00 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18008A0B0 (TppPoolpDereferenceGlobalPool.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x1800E92A8 (TpPoolReferenceExistingGlobalPool.c)
 */

void __fastcall TpSetDefaultPoolMaxThreads(ULONG a1)
{
  __int64 v2; // rax
  int v3; // ecx
  _TP_POOL *v4; // rsi
  int v5; // ebp
  unsigned int v6; // ebp
  int v7; // r14d
  unsigned int v8; // r14d
  ULONG v9; // eax
  ULONG v10; // edi

  v2 = TpPoolReferenceExistingGlobalPool();
  v3 = TppPoolpGlobalPoolMaxThreadsOverride;
  v4 = (_TP_POOL *)v2;
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
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( a1 <= TppPoolpGlobalPoolMaxThreads )
      return;
LABEL_15:
    v9 = a1;
    goto LABEL_16;
  }
  if ( a1 <= v8 )
    return;
  v9 = v6;
  if ( a1 > v6 )
    goto LABEL_15;
LABEL_16:
  if ( !v9 )
    return;
  RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock);
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
  RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  if ( v10 )
  {
    if ( v4 )
    {
      TpSetPoolMaxThreads(v4, v10);
      TpSetPoolMaxThreadsSoftLimit((__int64)v4, 0);
      TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
    }
  }
}
