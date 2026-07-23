/*
 * XREFs of MiInitializeDynamicBitmap @ 0x14067A698
 * Callers:
 *     MiBuildDynamicRegion @ 0x14067A54C (MiBuildDynamicRegion.c)
 *     MiCreatePfnBitMaps @ 0x1407FAF3C (MiCreatePfnBitMaps.c)
 *     MiInitializeMirroring @ 0x140C55B40 (MiInitializeMirroring.c)
 *     MiCreateRetpolineBitmap @ 0x140C57950 (MiCreateRetpolineBitmap.c)
 *     MiInitializePteInfo @ 0x140C5BF50 (MiInitializePteInfo.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiUnlockWorkingSetOptimal @ 0x14020A46C (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x14020A640 (MiLockWorkingSetOptimal.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiInsertPageChainHead @ 0x14021CD10 (MiInsertPageChainHead.c)
 *     MiMakeZeroedPageTables @ 0x14026CB1C (MiMakeZeroedPageTables.c)
 *     MiIncreaseUsedPtes @ 0x140299D80 (MiIncreaseUsedPtes.c)
 *     MiTransformValidPteInPlace @ 0x14038D668 (MiTransformValidPteInPlace.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     MiReturnSystemCharges @ 0x14044FC38 (MiReturnSystemCharges.c)
 *     MiReturnPfnList @ 0x14067AC80 (MiReturnPfnList.c)
 */

__int64 __fastcall MiInitializeDynamicBitmap(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r15
  __int64 result; // rax
  PVOID v8; // rdx
  __int64 v9; // rsi
  unsigned int v10; // r12d
  ULONG_PTR ValidPte; // rdi
  unsigned __int64 v12; // r13
  char *v13; // rcx
  __int64 v14; // r8
  char v15; // dl
  unsigned __int64 v16; // rbp
  char *v17; // r9
  __int64 v18; // r14
  ULONG_PTR v19; // rax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rbp
  __int64 v22; // rdx
  ULONG_PTR v23; // rax
  unsigned __int64 v24; // rbx
  ULONG_PTR *v25; // r13
  bool v26; // zf
  __int64 v27; // rax
  char v28; // [rsp+30h] [rbp-98h] BYREF
  char v29; // [rsp+31h] [rbp-97h]
  char *AnyMultiplexedVm; // [rsp+38h] [rbp-90h]
  unsigned __int64 v31; // [rsp+40h] [rbp-88h]
  char *v32; // [rsp+48h] [rbp-80h]
  __int64 v33; // [rsp+50h] [rbp-78h]
  unsigned __int64 v34; // [rsp+58h] [rbp-70h]
  __int128 v35; // [rsp+60h] [rbp-68h] BYREF
  __int64 v36; // [rsp+70h] [rbp-58h]

  *(_OWORD *)a1 = 0LL;
  v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = ((unsigned __int64)(a3 + 7) >> 15) + (((a2 & 0xFFF) + 4095 + (((unsigned __int64)(a3 + 7) >> 3) & 0xFFF)) >> 12);
  v34 = v6;
  if ( (a4 & 1) == 0 )
  {
    result = MiMakeZeroedPageTables((unsigned int)(a2 >> 9) & 0xFFFFFFF8, ((a2 >> 9) & 0xFFFFFFF8) - 8 + 8 * v6, 1, 8);
    if ( !(_DWORD)result )
      return result;
  }
  v33 = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  if ( (a4 & 2) != 0 )
  {
    v8 = qword_140E37480[0];
    v9 = qword_140E374B0;
  }
  else
  {
    v8 = (PVOID)qword_140E374B8;
    v9 = qword_140E374E8;
  }
  v10 = 0;
  ValidPte = MiMakeValidPte(v5, (__int64)v8, 536870913);
  v12 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v15 = 17;
  v31 = 0LL;
  v16 = 0LL;
  v29 = 17;
  v28 = 17;
  v17 = AnyMultiplexedVm;
  if ( !v6 )
    goto LABEL_34;
  while ( 1 )
  {
    if ( v16 )
    {
      if ( (v5 & 0xFFF) != 0 )
        goto LABEL_18;
      if ( v10 )
      {
        MiIncreaseUsedPtes((__int64)v13, v16, v10, 6LL);
        v15 = v29;
        v10 = 0;
        v17 = AnyMultiplexedVm;
      }
      MiUnlockWorkingSetOptimal((__int64)v17, v16, v15);
      v17 = AnyMultiplexedVm;
    }
    if ( (v5 & 0xFFF) == 0 && (a4 & 4) != 0 && v6 - v12 >= 0x200 )
    {
      v18 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v19 = MiLockWorkingSetOptimal((__int64)v17, v18, (unsigned __int8 *)&v28, (__int64)v17);
      v20 = *(_QWORD *)v18;
      v21 = v19;
      MiTransformValidPteInPlace(v18, v18, v9, 0x60u, 1);
      MiUnlockWorkingSetOptimal((__int64)AnyMultiplexedVm, v21, v28);
      v16 = 0LL;
      MiInsertPageChainHead((__int64 *)&v35, (__int64 *)(48 * ((v20 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL));
      v13 = (char *)qword_140E300C8;
      v33 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v22 + 40) >> 43) & 0x3FFLL));
      v15 = v28;
      v29 = v28;
      v5 = ((v18 << 25) + 0x10000000) >> 16;
      v12 += 512LL;
      goto LABEL_29;
    }
    v23 = MiLockWorkingSetOptimal((__int64)v17, v5, (unsigned __int8 *)&v28, (__int64)v17);
    LOBYTE(v14) = v28;
    v16 = v23;
    v29 = v28;
LABEL_18:
    v13 = (char *)(v6 - v12);
    v24 = 512 - ((v5 >> 3) & 0x1FF);
    if ( v6 - v12 <= v24 )
      v24 = v6 - v12;
    if ( v24 )
    {
      v25 = (ULONG_PTR *)v5;
      v32 = (char *)v24;
      v13 = (char *)v24;
      do
      {
        if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v25 >= 0xFFFFF6C000000000uLL )
        {
          MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v25, ValidPte, 128LL);
          v13 = v32;
        }
        *v25++ = ValidPte;
        v32 = --v13;
      }
      while ( v13 );
      v6 = v34;
      v12 = v31;
    }
    v15 = v29;
    v5 += 8 * v24;
    v10 += v24;
    v12 += v24;
LABEL_29:
    v31 = v12;
    if ( v12 >= v6 )
      break;
    v17 = AnyMultiplexedVm;
  }
  if ( v16 )
  {
    if ( v10 )
      MiIncreaseUsedPtes((__int64)v13, v16, v10, 6LL);
    MiUnlockWorkingSetOptimal((__int64)AnyMultiplexedVm, v16, v29);
  }
LABEL_34:
  v26 = v36 == 0;
  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = a2;
  if ( !v26 )
  {
    v27 = MiReturnPfnList(&v35, a2, v14, v17);
    MiReturnSystemCharges(v33, v27, v27, 8);
  }
  return 1LL;
}
