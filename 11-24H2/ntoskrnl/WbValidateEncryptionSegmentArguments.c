/*
 * XREFs of WbValidateEncryptionSegmentArguments @ 0x1409D9F08
 * Callers:
 *     sub_1409D9D58 @ 0x1409D9D58 (sub_1409D9D58.c)
 * Callees:
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall WbValidateEncryptionSegmentArguments(__int64 a1, unsigned int a2, _OWORD *a3, __int64 a4)
{
  __int64 Pool2; // rax
  __int64 v8; // rbx
  __int64 v9; // rdi
  unsigned int v10; // esi
  _OWORD *v11; // rax
  int v12; // edx
  __int64 v14; // rax
  __int64 v15; // rbx
  _OWORD *v16; // rax
  __int128 v17; // [rsp+38h] [rbp-30h]

  if ( a2 < 0x10 )
  {
    v10 = -1073741811;
    v9 = 0LL;
    goto LABEL_9;
  }
  Pool2 = ExAllocatePool2(0x100uLL, 0xF4uLL, 0x42524157u);
  v8 = Pool2;
  v9 = 0LL;
  if ( Pool2 )
    v9 = Pool2;
  *((_QWORD *)&v17 + 1) = v9;
  SddlpFree(0LL);
  v10 = v8 == 0 ? 0xC0000017 : 0;
  if ( v8 )
  {
    v11 = *(_OWORD **)(a1 + 8);
    *(_OWORD *)v9 = *v11;
    *(_OWORD *)(v9 + 16) = v11[1];
    *(_OWORD *)(v9 + 32) = v11[2];
    *(_OWORD *)(v9 + 48) = v11[3];
    *(_OWORD *)(v9 + 64) = v11[4];
    *(_OWORD *)(v9 + 80) = v11[5];
    *(_OWORD *)(v9 + 96) = v11[6];
    *(_OWORD *)(v9 + 112) = v11[7];
    v11 += 8;
    *(_OWORD *)(v9 + 128) = *v11;
    *(_OWORD *)(v9 + 144) = v11[1];
    *(_OWORD *)(v9 + 160) = v11[2];
    *(_OWORD *)(v9 + 176) = v11[3];
    *(_OWORD *)(v9 + 192) = v11[4];
    *(_OWORD *)(v9 + 208) = v11[5];
    *(_OWORD *)(v9 + 224) = v11[6];
    *(_DWORD *)(v9 + 240) = *((_DWORD *)v11 + 28);
    v12 = *(_DWORD *)(v9 + 36) & 0xF;
    LODWORD(v17) = v12;
    DWORD1(v17) = (unsigned __int8)*(_DWORD *)(v9 + 36) >> 4;
    if ( v12 != 1 )
    {
      if ( v12 )
      {
        v10 = -1073741811;
        goto LABEL_9;
      }
      goto LABEL_7;
    }
    SddlpFree((void *)v9);
    v9 = 0LL;
    v14 = ExAllocatePool2(0x100uLL, 0xF8uLL, 0x42524157u);
    v15 = v14;
    if ( v14 )
      v9 = v14;
    *((_QWORD *)&v17 + 1) = v9;
    SddlpFree(0LL);
    v10 = v15 == 0 ? 0xC0000017 : 0;
    if ( v15 )
    {
      v16 = *(_OWORD **)(a1 + 8);
      *(_OWORD *)v9 = *v16;
      *(_OWORD *)(v9 + 16) = v16[1];
      *(_OWORD *)(v9 + 32) = v16[2];
      *(_OWORD *)(v9 + 48) = v16[3];
      *(_OWORD *)(v9 + 64) = v16[4];
      *(_OWORD *)(v9 + 80) = v16[5];
      *(_OWORD *)(v9 + 96) = v16[6];
      *(_OWORD *)(v9 + 112) = v16[7];
      v16 += 8;
      *(_OWORD *)(v9 + 128) = *v16;
      *(_OWORD *)(v9 + 144) = v16[1];
      *(_OWORD *)(v9 + 160) = v16[2];
      *(_OWORD *)(v9 + 176) = v16[3];
      *(_OWORD *)(v9 + 192) = v16[4];
      *(_OWORD *)(v9 + 208) = v16[5];
      *(_OWORD *)(v9 + 224) = v16[6];
      *(_QWORD *)(v9 + 240) = *((_QWORD *)v16 + 14);
LABEL_7:
      *(_DWORD *)(a4 + 8) = *(_DWORD *)(v9 + 64);
      *(_QWORD *)a4 = *(_QWORD *)(a1 + 8) - (*(_DWORD *)(v9 + 40) & 0xFFFFFFF);
      if ( a3 )
      {
        *a3 = v17;
        v9 = 0LL;
      }
    }
  }
LABEL_9:
  SddlpFree((void *)v9);
  return v10;
}
