/*
 * XREFs of KeUnmaskInterrupt @ 0x1402B4B54
 * Callers:
 *     IopUnmaskInterrupt @ 0x1402B4B2C (IopUnmaskInterrupt.c)
 * Callees:
 *     KiIsInterruptTypeSecondary @ 0x1402B3900 (KiIsInterruptTypeSecondary.c)
 *     KiUnmaskInterruptInternal @ 0x1402B4D3C (KiUnmaskInterruptInternal.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x1402B5288 (KiUnmaskSecondaryInterruptInternal.c)
 */

__int64 __fastcall KeUnmaskInterrupt(__int64 *a1, unsigned __int8 a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  char IsInterruptTypeSecondary; // r8
  unsigned __int8 i; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // eax

  v6 = 0;
  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3);
  for ( i = 0; i < a2; ++i )
  {
    v9 = a1[i];
    _m_prefetchw((const void *)(v9 + 104));
    if ( (_InterlockedAnd((volatile signed __int32 *)(v9 + 104), 0xFFFFFFFE) & 1) == 0 )
    {
      v12 = 295;
      goto LABEL_8;
    }
  }
  if ( a3[2] )
    return v6;
  v10 = *a1;
  v11 = (unsigned int)a3[16];
  if ( IsInterruptTypeSecondary )
    v12 = KiUnmaskSecondaryInterruptInternal(*(unsigned int *)(v10 + 88), v11);
  else
    v12 = KiUnmaskInterruptInternal(v10, v11);
LABEL_8:
  if ( v12 != 296 )
    return v12;
  return v6;
}
