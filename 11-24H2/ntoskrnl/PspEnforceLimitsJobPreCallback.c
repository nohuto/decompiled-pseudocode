/*
 * XREFs of PspEnforceLimitsJobPreCallback @ 0x14085DA00
 * Callers:
 *     PspCallJobHierarchyCallbacks @ 0x14085D828 (PspCallJobHierarchyCallbacks.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PspQueryRateControlHistory @ 0x14085DB0C (PspQueryRateControlHistory.c)
 */

__int64 __fastcall PspEnforceLimitsJobPreCallback(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  int v6; // r12d
  int v7; // r15d
  __int64 v8; // r14
  __int64 v9; // rbp
  int v10; // ebp

  v2 = 0;
  *(_DWORD *)(a1 + 1464) = PspEnforcementSequenceNumber;
  if ( (*(_DWORD *)(a1 + 1056) & 6) != 0 || *(_DWORD *)(a1 + 1080) || (*(_DWORD *)(a1 + 1552) & 0x800) != 0 )
  {
    v6 = (_DWORD)a2 + 44;
    *a2 = *(_QWORD *)(a1 + 992);
    v7 = 0;
    v8 = 60LL;
    a2[1] = *(_QWORD *)(a1 + 1032);
    a2[2] = 0LL;
    do
    {
      v9 = *(_QWORD *)(a1 + 1216);
      if ( !v9 || (v10 = *(_DWORD *)(v8 + v9)) == 0 )
        v10 = 1;
      PspQueryRateControlHistory(a1, v10, 0, v6, v7);
      *(_DWORD *)((char *)a2 + v8 - 28) = v10;
      ++v7;
      v8 += 4LL;
      v6 += 4;
    }
    while ( v7 < 3 );
  }
  else
  {
    memset_0((void *)(a1 + 1352), 0, 0x68uLL);
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1552), 0xFFBFFFFF);
    return (unsigned int)-1073741536;
  }
  return v2;
}
