/*
 * XREFs of MiGetPageFromSlabAllocator @ 0x1403B7FAC
 * Callers:
 *     MiGetSlabPage @ 0x14022BC70 (MiGetSlabPage.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     MiGetRepurposedSlabStandbyPage @ 0x1402C5DA4 (MiGetRepurposedSlabStandbyPage.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiReleaseSpinLockShared @ 0x140323610 (MiReleaseSpinLockShared.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiAsyncSlabReplenish @ 0x140390EF4 (MiAsyncSlabReplenish.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1403B79B4 (MiUpdateSlabPagePlaceholderState.c)
 *     MiGetPageFromSlabEntry @ 0x1403B84B8 (MiGetPageFromSlabEntry.c)
 *     MiRepurposeStandbySlabPage @ 0x1403B9694 (MiRepurposeStandbySlabPage.c)
 *     MiGetCurrentSlabIdentity @ 0x1403BEAC0 (MiGetCurrentSlabIdentity.c)
 *     MiGetPageFromSlabAllocatorByIdentity @ 0x1404CAB28 (MiGetPageFromSlabAllocatorByIdentity.c)
 */

ULONG_PTR __fastcall MiGetPageFromSlabAllocator(__int64 a1, char a2)
{
  unsigned __int8 CurrentSlabIdentity; // bp
  char v5; // si
  __int64 v6; // rdx
  ULONG_PTR RepurposedSlabStandbyPage; // rdi
  unsigned __int64 v9; // r12
  volatile LONG *v10; // rcx
  __int64 v11; // rdx
  __int64 *v12; // rcx
  __int64 v13; // rcx
  unsigned __int8 v14; // r14
  unsigned int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  __int64 v19; // rdx
  int v20; // ebp
  unsigned __int64 v21; // r15
  __int64 v22; // rax
  _QWORD *i; // rsi
  _QWORD **v24; // rax
  _QWORD *v25; // rcx
  _QWORD *v26; // rcx
  __int64 v27; // rdx
  volatile LONG *v28; // rcx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  KIRQL v31; // [rsp+60h] [rbp+8h]
  char v32; // [rsp+70h] [rbp+18h]
  _QWORD *v33; // [rsp+78h] [rbp+20h] BYREF

  if ( *(_DWORD *)(a1 + 128) == 8 )
    CurrentSlabIdentity = MiGetCurrentSlabIdentity(KeGetCurrentThread());
  else
    CurrentSlabIdentity = -1;
  v5 = CurrentSlabIdentity;
  v32 = CurrentSlabIdentity;
  if ( !*(_QWORD *)(a1 + 96) )
  {
LABEL_4:
    RepurposedSlabStandbyPage = MiGetRepurposedSlabStandbyPage(a1);
    if ( RepurposedSlabStandbyPage == -1LL )
    {
      if ( *(_QWORD *)(a1 + 176) )
      {
        LOBYTE(v6) = v5;
        RepurposedSlabStandbyPage = MiRepurposeStandbySlabPage(a1, v6);
        if ( RepurposedSlabStandbyPage == -1LL && v5 != -1 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 164));
          LOBYTE(v19) = -1;
          RepurposedSlabStandbyPage = MiRepurposeStandbySlabPage(a1, v19);
        }
      }
    }
    goto LABEL_5;
  }
  v9 = -1LL;
  v10 = (volatile LONG *)(a1 + 16);
  if ( (a2 & 0x10) != 0 )
  {
    v31 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(v10);
  }
  else
  {
    v31 = ExAcquireSpinLockShared(v10);
  }
  if ( *(_DWORD *)(a1 + 128) == 8 )
  {
    if ( CurrentSlabIdentity == 0xFF )
      goto LABEL_33;
    v11 = CurrentSlabIdentity;
    v12 = (__int64 *)(*(_QWORD *)(a1 + 32) + 8LL * CurrentSlabIdentity);
  }
  else
  {
    v12 = (__int64 *)(a1 + 32);
  }
  if ( !v12 )
    goto LABEL_33;
  v13 = *v12;
  v33 = (_QWORD *)v13;
  if ( !v13 )
    goto LABEL_33;
  if ( CurrentSlabIdentity != 0xFF )
  {
    if ( v13 != 1 )
    {
      v11 = *(unsigned int *)(v13 + 92);
      if ( (v11 & 4) != 0 )
      {
        v11 = ((unsigned int)v11 >> 3) & 0x3F;
        if ( (_BYTE)v11 == CurrentSlabIdentity )
          goto LABEL_15;
      }
    }
    if ( *(int *)(a1 + 140) >= 512 )
    {
      if ( v13 != 1 )
        v9 = *(_QWORD *)(v13 + 40);
      v33 = 0LL;
      _InterlockedExchange((volatile __int32 *)(a1 + 140), 0);
      goto LABEL_29;
    }
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 140));
  }
  if ( v13 != 1 )
  {
LABEL_15:
    RepurposedSlabStandbyPage = MiGetPageFromSlabEntry(v13, a1);
    if ( RepurposedSlabStandbyPage != -1LL )
    {
      v14 = 17;
      goto LABEL_17;
    }
    v33 = 0LL;
  }
LABEL_29:
  if ( *(_DWORD *)(a1 + 128) == 8 )
  {
    if ( CurrentSlabIdentity == 0xFF )
      goto LABEL_33;
    v11 = *(_QWORD *)(a1 + 32) + 8LL * CurrentSlabIdentity;
  }
  else
  {
    v11 = a1 + 32;
  }
  if ( v11 )
    *(_QWORD *)v11 = v33;
LABEL_33:
  if ( *(_DWORD *)(a1 + 128) == 8 )
  {
    if ( CurrentSlabIdentity == 0xFF )
      goto LABEL_54;
    v11 = *(_QWORD *)(a1 + 40) + 8LL * CurrentSlabIdentity;
  }
  else
  {
    v11 = a1 + 40;
  }
  if ( !v11 )
  {
LABEL_54:
    v33 = 0LL;
    goto LABEL_55;
  }
  v17 = *(_QWORD *)v11;
  v33 = (_QWORD *)v17;
  if ( v17 )
  {
    if ( CurrentSlabIdentity == 0xFF
      || (v11 = *(unsigned int *)(v17 + 92), (v11 & 4) != 0)
      && (v11 = ((unsigned int)v11 >> 3) & 0x3F, (_BYTE)v11 == CurrentSlabIdentity) )
    {
      RepurposedSlabStandbyPage = MiGetPageFromSlabEntry(v17, a1);
      if ( RepurposedSlabStandbyPage != -1LL )
        goto LABEL_39;
    }
  }
LABEL_55:
  v21 = 0LL;
  if ( CurrentSlabIdentity == 0xFF )
  {
    v14 = 17;
  }
  else
  {
    LOBYTE(v11) = CurrentSlabIdentity;
    RepurposedSlabStandbyPage = MiGetPageFromSlabAllocatorByIdentity(a1, v11, &v33);
    if ( RepurposedSlabStandbyPage != -1LL || !*(_QWORD *)(a1 + 176) )
    {
LABEL_39:
      v14 = 17;
      goto LABEL_40;
    }
    MiReleaseSpinLockShared((volatile signed __int32 *)(a1 + 16), v31);
    LOBYTE(v27) = CurrentSlabIdentity;
    RepurposedSlabStandbyPage = MiRepurposeStandbySlabPage(a1, v27);
    if ( RepurposedSlabStandbyPage != -1LL )
    {
      v14 = 17;
      goto LABEL_18;
    }
    v32 = -1;
    v28 = (volatile LONG *)(a1 + 16);
    if ( (a2 & 0x10) != 0 )
    {
      v14 = 17;
      v31 = 17;
      ExAcquireSpinLockSharedAtDpcLevel(v28);
    }
    else
    {
      v31 = ExAcquireSpinLockShared(v28);
      v14 = 17;
    }
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 164));
    if ( v9 != -1LL )
    {
      v29 = *(_QWORD *)a1;
      if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v29 )
        v29 ^= a1;
      while ( v29 )
      {
        if ( v9 <= *(_QWORD *)(v29 + 48) )
        {
          if ( v9 >= *(_QWORD *)(v29 + 40) )
            break;
          v30 = *(_QWORD *)v29;
        }
        else
        {
          v30 = *(_QWORD *)(v29 + 8);
        }
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v30 )
          v29 ^= v30;
        else
          v29 = v30;
      }
      if ( v29 )
      {
        v33 = (_QWORD *)v29;
        RepurposedSlabStandbyPage = MiGetPageFromSlabEntry(v29, a1);
        if ( RepurposedSlabStandbyPage != -1LL )
          goto LABEL_40;
      }
    }
  }
  v22 = *(_QWORD *)(a1 + 8);
  if ( (v22 & 1) != 0 )
  {
    if ( v22 == 1 )
      i = 0LL;
    else
      i = (_QWORD *)(v22 ^ (a1 | 1));
  }
  else
  {
    i = *(_QWORD **)(a1 + 8);
  }
  while ( i )
  {
    v33 = i;
    if ( i == *(_QWORD **)(a1 + 48) )
    {
      v21 = (unsigned __int64)i;
    }
    else
    {
      RepurposedSlabStandbyPage = MiGetPageFromSlabEntry(i, a1);
      if ( RepurposedSlabStandbyPage != -1LL )
        goto LABEL_40;
    }
    v24 = (_QWORD **)i[1];
    v25 = i;
    if ( v24 )
    {
      v26 = *v24;
      for ( i = (_QWORD *)i[1]; v26; v26 = (_QWORD *)*v26 )
        i = v26;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v25 )
          break;
        v25 = i;
      }
    }
  }
  if ( !v21
    || **(_QWORD **)(a1 + 80)
    || (*(_QWORD *)(a1 + 48) = v21 | 2,
        RepurposedSlabStandbyPage = MiGetPageFromSlabEntry(v21, a1),
        RepurposedSlabStandbyPage == -1LL) )
  {
    RepurposedSlabStandbyPage = -1LL;
    goto LABEL_17;
  }
LABEL_40:
  if ( *(_DWORD *)(a1 + 128) == 8 )
  {
    if ( CurrentSlabIdentity == 0xFF )
      goto LABEL_17;
    v18 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * CurrentSlabIdentity);
  }
  else
  {
    v18 = (_QWORD *)(a1 + 32);
  }
  if ( v18 )
    *v18 = v33;
LABEL_17:
  MiReleaseSpinLockShared((volatile signed __int32 *)(a1 + 16), v31);
  if ( RepurposedSlabStandbyPage == -1LL )
  {
    v5 = v32;
    goto LABEL_4;
  }
LABEL_18:
  v15 = *(_DWORD *)(a1 + 128);
  if ( v15 <= 4 && v15 != 2 )
  {
    v16 = 48 * RepurposedSlabStandbyPage - 0x220000000000LL;
    if ( (a2 & 0x10) != 0 )
    {
      v20 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v20 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait();
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v16 + 24) < 0 );
      }
    }
    else
    {
      v14 = MiLockPageInline(48 * RepurposedSlabStandbyPage - 0x220000000000LL);
    }
    MiUpdateSlabPagePlaceholderState(*(_DWORD *)(a1 + 128), RepurposedSlabStandbyPage, 1LL, 0);
    MiUnlockPage(48 * RepurposedSlabStandbyPage - 0x220000000000LL, v14);
  }
LABEL_5:
  if ( *(_QWORD *)(a1 + 104)
    && !*(_QWORD *)(a1 + 208)
    && *(_QWORD *)(a1 + 96) + **(_QWORD **)(a1 + 80) <= *(_QWORD *)(a1 + 104) >> 1 )
  {
    MiAsyncSlabReplenish(a1, 0LL, (a2 & 0x10 | 4u) >> 2);
  }
  return RepurposedSlabStandbyPage;
}
