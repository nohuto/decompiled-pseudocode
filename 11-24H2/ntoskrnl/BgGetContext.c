/*
 * XREFs of BgGetContext @ 0x140BB26A8
 * Callers:
 *     BgkResumePrepare @ 0x140B556DC (BgkResumePrepare.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 *     ResFwGetContext @ 0x140BB39D8 (ResFwGetContext.c)
 */

__int64 __fastcall BgGetContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( KeGetCurrentIrql() > 2u )
    return 0LL;
  v5 = 0LL;
  v8 = 0LL;
  BgpFwAcquireLock(a1, a2, a3, a4);
  if ( (dword_140EF0270 & 1) != 0 )
  {
    ResFwGetContext(&v8);
    v5 = v8;
  }
  BgpFwReleaseLock(v7, v6);
  return v5;
}
