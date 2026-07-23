/*
 * XREFs of MiMarkLockedChainAsProtected @ 0x1403E23D8
 * Callers:
 *     MiExclusiveInsertPfnChainInList @ 0x1403E2124 (MiExclusiveInsertPfnChainInList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMarkLockedChainAsProtected(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 result; // rax
  unsigned int v4; // [rsp+10h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 16);
  while ( v1 != 0x3FFFFFFFFFLL )
  {
    v2 = 48 * v1 - 0x220000000000LL;
    v1 = *(_QWORD *)v2 & 0xFFFFFFFFFFLL;
    v4 = *(_DWORD *)(v2 + 32);
    HIBYTE(v4) |= 8u;
    result = v4;
    *(_DWORD *)(v2 + 32) = v4;
  }
  return result;
}
