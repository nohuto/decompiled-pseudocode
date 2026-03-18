/*
 * XREFs of MiWritePageFileHash @ 0x14039E350
 * Callers:
 *     MiMapPageFileHash @ 0x140486688 (MiMapPageFileHash.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiGetPagingFileOffset @ 0x1402E5A60 (MiGetPagingFileOffset.c)
 *     MiIsPfnOriginalPteLost @ 0x14039D8FC (MiIsPfnOriginalPteLost.c)
 *     MiWriteEntirePageHashEntry @ 0x14039E750 (MiWriteEntirePageHashEntry.c)
 *     MiTransferSoftwarePte @ 0x14039F300 (MiTransferSoftwarePte.c)
 *     MiComputePageHash @ 0x140434B10 (MiComputePageHash.c)
 *     MiPageHashBugCheck @ 0x1406912B8 (MiPageHashBugCheck.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall MiWritePageFileHash(__int64 a1, _QWORD *a2, int a3, unsigned int a4)
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
  unsigned int PagingFileOffset; // eax
  volatile LONG *v21; // rdi
  KIRQL v22; // si
  BOOL v23; // r8d
  __int64 v24; // r9
  unsigned int j; // r10d
  __int64 v26; // r9
  int v27; // r10d
  _QWORD *v28; // rdi
  unsigned __int8 v29; // r15
  __int64 v30; // rcx
  char v31; // [rsp+30h] [rbp-178h]
  int v32; // [rsp+34h] [rbp-174h]
  __int64 v33; // [rsp+38h] [rbp-170h]
  unsigned int v35; // [rsp+48h] [rbp-160h]
  BOOL v36; // [rsp+4Ch] [rbp-15Ch]
  _DWORD *v38; // [rsp+58h] [rbp-150h]
  _BYTE v39[256]; // [rsp+60h] [rbp-148h] BYREF

  v4 = 0;
  v5 = 0LL;
  v32 = a3;
  v6 = a1;
  v33 = 0LL;
  v31 = 17;
  v7 = 0;
  result = a4;
  v10 = dword_140E37290 != 0;
  v11 = a3;
  v36 = v10;
  for ( i = 0; ; ++i )
  {
    v35 = i;
    if ( i < (unsigned int)result )
    {
      v38 = &v39[16 * v4];
      *v38 = 0;
      if ( v10 )
      {
        *(_QWORD *)&v39[16 * v4 + 8] = 0LL;
        *(_DWORD *)&v39[16 * v4 + 4] = 0;
      }
      v13 = *a2;
      if ( *a2 == qword_140E37378 )
      {
        ++v4;
        goto LABEL_10;
      }
      v14 = 1;
      v15 = 48 * v13 - 0x220000000000LL;
      if ( v33 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          --i;
          v7 = 1;
          --a2;
LABEL_9:
          v5 = v33;
          v6 = a1;
LABEL_10:
          v11 = v32;
          if ( v4 != 16 && !v7 )
            goto LABEL_12;
          goto LABEL_30;
        }
      }
      else
      {
        v33 = 48 * v13 - 0x220000000000LL;
        v31 = MiLockPageInline(v33);
      }
      v16 = *(_QWORD *)(v15 + 8);
      if ( (*(_QWORD *)(v15 + 40) & 0xFFFFFFFFFFLL) == v13 )
        v16 = 0xFFFFF6FB7DBEDF68uLL;
      MiTransferSoftwarePte(CLFS_LSN_NULL_EXT, a1, v4 + v32, 1LL);
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
      if ( (dword_140FC4200 & 1) == 0 && (_DWORD)v19 != 31 )
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
        MiComputePageHash(v38, v13, v16, PagingFileOffset);
LABEL_24:
        ++v4;
        i = v35;
        if ( KeShouldYieldProcessor() )
          v7 = 1;
        goto LABEL_9;
      }
LABEL_21:
      *(_DWORD *)&v39[16 * v4] = 2;
      *(_QWORD *)&v39[16 * v4 + 8] = v16 | 1;
      *(_DWORD *)&v39[16 * v4 + 4] = MiGetPagingFileOffset(v17);
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
    v23 = v36;
    v24 = *(_QWORD *)(a1 + 184) + (unsigned int)(dword_140E3728C * v11);
    for ( j = 0; j < v4; j = v27 + 1 )
    {
      if ( (*(_DWORD *)v24 > 1u || v23 && (*(_BYTE *)(v24 + 8) & 1) != 0) && !dword_140E30154 )
        MiPageHashBugCheck(0x60uLL, v11 + j, (int)&v39[16 * j]);
      MiWriteEntirePageHashEntry(v24, &v39[16 * j]);
      v24 = (unsigned int)dword_140E3728C + v26;
    }
    MiReleaseSpinLockExclusive(v21, v22);
    v11 += v4;
    v32 = v11;
    if ( v5 )
    {
      v28 = a2;
      if ( v4 )
      {
        v29 = v31;
        do
        {
          if ( *v28 != qword_140E37378 )
          {
            v30 = 48LL * *v28 - 0x220000000000LL;
            if ( v30 == v5 )
            {
              MiUnlockPage(v30, v29);
              v5 = 0LL;
              v29 = 17;
            }
            else
            {
              _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
          }
          --v28;
          --v4;
        }
        while ( v4 );
        v31 = v29;
        v11 = v32;
        v33 = v5;
      }
    }
    else
    {
      v4 = 0;
    }
LABEL_12:
    v10 = v36;
    ++a2;
    v6 = a1;
    result = a4;
  }
  return result;
}
