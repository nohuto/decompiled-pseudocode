/*
 * XREFs of CmpKeyEnumStackCreateResumeContext @ 0x14090B1D0
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x140909AC4 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14087F300 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x14090A69C (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpGetKcbAtLayerHeight @ 0x14090C380 (CmpGetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpKeyEnumStackCreateResumeContext(__int64 a1, __int64 a2, int a3, char a4, __int64 *a5)
{
  int v5; // r15d
  unsigned int v6; // esi
  ULONG_PTR v10; // rdx
  __int64 Pool; // rax
  __int64 v12; // rdi
  __int16 v13; // bp
  __int64 v14; // rsi
  _QWORD *v15; // r14
  unsigned __int64 EntryAtLayerHeight; // r12
  __int64 KcbAtLayerHeight; // rbx
  _DWORD *v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // r12

  v5 = *(__int16 *)(a1 + 2);
  v6 = 0;
  v10 = 24LL * (v5 + 1) + 8;
  if ( a4 )
    Pool = CmpAllocatePool(0x100uLL, v10, 0x36374D43u);
  else
    Pool = CmpAllocatePool(0x100uLL, v10, 0x37374D43u);
  v12 = Pool;
  if ( Pool )
  {
    *(_DWORD *)(Pool + 4) = a3;
    v13 = 0;
    *(_WORD *)Pool = v5;
    *(_BYTE *)(Pool + 2) = a4;
    if ( (v5 & 0x8000u) == 0 )
    {
      v14 = a2;
      v15 = (_QWORD *)(Pool + 8);
      do
      {
        EntryAtLayerHeight = CmpKeyEnumStackGetEntryAtLayerHeight(v14, v13);
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
        CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)KcbAtLayerHeight);
        v18 = v15 + 2;
        v19 = 2LL;
        v15[1] = KcbAtLayerHeight;
        v20 = EntryAtLayerHeight - (_QWORD)v15;
        *v15 = *(_QWORD *)(KcbAtLayerHeight + 304);
        do
        {
          *v18 = *(_DWORD *)((char *)v18 + v20 + 8);
          ++v18;
          --v19;
        }
        while ( v19 );
        ++v13;
        v15 += 3;
        v14 = a2;
      }
      while ( v13 <= (__int16)v5 );
      v6 = 0;
    }
    *a5 = v12;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
