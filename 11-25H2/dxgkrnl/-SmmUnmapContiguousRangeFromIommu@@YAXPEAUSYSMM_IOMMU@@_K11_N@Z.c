/*
 * XREFs of ?SmmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x14005AA6C
 * Callers:
 *     SmmUnmapNonPagedObjectFromIommu @ 0x140039CC4 (SmmUnmapNonPagedObjectFromIommu.c)
 *     SmmMapExistingMemoryToDomain @ 0x1400928CC (SmmMapExistingMemoryToDomain.c)
 *     ?SysMmUnmapIommuContiguousRange@@YAXPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@1_N@Z @ 0x140092AE0 (-SysMmUnmapIommuContiguousRange@@YAXPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@1_N@Z.c)
 * Callees:
 *     ?SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x14003A71C (-SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z.c)
 */

void __fastcall SmmUnmapContiguousRangeFromIommu(
        struct SYSMM_IOMMU *a1,
        __int64 a2,
        struct _MDL *a3,
        SIZE_T a4,
        char a5)
{
  SIZE_T v8; // rdi
  PMDL Mdl; // rax
  struct _MDL *v10; // rsi
  struct _MDL *v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // esi
  __int64 v14; // rdx
  struct _MDL v15; // [rsp+20h] [rbp-58h] BYREF
  struct _MDL *v16; // [rsp+50h] [rbp-28h]

  v8 = a4 >> 12;
  Mdl = MmCreateMdl(0LL, 0LL, a4);
  v10 = Mdl;
  if ( Mdl )
  {
    v11 = Mdl + 1;
    if ( (_DWORD)v8 )
    {
      v12 = (unsigned int)v8;
      do
      {
        v11->Next = a3;
        a3 = (struct _MDL *)((char *)a3 + 1);
        v11 = (struct _MDL *)((char *)v11 + 8);
        --v12;
      }
      while ( v12 );
    }
    SmmUnmapMdlFromIommu(a1, a2, v10, a5);
    ExFreePoolWithTag(v10, 0);
  }
  else
  {
    v15.Next = 0LL;
    v13 = 0;
    *(_DWORD *)&v15.Size = 56;
    v15.StartVa = 0LL;
    for ( *(_QWORD *)&v15.ByteCount = 4096LL; v13 < (unsigned int)v8; a3 = (struct _MDL *)((char *)a3 + 1) )
    {
      v16 = a3;
      if ( a2 )
        v14 = a2 + (v13 << 12);
      else
        v14 = 0LL;
      SmmUnmapMdlFromIommu(a1, v14, &v15, a5);
      ++v13;
    }
  }
}
