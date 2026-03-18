/*
 * XREFs of SmQueryStoreCommitUsage @ 0x140600A44
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x1404D5BE8 (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     ?SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z @ 0x140324178 (-SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall SmQueryStoreCommitUsage(struct _EPROCESS *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  char *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  _BYTE v9[12]; // [rsp+20h] [rbp-618h] BYREF
  unsigned int v10; // [rsp+2Ch] [rbp-60Ch]
  char v11; // [rsp+4Ch] [rbp-5ECh] BYREF

  memset_0(v9, 0, 0x600uLL);
  result = SmpProcessQueryStoreStats(a1, (struct _ST_STATS *)v9);
  if ( (int)result >= 0 )
  {
    v5 = 0LL;
    v6 = &v11;
    v7 = 8LL;
    do
    {
      v8 = *(unsigned int *)v6;
      v6 += 8;
      v5 += v8;
      --v7;
    }
    while ( v7 );
    *a2 = v5 * v10;
    return 0LL;
  }
  return result;
}
