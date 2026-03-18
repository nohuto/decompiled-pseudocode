/*
 * XREFs of ObpChargeQuotaForObject @ 0x14089F240
 * Callers:
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 * Callees:
 *     PspChargeQuota @ 0x1403C65E0 (PspChargeQuota.c)
 *     PspReturnQuota @ 0x1403C6990 (PspReturnQuota.c)
 *     PsReturnSharedPoolQuota @ 0x14091B660 (PsReturnSharedPoolQuota.c)
 */

__int64 __fastcall ObpChargeQuotaForObject(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // r15d
  unsigned int *v6; // rdi
  char v7; // al
  ULONG_PTR v8; // rbp
  unsigned __int64 v9; // r14
  __int64 v10; // r8
  __int64 v11; // rsi
  void *v13; // rcx
  __int16 v14; // cx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r12
  __int64 v20; // rax

  v3 = 0;
  if ( (*(_BYTE *)(a1 + 26) & 8) != 0 )
    v6 = (unsigned int *)(a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0xF]);
  else
    v6 = 0LL;
  v7 = *(_BYTE *)(a1 + 27);
  if ( (v7 & 1) == 0 )
    return 0LL;
  *(_BYTE *)(a1 + 27) = v7 & 0xFE;
  if ( !v6 )
  {
    v20 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)];
    v8 = *(unsigned int *)(v20 + 104);
    v9 = *(unsigned int *)(v20 + 108);
    goto LABEL_8;
  }
  v8 = *v6;
  v9 = v6[1];
  if ( !a3 )
  {
    v10 = *(_QWORD *)(a1 + 40);
    if ( !v10 )
      goto LABEL_8;
    a3 = v10 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( !a3 )
      goto LABEL_8;
  }
  if ( *(_BYTE *)a3 != 1 )
    return 3221225560LL;
  v14 = *(_WORD *)(a3 + 2);
  if ( v14 >= 0 )
  {
    v16 = *(_QWORD *)(a3 + 16);
  }
  else
  {
    v15 = *(unsigned int *)(a3 + 8);
    if ( (_DWORD)v15 )
      v16 = a3 + v15;
    else
      v16 = 0LL;
  }
  if ( (v14 & 4) != 0 )
  {
    if ( v14 >= 0 )
    {
      v18 = *(_QWORD *)(a3 + 32);
    }
    else
    {
      v17 = *(unsigned int *)(a3 + 16);
      if ( (_DWORD)v17 )
        v18 = a3 + v17;
      else
        v18 = 0LL;
    }
  }
  else
  {
    v18 = 0LL;
  }
  if ( v16 )
    v3 = (4 * *(unsigned __int8 *)(v16 + 1) + 11) & 0xFFFFFFFC;
  if ( v18 )
    v3 += (*(unsigned __int16 *)(v18 + 2) + 3) & 0xFFFFFFFC;
  if ( v3 )
  {
    if ( (PEPROCESS)a2 == PsInitialSystemProcess )
    {
      *((_QWORD *)v6 + 2) = 1LL;
      v6[2] = v3;
      goto LABEL_8;
    }
    v19 = *(_QWORD *)(a2 + 760);
    if ( (int)PspChargeQuota(*(_QWORD *)(a2 + 760), 0LL, 1, v3) < 0 )
    {
      *((_QWORD *)v6 + 2) = 0LL;
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 512));
      *((_QWORD *)v6 + 2) = v19;
      if ( v19 )
        goto LABEL_41;
    }
    return 3221225540LL;
  }
LABEL_41:
  v6[2] = v3;
LABEL_8:
  if ( (PEPROCESS)a2 != PsInitialSystemProcess )
  {
    v11 = *(_QWORD *)(a2 + 760);
    if ( v8 && (int)PspChargeQuota(v11, 0LL, 1, v8) < 0 )
    {
      *(_QWORD *)(a1 + 32) = 0LL;
    }
    else
    {
      if ( v9 && (int)PspChargeQuota(v11, 0LL, 0, v9) < 0 )
      {
        if ( v8 )
          PspReturnQuota((__int64 *)v11, 0LL, 1, v8);
        *(_QWORD *)(a1 + 32) = 0LL;
        goto LABEL_21;
      }
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 512));
      *(_QWORD *)(a1 + 32) = v11;
      if ( v11 )
        return 0LL;
    }
LABEL_21:
    if ( v6 )
    {
      v13 = (void *)*((_QWORD *)v6 + 2);
      if ( v13 )
        PsReturnSharedPoolQuota(v13);
    }
    return 3221225540LL;
  }
  *(_QWORD *)(a1 + 32) = 1LL;
  return 0LL;
}
