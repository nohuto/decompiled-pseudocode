/*
 * XREFs of MiFindFirstDebuggerPatch @ 0x140680C30
 * Callers:
 *     MiDeleteDebuggerPatches @ 0x1404A8408 (MiDeleteDebuggerPatches.c)
 *     MiApplyDebuggerPatches @ 0x1404F4300 (MiApplyDebuggerPatches.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFindFirstDebuggerPatch(unsigned __int64 a1, int a2, int a3, _DWORD *a4)
{
  unsigned int v4; // r11d
  unsigned int v7; // ebx
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v13; // rax

  v4 = dword_140E35C38;
  v7 = (a2 & 0xFFFFF) << 10;
  v8 = 0LL;
  while ( (unsigned int)v8 < v4 )
  {
    v9 = ((unsigned int)v8 + v4) >> 1;
    v10 = *((_QWORD *)&MiState + v9 + 4118);
    if ( *(_QWORD *)v10 < a1 )
      goto LABEL_6;
    if ( *(_QWORD *)v10 > a1 )
    {
LABEL_8:
      v4 = ((unsigned int)v8 + v4) >> 1;
    }
    else
    {
      v11 = *(_DWORD *)(v10 + 8) >> 2;
      if ( v11 >= v7 )
      {
        if ( v11 <= v7 )
        {
          *a4 = v9;
          return 1LL;
        }
        goto LABEL_8;
      }
LABEL_6:
      v8 = (unsigned int)(v9 + 1);
    }
  }
  if ( (unsigned int)v8 < dword_140E35C38 )
  {
    _mm_lfence();
    v13 = *((_QWORD *)&MiState + v8 + 4118);
    if ( *(_QWORD *)v13 == a1 && (!a3 || *(_DWORD *)(v13 + 8) >> 12 == a2) )
    {
      *a4 = v8;
      return 1LL;
    }
  }
  return 0LL;
}
