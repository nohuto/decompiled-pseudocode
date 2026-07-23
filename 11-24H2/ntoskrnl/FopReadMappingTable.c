/*
 * XREFs of FopReadMappingTable @ 0x140C725F4
 * Callers:
 *     FopInitializeFonts @ 0x140C7234C (FopInitializeFonts.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x14045DF18 (FioFwReadBytesAtOffset.c)
 *     BgpFwFreeMemory @ 0x14045EC7C (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14045ED38 (BgpFwAllocateMemory.c)
 *     FopFreeMappingTable @ 0x140BB48AC (FopFreeMappingTable.c)
 *     FopReadCmapTable @ 0x140C724A4 (FopReadCmapTable.c)
 */

__int64 __fastcall FopReadMappingTable(__int64 a1, unsigned int a2, __int64 *a3)
{
  int v6; // eax
  __int64 v7; // r14
  int BytesAtOffset; // ebx
  __int64 v9; // rax
  unsigned int i; // ecx
  int v11; // ecx
  int v12; // r13d
  unsigned __int16 v13; // bx
  unsigned __int16 v14; // si
  __int64 Memory; // rax
  __int64 v16; // rdi
  _WORD *v17; // rax
  _WORD *v18; // rbp
  unsigned int v19; // esi
  _WORD *v20; // rcx
  __int64 v21; // rdx
  int v22; // edx
  __int64 v24; // [rsp+20h] [rbp-38h] BYREF
  int v25; // [rsp+28h] [rbp-30h]
  __int16 v26; // [rsp+2Ch] [rbp-2Ch]
  __int64 v27; // [rsp+78h] [rbp+20h] BYREF

  v27 = 0LL;
  v24 = 0LL;
  v25 = 0;
  v26 = 0;
  v6 = FopReadCmapTable(a1, a2, &v27);
  v7 = v27;
  BytesAtOffset = v6;
  if ( v6 >= 0 )
  {
    v9 = v27 + 4;
    for ( i = 0; ; ++i )
    {
      if ( i >= *(unsigned __int16 *)(v27 + 2) )
        goto LABEL_21;
      if ( *(_WORD *)v9 == 3 && *(_WORD *)(v9 + 2) == 1 )
        break;
      v9 += 8LL;
    }
    v11 = *(_DWORD *)(v9 + 4);
    if ( v11 )
    {
      v12 = v11 + a2;
      BytesAtOffset = FioFwReadBytesAtOffset(a1, v11 + a2, 0xEu, &v24);
      if ( BytesAtOffset < 0 )
        goto LABEL_22;
      if ( __ROR2__(v24, 8) != 4 )
      {
        BytesAtOffset = -1073741701;
        goto LABEL_22;
      }
      v13 = __ROR2__(WORD1(v24), 8);
      v14 = __ROR2__(HIWORD(v24), 8);
      Memory = BgpFwAllocateMemory(0x38uLL);
      v16 = Memory;
      if ( !Memory )
      {
        BytesAtOffset = -1073741801;
        goto LABEL_22;
      }
      *(_OWORD *)Memory = 0LL;
      *(_OWORD *)(Memory + 16) = 0LL;
      *(_OWORD *)(Memory + 32) = 0LL;
      *(_QWORD *)(Memory + 48) = 0LL;
      *(_DWORD *)Memory = v14 >> 1;
      v17 = (_WORD *)BgpFwAllocateMemory((unsigned int)v13 - 14);
      v18 = v17;
      if ( !v17 )
      {
        BytesAtOffset = -1073741801;
LABEL_16:
        FopFreeMappingTable(v16);
        goto LABEL_22;
      }
      v19 = ((unsigned int)v13 - 14) >> 1;
      *(_QWORD *)(v16 + 8) = v17;
      BytesAtOffset = FioFwReadBytesAtOffset(a1, v12 + 14, 2 * v19, v17);
      if ( BytesAtOffset < 0 )
        goto LABEL_16;
      if ( v19 )
      {
        v20 = v18;
        v21 = v19;
        do
        {
          *v20 = __ROR2__(*v20, 8);
          ++v20;
          --v21;
        }
        while ( v21 );
      }
      v22 = 2 * *(_DWORD *)v16;
      *(_QWORD *)(v16 + 24) = v18;
      *(_QWORD *)(v16 + 16) = (char *)v18 + (unsigned int)(v22 + 2);
      *(_QWORD *)(v16 + 32) = (char *)v18 + (unsigned int)(2 * v22 + 2);
      *(_QWORD *)(v16 + 40) = (char *)v18 + (unsigned int)(v22 + 2 * (v22 + 1));
      *(_QWORD *)(v16 + 48) = (char *)v18 + (unsigned int)(4 * v22 + 2);
      BytesAtOffset = 0;
      *a3 = v16;
    }
    else
    {
LABEL_21:
      BytesAtOffset = -1073741275;
    }
  }
LABEL_22:
  if ( v7 )
    BgpFwFreeMemory(v7);
  return (unsigned int)BytesAtOffset;
}
