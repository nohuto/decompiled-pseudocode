/*
 * XREFs of MiSwitchBaseAddress @ 0x140A45C38
 * Callers:
 *     MiRelocateImageAgain @ 0x140AEAE48 (MiRelocateImageAgain.c)
 * Callees:
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiGetControlAreaLoadConfig @ 0x14045AB84 (MiGetControlAreaLoadConfig.c)
 *     MiApplyBytestreamFixup @ 0x14049DA7C (MiApplyBytestreamFixup.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14049EDB4 (DbgUnLoadImageSymbolsUnicode.c)
 */

__int64 __fastcall MiSwitchBaseAddress(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // rbx
  _QWORD *v9; // rcx
  __int64 i; // rax
  __int64 ControlAreaLoadConfig; // rax
  unsigned int v12; // r9d
  __int64 v13; // r10
  __int64 v14; // r11
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 result; // rax
  __int64 v19; // rbx
  __int64 *v20; // rax
  __int64 *v21; // rax

  v3 = *a1;
  v6 = *(_QWORD *)((a1[12] & 0xFFFFFFFFFFFFFFF8uLL) + 32);
  v7 = a2 - *(_QWORD *)(*a1 + 32LL);
  v8 = *(_QWORD *)(v6 + 40);
  *(_QWORD *)(v6 + 40) = v7;
  v9 = *(_QWORD **)(v3 + 56);
  *(_QWORD *)(v3 + 32) = a2;
  *v9 += *(_QWORD *)(v6 + 40);
  for ( i = *(_QWORD *)(v6 + 16); i; i = *v21 )
    MiApplyBytestreamFixup((__int64)v9, (_QWORD *)(i + 24), v8);
  ControlAreaLoadConfig = MiGetControlAreaLoadConfig((__int64)a1);
  if ( ControlAreaLoadConfig )
  {
    v15 = *(_QWORD *)(ControlAreaLoadConfig + 24);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 8);
      if ( v16 )
        *(_QWORD *)(v15 + 8) = v13 + v16 - v14;
      *(_QWORD *)(v15 + 16) += v13 - v14;
    }
  }
  MiWalkEntireImage((ULONG_PTR)a1, a3, 2u, v12);
  *(_QWORD *)(v6 + 40) = v7 + v8;
  result = *(_QWORD *)(v6 + 16);
  if ( result )
  {
    v19 = -v8;
    do
    {
      MiApplyBytestreamFixup(v17, (_QWORD *)(result + 24), v19);
      result = *v20;
    }
    while ( result );
  }
  if ( _bittest16((const signed __int16 *)(v3 + 12), 0xBu) )
  {
    DbgUnLoadImageSymbolsUnicode(
      (PCUNICODE_STRING)((a1[8] & 0xFFFFFFFFFFFFFFF0uLL) + 88),
      *(_QWORD *)(v3 + 32),
      (__int64)KeGetCurrentThread()->ApcState.Process);
    result = 63487LL;
    *(_WORD *)(v3 + 12) &= ~0x800u;
  }
  return result;
}
