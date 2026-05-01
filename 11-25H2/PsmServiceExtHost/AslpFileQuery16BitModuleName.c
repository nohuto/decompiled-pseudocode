/*
 * XREFs of AslpFileQuery16BitModuleName @ 0x1800A2CCC
 * Callers:
 *     AslpFileGet16BitModuleName @ 0x18009FEB8 (AslpFileGet16BitModuleName.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     memcpy_0 @ 0x1800A7802 (memcpy_0.c)
 */

__int64 __fastcall AslpFileQuery16BitModuleName(_BYTE *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned __int64 v6; // r10
  __int64 v7; // r9
  unsigned __int8 *v8; // rdx
  size_t v9; // rsi

  v3 = 0;
  *a1 = 0;
  if ( *(_DWORD *)(a2 + 56) == 5 )
  {
    v4 = *(_QWORD *)(a2 + 32);
    v5 = *(int *)(v4 + 60);
    v6 = *(_QWORD *)(a2 + 24);
    if ( v6 >= v5 + 64
      && (v7 = *(unsigned __int16 *)(v5 + v4 + 38), v6 >= v7 + 1)
      && (v8 = (unsigned __int8 *)(v4 + v7 + v5), *v8)
      && (v9 = *v8, v6 >= *(_DWORD *)(v4 + 60) + (int)v7 + v9 + 1) )
    {
      memcpy_0(a1, v8 + 1, v9);
      a1[v9] = 0;
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
