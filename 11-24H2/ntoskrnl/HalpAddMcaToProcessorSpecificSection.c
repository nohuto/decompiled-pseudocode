/*
 * XREFs of HalpAddMcaToProcessorSpecificSection @ 0x14053C0B8
 * Callers:
 *     HalpCreateMcaProcessorErrorRecord @ 0x14053CD18 (HalpCreateMcaProcessorErrorRecord.c)
 * Callees:
 *     HalpWheaGetApicId @ 0x14053E1B0 (HalpWheaGetApicId.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpAddMcaToProcessorSpecificSection(__int64 a1, GUID *a2, unsigned int *a3)
{
  unsigned int v6; // esi
  GUID *v7; // rdi
  __int64 v8; // r11
  unsigned __int64 *Data4; // r10
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r9
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r9
  __int64 v23; // rax
  unsigned int v24; // esi
  char *v25; // rax
  __int64 v27; // [rsp+70h] [rbp+8h]

  *(_QWORD *)&a2->Data1 |= 2uLL;
  v6 = 64;
  v27 = *(unsigned int *)(a1 + 16);
  guard_dispatch_icall_no_overrides(v27, 1LL);
  *(_QWORD *)&a2->Data1 |= 1uLL;
  *(_QWORD *)a2->Data4 = HalpWheaGetApicId(v27);
  v7 = a2 + 4;
  if ( _bittest64((const signed __int64 *)(a1 + 40), 0x3Au) )
  {
    *(_QWORD *)&a2[5].Data1 |= 2uLL;
    *(_QWORD *)&a2[6].Data1 = *(_QWORD *)(a1 + 48);
  }
  if ( (*(_BYTE *)(a1 + 20) & 2) != 0 )
  {
    *(_QWORD *)&a2[5].Data1 |= 0x10uLL;
    *(_QWORD *)a2[7].Data4 = *(_QWORD *)(a1 + 28);
  }
  v8 = *(unsigned __int16 *)(a1 + 40);
  if ( (unsigned __int16)(v8 - 1) <= 3u || (_WORD)v8 == 1024 || (v8 & 0xFC00) == 0x400 && (v8 & 0x3FF) != 0 )
  {
    *(_QWORD *)&a2[5].Data1 |= 1uLL;
    Data4 = (unsigned __int64 *)a2[5].Data4;
    *v7 = WHEA_MSCHECK_GUID;
    v19 = *(_QWORD *)a2[5].Data4 | 3LL;
    *(_QWORD *)a2[5].Data4 = v19;
    v20 = (*(_QWORD *)(a1 + 40) >> 38) ^ ((*(_QWORD *)(a1 + 40) >> 38) ^ v19) & 0xFFFFFFFFFFF7FFFFuLL | 4;
    *(_QWORD *)a2[5].Data4 = v20;
    v21 = (*(_QWORD *)(a1 + 40) >> 41) ^ ((*(_QWORD *)(a1 + 40) >> 41) ^ v20) & 0xFFFFFFFFFFEFFFFFuLL | 0x20;
    *(_QWORD *)a2[5].Data4 = v21;
    v22 = (*(_QWORD *)(a1 + 40) >> 39) ^ ((*(_QWORD *)(a1 + 40) >> 39) ^ v21) & 0xFFFFFFFFFF7FFFFFuLL;
    *(_QWORD *)a2[5].Data4 = v22;
    if ( (_WORD)v8 )
    {
      switch ( (_WORD)v8 )
      {
        case 1:
          v15 = v22 & 0xFFFFFFFFFFF8FFFFuLL | 0x10000;
          break;
        case 2:
          v15 = v22 & 0xFFFFFFFFFFF8FFFFuLL | 0x20000;
          break;
        case 3:
          v15 = v22 & 0xFFFFFFFFFFF8FFFFuLL | 0x30000;
          break;
        case 4:
          v15 = v22 & 0xFFFFFFFFFFF8FFFFuLL | 0x40000;
          break;
        default:
          v15 = v22 & 0xFFFFFFFFFFF8FFFFuLL | 0x50000;
          break;
      }
    }
    else
    {
      v15 = v22 & 0xFFFFFFFFFFF8FFFFuLL;
    }
    goto LABEL_32;
  }
  if ( (v8 & 0xEFFC) == 0xC )
  {
    *(_QWORD *)&a2[5].Data1 |= 1uLL;
    Data4 = (unsigned __int64 *)a2[5].Data4;
    *v7 = WHEA_CACHECHECK_GUID;
    v10 = *(_QWORD *)a2[5].Data4 & 0xFFFFFFFFFE3FFFFFuLL | ((unsigned __int64)(v8 & 3) << 22) | 0xC;
LABEL_16:
    *Data4 = v10;
    v13 = HIDWORD(*(_QWORD *)(a1 + 40)) ^ (HIDWORD(*(_QWORD *)(a1 + 40)) ^ v10) & 0xFFFFFFFFFDFFFFFFuLL | 0x10;
    *Data4 = v13;
    v14 = (*(_QWORD *)(a1 + 40) >> 35) ^ (v13 ^ (*(_QWORD *)(a1 + 40) >> 35)) & 0xFFFFFFFFFBFFFFFFuLL | 0x80;
    *Data4 = v14;
    v15 = (*(_QWORD *)(a1 + 40) >> 33) ^ (v14 ^ (*(_QWORD *)(a1 + 40) >> 33)) & 0xFFFFFFFFDFFFFFFFuLL;
LABEL_32:
    *Data4 = v15;
    v6 = 128;
    *(_QWORD *)&a2->Data1 = *(_QWORD *)&a2->Data1 & 0xFFFFFFFFFFFFFF03uLL | 4;
    goto LABEL_33;
  }
  if ( (v8 & 0xEFF0) == 0x10 )
  {
    *(_QWORD *)&a2[5].Data1 |= 1uLL;
    Data4 = (unsigned __int64 *)a2[5].Data4;
    *v7 = WHEA_TLBCHECK_GUID;
    v11 = *(_QWORD *)a2[5].Data4 & 0xFFFFFFFFFE3CFFFEuLL | 1;
    v12 = ((unsigned __int8)((unsigned __int16)v8 >> 2) << 16) & 0x30000;
LABEL_15:
    v10 = ((unsigned __int64)(v8 & 3) << 22) | v12 ^ v11 | 0xC;
    goto LABEL_16;
  }
  if ( (v8 & 0xEF00) == 0x100 )
  {
    *(_QWORD *)&a2[5].Data1 |= 1uLL;
    Data4 = (unsigned __int64 *)a2[5].Data4;
    *v7 = WHEA_CACHECHECK_GUID;
    v11 = (*(_QWORD *)a2[5].Data4 & 0xFFFFFFFFFE00FFFEuLL | 1) ^ ((unsigned __int64)(((unsigned __int16)v8 >> 2) & 3) << 16) | 2;
    v12 = ((unsigned __int8)((unsigned __int16)v8 >> 4) << 18) & 0x3C0000;
    goto LABEL_15;
  }
  if ( (v8 & 0xE800) == 0x800 )
  {
    *(_QWORD *)&a2[5].Data1 |= 1uLL;
    Data4 = (unsigned __int64 *)a2[5].Data4;
    *v7 = WHEA_BUSCHECK_GUID;
    v16 = ((unsigned __int64)(v8 & 3) << 22) | ((unsigned __int8)((unsigned __int16)v8 >> 4) << 18) & 0x3C0000 ^ (*(_QWORD *)a2[5].Data4 & 0xFFFFFFFFFE03FFFDuLL | 2) | 0xC;
    *(_QWORD *)a2[5].Data4 = v16;
    v17 = HIDWORD(*(_QWORD *)(a1 + 40)) ^ (v16 ^ HIDWORD(*(_QWORD *)(a1 + 40))) & 0xFFFFFFFFFDFFFFFFuLL | 0x10;
    *(_QWORD *)a2[5].Data4 = v17;
    v18 = (*(_QWORD *)(a1 + 40) >> 35) ^ (v17 ^ (*(_QWORD *)(a1 + 40) >> 35)) & 0xFFFFFFFFFBFFFFFFuLL | 0x80;
    *(_QWORD *)a2[5].Data4 = v18;
    v15 = ((unsigned __int64)(unsigned __int8)((unsigned __int16)v8 >> 2) << 33) & 0x600000000LL ^ (((v8 & 0xFFFFFFFFFFFFFF00uLL) << 24) & 0x100000000LL ^ (((v8 & 0xFFFFFFFFFFFFFE00uLL) << 21) & 0xC0000000 ^ (v18 & 0xFFFFFFF81FFFFFFFuLL ^ (*(_QWORD *)(a1 + 40) >> 33) & 0x20000000LL | 0x100) | 0x200) | 0x400);
    goto LABEL_32;
  }
  memset_0(&a2[4], 0, 0x40uLL);
  v7 = 0LL;
LABEL_33:
  if ( *(_DWORD *)(a1 + 64) && v7 )
  {
    *(_QWORD *)&a2->Data1 = *(_QWORD *)&a2->Data1 & 0xFFFFFFFFFFFFC0FFuLL | 0x100;
    v23 = v6;
    v24 = v6 + 16;
    v25 = (char *)v7 + v23;
    *(_DWORD *)v25 = 524289;
    *((_DWORD *)v25 + 1) = 384;
    *((_QWORD *)v25 + 1) = 0LL;
    memmove(&v25[v24], (const void *)(a1 + 72), 8LL * *(unsigned int *)(a1 + 64));
    v6 = v24 + 8 * *(_DWORD *)(a1 + 64);
  }
  *a3 = v6;
  return 0LL;
}
