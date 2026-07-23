/*
 * XREFs of deflateResetKeep @ 0x1405F2CA4
 * Callers:
 *     deflateReset @ 0x1405F2C6C (deflateReset.c)
 * Callees:
 *     deflateStateCheck @ 0x1405F2D94 (deflateStateCheck.c)
 *     adler32_z @ 0x1405FF6B4 (adler32_z.c)
 *     init_block @ 0x140600CAC (init_block.c)
 */

__int64 __fastcall deflateResetKeep(__int64 a1)
{
  __int64 v3; // rbx
  int v4; // eax

  if ( (unsigned int)deflateStateCheck() )
    return 4294967294LL;
  v3 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 72) = 2;
  *(_QWORD *)(v3 + 32) = *(_QWORD *)(v3 + 16);
  v4 = *(_DWORD *)(v3 + 44);
  *(_DWORD *)(v3 + 40) = 0;
  if ( v4 < 0 )
    *(_DWORD *)(v3 + 44) = -v4;
  *(_DWORD *)(v3 + 8) = 42;
  *(_DWORD *)(a1 + 76) = adler32_z(0LL, 0LL);
  *(_DWORD *)(v3 + 64) = -2;
  *(_QWORD *)(v3 + 2960) = v3 + 268;
  *(_QWORD *)(v3 + 2976) = &off_14000B760;
  *(_QWORD *)(v3 + 2984) = v3 + 2560;
  *(_QWORD *)(v3 + 3000) = &off_14000B720;
  *(_QWORD *)(v3 + 3008) = v3 + 2804;
  *(_QWORD *)(v3 + 3024) = &qword_14000B740;
  *(_WORD *)(v3 + 5980) = 0;
  *(_DWORD *)(v3 + 5984) = 0;
  init_block(v3);
  return 0LL;
}
