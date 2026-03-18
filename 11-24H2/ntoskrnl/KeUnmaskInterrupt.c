/*
 * XREFs of KeUnmaskInterrupt @ 0x14046E464
 * Callers:
 *     IopUnmaskInterrupt @ 0x14046E43C (IopUnmaskInterrupt.c)
 * Callees:
 *     KiIsInterruptTypeSecondary @ 0x1403B764C (KiIsInterruptTypeSecondary.c)
 *     KiUnmaskInterruptInternal @ 0x14046E508 (KiUnmaskInterruptInternal.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x14046E528 (KiUnmaskSecondaryInterruptInternal.c)
 */

__int64 __fastcall KeUnmaskInterrupt(__int64 *a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  unsigned __int8 v6; // bp
  unsigned int v7; // ebx
  char IsInterruptTypeSecondary; // r8
  unsigned __int8 i; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // eax

  v6 = a2;
  v7 = 0;
  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3, a2, (__int64)a3, a4);
  for ( i = 0; i < v6; ++i )
  {
    v10 = a1[i];
    _m_prefetchw((const void *)(v10 + 104));
    if ( (_InterlockedAnd((volatile signed __int32 *)(v10 + 104), 0xFFFFFFFE) & 1) == 0 )
    {
      v13 = 295;
      goto LABEL_8;
    }
  }
  if ( a3[2] )
    return v7;
  v11 = *a1;
  v12 = (unsigned int)a3[16];
  if ( IsInterruptTypeSecondary )
    v13 = KiUnmaskSecondaryInterruptInternal(*(unsigned int *)(v11 + 88), v12);
  else
    v13 = KiUnmaskInterruptInternal(v11, v12);
LABEL_8:
  if ( v13 != 296 )
    return v13;
  return v7;
}
