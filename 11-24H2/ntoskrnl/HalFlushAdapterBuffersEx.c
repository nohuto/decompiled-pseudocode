/*
 * XREFs of HalFlushAdapterBuffersEx @ 0x14038BB40
 * Callers:
 *     HalPutScatterGatherListV3 @ 0x14038C148 (HalPutScatterGatherListV3.c)
 * Callees:
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x140386AA0 (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14038B860 (HalpDmaCheckMdlAccessibility.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x14038BDCC (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaControllerFlushChannel @ 0x14038BFBC (HalpDmaControllerFlushChannel.c)
 *     HalpDmaFlushContiguousTransferV3 @ 0x14038CE18 (HalpDmaFlushContiguousTransferV3.c)
 *     HalpDmaFlushDriverMdl @ 0x140539E4C (HalpDmaFlushDriverMdl.c)
 *     HalpDmaFreeLa @ 0x140539E8C (HalpDmaFreeLa.c)
 */

__int64 __fastcall HalFlushAdapterBuffersEx(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, ULONG a5, char a6)
{
  bool v7; // zf
  __int64 v8; // rbp
  struct _MDL *v11; // rsi
  ULONG v12; // esi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r12
  __int64 v16; // r14
  ULONG v17; // r8d
  char v18; // r8
  char v19; // r13
  ULONG v20; // edx
  ULONG v21; // ecx
  unsigned __int64 v22; // r9
  int AdapterCacheAlignment; // eax
  __int64 v24; // r9
  unsigned __int64 v25; // r10
  int v26; // r11d
  struct _MDL *Next; // r14
  PMDL v28; // r15
  struct _MDL *v29; // rbx
  PMDL Mdl; // [rsp+40h] [rbp-48h] BYREF
  char v31; // [rsp+90h] [rbp+8h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+18h] BYREF

  v7 = *(_DWORD *)(a1 + 520) == 3;
  v8 = a3;
  v31 = 0;
  Mdl = 0LL;
  v32 = 0LL;
  if ( v7 )
    HalpDmaFreeLa(a1, a3 + 24);
  v11 = *(struct _MDL **)(a1 + 552);
  if ( v11 )
  {
    do
    {
      Next = v11->Next;
      if ( (v11->MdlFlags & 1) != 0 )
        MmUnmapLockedPages(v11->MappedSystemVa, v11);
      IoFreeMdl(v11);
      v11 = Next;
    }
    while ( Next );
  }
  v12 = a5;
  *(_QWORD *)(a1 + 552) = 0LL;
  if ( !v12 )
  {
    if ( !*(_BYTE *)(a1 + 441) )
      HalpDmaControllerFlushChannel(*(_QWORD *)(a1 + 368), *(unsigned int *)(a1 + 380));
    return 0LL;
  }
  while ( 1 )
  {
    if ( !a2 )
      return 3221225485LL;
    v14 = *(unsigned int *)(a2 + 40);
    if ( a4 < v14 )
      break;
    a2 = *(_QWORD *)a2;
    a4 -= v14;
  }
  if ( !*(_BYTE *)(a1 + 441) )
    HalpDmaControllerFlushChannel(*(_QWORD *)(a1 + 368), *(unsigned int *)(a1 + 380));
  if ( !*(_BYTE *)(a1 + 440) )
    return 0LL;
  v15 = a4;
  v16 = a2;
  if ( v8 )
  {
    v17 = *(_DWORD *)(v8 + 16);
    if ( *(_QWORD *)a2
      || (AdapterCacheAlignment = HalpDmaGetAdapterCacheAlignment(a1),
          ((AdapterCacheAlignment - 1) & (unsigned int)v24) != 0)
      && v25 >= (v24 & 0xFFFFFFFFFFFFF000uLL) )
    {
      v12 = v17;
    }
    else
    {
      v12 = (~(AdapterCacheAlignment - 1) & (v25 + AdapterCacheAlignment - 1)) - v26 - a4;
      if ( v12 > v17 )
        v12 = v17;
    }
  }
  HalpDmaCheckMdlAccessibility(a1, (__int64 *)a2, a4, v12, &v31, &Mdl);
  v18 = v31;
  v19 = a6;
  if ( v31 )
  {
    v28 = Mdl;
    if ( !a6 )
      HalpDmaFlushDriverMdl((ULONG_PTR)Mdl);
    if ( v28 )
    {
      do
      {
        v29 = v28->Next;
        IoFreeMdl(v28);
        v28 = v29;
      }
      while ( v29 );
    }
    if ( !v8 )
      return 0LL;
    v18 = v31;
LABEL_19:
    *(_QWORD *)(v8 + 56) = v8;
    while ( v12 )
    {
      v20 = v12;
      if ( !v16 )
        break;
      v21 = v12;
      if ( *(_DWORD *)(v16 + 40) - (int)v15 <= v12 )
        v21 = *(_DWORD *)(v16 + 40) - v15;
      v22 = v15 + *(_QWORD *)(v16 + 32) + *(unsigned int *)(v16 + 44);
      v12 -= v21;
      if ( v12 && !*(_QWORD *)v16 )
      {
        v21 = v20;
        v12 = 0;
      }
      if ( *(_BYTE *)(a1 + 442) )
        HalpDmaFlushScatterTransferV3(a1, v16, v8, v22, v21, v19, v18, (__int64)&v32);
      else
        HalpDmaFlushContiguousTransferV3(a1, v16, v8, v22, v21, v19, v18, (__int64)&v32);
      LODWORD(v8) = v32;
      v15 = 0LL;
      v16 = *(_QWORD *)v16;
      v18 = v31;
    }
    return 0LL;
  }
  if ( v8 )
    goto LABEL_19;
  return 3221225473LL;
}
