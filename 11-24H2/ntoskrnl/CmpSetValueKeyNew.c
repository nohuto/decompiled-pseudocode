/*
 * XREFs of CmpSetValueKeyNew @ 0x140884CD8
 * Callers:
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     CmpFreeValue @ 0x1408847DC (CmpFreeValue.c)
 *     CmpAddValueToListEx @ 0x14088522C (CmpAddValueToListEx.c)
 *     CmpAddValueKeyNew @ 0x140885910 (CmpAddValueKeyNew.c)
 */

__int64 __fastcall CmpSetValueKeyNew(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        int a8)
{
  __int64 v8; // rbx
  int v10; // edi
  unsigned int v11; // ebx
  int v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+20h] [rbp-38h]
  int v15; // [rsp+68h] [rbp+10h] BYREF

  v15 = -1;
  v8 = a2 + 36;
  if ( !*(_DWORD *)(a2 + 36) || (v10 = HvpMarkCellDirty(a1, *(unsigned int *)(a2 + 40), 0), v10 >= 0) )
  {
    v13 = a7;
    v10 = CmpAddValueKeyNew(a1, v13, a8, (__int64)&v15);
    if ( v10 < 0 )
    {
      v11 = v15;
    }
    else
    {
      v14 = v8;
      v11 = v15;
      v10 = CmpAddValueToListEx(a1, v14, 1);
      if ( v10 >= 0 )
      {
        v11 = -1;
        v10 = 0;
      }
    }
    if ( v11 != -1 )
      CmpFreeValue(a1, v11);
  }
  return (unsigned int)v10;
}
