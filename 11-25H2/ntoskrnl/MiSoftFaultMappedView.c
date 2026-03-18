/*
 * XREFs of MiSoftFaultMappedView @ 0x140339FC4
 * Callers:
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140240A70 (MiLockProtoPoolPage.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiWorkingSetIsContended @ 0x140338960 (MiWorkingSetIsContended.c)
 *     MiLockLeafPage @ 0x14033B770 (MiLockLeafPage.c)
 *     MiImagePageOk @ 0x14033B990 (MiImagePageOk.c)
 *     MiVadMapsLargeImage @ 0x1403D9300 (MiVadMapsLargeImage.c)
 *     MiCompleteRestrictedImageFault @ 0x140464CC4 (MiCompleteRestrictedImageFault.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall MiSoftFaultMappedView(__int64 a1)
{
  int v1; // edx
  __int64 v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // rcx
  ULONG_PTR v6; // r12
  __int64 v7; // r14
  __int64 v8; // rax
  struct _LIST_ENTRY **p_Blink; // rbx
  _QWORD *v10; // r15
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  ULONG_PTR v13; // rdi
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // r9
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rbx
  int v20; // r12d
  int v21; // ebx
  int v22; // eax
  int v23; // eax
  unsigned __int64 v24; // rcx
  unsigned __int8 v25; // [rsp+28h] [rbp-99h] BYREF
  int v26; // [rsp+2Ch] [rbp-95h]
  struct _LIST_ENTRY **v27; // [rsp+30h] [rbp-91h]
  __int128 v28; // [rsp+38h] [rbp-89h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-79h]
  ULONG_PTR v30; // [rsp+50h] [rbp-71h]
  __int64 v31; // [rsp+58h] [rbp-69h]
  unsigned __int64 v32; // [rsp+60h] [rbp-61h]
  _QWORD v33[16]; // [rsp+68h] [rbp-59h] BYREF

  v1 = *(_DWORD *)(a1 + 48);
  v29 = 0LL;
  v28 = 0LL;
  if ( (v1 & 0xF80) == 0x80 || (v1 & 0x200000) == 0 && (v1 & 0x70) == 0x20 && (v1 & 0x400000) != 0 )
    return;
  if ( (unsigned int)MiVadMapsLargeImage() )
    return;
  v4 = *(__int64 **)(v3 + 72);
  v5 = *v4;
  if ( (*(_DWORD *)(*v4 + 56) & 0x8000000) != 0 )
    return;
  v6 = 0LL;
  v26 = 0;
  v7 = 0LL;
  v30 = 0LL;
  v8 = *(_QWORD *)(v5 + 32);
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v27 = p_Blink;
  v31 = v8;
  if ( !v8 )
    return;
  v10 = 0LL;
  v11 = *(_QWORD *)(a1 + 80);
  v12 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v25 = 17;
  v13 = 8 * (v12 & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v14 = (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL;
  BYTE13(v28) |= 8u;
  v32 = 8 * v14 - 0x98000000000LL;
  *(_QWORD *)&v28 = p_Blink;
  BYTE12(v28) = MiLockWorkingSetShared((__int64)p_Blink);
LABEL_10:
  v17 = v26;
  while ( 1 )
  {
    if ( v13 > v32 || v11 > *(_QWORD *)(a1 + 88) || !v31 )
      goto LABEL_59;
    if ( !v17 || (v17 & 7) != 0 )
      goto LABEL_16;
    if ( (unsigned int)MiWorkingSetIsContended((__int64)p_Blink, BYTE13(v28) & 1) || KeShouldYieldProcessor() )
    {
      v20 = 1;
      goto LABEL_55;
    }
    if ( !v10 || (*v10 & 0xFFFFFFFFFFELL) == 0 )
    {
      v17 = v26;
LABEL_16:
      if ( v29 && (v13 & 0xFFF) != 0 )
        goto LABEL_18;
      v20 = 2;
LABEL_55:
      if ( !v10 )
        goto LABEL_40;
      goto LABEL_39;
    }
    v20 = 1;
LABEL_39:
    MiUnlockProtoPoolPage((ULONG_PTR)v10, v25, v15, v16);
    v10 = 0LL;
LABEL_40:
    if ( (_DWORD)v7 )
    {
      v23 = MiCompleteRestrictedImageFault(&v28, v30, v33, (unsigned int)v7);
      v7 = 0LL;
      if ( !v23 )
        break;
    }
    if ( v29 )
      MiUnlockPageTable((__int64)p_Blink, v29);
    if ( v20 == 1 )
    {
      if ( (BYTE13(v28) & 1) != 0 )
      {
        MiUnlockWorkingSetExclusive(v28, BYTE12(v28));
        BYTE13(v28) &= ~1u;
      }
      else
      {
        MiUnlockWorkingSetShared(v28, BYTE12(v28));
      }
    }
    v21 = (*(_DWORD *)(a1 + 48) >> 12) & 0x7F;
    if ( v20 == 1 )
      MiLockWorkingSetShared((__int64)v27);
    MiMakeSystemAddressValid(v13, v21, BYTE12(v28), 0);
    p_Blink = v27;
    v6 = v30;
    v29 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v17 = v26;
LABEL_18:
    v18 = *(_QWORD *)v13;
    v26 = ++v17;
    if ( !v18 )
    {
      if ( (v11 & 0xFFF) == 0 || !v10 )
      {
        if ( v10 )
        {
          MiUnlockProtoPoolPage((ULONG_PTR)v10, v25, v15, v16);
          v10 = 0LL;
        }
        if ( (_DWORD)v7 )
        {
          v22 = MiCompleteRestrictedImageFault(&v28, v6, v33, (unsigned int)v7);
          v7 = 0LL;
          if ( !v22 )
            goto LABEL_59;
        }
        v10 = (_QWORD *)MiLockProtoPoolPage(v11, &v25);
        if ( !v10 )
        {
          v24 = (4096 - (v11 & 0xFFF)) & 0xFFFFFFF8;
          v11 += v24;
          v13 += v24;
          if ( v29 && v29 != ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
          {
            MiUnlockPageTable((__int64)p_Blink, v29);
            v29 = 0LL;
          }
          goto LABEL_10;
        }
        v17 = v26;
      }
      if ( (*(_QWORD *)v11 & 1) != 0 )
      {
        v19 = MiLockLeafPage(v11, 0LL);
        if ( v19 )
        {
          if ( (*(_QWORD *)v11 & 1) != 0
            && (--v31, (*(_DWORD *)(v19 + 16) & 0x400LL) != 0)
            && (*(_DWORD *)(v19 + 32) & 0x40000000) == 0
            && (unsigned int)MiImagePageOk((__int64)(v13 << 25) >> 16, v19, v15, a1) )
          {
            v15 = 0xAAAAAAAAAAAAAAABuLL * ((v19 + 0x220000000000LL) >> 4);
            *(_QWORD *)(v19 + 24) = (*(_QWORD *)(v19 + 24) + 1LL) ^ (*(_QWORD *)(v19 + 24) ^ (*(_QWORD *)(v19 + 24) + 1LL)) & 0xC000000000000000uLL;
            _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v15 != -1 )
            {
              v33[v7] = v15;
              if ( !(_DWORD)v7 )
                v6 = v13;
              v7 = (unsigned int)(v7 + 1);
              v30 = v6;
              if ( (_DWORD)v7 == 16 )
              {
                MiUnlockProtoPoolPage((ULONG_PTR)v10, v25, v15, v16);
                v10 = 0LL;
                if ( !(unsigned int)MiCompleteRestrictedImageFault(&v28, v6, v33, 16LL) )
                  goto LABEL_63;
                v7 = 0LL;
              }
            }
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
        p_Blink = v27;
        v11 += 8LL;
        v13 += 8LL;
        goto LABEL_10;
      }
    }
    v11 += 8LL;
    v13 += 8LL;
  }
  v6 = v30;
LABEL_59:
  if ( v10 )
    MiUnlockProtoPoolPage((ULONG_PTR)v10, v25, v15, v16);
  if ( (_DWORD)v7 )
    MiCompleteRestrictedImageFault(&v28, v6, v33, (unsigned int)v7);
LABEL_63:
  if ( v29 )
    MiUnlockPageTable((__int64)v27, v29);
  if ( (BYTE13(v28) & 1) != 0 )
    MiUnlockWorkingSetExclusive(v28, BYTE12(v28));
  else
    MiUnlockWorkingSetShared(v28, BYTE12(v28));
}
