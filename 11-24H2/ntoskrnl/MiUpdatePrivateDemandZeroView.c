/*
 * XREFs of MiUpdatePrivateDemandZeroView @ 0x1404BC78C
 * Callers:
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiIncreaseUsedPtes @ 0x140299D80 (MiIncreaseUsedPtes.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     MiWorkingSetIsContended @ 0x1403915E0 (MiWorkingSetIsContended.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiUpdatePrivateDemandZeroView(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v6; // r13
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  _QWORD *ProtoPteAddress; // rsi
  unsigned __int64 v10; // r10
  __int64 v11; // r8
  ULONG_PTR v12; // r12
  unsigned __int64 v13; // r14
  __int64 v14; // r9
  __int64 v15; // rdx
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
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  unsigned __int8 v30; // r13
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rbx
  __int64 v35; // rcx
  _QWORD *v37; // [rsp+20h] [rbp-78h]
  __int64 v38; // [rsp+28h] [rbp-70h]
  __int64 v39; // [rsp+38h] [rbp-60h]
  unsigned __int64 v40; // [rsp+40h] [rbp-58h]
  unsigned __int8 v41; // [rsp+A0h] [rbp+8h]
  __int64 v44; // [rsp+B8h] [rbp+20h] BYREF

  v3 = *(unsigned int *)(a2 + 24);
  v4 = *(unsigned __int8 *)(a2 + 32);
  v44 = 0LL;
  v38 = a1 + 1024;
  v6 = 0LL;
  v7 = v3 | (v4 << 32);
  v8 = *(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32);
  ProtoPteAddress = (_QWORD *)MiGetProtoPteAddress(a2, v7, 6u, &v44);
  v37 = ProtoPteAddress;
  v10 = *(_QWORD *)(a2 + 80) + 8 * (v8 - v7);
  v40 = v10;
  v11 = v44;
  v12 = 8 * (v7 & 0xFFFFFFFFFLL) - 0x98000000000LL;
  while ( 1 )
  {
    if ( !v11 )
      return v6;
    v13 = v10;
    v14 = v6;
    if ( *(_QWORD *)(v11 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v11 + 44) - 1) <= v10 )
      v13 = *(_QWORD *)(v11 + 8) + 8 * (*(unsigned int *)(v11 + 44) - 1LL);
    if ( (*(_DWORD *)(v11 + 32) & 0x20000) != 0
      || ((*(_DWORD *)(v44 + 32) >> 1) & 5) != 5 && ((*(_DWORD *)(v44 + 32) >> 1) & 4) != 0 )
    {
LABEL_45:
      v15 = v44;
      goto LABEL_46;
    }
    v15 = v44;
    v16 = *(_DWORD *)(v44 + 40);
    v17 = v16
        ? *(_QWORD *)(v44 + 8) + 8LL + 8 * ((unsigned __int64)(unsigned int)((v16 << 9) - 1) >> 12)
        : *(_QWORD *)(v44 + 8);
    if ( v17 <= v13 )
      break;
LABEL_46:
    v35 = 8LL * (unsigned int)((__int64)(v13 - (_QWORD)ProtoPteAddress + 8) >> 3);
    ProtoPteAddress = (_QWORD *)((char *)ProtoPteAddress + v35);
    v12 += v35;
    v37 = ProtoPteAddress;
    if ( (unsigned __int64)ProtoPteAddress > v10 )
      return v6;
    v11 = *(_QWORD *)(v15 + 16);
    v44 = v11;
  }
  if ( (unsigned __int64)ProtoPteAddress < v17 )
  {
    v37 = (_QWORD *)v17;
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
          LODWORD(v21) = *(_DWORD *)(v44 + 32) >> 1;
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
      v15 = v44;
      v37 = ProtoPteAddress;
    }
    v6 += v19;
    if ( (*(_BYTE *)(v15 + 32) & 0xA) == 0xA )
      v6 = v14;
    v39 = v6;
    if ( !a3 || !(_DWORD)v19 )
    {
      v12 += 8 * v19;
      goto LABEL_45;
    }
    v22 = (*(_DWORD *)(v44 + 32) >> 1) & 0x1F;
    if ( ((*(_DWORD *)(v44 + 32) >> 1) & 4) != 0 )
      LOBYTE(v22) = (*(_DWORD *)(v44 + 32) >> 1) & 2 | 4;
    v23 = 0LL;
    v24 = 0;
    DemandZeroPte = MiMakeDemandZeroPte(v22);
    v30 = MiLockWorkingSetShared(v38, v26, v27, v28);
    v41 = v30;
    while ( 2 )
    {
      if ( v23 )
      {
        if ( (v12 & 0xFFF) == 0 )
        {
          if ( v24 )
          {
            MiIncreaseUsedPtes(v29, v23, v24, 2LL);
            v24 = 0;
          }
          MiUnlockPageTableInternal(v38, v23);
          goto LABEL_33;
        }
      }
      else
      {
LABEL_33:
        if ( (unsigned int)MiWorkingSetIsContended(v38, 0) || KeShouldYieldProcessor() )
        {
          MiUnlockWorkingSetShared(v38, v30);
          MiLockWorkingSetShared(v38, v31, v32, v33);
        }
        MiMakeSystemAddressValid(v12, (*(_DWORD *)(a2 + 48) >> 12) & 0x7F, v30, 0);
        v23 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      *(_QWORD *)v12 = DemandZeroPte;
      ++v24;
      v12 += 8LL;
      LODWORD(v19) = v19 - 1;
      if ( !(_DWORD)v19 )
      {
        ProtoPteAddress = v37;
        v6 = v39;
        if ( v23 )
        {
          if ( v24 )
            MiIncreaseUsedPtes(v29, v23, v24, 2LL);
          v34 = v38;
          MiUnlockPageTableInternal(v38, v23);
        }
        else
        {
          v34 = v38;
        }
        MiUnlockWorkingSetShared(v34, v41);
        v10 = v40;
        goto LABEL_45;
      }
      continue;
    }
  }
  return v6;
}
