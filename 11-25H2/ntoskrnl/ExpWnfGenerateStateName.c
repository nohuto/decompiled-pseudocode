/*
 * XREFs of ExpWnfGenerateStateName @ 0x140897858
 * Callers:
 *     NtCreateWnfStateName @ 0x1408973D0 (NtCreateWnfStateName.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x1403D73D0 (PsGetCurrentServerSilo.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x140AA1BD8 (ExpWnfAllocateNextPersistentNameSequence.c)
 */

__int64 __fastcall ExpWnfGenerateStateName(unsigned __int64 *a1, int a2, int a3, char a4)
{
  unsigned __int8 v5; // di
  __int64 v8; // rax
  volatile signed __int64 *CurrentServerSiloGlobals; // rax
  __int64 v10; // r8
  __int64 v11; // r10
  signed __int64 v12; // rdx
  bool v13; // zf
  signed __int64 v14; // rdx
  __int64 result; // rax
  signed __int64 v16[3]; // [rsp+20h] [rbp-18h] BYREF

  v16[0] = 0LL;
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
    result = ExpWnfAllocateNextPersistentNameSequence(v11, v16, v10, CurrentServerSiloGlobals);
    if ( (int)result < 0 )
      return result;
    v14 = v16[0];
  }
  else
  {
    do
    {
      v12 = _InterlockedExchangeAdd64(CurrentServerSiloGlobals + 116, 1uLL);
      v13 = v12 == -1;
      v14 = v12 + 1;
      v16[0] = v14;
    }
    while ( v13 );
  }
  if ( (v14 & 0xFFE0000000000000uLL) != 0 )
    return 3221225473LL;
  *a1 = (v14 << 11) | (a4 != 0 ? 0x400 : 0) | (16 * (_BYTE)a2) & 0x30 ^ (unsigned __int64)((v5 << 6) & 0x3C0) ^ 1;
  return 0LL;
}
