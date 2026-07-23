/*
 * XREFs of MiCloneNoChange @ 0x140A47BE0
 * Callers:
 *     MiAllocateChildVads @ 0x140A47718 (MiAllocateChildVads.c)
 * Callees:
 *     MiAddSecureEntry @ 0x1408DC0A0 (MiAddSecureEntry.c)
 */

__int64 __fastcall MiCloneNoChange(__int64 a1, __int64 a2)
{
  unsigned __int64 i; // r8
  unsigned int v3; // r9d
  unsigned int v4; // ecx
  int v5; // r10d
  int v6; // ecx
  char v7; // al

  for ( i = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL; ; i = *(_QWORD *)i )
  {
    if ( !i )
      return 0LL;
    if ( *(_DWORD *)(i + 80) == 2 )
    {
      v3 = *(_DWORD *)(i + 8);
      if ( (v3 & 0x80u) == 0 )
      {
        v4 = (*(_DWORD *)(i + 8) & 4) != 0 ? 0x80000000 : 0;
        if ( (v3 & 8) != 0 )
        {
          if ( (v3 & 4) == 0 && (v3 & 3) != 0 )
            continue;
          v4 |= 1u;
        }
        v5 = v4 | 0x20000000;
        if ( (v3 & 0x100) == 0 )
          v5 = v4;
        if ( v5 )
          break;
      }
    }
  }
  v6 = (v3 >> 5) & 1;
  v7 = v6 | 4;
  if ( (v3 & 0x40) == 0 )
    v7 = v6;
  return MiAddSecureEntry(
           a2,
           (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12,
           ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) | 0xFFF,
           v5,
           v7) == 0
       ? 0xC000009A
       : 0;
}
