/*
 * XREFs of KeUnmaskInterrupt @ 0x140200B74
 * Callers:
 *     IopUnmaskInterrupt @ 0x140200B4C (IopUnmaskInterrupt.c)
 * Callees:
 *     KiUnmaskSecondaryInterruptInternal @ 0x1402004E8 (KiUnmaskSecondaryInterruptInternal.c)
 *     KiUnmaskInterruptInternal @ 0x140200810 (KiUnmaskInterruptInternal.c)
 *     KiIsInterruptTypeSecondary @ 0x140202718 (KiIsInterruptTypeSecondary.c)
 */

__int64 __fastcall KeUnmaskInterrupt(__int64 *a1, unsigned __int8 a2, __int64 a3)
{
  unsigned int v6; // ebx
  char IsInterruptTypeSecondary; // r8
  unsigned __int8 i; // r9
  __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v12; // rcx
  unsigned int v13; // edx

  v6 = 0;
  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3);
  for ( i = 0; i < a2; ++i )
  {
    v9 = a1[i];
    _m_prefetchw((const void *)(v9 + 104));
    if ( (_InterlockedAnd((volatile signed __int32 *)(v9 + 104), 0xFFFFFFFE) & 1) == 0 )
    {
      v10 = 295;
      goto LABEL_6;
    }
  }
  if ( *(_DWORD *)(a3 + 8) )
    return v6;
  v12 = *a1;
  v13 = *(_DWORD *)(a3 + 64);
  if ( IsInterruptTypeSecondary )
    v10 = KiUnmaskSecondaryInterruptInternal(*(_DWORD *)(v12 + 88), v13);
  else
    v10 = KiUnmaskInterruptInternal(v12, v13);
LABEL_6:
  if ( v10 != 296 )
    return v10;
  return v6;
}
