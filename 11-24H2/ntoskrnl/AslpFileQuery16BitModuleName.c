/*
 * XREFs of AslpFileQuery16BitModuleName @ 0x14080FED8
 * Callers:
 *     AslpFileGet16BitModuleName @ 0x14080D228 (AslpFileGet16BitModuleName.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileQuery16BitModuleName(_BYTE *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // r11
  unsigned __int64 v6; // r10
  __int64 v7; // r9
  unsigned __int8 *v8; // rdx
  __int64 v9; // rsi
  int v10; // r8d

  v3 = 0;
  *a1 = 0;
  if ( *(_DWORD *)(a2 + 64) == 5 )
  {
    v4 = *(_QWORD *)(a2 + 32);
    v5 = *(int *)(v4 + 60);
    v6 = *(_QWORD *)(a2 + 24);
    if ( v6 < v5 + 64 || (v7 = *(unsigned __int16 *)(v5 + v4 + 38), v6 < v7 + 1) )
    {
      v10 = 4479;
    }
    else
    {
      v8 = (unsigned __int8 *)(v4 + v7 + v5);
      if ( *v8 )
      {
        v9 = *v8;
        if ( v6 >= v9 + (int)v5 + (int)v7 + 1LL )
        {
          memmove(a1, v8 + 1, *v8);
          a1[v9] = 0;
          return v3;
        }
        v10 = 4495;
      }
      else
      {
        v10 = 4488;
      }
    }
    v3 = -1073741701;
    AslLogCallPrintf(1, (unsigned int)"AslpFileQuery16BitModuleName", v10, (unsigned int)"File mapping invalid");
    return v3;
  }
  return (unsigned int)-1073741637;
}
