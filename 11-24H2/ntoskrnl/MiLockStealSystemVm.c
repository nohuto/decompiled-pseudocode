/*
 * XREFs of MiLockStealSystemVm @ 0x1402FD650
 * Callers:
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 * Callees:
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiSystemVaTypeToVm @ 0x1402FDE60 (MiSystemVaTypeToVm.c)
 *     MiSynchronizeSystemVa @ 0x1402FDFC8 (MiSynchronizeSystemVa.c)
 *     MiUnlockStealVm @ 0x1402FE250 (MiUnlockStealVm.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiSmallVaStillMapsFrame @ 0x14045BBE4 (MiSmallVaStillMapsFrame.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockStealSystemVm(__int64 a1, unsigned __int8 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned __int64 v6; // rbp
  unsigned int v7; // r14d
  unsigned __int64 v8; // rsi
  unsigned int v9; // ebx
  BOOL v10; // r12d
  __int64 v11; // r13
  __int64 v12; // rcx
  unsigned int v13; // r8d
  unsigned int i; // edx
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  char v18; // al
  unsigned __int64 v19; // rbx
  __int64 v20; // [rsp+70h] [rbp+8h]

  v6 = a2;
  v20 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v7 = 0;
  v8 = (__int64)((_QWORD)a3 << 25) >> 16;
  if ( v8 < 0xFFFF800000000000uLL )
    v9 = 0;
  else
    v9 = byte_140E38AE8[((v8 >> 39) & 0x1FF) - 256];
  v10 = v8 >= 0xFFFFF68000000000uLL && v8 <= 0xFFFFF6FFFFFFFFFFuLL;
  v11 = MiSystemVaTypeToVm(v9);
  switch ( v9 )
  {
    case 4u:
      v18 = *(_BYTE *)(a1 + 35);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v18 & 0x10) != 0 )
      {
        if ( (unsigned __int8)v6 < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v6);
          __writecr8(v6);
        }
        return 0LL;
      }
      if ( (unsigned __int8)v6 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v6);
        __writecr8(v6);
      }
      a4[2] |= 0x20u;
      break;
    case 5u:
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (unsigned __int8)v6 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v6);
        __writecr8(v6);
      }
      a4[2] |= 0x10u;
      break;
    case 0xBu:
      MiUnlockPage(a1, v6);
      a4[12] = 1;
      break;
    case 0x11u:
      MiUnlockPage(a1, v6);
      a4[12] = 0;
      break;
    default:
      v12 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
      v20 = v12;
      if ( v9 == 8 )
      {
        v13 = *(_DWORD *)(v12 + 18520);
        for ( i = 0; i < v13; ++i )
        {
          v15 = *(_QWORD *)(v12 + 8LL * i + 18528);
          v16 = *(_QWORD *)(v15 + 184);
          if ( v16 && v8 >= v16 )
          {
            if ( v8 < *(_QWORD *)(v15 + 184)
                    + (unsigned int)dword_140E373CC * (unsigned __int64)*(unsigned int *)(v15 + 4) )
            {
              a4[12] = 2;
              _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( (unsigned __int8)v6 < 2u )
              {
                if ( KiIrqlFlags )
                  KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v6);
                __writecr8(v6);
              }
              goto LABEL_36;
            }
            v12 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
          }
        }
      }
      ++dword_140EF4FBC;
      MiUnlockPage(a1, v6);
      return 0LL;
  }
LABEL_36:
  if ( (unsigned int)MiSynchronizeSystemVa(v11, v8, v9, v10, (__int64)a4) )
  {
    v19 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
    if ( v10 )
    {
      if ( (unsigned int)MiSmallVaStillMapsFrame(v8, 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) )
        goto LABEL_40;
    }
    else if ( (*a3 & 1) != 0 && ((*a3 >> 12) & 0xFFFFFFFFFFLL) == v19 )
    {
LABEL_40:
      if ( (unsigned int)(a4[12] - 2) <= 1
        || (a4[2] & 0x20) != 0
        || (*(_QWORD *)a1 & 1) != 0 && (*(_DWORD *)(a1 + 32) & 0x8000000) == 0 )
      {
        if ( v19 <= qword_140E2DD20
          && (*(_QWORD *)(16 * ((a1 + 0x220000000000LL) >> 4) - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0
          && *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) == v20
          && *(__int64 *)(a1 + 40) >= 0
          && !_bittest64((const signed __int64 *)(a1 + 40), 0x35u)
          && ((*a4 & 0x410000) == 0x410000 || (unsigned int)MiGetPfnSlabType(a1) == 9) )
        {
          return 1LL;
        }
      }
      else
      {
        ++dword_140EF4FC8;
      }
      goto LABEL_51;
    }
    v7 = 2;
  }
LABEL_51:
  MiUnlockStealVm(a4);
  if ( (*(_DWORD *)(v11 + 184) & 0xF) == 2 )
  {
    ++dword_140EF504C;
    return 0LL;
  }
  ++dword_140EF4FBC;
  return v7;
}
