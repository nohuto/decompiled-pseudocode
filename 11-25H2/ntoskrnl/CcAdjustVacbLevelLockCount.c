/*
 * XREFs of CcAdjustVacbLevelLockCount @ 0x1402D6674
 * Callers:
 *     CcAllocateInitializeBcb @ 0x1402D67D4 (CcAllocateInitializeBcb.c)
 *     CcPinFileData @ 0x1402D7150 (CcPinFileData.c)
 *     CcUnpinFileDataEx @ 0x1402D8ED0 (CcUnpinFileDataEx.c)
 *     CcDeleteBcbs @ 0x1403A5A90 (CcDeleteBcbs.c)
 * Callees:
 *     CcSetVacbLargeOffset @ 0x1403B4820 (CcSetVacbLargeOffset.c)
 *     ReferenceVacbLevel @ 0x140449FE4 (ReferenceVacbLevel.c)
 */

__int64 __fastcall CcAdjustVacbLevelLockCount(__int64 a1, __int64 a2, int a3)
{
  int v4; // r9d
  __int64 v5; // rbx
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // r11d
  char v10; // cl
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rcx

  v4 = 0;
  v5 = a2;
  v7 = *(_QWORD *)(a1 + 88);
  v8 = 25;
  do
  {
    v9 = v8;
    v8 += 7;
    ++v4;
  }
  while ( *(_QWORD *)(a1 + 32) > 1LL << v8 );
  do
  {
    v10 = v9;
    v11 = v5 >> v9;
    v9 -= 7;
    v7 = *(_QWORD *)(v7 + 8LL * (unsigned int)v11);
    v5 &= (1LL << v10) - 1;
    --v4;
  }
  while ( v4 );
  v12 = (-(__int64)((*(_DWORD *)(a1 + 152) & 0x200) != 0) & 0x400) + 1024;
  *(_DWORD *)(v12 + v7) += a3;
  v13 = (-(__int64)((*(_DWORD *)(a1 + 152) & 0x200) != 0) & 0x400) + 1024;
  result = (unsigned int)(*(_DWORD *)(v13 + v7) | *(_DWORD *)(v13 + v7 + 4));
  if ( !(_DWORD)result )
  {
    ReferenceVacbLevel(a1, v7, 0, 1, 1);
    return CcSetVacbLargeOffset(v15, a2 & 0xFFFFFFFFFE000000uLL, -2LL, 0LL);
  }
  return result;
}
