/*
 * XREFs of EtwpApcPoolDpc @ 0x1403DD090
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpQueueApc @ 0x1403DE1A0 (EtwpQueueApc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall EtwpApcPoolDpc(__int64 a1, __int64 a2, unsigned int **a3)
{
  unsigned int *v3; // rdi
  volatile signed __int32 *v4; // rbx
  unsigned int *v5; // r9
  int v6; // ecx
  unsigned int *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+38h] [rbp-10h]

  v3 = *a3;
  v4 = (volatile signed __int32 *)a3;
  v5 = a3[9];
  v6 = (int)a3;
  v11 = (__int64)a3[8];
  v7 = a3[11];
  v10 = (__int64)a3[7];
  v9 = (__int64)a3[6];
  v8 = (__int64)a3[10];
  LOBYTE(a3) = 2;
  if ( (int)EtwpQueueApc(v6, (_DWORD)v7, (_DWORD)a3, (_DWORD)v5, v8, v9, v10, v11) < 0 )
    guard_dispatch_icall_no_overrides(v4, *((_QWORD *)v4 + 11));
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v3 + 170) + 704LL) + 8LL * *v3),
    1u);
  _interlockedbittestandreset(v4 + 40, 1u);
}
