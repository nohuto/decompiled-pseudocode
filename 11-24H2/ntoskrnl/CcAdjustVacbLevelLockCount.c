/*
 * XREFs of CcAdjustVacbLevelLockCount @ 0x1403EAB94
 * Callers:
 *     CcPinFileData @ 0x1402282C0 (CcPinFileData.c)
 *     CcUnpinFileDataEx @ 0x1402766A0 (CcUnpinFileDataEx.c)
 *     CcAllocateInitializeBcb @ 0x1403EA890 (CcAllocateInitializeBcb.c)
 *     CcDeleteBcbs @ 0x1404B21D4 (CcDeleteBcbs.c)
 * Callees:
 *     CcSetVacbLargeOffset @ 0x140357260 (CcSetVacbLargeOffset.c)
 *     ReferenceVacbLevel @ 0x140440074 (ReferenceVacbLevel.c)
 */

char __fastcall CcAdjustVacbLevelLockCount(__int64 a1, __int64 a2, int a3)
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
  int v14; // eax
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
  v14 = *(_DWORD *)(v13 + v7) | *(_DWORD *)(v13 + v7 + 4);
  if ( !v14 )
  {
    ReferenceVacbLevel(a1, v7, 0, 1, 1);
    LOBYTE(v14) = CcSetVacbLargeOffset(v15, a2 & 0xFFFFFFFFFE000000uLL, 0xFFFFFFFFFFFFFFFEuLL, 0LL);
  }
  return v14;
}
