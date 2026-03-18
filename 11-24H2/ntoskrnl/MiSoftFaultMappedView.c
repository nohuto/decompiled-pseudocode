/*
 * XREFs of MiSoftFaultMappedView @ 0x1402E7B9C
 * Callers:
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     MiLockProtoPoolPage @ 0x14022E920 (MiLockProtoPoolPage.c)
 *     MiCompleteRestrictedImageFault @ 0x140238F64 (MiCompleteRestrictedImageFault.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiLockLeafPage @ 0x1402E8100 (MiLockLeafPage.c)
 *     MiImagePageOk @ 0x1402E8330 (MiImagePageOk.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiWorkingSetIsContended @ 0x1403D01B0 (MiWorkingSetIsContended.c)
 *     MiVadMapsLargeImage @ 0x140404B60 (MiVadMapsLargeImage.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall MiSoftFaultMappedView(__int64 a1)
{
  int v1; // edx
  __int64 v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // rax
  struct _LIST_ENTRY **p_Blink; // rbx
  _QWORD *v10; // r15
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  ULONG_PTR v13; // rdi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rbx
  int v21; // r12d
  int v22; // ebx
  int v23; // eax
  int v24; // eax
  unsigned __int64 v25; // rcx
  unsigned __int8 v26; // [rsp+28h] [rbp-99h] BYREF
  int v27; // [rsp+2Ch] [rbp-95h]
  struct _LIST_ENTRY **v28; // [rsp+30h] [rbp-91h]
  __int128 v29; // [rsp+38h] [rbp-89h] BYREF
  __int64 v30; // [rsp+48h] [rbp-79h]
  unsigned __int64 v31; // [rsp+50h] [rbp-71h]
  __int64 v32; // [rsp+58h] [rbp-69h]
  unsigned __int64 v33; // [rsp+60h] [rbp-61h]
  _QWORD v34[16]; // [rsp+68h] [rbp-59h] BYREF

  v1 = *(_DWORD *)(a1 + 48);
  v30 = 0LL;
  v29 = 0LL;
  if ( (v1 & 0xF80) == 0x80 || (v1 & 0x200000) == 0 && (v1 & 0x70) == 0x20 && (v1 & 0x400000) != 0 )
    return;
  if ( (unsigned int)MiVadMapsLargeImage() )
    return;
  v4 = *(__int64 **)(v3 + 72);
  v5 = *v4;
  if ( (*(_DWORD *)(*v4 + 56) & 0x8000000) != 0 )
    return;
  v6 = 0LL;
  v27 = 0;
  v7 = 0LL;
  v31 = 0LL;
  v8 = *(_QWORD *)(v5 + 32);
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v28 = p_Blink;
  v32 = v8;
  if ( !v8 )
    return;
  v10 = 0LL;
  v11 = *(_QWORD *)(a1 + 80);
  v12 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v26 = 17;
  v13 = 8 * (v12 & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v14 = (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL;
  BYTE13(v29) |= 8u;
  v33 = 8 * v14 - 0x98000000000LL;
  *(_QWORD *)&v29 = p_Blink;
  BYTE12(v29) = MiLockWorkingSetShared((__int64)p_Blink);
LABEL_9:
  v18 = v27;
  while ( 1 )
  {
    if ( v13 > v33 || v11 > *(_QWORD *)(a1 + 88) || !v32 )
      goto LABEL_55;
    if ( v18 && (v18 & 7) == 0 )
    {
      if ( (unsigned int)MiWorkingSetIsContended(p_Blink, BYTE13(v29) & 1) || KeShouldYieldProcessor() )
      {
        v21 = 1;
        goto LABEL_45;
      }
      if ( v10 && (*v10 & 0xFFFFFFFFFFELL) != 0 )
      {
        v21 = 1;
LABEL_46:
        LOBYTE(v15) = v26;
        MiUnlockProtoPoolPage((ULONG_PTR)v10, v15, v16);
        v10 = 0LL;
        goto LABEL_47;
      }
      v18 = v27;
    }
    if ( v30 && (v13 & 0xFFF) != 0 )
      goto LABEL_17;
    v21 = 2;
LABEL_45:
    if ( v10 )
      goto LABEL_46;
LABEL_47:
    if ( (_DWORD)v7 )
    {
      v24 = MiCompleteRestrictedImageFault((__int64)&v29, v31, v34, v7);
      v7 = 0LL;
      if ( !v24 )
        break;
    }
    if ( v30 )
      MiUnlockPageTableInternal(p_Blink, v30);
    if ( v21 == 1 )
    {
      if ( (BYTE13(v29) & 1) != 0 )
      {
        MiUnlockWorkingSetExclusive(v29, BYTE12(v29));
        BYTE13(v29) &= ~1u;
      }
      else
      {
        MiUnlockWorkingSetShared(v29, BYTE12(v29));
      }
    }
    v22 = (*(_DWORD *)(a1 + 48) >> 12) & 0x7F;
    if ( v21 == 1 )
      MiLockWorkingSetShared((__int64)v28);
    MiMakeSystemAddressValid(v13, v22, BYTE12(v29), 0);
    p_Blink = v28;
    v6 = v31;
    v30 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v18 = v27;
LABEL_17:
    v19 = *(_QWORD *)v13;
    v27 = ++v18;
    if ( !v19 )
    {
      if ( (v11 & 0xFFF) == 0 || !v10 )
      {
        if ( v10 )
        {
          LOBYTE(v15) = v26;
          MiUnlockProtoPoolPage((ULONG_PTR)v10, v15, v16);
          v10 = 0LL;
        }
        if ( (_DWORD)v7 )
        {
          v23 = MiCompleteRestrictedImageFault((__int64)&v29, v6, v34, v7);
          v7 = 0LL;
          if ( !v23 )
            goto LABEL_55;
        }
        v10 = (_QWORD *)MiLockProtoPoolPage(v11, &v26);
        if ( !v10 )
        {
          v15 = v30;
          v25 = (4096 - (v11 & 0xFFF)) & 0xFFFFFFF8;
          v11 += v25;
          v13 += v25;
          if ( v30 && v30 != ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
          {
            MiUnlockPageTableInternal(p_Blink, v30);
            v30 = 0LL;
          }
          goto LABEL_9;
        }
        v18 = v27;
      }
      if ( (*(_QWORD *)v11 & 1) != 0 )
      {
        v20 = MiLockLeafPage(v11, 0LL, v16, v17);
        if ( v20 )
        {
          if ( (*(_QWORD *)v11 & 1) != 0
            && (--v32, (*(_DWORD *)(v20 + 16) & 0x400LL) != 0)
            && (*(_DWORD *)(v20 + 32) & 0x40000000) == 0
            && (unsigned int)MiImagePageOk((__int64)(v13 << 25) >> 16, v20, v16, a1) )
          {
            v16 = 0xAAAAAAAAAAAAAAABuLL * ((v20 + 0x220000000000LL) >> 4);
            v15 = (*(_QWORD *)(v20 + 24) + 1LL) ^ (*(_QWORD *)(v20 + 24) ^ (*(_QWORD *)(v20 + 24) + 1LL)) & 0xC000000000000000uLL;
            *(_QWORD *)(v20 + 24) = v15;
            _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v16 != -1 )
            {
              v34[v7] = v16;
              if ( !(_DWORD)v7 )
                v6 = v13;
              v7 = (unsigned int)(v7 + 1);
              v31 = v6;
              if ( (_DWORD)v7 == 16 )
              {
                LOBYTE(v15) = v26;
                MiUnlockProtoPoolPage((ULONG_PTR)v10, v15, v16);
                v10 = 0LL;
                if ( !(unsigned int)MiCompleteRestrictedImageFault((__int64)&v29, v6, v34, 0x10u) )
                  goto LABEL_59;
                v7 = 0LL;
              }
            }
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
        p_Blink = v28;
        v11 += 8LL;
        v13 += 8LL;
        goto LABEL_9;
      }
    }
    v11 += 8LL;
    v13 += 8LL;
  }
  v6 = v31;
LABEL_55:
  if ( v10 )
  {
    LOBYTE(v15) = v26;
    MiUnlockProtoPoolPage((ULONG_PTR)v10, v15, v16);
  }
  if ( (_DWORD)v7 )
    MiCompleteRestrictedImageFault((__int64)&v29, v6, v34, v7);
LABEL_59:
  if ( v30 )
    MiUnlockPageTableInternal(v28, v30);
  if ( (BYTE13(v29) & 1) != 0 )
    MiUnlockWorkingSetExclusive(v29, BYTE12(v29));
  else
    MiUnlockWorkingSetShared(v29, BYTE12(v29));
}
