/*
 * XREFs of pathwide::EPATHOBJ_vBecome @ 0x1401B9858
 * Callers:
 *     ?bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400E254C (-bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall pathwide::EPATHOBJ_vBecome(__int64 a1, __int64 a2)
{
  __int64 v4; // r8

  EPATHOBJ::vFreeBlocks((EPATHOBJ *)a1);
  v4 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_QWORD *)(v4 + 24) = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL) = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 40LL);
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 72LL) |= 3u;
  *(_DWORD *)a1 = *(_DWORD *)a1 & 0xFFFFFFEC | 0x10;
  *(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL) = 0LL;
  EPATHOBJ::vUnlock((EPATHOBJ *)a2);
}
