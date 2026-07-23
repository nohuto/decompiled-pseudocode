/*
 * XREFs of KeQueryPrimaryGroupAffinityProcess @ 0x1404805C4
 * Callers:
 *     PspWritePebAffinityInfoAttached @ 0x140A38230 (PspWritePebAffinityInfoAttached.c)
 * Callees:
 *     KiAcquireProcessLockShared @ 0x14039FE44 (KiAcquireProcessLockShared.c)
 *     KiReleaseProcessLockShared @ 0x14039FED0 (KiReleaseProcessLockShared.c)
 */

__int64 __fastcall KeQueryPrimaryGroupAffinityProcess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // rdx
  _WORD *v8; // rcx
  __int64 v9; // rax
  unsigned __int8 v11; // [rsp+30h] [rbp+8h] BYREF

  *(_OWORD *)a2 = 0LL;
  v5 = 0LL;
  v11 = 0;
  KiAcquireProcessLockShared(a1, &v11, a3, a4);
  *(_WORD *)(a2 + 8) = *(_WORD *)(a1 + 416);
  v8 = *(_WORD **)(a1 + 80);
  v9 = *(unsigned __int16 *)(a1 + 416);
  if ( (unsigned __int16)v9 < *v8 )
    v5 = *(_QWORD *)&v8[4 * v9 + 4];
  LOBYTE(v7) = v11;
  *(_QWORD *)a2 = v5;
  return KiReleaseProcessLockShared(a1, v7);
}
