/*
 * XREFs of KeQueryPrimaryGroupAffinityProcess @ 0x140484F60
 * Callers:
 *     PspWritePebAffinityInfoAttached @ 0x140A3E4F4 (PspWritePebAffinityInfoAttached.c)
 * Callees:
 *     KiAcquireProcessLockShared @ 0x140271084 (KiAcquireProcessLockShared.c)
 *     KiReleaseProcessLockShared @ 0x140271110 (KiReleaseProcessLockShared.c)
 */

__int64 __fastcall KeQueryPrimaryGroupAffinityProcess(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  _WORD *v7; // rcx
  __int64 v8; // rax
  unsigned __int8 v10; // [rsp+30h] [rbp+8h] BYREF

  *(_OWORD *)a2 = 0LL;
  v3 = 0LL;
  v10 = 0;
  KiAcquireProcessLockShared(a1, &v10);
  *(_WORD *)(a2 + 8) = *(_WORD *)(a1 + 416);
  v7 = *(_WORD **)(a1 + 80);
  v8 = *(unsigned __int16 *)(a1 + 416);
  if ( (unsigned __int16)v8 < *v7 )
    v3 = *(_QWORD *)&v7[4 * v8 + 4];
  LOBYTE(v5) = v10;
  *(_QWORD *)a2 = v3;
  return KiReleaseProcessLockShared(a1, v5, v6);
}
