/*
 * XREFs of AslpFileQuery16BitDescription @ 0x1800A2BC4
 * Callers:
 *     AslpFileGet16BitDescription @ 0x18009FDD4 (AslpFileGet16BitDescription.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     memcpy_0 @ 0x1800A7802 (memcpy_0.c)
 */

__int64 __fastcall AslpFileQuery16BitDescription(_BYTE *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rsi

  v3 = 0;
  *a1 = 0;
  if ( *(_DWORD *)(a2 + 56) == 5 )
  {
    v4 = *(_QWORD *)(a2 + 32);
    v5 = *(int *)(v4 + 60);
    v6 = *(_QWORD *)(a2 + 24);
    if ( v6 >= v5 + 64
      && (v7 = *(int *)(v5 + v4 + 44), v6 >= v7 + 1)
      && (v8 = v7 + v4, v9 = *(unsigned __int8 *)(v7 + v4), (_DWORD)v9)
      && (unsigned int)(v9 + 1) <= 0x100
      && (v10 = (unsigned int)v9, v6 >= v9 + v7 + 1) )
    {
      memcpy_0(a1, (const void *)(v8 + 1), (unsigned int)v9);
      a1[v10] = 0;
    }
    else
    {
      v3 = -1073741701;
      AslLogCallPrintf(1LL);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v3;
}
