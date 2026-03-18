/*
 * XREFs of MiDbgMarkPfnModified @ 0x1406734BC
 * Callers:
 *     MiDbgWriteCheck @ 0x140673E54 (MiDbgWriteCheck.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x14022C890 (MiAddLockedPageCharge.c)
 *     MiGetPagingFileOffset @ 0x14037C4CC (MiGetPagingFileOffset.c)
 *     MiSetPfnModified @ 0x1403871E0 (MiSetPfnModified.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiDbgMarkPfnModified(unsigned __int64 a1, char a2)
{
  unsigned __int64 v2; // rcx
  signed __int64 v4; // rbx
  unsigned int v5; // esi
  unsigned __int8 CurrentIrql; // di
  char v8; // cl
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  __int64 i; // rcx
  __int64 v12; // rbp
  signed __int64 v13; // rax
  char v14; // dl

  v2 = (a1 >> 12) & 0xFFFFFFFFFFLL;
  if ( (MiFlags & 0x10000000) == 0 )
    return 1LL;
  if ( v2 > qword_140E2D9A0 )
    return 1LL;
  if ( ((*(_QWORD *)(48 * v2 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
    return 1LL;
  v4 = 48 * v2 - 0x220000000000LL;
  if ( (*(_BYTE *)(v4 + 34) & 0x10) != 0 )
    return 1LL;
  v5 = 0;
  CurrentIrql = 17;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  }
  if ( (a2 & 3) == 0 && _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  if ( (*(_QWORD *)(v4 + 24) & 0x4000000000000000LL) != 0 )
  {
    LOBYTE(v5) = (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL;
    goto LABEL_33;
  }
  v8 = *(_BYTE *)(v4 + 34);
  if ( (*(_DWORD *)(v4 + 16) & 0x400LL) == 0 )
  {
    if ( (v8 & 8) == 0 && (unsigned int)MiGetPagingFileOffset(*(_QWORD *)(v4 + 16)) )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v12 = (unsigned int)i;
        if ( (unsigned int)i >= 0x20 )
          break;
        v13 = _InterlockedCompareExchange64((volatile signed __int64 *)&MiState + i + 1780, v4, 0LL);
        if ( !v13 )
          goto LABEL_29;
        if ( (v13 | 1) == (v4 | 1) )
          goto LABEL_20;
      }
      if ( (_DWORD)i == 32 )
        goto LABEL_33;
LABEL_29:
      v14 = 5;
      if ( CurrentIrql != 17 )
        v14 = 1;
      MiAddLockedPageCharge(v4, v14, v9, v10);
      _InterlockedAdd64((volatile signed __int64 *)&MiState + v12 + 1780, 1uLL);
      _InterlockedCompareExchange(&ExpDebuggerWork, 1, 0);
      goto LABEL_20;
    }
    goto LABEL_19;
  }
  if ( (v8 & 0x10) != 0 )
  {
LABEL_20:
    v5 = 1;
    goto LABEL_33;
  }
  if ( !_bittest64((const signed __int64 *)(v4 + 40), 0x35u) )
  {
LABEL_19:
    MiSetPfnModified(v4, 1);
    goto LABEL_20;
  }
LABEL_33:
  if ( (a2 & 3) == 0 )
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v5;
}
