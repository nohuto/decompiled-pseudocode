/*
 * XREFs of MiWritePageFileHash @ 0x140226C80
 * Callers:
 *     MiMapPageFileHash @ 0x1402D1A18 (MiMapPageFileHash.c)
 * Callees:
 *     MiIsPfnOriginalPteLost @ 0x14020D7D0 (MiIsPfnOriginalPteLost.c)
 *     MiComputePageHash @ 0x140226B00 (MiComputePageHash.c)
 *     MiWriteEntirePageHashEntry @ 0x140227080 (MiWriteEntirePageHashEntry.c)
 *     MiTransferSoftwarePte @ 0x1402280C0 (MiTransferSoftwarePte.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiGetPagingFileOffset @ 0x14037C4CC (MiGetPagingFileOffset.c)
 *     MiPageHashBugCheck @ 0x140685E58 (MiPageHashBugCheck.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall MiWritePageFileHash(__int64 a1, __int64 *a2, int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r12
  __int64 v6; // rdi
  int v7; // ebp
  __int64 result; // rax
  BOOL v10; // ecx
  int v11; // r15d
  unsigned int i; // r13d
  __int64 v13; // r15
  int v14; // r12d
  __int64 v15; // rdi
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r11
  __int64 v18; // rcx
  __int64 v19; // rcx
  int PagingFileOffset; // eax
  volatile LONG *v21; // rdi
  KIRQL v22; // si
  __int64 v23; // rdx
  BOOL v24; // r8d
  __int64 v25; // r9
  unsigned int j; // r10d
  __int64 v27; // r9
  int v28; // r10d
  __int64 v29; // rdx
  __int64 *v30; // rdi
  char v31; // r15
  __int64 v32; // rcx
  char v33; // [rsp+30h] [rbp-178h]
  int v34; // [rsp+34h] [rbp-174h]
  __int64 v35; // [rsp+38h] [rbp-170h]
  unsigned int v37; // [rsp+48h] [rbp-160h]
  BOOL v38; // [rsp+4Ch] [rbp-15Ch]
  _DWORD *v40; // [rsp+58h] [rbp-150h]
  _BYTE v41[256]; // [rsp+60h] [rbp-148h] BYREF

  v4 = 0;
  v5 = 0LL;
  v34 = a3;
  v6 = a1;
  v35 = 0LL;
  v33 = 17;
  v7 = 0;
  result = a4;
  v10 = dword_140E37050 != 0;
  v11 = a3;
  v38 = v10;
  for ( i = 0; ; ++i )
  {
    v37 = i;
    if ( i < (unsigned int)result )
    {
      v40 = &v41[16 * v4];
      *v40 = 0;
      if ( v10 )
      {
        *(_QWORD *)&v41[16 * v4 + 8] = 0LL;
        *(_DWORD *)&v41[16 * v4 + 4] = 0;
      }
      v13 = *a2;
      if ( *a2 == qword_140E37138 )
      {
        ++v4;
        goto LABEL_10;
      }
      v14 = 1;
      v15 = 48 * v13 - 0x220000000000LL;
      if ( v35 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          --i;
          v7 = 1;
          --a2;
LABEL_9:
          v5 = v35;
          v6 = a1;
LABEL_10:
          v11 = v34;
          if ( v4 != 16 && !v7 )
            goto LABEL_12;
          goto LABEL_30;
        }
      }
      else
      {
        v35 = 48 * v13 - 0x220000000000LL;
        v33 = MiLockPageInline(v35);
      }
      v16 = *(_QWORD *)(v15 + 8);
      if ( (*(_QWORD *)(v15 + 40) & 0xFFFFFFFFFFLL) == v13 )
        v16 = 0xFFFFF6FB7DBEDF68uLL;
      MiTransferSoftwarePte(CLFS_LSN_NULL_EXT, a1, v4 + v34, 1LL);
      if ( (unsigned int)MiIsPfnOriginalPteLost(v15) )
      {
        v14 = 0;
      }
      else
      {
        v18 = 32LL * (unsigned int)(*(_QWORD *)(v15 + 16) >> 5);
        v17 = v18 ^ (v18 ^ v17) & 0xFFFFFFFFFFFFFC1FuLL;
      }
      v19 = (v17 >> 5) & 0x1F;
      if ( (dword_140FC41F0 & 1) == 0 && (_DWORD)v19 != 31 )
      {
        if ( (unsigned int)v19 >> 3 == 3 )
        {
          if ( ((v17 >> 5) & 7) != 0 )
            goto LABEL_21;
        }
        else if ( (unsigned int)v19 >> 3 == 1 )
        {
          goto LABEL_21;
        }
      }
      if ( v14 )
      {
        PagingFileOffset = MiGetPagingFileOffset(v17);
        MiComputePageHash((__int64)v40, v13, v16, PagingFileOffset);
LABEL_24:
        ++v4;
        i = v37;
        if ( KeShouldYieldProcessor() )
          v7 = 1;
        goto LABEL_9;
      }
LABEL_21:
      *(_DWORD *)&v41[16 * v4] = 2;
      *(_QWORD *)&v41[16 * v4 + 8] = v16 | 1;
      *(_DWORD *)&v41[16 * v4 + 4] = MiGetPagingFileOffset(v17);
      goto LABEL_24;
    }
    if ( !v4 )
      break;
    --a2;
LABEL_30:
    v21 = (volatile LONG *)(v6 + 200);
    v7 = 0;
    if ( v5 )
    {
      v22 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v21);
    }
    else
    {
      v22 = ExAcquireSpinLockExclusive(v21);
    }
    v24 = v38;
    v25 = *(_QWORD *)(a1 + 184) + (unsigned int)(dword_140E3704C * v11);
    for ( j = 0; j < v4; j = v28 + 1 )
    {
      if ( (*(_DWORD *)v25 > 1u || v24 && (*(_BYTE *)(v25 + 8) & 1) != 0) && !dword_140E2FF0C )
        MiPageHashBugCheck(0x60uLL, v11 + j, (int)&v41[16 * j]);
      MiWriteEntirePageHashEntry(v25, &v41[16 * j]);
      v25 = (unsigned int)dword_140E3704C + v27;
    }
    LOBYTE(v23) = v22;
    MiReleaseSpinLockExclusive(v21, v23);
    v11 += v4;
    v34 = v11;
    if ( v5 )
    {
      v30 = a2;
      if ( v4 )
      {
        v31 = v33;
        do
        {
          if ( *v30 != qword_140E37138 )
          {
            v32 = 48 * *v30 - 0x220000000000LL;
            if ( v32 == v5 )
            {
              LOBYTE(v29) = v31;
              MiUnlockPage(v32, v29);
              v5 = 0LL;
              v31 = 17;
            }
            else
            {
              _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
          }
          --v30;
          --v4;
        }
        while ( v4 );
        v33 = v31;
        v11 = v34;
        v35 = v5;
      }
    }
    else
    {
      v4 = 0;
    }
LABEL_12:
    v10 = v38;
    ++a2;
    v6 = a1;
    result = a4;
  }
  return result;
}
