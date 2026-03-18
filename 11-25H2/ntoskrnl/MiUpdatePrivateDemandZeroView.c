/*
 * XREFs of MiUpdatePrivateDemandZeroView @ 0x1404C29AC
 * Callers:
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiWorkingSetIsContended @ 0x140338960 (MiWorkingSetIsContended.c)
 *     MiIncreaseUsedPtes @ 0x1403837D0 (MiIncreaseUsedPtes.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiUpdatePrivateDemandZeroView(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v6; // r13
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  _QWORD *ProtoPteAddress; // rsi
  unsigned __int64 v10; // r10
  unsigned __int64 *v11; // r8
  ULONG_PTR v12; // r12
  unsigned __int64 v13; // r14
  __int64 v14; // r9
  unsigned __int64 *v15; // rdx
  int v16; // eax
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r15
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  int v22; // ecx
  unsigned __int64 v23; // rdi
  unsigned int v24; // ebp
  __int64 DemandZeroPte; // rbx
  __int64 v26; // rcx
  unsigned __int8 v27; // r13
  __int64 v28; // rbx
  __int64 v29; // rcx
  _QWORD *v31; // [rsp+20h] [rbp-78h]
  __int64 v32; // [rsp+28h] [rbp-70h]
  __int64 v33; // [rsp+38h] [rbp-60h]
  unsigned __int64 v34; // [rsp+40h] [rbp-58h]
  unsigned __int8 v35; // [rsp+A0h] [rbp+8h]
  unsigned __int64 *v38; // [rsp+B8h] [rbp+20h] BYREF

  v3 = *(unsigned int *)(a2 + 24);
  v4 = *(unsigned __int8 *)(a2 + 32);
  v38 = 0LL;
  v32 = a1 + 1024;
  v6 = 0LL;
  v7 = v3 | (v4 << 32);
  v8 = *(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32);
  ProtoPteAddress = (_QWORD *)MiGetProtoPteAddress(a2, v7, 6, &v38);
  v31 = ProtoPteAddress;
  v10 = *(_QWORD *)(a2 + 80) + 8 * (v8 - v7);
  v34 = v10;
  v11 = v38;
  v12 = 8 * (v7 & 0xFFFFFFFFFLL) - 0x98000000000LL;
  while ( 1 )
  {
    if ( !v11 )
      return v6;
    v13 = v10;
    v14 = v6;
    if ( v11[1] + 8 * (*((unsigned int *)v11 + 11) - 1LL) <= v10 )
      v13 = v11[1] + 8 * (*((unsigned int *)v11 + 11) - 1LL);
    if ( (v11[4] & 0x20000) != 0 || ((*((_DWORD *)v38 + 8) >> 1) & 5) != 5 && ((*((_DWORD *)v38 + 8) >> 1) & 4) != 0 )
    {
LABEL_45:
      v15 = v38;
      goto LABEL_46;
    }
    v15 = v38;
    v16 = *((_DWORD *)v38 + 10);
    v17 = v16 ? v38[1] + 8 + 8 * ((unsigned __int64)(unsigned int)((v16 << 9) - 1) >> 12) : v38[1];
    if ( v17 <= v13 )
      break;
LABEL_46:
    v29 = 8LL * (unsigned int)((__int64)(v13 - (_QWORD)ProtoPteAddress + 8) >> 3);
    ProtoPteAddress = (_QWORD *)((char *)ProtoPteAddress + v29);
    v12 += v29;
    v31 = ProtoPteAddress;
    if ( (unsigned __int64)ProtoPteAddress > v10 )
      return v6;
    v11 = (unsigned __int64 *)v15[2];
    v38 = v11;
  }
  if ( (unsigned __int64)ProtoPteAddress < v17 )
  {
    v31 = (_QWORD *)v17;
    v18 = v17 - (_QWORD)ProtoPteAddress;
    ProtoPteAddress = (_QWORD *)v17;
    v12 += 8 * (v18 >> 3);
  }
  if ( (unsigned __int64)ProtoPteAddress <= v10 )
  {
    v19 = 0LL;
    if ( (unsigned __int64)ProtoPteAddress <= v13 )
    {
      do
      {
        v20 = *ProtoPteAddress;
        if ( (*ProtoPteAddress & 1) != 0 )
        {
          LODWORD(v21) = *((_DWORD *)v38 + 8) >> 1;
        }
        else
        {
          if ( !v20 )
            break;
          v21 = v20 >> 5;
        }
        if ( (v21 & 0x1F) == 0x18 )
          break;
        v19 = (unsigned int)(v19 + 1);
        ++ProtoPteAddress;
      }
      while ( (unsigned __int64)ProtoPteAddress <= v13 );
      v15 = v38;
      v31 = ProtoPteAddress;
    }
    v6 += v19;
    if ( (v15[4] & 0xA) == 0xA )
      v6 = v14;
    v33 = v6;
    if ( !a3 || !(_DWORD)v19 )
    {
      v12 += 8 * v19;
      goto LABEL_45;
    }
    v22 = (*((_DWORD *)v38 + 8) >> 1) & 0x1F;
    if ( ((*((_DWORD *)v38 + 8) >> 1) & 4) != 0 )
      LOBYTE(v22) = (*((_DWORD *)v38 + 8) >> 1) & 2 | 4;
    v23 = 0LL;
    v24 = 0;
    DemandZeroPte = MiMakeDemandZeroPte(v22);
    v27 = MiLockWorkingSetShared(v32);
    v35 = v27;
    while ( 2 )
    {
      if ( v23 )
      {
        if ( (v12 & 0xFFF) == 0 )
        {
          if ( v24 )
          {
            MiIncreaseUsedPtes(v26, v23, v24, 2);
            v24 = 0;
          }
          MiUnlockPageTable(v32, v23);
          goto LABEL_33;
        }
      }
      else
      {
LABEL_33:
        if ( (unsigned int)MiWorkingSetIsContended(v32, 0) || KeShouldYieldProcessor() )
        {
          MiUnlockWorkingSetShared(v32, v27);
          MiLockWorkingSetShared(v32);
        }
        MiMakeSystemAddressValid(v12, (*(_DWORD *)(a2 + 48) >> 12) & 0x7F, v27, 0);
        v23 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      *(_QWORD *)v12 = DemandZeroPte;
      ++v24;
      v12 += 8LL;
      LODWORD(v19) = v19 - 1;
      if ( !(_DWORD)v19 )
      {
        ProtoPteAddress = v31;
        v6 = v33;
        if ( v23 )
        {
          if ( v24 )
            MiIncreaseUsedPtes(v26, v23, v24, 2);
          v28 = v32;
          MiUnlockPageTable(v32, v23);
        }
        else
        {
          v28 = v32;
        }
        MiUnlockWorkingSetShared(v28, v35);
        v10 = v34;
        goto LABEL_45;
      }
      continue;
    }
  }
  return v6;
}
