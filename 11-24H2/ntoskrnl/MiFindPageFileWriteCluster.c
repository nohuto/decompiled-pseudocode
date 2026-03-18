/*
 * XREFs of MiFindPageFileWriteCluster @ 0x140367BDC
 * Callers:
 *     MiGatherPagefilePages @ 0x14039C8C8 (MiGatherPagefilePages.c)
 * Callees:
 *     RtlFindLongestRunClearCapped @ 0x140366278 (RtlFindLongestRunClearCapped.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140367484 (MiRefPageFileSpaceBitmaps.c)
 *     MiSetPageFileAllocationBits @ 0x140367504 (MiSetPageFileAllocationBits.c)
 *     MiFindFreePageFileSpace @ 0x140367D88 (MiFindFreePageFileSpace.c)
 *     MiMakePageFilePte @ 0x14039F4D8 (MiMakePageFilePte.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x14046FA2C (MiDerefPageFileSpaceBitmaps.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

ULONG *__fastcall MiFindPageFileWriteCluster(__int64 a1, unsigned int *a2, unsigned int *a3, int a4)
{
  unsigned int v4; // r12d
  __int64 v7; // rcx
  __int64 PageFilePte; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // r9d
  ULONG FreePageFileSpace; // r14d
  unsigned __int64 v13; // rbx
  _DWORD *v14; // r12
  unsigned __int64 v15; // rbx
  ULONG *result; // rax
  unsigned int *v17; // rcx
  _OWORD *v18; // r13
  unsigned int v19; // edi
  int v20; // r15d
  ULONG v21; // eax
  ULONG LongestRunClearCapped; // eax
  bool v23; // zf
  unsigned int v24; // ecx
  void *v25; // rax
  __int64 v26; // [rsp+20h] [rbp-48h] BYREF
  __int64 v27; // [rsp+28h] [rbp-40h]
  _OWORD v28[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v29; // [rsp+50h] [rbp-18h]
  unsigned __int64 v30; // [rsp+B0h] [rbp+48h] BYREF
  _DWORD *v31; // [rsp+B8h] [rbp+50h]
  unsigned int *v32; // [rsp+C0h] [rbp+58h]
  ULONG v33; // [rsp+C8h] [rbp+60h] BYREF

  v32 = a3;
  v31 = a2;
  v4 = *a3;
  LODWORD(v27) = 0;
  v29 = 0LL;
  v26 = 0LL;
  v7 = *a2;
  memset(v28, 0, sizeof(v28));
  PageFilePte = MiMakePageFilePte(v7);
  v9 = *(_QWORD *)(a1 + 216);
  v30 = v10 ^ (v10 ^ PageFilePte) & 0xFFFFFFFFFFFF0FFFuLL;
  FreePageFileSpace = MiFindFreePageFileSpace(v9, &v30, v4, v11 != 0 ? 38 : 32);
  if ( FreePageFileSpace )
  {
    v13 = v30;
    if ( qword_140E2DB80 && (v30 & 0x10) == 0 )
      v13 = v30 & ~qword_140E2DB80;
    v14 = v31;
    v15 = HIDWORD(v13);
  }
  else
  {
    if ( a4 )
    {
      v17 = (unsigned int *)&v26;
      v18 = *(_OWORD **)(a1 + 80);
      v19 = v4;
      v14 = v31;
      v20 = 0;
      LODWORD(v26) = *(_DWORD *)a1;
      v27 = *((_QWORD *)v18 + 2);
      v21 = *v31;
    }
    else
    {
      v20 = *(_DWORD *)(a1 + 96);
      v19 = *(_DWORD *)(a1 + 92);
      if ( v19 < dword_140FC420C && *(_DWORD *)(a1 + 100) != v20 )
      {
        if ( v19 >= (unsigned int)dword_140FC420C >> 3 )
        {
          v24 = v19 + (v19 >> 1);
          v19 = dword_140FC420C;
          if ( v24 < dword_140FC420C )
            v19 = v24;
        }
        else
        {
          v19 *= 2;
        }
        *(_DWORD *)(a1 + 92) = v19;
      }
      v18 = v28;
      if ( v4 < v19 )
        v19 = v4;
      if ( (*(_WORD *)(a1 + 172) & 0x800) != 0 )
        v19 = 1;
      MiRefPageFileSpaceBitmaps(a1, (__int64)v28);
      v21 = *(_DWORD *)(a1 + 88);
      v17 = (unsigned int *)v28 + 2;
      v14 = v31;
    }
    v33 = v21;
    LongestRunClearCapped = RtlFindLongestRunClearCapped(v17, v19, &v33);
    v23 = a4 == 0;
    FreePageFileSpace = LongestRunClearCapped;
    LODWORD(v15) = v33;
    if ( v23 )
    {
      if ( LongestRunClearCapped )
      {
        if ( LongestRunClearCapped < v19 )
        {
          *(_DWORD *)(a1 + 92) = LongestRunClearCapped;
          *(_DWORD *)(a1 + 100) = v20;
        }
        *(_DWORD *)(a1 + 88) = v15 + LongestRunClearCapped;
      }
      v25 = (void *)MiDerefPageFileSpaceBitmaps(a1, v18, 0LL);
      if ( v25 )
        ExFreePoolWithTag(v25, 0);
    }
    else
    {
      MiSetPageFileAllocationBits(a1, v33, LongestRunClearCapped);
    }
  }
  result = v32;
  *v14 = v15;
  *result = FreePageFileSpace;
  return result;
}
