/*
 * XREFs of MiAllocateDbgPatches @ 0x1406725E8
 * Callers:
 *     MiDbgCopyMemory @ 0x140672C90 (MiDbgCopyMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAllocateDbgPatches(__int16 a1, unsigned int a2, __int64 a3, ULONG **a4)
{
  int v7; // r9d
  unsigned int v8; // r8d
  int v9; // edx
  __int64 v10; // rdi
  __int64 v11; // rdx
  ULONG *v12; // rcx
  int v13; // ebx
  ULONG *v14; // rcx
  __int64 v15; // rcx

  if ( a2 > 8 )
    return 3221225485LL;
  v7 = (a1 & 0xFFC) + (*(_DWORD *)(a3 + 48) << 12);
  v8 = ((unsigned __int16)(a1 & 0xFFF) >> 2) - (((a1 & 0xFFF) + a2 - 1) >> 2) + 1;
  if ( dword_140E318A4 > (unsigned int)dword_140E318A0 )
    v9 = dword_140E318A0 - dword_140E318A4 + 256;
  else
    v9 = dword_140E318A0 - dword_140E318A4;
  if ( v8 + v9 >= 0x100 || v9 + v8 + dword_140E358B0 > 0x200 )
    return 3221225473LL;
  for ( ; v8; --v8 )
  {
    v10 = *(_QWORD *)(a3 + 40);
    LODWORD(v11) = dword_140E318A0;
    while ( (_DWORD)v11 != dword_140E318A4 )
    {
      if ( !(_DWORD)v11 )
        LODWORD(v11) = 256;
      v11 = (unsigned int)(v11 - 1);
      v12 = &MiState + 6 * v11 + 3624;
      if ( v10 == *(_QWORD *)v12 )
      {
        v13 = *(&MiState + 6 * v11 + 3626);
        if ( ((v7 ^ v13) & 0xFFFFFFFC) == 0 )
        {
          if ( (v13 & 1) == 0 )
          {
            v14 = (ULONG *)((unsigned __int64)v12 | 1);
            goto LABEL_20;
          }
          break;
        }
      }
    }
    v15 = (unsigned int)dword_140E318A0++ + 604LL;
    v14 = &MiState + 6 * v15;
    if ( dword_140E318A0 == 256 )
      dword_140E318A0 = 0;
    *(_QWORD *)v14 = v10;
    v14[2] = v7;
LABEL_20:
    *a4 = v14;
    v7 += 4;
    ++a4;
  }
  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(a3 + 40) + 96LL), 1u);
  return 0LL;
}
