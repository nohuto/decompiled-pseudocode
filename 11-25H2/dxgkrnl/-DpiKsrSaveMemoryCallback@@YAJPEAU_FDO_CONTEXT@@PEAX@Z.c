/*
 * XREFs of ?DpiKsrSaveMemoryCallback@@YAJPEAU_FDO_CONTEXT@@PEAX@Z @ 0x140249830
 * Callers:
 *     <none>
 * Callees:
 *     DxgkKsrSaveAdapterState @ 0x14020AEC0 (DxgkKsrSaveAdapterState.c)
 *     ?DpiDxgkDdiSaveMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_SAVEMEMORYFORHOTUPDATE@@@Z @ 0x1402494E8 (-DpiDxgkDdiSaveMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_SAVEMEMORYFORHOTUPDATE@@@Z.c)
 */

__int64 __fastcall DpiKsrSaveMemoryCallback(struct _FDO_CONTEXT *a1, unsigned int *a2, __int64 a3)
{
  __int64 v5; // rdx
  int v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rsi
  int v10; // eax
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2[8];
  if ( (int)v5 < 0 )
    return (unsigned int)v5;
  if ( *((_QWORD *)a2 + 2)
    && (*((_DWORD *)a1 + 1398) & 2) != 0
    && (v7 = DpiDxgkDdiSaveMemoryForHotUpdate(a1, (const struct _DXGKARG_SAVEMEMORYFORHOTUPDATE *)a2, a3),
        v5 = v7,
        a2[8] = v7,
        v7 < 0) )
  {
    WdLogSingleEntry1(2LL, v7);
    WdLogGlobalForLineNumber = 431;
  }
  else
  {
    if ( (*a2 & 1) != 0 )
    {
      LOBYTE(v5) = 1;
      KsrFreePersistedMemory((char *)a1 + 4928, v5);
      KsrFreePersistedMemory((char *)a1 + 4944, 0LL);
      return a2[8];
    }
    v11 = 0;
    if ( (int)v5 >= 0 )
    {
      if ( *((_QWORD *)a2 + 2) )
      {
        v8 = a2[2];
        if ( v8 <= 0x20 )
          return a2[8];
        v9 = *((_QWORD *)a2 + 3);
        v10 = DxgkKsrSaveAdapterState(*((_QWORD *)a1 + 504), v8 - 32, v9 + 32, &v11);
        a2[8] = v10;
        if ( v10 < 0 || !v11 )
          return a2[8];
        *(_OWORD *)v9 = *((_OWORD *)a1 + 308);
        *(_QWORD *)(v9 + 16) = *((_QWORD *)a1 + 337);
        *(_DWORD *)(v9 + 28) = v11;
        *((_QWORD *)a2 + 3) += (unsigned int)(v11 + 32);
      }
      else
      {
        a2[8] = DxgkKsrSaveAdapterState(*((_QWORD *)a1 + 504), 0LL, 0LL, &v11);
        if ( !v11 )
          return a2[8];
        a2[2] += v11 + 32;
      }
      ++a2[1];
    }
  }
  return a2[8];
}
