/*
 * XREFs of HvpFindNextDirtyBlock @ 0x140967074
 * Callers:
 *     HvpGenerateLogEntryDirtyData @ 0x1403773D0 (HvpGenerateLogEntryDirtyData.c)
 *     HvStoreModifiedData @ 0x140966BFC (HvStoreModifiedData.c)
 *     HvWriteHivePrimaryFile @ 0x14096B444 (HvWriteHivePrimaryFile.c)
 * Callees:
 *     HvpFindNextDirtyRun @ 0x1404225D0 (HvpFindNextDirtyRun.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     HvpMapEntryGetBlockAddress @ 0x1408788B0 (HvpMapEntryGetBlockAddress.c)
 *     HvpMapEntryGetFreeBin @ 0x1408872D4 (HvpMapEntryGetFreeBin.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     HvpGetCellMap @ 0x140BBB710 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140BBB770 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140BBB790 (HvpMapEntryReleaseBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140BBB8D0 (HvpGetBinContextInitialize.c)
 */

char __fastcall HvpFindNextDirtyBlock(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4,
        unsigned int *a5,
        _DWORD *a6,
        char a7)
{
  char *Pool2; // rdi
  unsigned int *v9; // r10
  unsigned int *v10; // r11
  unsigned int v11; // r12d
  unsigned int v12; // ebx
  unsigned int v13; // r14d
  _BYTE *CellMap; // rcx
  ULONG_PTR v15; // r10
  __int64 v16; // rcx
  __int64 BlockAddress; // rcx
  __int64 v18; // r10
  int v19; // r11d
  char *v20; // rax
  unsigned int v21; // esi
  unsigned int v22; // r8d
  _BYTE *v23; // rdx
  unsigned int v24; // r13d
  unsigned int v25; // r12d
  unsigned int v27; // ebx
  unsigned int v28; // esi
  _BYTE *v29; // rax
  ULONG_PTR v30; // r10
  __int64 v31; // rdx
  __int64 v32; // rcx
  const void *v33; // rdx
  size_t v34; // r11
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 BinAddress; // rax
  __int64 v39; // r9
  _WORD v40[2]; // [rsp+30h] [rbp-20h] BYREF
  _WORD v41[2]; // [rsp+34h] [rbp-1Ch] BYREF
  unsigned int v42; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v43; // [rsp+3Ch] [rbp-14h] BYREF
  unsigned int v44; // [rsp+40h] [rbp-10h]
  unsigned int v45; // [rsp+44h] [rbp-Ch]

  v43 = 0;
  v41[0] = 0;
  v42 = 0;
  v40[0] = 0;
  HvpGetBinContextInitialize(v41);
  HvpGetBinContextInitialize(v40);
  Pool2 = 0LL;
  if ( !HvpFindNextDirtyRun(v9, v10, &v42, &v43) )
    return 0;
  v11 = v43;
  v12 = v42 << 9;
  v13 = (v43 << 9) - (v42 << 9);
  v45 = v43;
  v44 = v43 << 9;
  if ( a7 && (Pool2 = (char *)ExAllocatePool2(0x100uLL, v13, 0x33354D43u)) == 0LL )
  {
    *a4 = 0LL;
  }
  else
  {
    CellMap = (_BYTE *)HvpGetCellMap(a1, v12);
    if ( !CellMap )
      KeBugCheckEx(0x51u, 1uLL, v15, v12, 0x12C3uLL);
    if ( HvpMapEntryGetFreeBin(CellMap) )
    {
      BinAddress = HvpMapEntryGetBinAddress(v16, v16, v40);
      BlockAddress = v12 - *(_DWORD *)(v39 + 20) + BinAddress;
    }
    else
    {
      BlockAddress = HvpMapEntryGetBlockAddress();
    }
    if ( a7 )
      v20 = Pool2;
    else
      v20 = (char *)(BlockAddress + (v12 & 0xFFF));
    *a4 = v20;
    v21 = v12 + 4096;
    v22 = v11 - v19;
    v23 = (_BYTE *)(v19 & 7);
    v43 = v11 - v19;
    v24 = v11 - v19;
    *a6 = v12 + 4096;
    if ( v11 - v19 >= 8 - (int)v23 )
      v24 = 8 - (_DWORD)v23;
    v25 = v24 << 9;
    if ( a7 )
    {
      memmove(Pool2, (const void *)(BlockAddress + (unsigned int)((_DWORD)v23 << 9)), v25);
      v18 = a1;
      Pool2 += v25;
      v22 = v43;
    }
    if ( v22 > v24 )
    {
      v27 = v44;
      v28 = v21 & 0xFFFFF000;
      while ( 1 )
      {
        if ( v25 >= v13 )
          goto LABEL_27;
        v29 = (_BYTE *)HvpGetCellMap(v18, v28);
        v23 = v29;
        if ( !v29 )
          KeBugCheckEx(0x51u, 1uLL, v30, v28, 0x132DuLL);
        if ( !a7 && (v29[8] & 1) != 0 )
        {
LABEL_27:
          *a5 = v25;
          if ( v24 + v42 != v45 )
          {
            BlockAddress = (__int64)a3;
            *a3 = v24 + v42;
          }
          goto LABEL_14;
        }
        if ( HvpMapEntryGetFreeBin(v29) )
        {
          v36 = HvpMapEntryGetBinAddress(v32, v31, v41);
          v33 = (const void *)(v28 - *(_DWORD *)(v37 + 20) + v36);
        }
        else
        {
          v33 = (const void *)HvpMapEntryGetBlockAddress();
        }
        v35 = v27 - v28;
        if ( (unsigned int)v35 <= (unsigned int)v34 )
          break;
        if ( a7 )
        {
          memmove(Pool2, v33, v34);
          LODWORD(v34) = 4096;
          Pool2 += 4096;
        }
        v25 += v34;
        v24 += 8;
        v28 += v34;
        HvpMapEntryReleaseBinAddress(v35, v33, v41);
      }
      if ( a7 )
        memmove(Pool2, v33, (unsigned int)v35);
      *a5 = v13;
      HvpMapEntryReleaseBinAddress(v35, v33, v41);
    }
    else
    {
      *a5 = v13;
    }
LABEL_14:
    HvpMapEntryReleaseBinAddress(BlockAddress, v23, v40);
  }
  return 1;
}
