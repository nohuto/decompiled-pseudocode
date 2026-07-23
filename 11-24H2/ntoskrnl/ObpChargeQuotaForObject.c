/*
 * XREFs of ObpChargeQuotaForObject @ 0x14096DFE0
 * Callers:
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 * Callees:
 *     PspChargeQuota @ 0x14027BB30 (PspChargeQuota.c)
 *     PspReturnQuota @ 0x14027CC50 (PspReturnQuota.c)
 *     PsReturnSharedPoolQuota @ 0x140856970 (PsReturnSharedPoolQuota.c)
 */

__int64 __fastcall ObpChargeQuotaForObject(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v4; // r15d
  unsigned int *v7; // rdi
  char v8; // al
  ULONG_PTR v9; // rbp
  unsigned __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // rsi
  char *v14; // rcx
  __int16 v15; // cx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r12
  __int64 v21; // rax

  v4 = 0;
  if ( (*(_BYTE *)(a1 + 26) & 8) != 0 )
    v7 = (unsigned int *)(a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0xF]);
  else
    v7 = 0LL;
  v8 = *(_BYTE *)(a1 + 27);
  if ( (v8 & 1) == 0 )
    return 0LL;
  *(_BYTE *)(a1 + 27) = v8 & 0xFE;
  if ( !v7 )
  {
    v21 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)];
    v9 = *(unsigned int *)(v21 + 104);
    v10 = *(unsigned int *)(v21 + 108);
    goto LABEL_8;
  }
  v9 = *v7;
  v10 = v7[1];
  if ( !a3 )
  {
    v11 = *(_QWORD *)(a1 + 40);
    if ( !v11 )
      goto LABEL_8;
    a3 = v11 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( !a3 )
      goto LABEL_8;
  }
  if ( *(_BYTE *)a3 != 1 )
    return 3221225560LL;
  v15 = *(_WORD *)(a3 + 2);
  if ( v15 >= 0 )
  {
    v17 = *(_QWORD *)(a3 + 16);
  }
  else
  {
    v16 = *(unsigned int *)(a3 + 8);
    if ( (_DWORD)v16 )
      v17 = a3 + v16;
    else
      v17 = 0LL;
  }
  if ( (v15 & 4) != 0 )
  {
    if ( v15 >= 0 )
    {
      v19 = *(_QWORD *)(a3 + 32);
    }
    else
    {
      v18 = *(unsigned int *)(a3 + 16);
      if ( (_DWORD)v18 )
        v19 = a3 + v18;
      else
        v19 = 0LL;
    }
  }
  else
  {
    v19 = 0LL;
  }
  if ( v17 )
    v4 = (4 * *(unsigned __int8 *)(v17 + 1) + 11) & 0xFFFFFFFC;
  if ( v19 )
    v4 += (*(unsigned __int16 *)(v19 + 2) + 3) & 0xFFFFFFFC;
  if ( v4 )
  {
    a4 = v4;
    if ( (PEPROCESS)a2 == PsInitialSystemProcess )
    {
      *((_QWORD *)v7 + 2) = 1LL;
      v7[2] = v4;
      goto LABEL_8;
    }
    v20 = *(_QWORD *)(a2 + 760);
    if ( (int)PspChargeQuota(*(_QWORD *)(a2 + 760), 0LL, 1, v4) < 0 )
    {
      *((_QWORD *)v7 + 2) = 0LL;
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 512));
      *((_QWORD *)v7 + 2) = v20;
      if ( v20 )
        goto LABEL_41;
    }
    return 3221225540LL;
  }
LABEL_41:
  v7[2] = v4;
LABEL_8:
  if ( (PEPROCESS)a2 != PsInitialSystemProcess )
  {
    v12 = *(_QWORD *)(a2 + 760);
    if ( v9 && (int)PspChargeQuota(v12, 0LL, 1, v9) < 0 )
    {
      *(_QWORD *)(a1 + 32) = 0LL;
    }
    else
    {
      if ( v10 && (int)PspChargeQuota(v12, 0LL, 0, v10) < 0 )
      {
        if ( v9 )
          PspReturnQuota((__int64 *)v12, 0LL, 1, v9);
        *(_QWORD *)(a1 + 32) = 0LL;
        goto LABEL_21;
      }
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 512));
      *(_QWORD *)(a1 + 32) = v12;
      if ( v12 )
        return 0LL;
    }
LABEL_21:
    if ( v7 )
    {
      v14 = (char *)*((_QWORD *)v7 + 2);
      if ( v14 )
        PsReturnSharedPoolQuota(v14, v4, 0LL, a4);
    }
    return 3221225540LL;
  }
  *(_QWORD *)(a1 + 32) = 1LL;
  return 0LL;
}
