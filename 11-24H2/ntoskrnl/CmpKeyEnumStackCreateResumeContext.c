/*
 * XREFs of CmpKeyEnumStackCreateResumeContext @ 0x140917760
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x140916054 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403E1834 (CmpAllocatePool.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14087B450 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140916C2C (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpGetKcbAtLayerHeight @ 0x140918910 (CmpGetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpKeyEnumStackCreateResumeContext(__int64 a1, __int64 a2, int a3, char a4, __int64 *a5)
{
  __int16 v5; // r15
  unsigned int v6; // esi
  __int64 Pool; // rax
  __int64 v11; // rdi
  __int16 v12; // bp
  __int64 v13; // rsi
  _QWORD *v14; // r14
  unsigned __int64 EntryAtLayerHeight; // r12
  __int64 KcbAtLayerHeight; // rbx
  _DWORD *v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // r12

  v5 = *(_WORD *)(a1 + 2);
  v6 = 0;
  Pool = CmpAllocatePool(0x100uLL);
  v11 = Pool;
  if ( Pool )
  {
    *(_DWORD *)(Pool + 4) = a3;
    v12 = 0;
    *(_WORD *)Pool = v5;
    *(_BYTE *)(Pool + 2) = a4;
    if ( v5 >= 0 )
    {
      v13 = a2;
      v14 = (_QWORD *)(Pool + 8);
      do
      {
        EntryAtLayerHeight = CmpKeyEnumStackGetEntryAtLayerHeight(v13, v12);
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
        CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)KcbAtLayerHeight);
        v17 = v14 + 2;
        v18 = 2LL;
        v14[1] = KcbAtLayerHeight;
        v19 = EntryAtLayerHeight - (_QWORD)v14;
        *v14 = *(_QWORD *)(KcbAtLayerHeight + 304);
        do
        {
          *v17 = *(_DWORD *)((char *)v17 + v19 + 8);
          ++v17;
          --v18;
        }
        while ( v18 );
        ++v12;
        v14 += 3;
        v13 = a2;
      }
      while ( v12 <= v5 );
      v6 = 0;
    }
    *a5 = v11;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
