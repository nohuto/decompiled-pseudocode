/*
 * XREFs of MiUpdateForkMaps @ 0x140A5F5F0
 * Callers:
 *     MiCloneVads @ 0x140268194 (MiCloneVads.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetUltraMapping @ 0x1403361B0 (MiGetUltraMapping.c)
 *     MiFillPteHierarchy @ 0x140398880 (MiFillPteHierarchy.c)
 *     MiMapSinglePage @ 0x1403F14B0 (MiMapSinglePage.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MiBuildForkPageTable @ 0x14049DFAC (MiBuildForkPageTable.c)
 *     MiDoneWithThisPageGetAnother @ 0x140A5F8D4 (MiDoneWithThisPageGetAnother.c)
 */

unsigned __int64 __fastcall MiUpdateForkMaps(__int64 *a1, unsigned __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r15
  int v9; // ebp
  __int64 v10; // rbx
  ULONG_PTR *v11; // r12
  __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  unsigned __int64 UltraMapping; // rax
  __int64 v17; // r13
  _QWORD *v18; // r15
  unsigned __int64 ValidPte; // rax
  ULONG_PTR v20; // rbx
  ULONG_PTR *v21; // r15
  ULONG_PTR v22; // rbx
  __int64 *v23; // rbx
  unsigned __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // r9
  __int64 PteAddress; // rax
  __int64 v28; // rdx
  int v29; // r8d
  __int64 v30; // r9
  _QWORD *v31; // rbp
  unsigned __int64 v32; // rax
  ULONG_PTR v33; // rdi
  __int64 v34; // [rsp+30h] [rbp-78h]
  unsigned __int64 v35[4]; // [rsp+48h] [rbp-60h] BYREF
  char v36; // [rsp+68h] [rbp-40h] BYREF

  v4 = a2;
  memset(v35, 0, sizeof(v35));
  v6 = (__int64)(a2 << 25) >> 16;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v6) )
  {
    do
    {
      PteAddress = MiGetPteAddress(v4);
      v4 = PteAddress;
    }
    while ( v30 != 1 );
    v4 = PteAddress + 8;
    if ( v29 )
    {
      do
      {
        v4 = (__int64)(v4 << 25) >> 16;
        --v28;
      }
      while ( v28 );
    }
  }
  else
  {
    if ( ((a1[6] ^ v4) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      v9 = 4;
      MiFillPteHierarchy(v6, v35);
      v10 = *a1;
      v11 = (ULONG_PTR *)&v36;
      a1[6] = v4;
      v12 = *(_QWORD *)(v10 + 40) >> 12;
      v34 = v12;
      do
      {
        --v9;
        --v11;
        if ( *((_BYTE *)a1 + 192) )
        {
          v13 = a1[4];
          if ( v13 )
          {
            v14 = (_QWORD *)MiGetPteAddress(v13);
            *v14 = v15;
          }
          UltraMapping = MiGetUltraMapping((__int64)(a1 + 21), 3uLL, 1LL, 0);
          a1[4] = UltraMapping;
          v17 = UltraMapping;
          v18 = (_QWORD *)MiGetPteAddress(UltraMapping);
          ValidPte = MiMakeValidPte((unsigned __int64)v18, v12, -1610612732);
          v20 = ValidPte;
          if ( _bittest64(&MiFlags, 0x24u)
            && (ValidPte & 0x20) == 0
            && (unsigned __int64)v18 >= MiGetPteAddress(0xFFFF800000000000uLL) )
          {
            MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v18, v20, 128LL);
          }
          *v18 = v20;
        }
        else
        {
          v17 = MiMapSinglePage(a1[7], v12, 1073741856, 0);
        }
        v21 = (ULONG_PTR *)(v17 + 8LL * ((*(_DWORD *)v11 >> 3) & 0x1FF));
        v22 = *v21;
        if ( *v21 )
        {
          if ( (v22 & 1) == 0 && qword_140E2DCC0 )
          {
            if ( (v22 & 0x10) != 0 )
              v22 &= ~0x10uLL;
            else
              v22 &= ~qword_140E2DCC0;
          }
          v12 = (v22 >> 12) & 0xFFFFFFFFFFLL;
        }
        else
        {
          v23 = &a1[3 - v9];
          MiDoneWithThisPageGetAnother(v23 + 1, a4, *a1);
          v12 = v23[1];
          MiBuildForkPageTable(*a1, v12, *v11, v21, v34, v9);
          ++*a3;
        }
        v34 = v12;
      }
      while ( v9 != 1 );
      if ( *((_BYTE *)a1 + 192) )
      {
        v24 = a1[4];
        if ( v24 )
        {
          v25 = (_QWORD *)MiGetPteAddress(v24);
          *v25 = v26;
        }
        v7 = MiGetUltraMapping((__int64)(a1 + 21), 3uLL, 1LL, 0);
        v31 = (_QWORD *)MiGetPteAddress(v7);
        v32 = MiMakeValidPte((unsigned __int64)v31, v12, -1610612732);
        v33 = v32;
        if ( _bittest64(&MiFlags, 0x24u)
          && (v32 & 0x20) == 0
          && (unsigned __int64)v31 >= MiGetPteAddress(0xFFFF800000000000uLL) )
        {
          MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v31, v33, 128LL);
        }
        *v31 = v33;
      }
      else
      {
        v7 = MiMapSinglePage(a1[7], v12, 1073741856, 0);
      }
      a1[4] = v7;
      v4 = a2;
      a1[8] = 48 * v12 - 0x220000000000LL;
    }
    else
    {
      v7 = a1[4];
    }
    a1[5] = v7 + 8 * ((v4 >> 3) & 0x1FF);
  }
  return v4;
}
