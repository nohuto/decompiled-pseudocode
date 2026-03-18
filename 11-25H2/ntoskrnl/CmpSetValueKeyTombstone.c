/*
 * XREFs of CmpSetValueKeyTombstone @ 0x140AA8940
 * Callers:
 *     CmDeleteValueKey @ 0x14086BE88 (CmDeleteValueKey.c)
 * Callees:
 *     CmpAddValueKeyTombstone @ 0x1407CADE4 (CmpAddValueKeyTombstone.c)
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     CmpAddValueToListEx @ 0x14087F434 (CmpAddValueToListEx.c)
 *     CmpFreeValue @ 0x140886E8C (CmpFreeValue.c)
 */

__int64 __fastcall CmpSetValueKeyTombstone(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int *v5; // rbx
  int v9; // edi
  unsigned int v10; // ebx
  unsigned int *v12; // [rsp+20h] [rbp-28h]
  ULONG_PTR v13; // [rsp+58h] [rbp+10h] BYREF

  LODWORD(v13) = -1;
  v5 = (unsigned int *)(a2 + 36);
  if ( !*(_DWORD *)(a2 + 36) || (v9 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(a2 + 40), 0), v9 >= 0) )
  {
    v9 = CmpAddValueKeyTombstone(BugCheckParameter3, a3, a5, &v13);
    if ( v9 < 0 )
    {
      v10 = v13;
    }
    else
    {
      v12 = v5;
      v10 = v13;
      v9 = CmpAddValueToListEx(BugCheckParameter3, v13, a4, a5, v12);
      if ( v9 >= 0 )
      {
        v10 = -1;
        v9 = 0;
      }
    }
    if ( v10 != -1 )
      CmpFreeValue(BugCheckParameter3, v10);
  }
  return (unsigned int)v9;
}
