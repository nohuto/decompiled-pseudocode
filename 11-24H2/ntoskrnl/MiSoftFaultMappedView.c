/*
 * XREFs of MiSoftFaultMappedView @ 0x1403491DC
 * Callers:
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiCompleteRestrictedImageFault @ 0x140213BC4 (MiCompleteRestrictedImageFault.c)
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiLockProtoPoolPage @ 0x140302230 (MiLockProtoPoolPage.c)
 *     MiLockLeafPage @ 0x140349740 (MiLockLeafPage.c)
 *     MiImagePageOk @ 0x140349970 (MiImagePageOk.c)
 *     MiWorkingSetIsContended @ 0x1403915E0 (MiWorkingSetIsContended.c)
 *     MiVadMapsLargeImage @ 0x1403C7440 (MiVadMapsLargeImage.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall MiSoftFaultMappedView(__int64 a1)
{
  int v1; // edx
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 *v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // rax
  struct _LIST_ENTRY **p_Blink; // rbx
  _QWORD *v11; // r15
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  ULONG_PTR v14; // rdi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rbx
  int v22; // r12d
  __int64 v23; // rdx
  int v24; // ebx
  int v25; // eax
  int v26; // eax
  unsigned __int64 v27; // rcx
  unsigned __int8 v28; // [rsp+28h] [rbp-99h] BYREF
  int v29; // [rsp+2Ch] [rbp-95h]
  struct _LIST_ENTRY **v30; // [rsp+30h] [rbp-91h]
  __int128 v31; // [rsp+38h] [rbp-89h] BYREF
  ULONG_PTR v32; // [rsp+48h] [rbp-79h]
  unsigned __int64 v33; // [rsp+50h] [rbp-71h]
  __int64 v34; // [rsp+58h] [rbp-69h]
  unsigned __int64 v35; // [rsp+60h] [rbp-61h]
  _QWORD v36[16]; // [rsp+68h] [rbp-59h] BYREF

  v1 = *(_DWORD *)(a1 + 48);
  v32 = 0LL;
  v31 = 0LL;
  if ( (v1 & 0xF80) == 0x80 || (v1 & 0x200000) == 0 && (v1 & 0x70) == 0x20 && (v1 & 0x400000) != 0 )
    return;
  if ( (unsigned int)MiVadMapsLargeImage() )
    return;
  v5 = *(__int64 **)(v3 + 72);
  v6 = *v5;
  if ( (*(_DWORD *)(*v5 + 56) & 0x8000000) != 0 )
    return;
  v7 = 0LL;
  v29 = 0;
  v8 = 0LL;
  v33 = 0LL;
  v9 = *(_QWORD *)(v6 + 32);
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v30 = p_Blink;
  v34 = v9;
  if ( !v9 )
    return;
  v11 = 0LL;
  v12 = *(_QWORD *)(a1 + 80);
  v13 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v28 = 17;
  v14 = 8 * (v13 & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v15 = (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL;
  BYTE13(v31) |= 8u;
  v35 = 8 * v15 - 0x98000000000LL;
  *(_QWORD *)&v31 = p_Blink;
  BYTE12(v31) = MiLockWorkingSetShared((__int64)p_Blink, 0xFFFFFFFFFLL, 0xFFFFF68000000000uLL, v4);
LABEL_9:
  v19 = v29;
  while ( 1 )
  {
    if ( v14 > v35 || v12 > *(_QWORD *)(a1 + 88) || !v34 )
      goto LABEL_55;
    if ( v19 && (v19 & 7) == 0 )
    {
      if ( (unsigned int)MiWorkingSetIsContended(p_Blink, BYTE13(v31) & 1) || KeShouldYieldProcessor() )
      {
        v22 = 1;
        goto LABEL_45;
      }
      if ( v11 && (*v11 & 0xFFFFFFFFFFELL) != 0 )
      {
        v22 = 1;
LABEL_46:
        LOBYTE(v16) = v28;
        MiUnlockProtoPoolPage((__int64)v11, v16, v17, v18);
        v11 = 0LL;
        goto LABEL_47;
      }
      v19 = v29;
    }
    if ( v32 && (v14 & 0xFFF) != 0 )
      goto LABEL_17;
    v22 = 2;
LABEL_45:
    if ( v11 )
      goto LABEL_46;
LABEL_47:
    if ( (_DWORD)v8 )
    {
      v26 = MiCompleteRestrictedImageFault((__int64)&v31, v33, v36, v8);
      v8 = 0LL;
      if ( !v26 )
        break;
    }
    v23 = v32;
    if ( v32 )
      MiUnlockPageTableInternal((__int64)p_Blink, v32);
    if ( v22 == 1 )
    {
      if ( (BYTE13(v31) & 1) != 0 )
      {
        MiUnlockWorkingSetExclusive(v31, BYTE12(v31));
        BYTE13(v31) &= ~1u;
      }
      else
      {
        MiUnlockWorkingSetShared(v31, BYTE12(v31));
      }
    }
    v24 = (*(_DWORD *)(a1 + 48) >> 12) & 0x7F;
    if ( v22 == 1 )
      MiLockWorkingSetShared((__int64)v30, v23, v17, v18);
    MiMakeSystemAddressValid(v14, v24, BYTE12(v31), 0);
    p_Blink = v30;
    v7 = v33;
    v32 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v19 = v29;
LABEL_17:
    v20 = *(_QWORD *)v14;
    v29 = ++v19;
    if ( !v20 )
    {
      if ( (v12 & 0xFFF) == 0 || !v11 )
      {
        if ( v11 )
        {
          LOBYTE(v16) = v28;
          MiUnlockProtoPoolPage((__int64)v11, v16, v17, v18);
          v11 = 0LL;
        }
        if ( (_DWORD)v8 )
        {
          v25 = MiCompleteRestrictedImageFault((__int64)&v31, v7, v36, v8);
          v8 = 0LL;
          if ( !v25 )
            goto LABEL_55;
        }
        v11 = (_QWORD *)MiLockProtoPoolPage(v12, &v28);
        if ( !v11 )
        {
          v16 = v32;
          v27 = (4096 - (v12 & 0xFFF)) & 0xFFFFFFF8;
          v12 += v27;
          v14 += v27;
          if ( v32 && v32 != ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
          {
            MiUnlockPageTableInternal((__int64)p_Blink, v32);
            v32 = 0LL;
          }
          goto LABEL_9;
        }
        v19 = v29;
      }
      if ( (*(_QWORD *)v12 & 1) != 0 )
      {
        v21 = MiLockLeafPage(v12, 0LL, v17, v18);
        if ( v21 )
        {
          if ( (*(_QWORD *)v12 & 1) != 0
            && (--v34, (*(_DWORD *)(v21 + 16) & 0x400LL) != 0)
            && (*(_DWORD *)(v21 + 32) & 0x40000000) == 0
            && (unsigned int)MiImagePageOk((__int64)(v14 << 25) >> 16, v21, v17, a1) )
          {
            v17 = 0xAAAAAAAAAAAAAAABuLL * ((v21 + 0x220000000000LL) >> 4);
            v16 = (*(_QWORD *)(v21 + 24) + 1LL) ^ (*(_QWORD *)(v21 + 24) ^ (*(_QWORD *)(v21 + 24) + 1LL)) & 0xC000000000000000uLL;
            *(_QWORD *)(v21 + 24) = v16;
            _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v17 != -1 )
            {
              v36[v8] = v17;
              if ( !(_DWORD)v8 )
                v7 = v14;
              v8 = (unsigned int)(v8 + 1);
              v33 = v7;
              if ( (_DWORD)v8 == 16 )
              {
                LOBYTE(v16) = v28;
                MiUnlockProtoPoolPage((__int64)v11, v16, v17, v18);
                v11 = 0LL;
                if ( !(unsigned int)MiCompleteRestrictedImageFault((__int64)&v31, v7, v36, 0x10u) )
                  goto LABEL_59;
                v8 = 0LL;
              }
            }
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
        p_Blink = v30;
        v12 += 8LL;
        v14 += 8LL;
        goto LABEL_9;
      }
    }
    v12 += 8LL;
    v14 += 8LL;
  }
  v7 = v33;
LABEL_55:
  if ( v11 )
  {
    LOBYTE(v16) = v28;
    MiUnlockProtoPoolPage((__int64)v11, v16, v17, v18);
  }
  if ( (_DWORD)v8 )
    MiCompleteRestrictedImageFault((__int64)&v31, v7, v36, v8);
LABEL_59:
  if ( v32 )
    MiUnlockPageTableInternal((__int64)v30, v32);
  if ( (BYTE13(v31) & 1) != 0 )
    MiUnlockWorkingSetExclusive(v31, BYTE12(v31));
  else
    MiUnlockWorkingSetShared(v31, BYTE12(v31));
}
