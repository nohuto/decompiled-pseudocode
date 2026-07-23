/*
 * XREFs of ExpWnfGenerateStateName @ 0x140834538
 * Callers:
 *     NtCreateWnfStateName @ 0x1408340B0 (NtCreateWnfStateName.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x14047F700 (PdcCreateWatchdogAroundClientCall.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x140833C84 (ExpWnfAllocateNextPersistentNameSequence.c)
 */

__int64 __fastcall ExpWnfGenerateStateName(unsigned __int64 *a1, int a2, int a3, char a4)
{
  unsigned __int8 v5; // di
  __int64 v8; // rax
  volatile signed __int64 *CurrentServerSiloGlobals; // rax
  struct _LIST_ENTRY *v10; // r10
  signed __int64 v11; // rdx
  bool v12; // zf
  unsigned __int64 v13; // rdx
  __int64 result; // rax
  unsigned __int64 v15[3]; // [rsp+20h] [rbp-18h] BYREF

  v15[0] = 0LL;
  v5 = a3;
  if ( (unsigned int)(a3 - 4) > 1 )
  {
    PsGetCurrentServerSilo();
    CurrentServerSiloGlobals = (volatile signed __int64 *)PsGetCurrentServerSiloGlobals();
  }
  else
  {
    v8 = PdcCreateWatchdogAroundClientCall();
    CurrentServerSiloGlobals = (volatile signed __int64 *)PsGetServerSiloGlobals(v8);
  }
  if ( (unsigned int)(a2 - 2) > 1 )
  {
    result = ExpWnfAllocateNextPersistentNameSequence(v10, v15);
    if ( (int)result < 0 )
      return result;
    v13 = v15[0];
  }
  else
  {
    do
    {
      v11 = _InterlockedExchangeAdd64(CurrentServerSiloGlobals + 116, 1uLL);
      v12 = v11 == -1;
      v13 = v11 + 1;
      v15[0] = v13;
    }
    while ( v12 );
  }
  if ( (v13 & 0xFFE0000000000000uLL) != 0 )
    return 3221225473LL;
  *a1 = (v13 << 11) | (a4 != 0 ? 0x400 : 0) | (16 * (_BYTE)a2) & 0x30 ^ (unsigned __int64)((v5 << 6) & 0x3C0) ^ 1;
  return 0LL;
}
