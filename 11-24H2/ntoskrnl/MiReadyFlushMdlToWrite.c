/*
 * XREFs of MiReadyFlushMdlToWrite @ 0x14023C268
 * Callers:
 *     MiFlushSection @ 0x14023A550 (MiFlushSection.c)
 * Callees:
 *     MiEndingOffsetWithLock @ 0x14023A3EC (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x140244020 (MiStartingOffset.c)
 */

__int64 __fastcall MiReadyFlushMdlToWrite(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int16 v10; // cx

  v6 = *(_QWORD *)(48LL * *(_QWORD *)(a1 + 48) - 0x21FFFFFFFFF8LL);
  *(_DWORD *)(a1 + 44) = 0;
  v7 = MiStartingOffset(a2, v6 | 0x8000000000000000uLL, 0xFFFFFFFFLL);
  MiEndingOffsetWithLock(a2, v8, v9);
  v10 = *(_WORD *)(a1 + 10) | 2;
  *(_WORD *)(a1 + 10) = v10;
  if ( (a3 & 8) != 0 )
    *(_WORD *)(a1 + 10) = v10 | 0x4000;
  *(_WORD *)(a1 + 8) = ((8 * (unsigned __int64)*(unsigned int *)(a1 + 40)) >> 12) + 48;
  return v7;
}
