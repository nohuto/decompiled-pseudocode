/*
 * XREFs of MiGetPageFromSlabAllocator @ 0x1403A2ED0
 * Callers:
 *     MiGetSlabPage @ 0x1402F3934 (MiGetSlabPage.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiReleaseSpinLockShared @ 0x140244830 (MiReleaseSpinLockShared.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x140264F54 (MiUpdateSlabPagePlaceholderState.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     MiGetRepurposedSlabStandbyPage @ 0x1403A18E8 (MiGetRepurposedSlabStandbyPage.c)
 *     MiGetPageFromSlabEntry @ 0x1403A33B8 (MiGetPageFromSlabEntry.c)
 *     MiRepurposeStandbySlabPage @ 0x1403A3810 (MiRepurposeStandbySlabPage.c)
 *     MiGetCurrentSlabIdentity @ 0x1403FC210 (MiGetCurrentSlabIdentity.c)
 *     MiAsyncSlabReplenish @ 0x1404141C0 (MiAsyncSlabReplenish.c)
 *     MiGetPageFromSlabAllocatorByIdentity @ 0x1404CA864 (MiGetPageFromSlabAllocatorByIdentity.c)
 */

ULONG_PTR __fastcall MiGetPageFromSlabAllocator(__int64 a1, char a2)
{
  unsigned __int8 CurrentSlabIdentity; // bp
  char v5; // si
  unsigned __int64 v6; // r12
  volatile LONG *v7; // rcx
  __int64 v8; // rdx
  __int64 *v9; // rcx
  __int64 v10; // rcx
  ULONG_PTR PageFromSlabEntry; // rdi
  unsigned __int8 v12; // r14
  unsigned int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  __int64 v19; // rdx
  unsigned __int64 v20; // r15
  __int64 v21; // rax
  _QWORD *i; // rsi
  _QWORD **v23; // rax
  _QWORD *v24; // rcx
  _QWORD *v25; // rcx
  unsigned int v26; // ebp
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
    goto LABEL_21;
  v6 = -1LL;
  v7 = (volatile LONG *)(a1 + 16);
  if ( (a2 & 0x10) != 0 )
  {
    v31 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(v7);
  }
  else
  {
    v31 = ExAcquireSpinLockShared(v7);
  }
  if ( *(_DWORD *)(a1 + 128) == 8 )
  {
    if ( CurrentSlabIdentity == 0xFF )
      goto LABEL_32;
    v8 = CurrentSlabIdentity;
    v9 = (__int64 *)(*(_QWORD *)(a1 + 32) + 8LL * CurrentSlabIdentity);
  }
  else
  {
    v9 = (__int64 *)(a1 + 32);
  }
  if ( !v9 )
    goto LABEL_32;
  v10 = *v9;
  v33 = (_QWORD *)v10;
  if ( !v10 )
    goto LABEL_32;
  if ( CurrentSlabIdentity != 0xFF )
  {
    if ( v10 != 1 )
    {
      v8 = *(unsigned int *)(v10 + 92);
      if ( (v8 & 4) != 0 )
      {
        v8 = ((unsigned int)v8 >> 3) & 0x3F;
        if ( (_BYTE)v8 == CurrentSlabIdentity )
          goto LABEL_12;
      }
    }
    if ( *(int *)(a1 + 140) >= 512 )
    {
      if ( v10 != 1 )
        v6 = *(_QWORD *)(v10 + 40);
      v33 = 0LL;
      _InterlockedExchange((volatile __int32 *)(a1 + 140), 0);
      goto LABEL_28;
    }
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 140));
  }
  if ( v10 == 1 )
  {
LABEL_28:
    if ( *(_DWORD *)(a1 + 128) == 8 )
    {
      if ( CurrentSlabIdentity == 0xFF )
        goto LABEL_32;
      v8 = *(_QWORD *)(a1 + 32) + 8LL * CurrentSlabIdentity;
    }
    else
    {
      v8 = a1 + 32;
    }
    if ( v8 )
      *(_QWORD *)v8 = v33;
LABEL_32:
    if ( *(_DWORD *)(a1 + 128) == 8 )
    {
      if ( CurrentSlabIdentity == 0xFF )
        goto LABEL_48;
      v8 = *(_QWORD *)(a1 + 40) + 8LL * CurrentSlabIdentity;
    }
    else
    {
      v8 = a1 + 40;
    }
    if ( v8 )
    {
      v17 = *(_QWORD *)v8;
      v33 = (_QWORD *)v17;
      if ( v17 )
      {
        if ( CurrentSlabIdentity == 0xFF
          || (v8 = *(unsigned int *)(v17 + 92), (v8 & 4) != 0)
          && (v8 = ((unsigned int)v8 >> 3) & 0x3F, (_BYTE)v8 == CurrentSlabIdentity) )
        {
          PageFromSlabEntry = MiGetPageFromSlabEntry(v17, a1);
          if ( PageFromSlabEntry != -1LL )
            goto LABEL_38;
        }
      }
LABEL_49:
      v20 = 0LL;
      if ( CurrentSlabIdentity == 0xFF )
      {
        v12 = 17;
      }
      else
      {
        LOBYTE(v8) = CurrentSlabIdentity;
        PageFromSlabEntry = MiGetPageFromSlabAllocatorByIdentity(a1, v8, &v33);
        if ( PageFromSlabEntry != -1LL || !*(_QWORD *)(a1 + 176) )
        {
LABEL_38:
          v12 = 17;
          goto LABEL_39;
        }
        MiReleaseSpinLockShared((volatile signed __int32 *)(a1 + 16), v31);
        LOBYTE(v27) = CurrentSlabIdentity;
        PageFromSlabEntry = MiRepurposeStandbySlabPage(a1, v27);
        if ( PageFromSlabEntry != -1LL )
        {
          v12 = 17;
          goto LABEL_15;
        }
        v32 = -1;
        v28 = (volatile LONG *)(a1 + 16);
        if ( (a2 & 0x10) != 0 )
        {
          v12 = 17;
          v31 = 17;
          ExAcquireSpinLockSharedAtDpcLevel(v28);
        }
        else
        {
          v31 = ExAcquireSpinLockShared(v28);
          v12 = 17;
        }
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 164));
        if ( v6 != -1LL )
        {
          v29 = *(_QWORD *)a1;
          if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v29 )
            v29 ^= a1;
          while ( v29 )
          {
            if ( v6 <= *(_QWORD *)(v29 + 48) )
            {
              if ( v6 >= *(_QWORD *)(v29 + 40) )
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
            PageFromSlabEntry = MiGetPageFromSlabEntry(v29, a1);
            if ( PageFromSlabEntry != -1LL )
            {
LABEL_39:
              if ( *(_DWORD *)(a1 + 128) == 8 )
              {
                if ( CurrentSlabIdentity == 0xFF )
                  goto LABEL_14;
                v18 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * CurrentSlabIdentity);
              }
              else
              {
                v18 = (_QWORD *)(a1 + 32);
              }
              if ( v18 )
                *v18 = v33;
              goto LABEL_14;
            }
          }
        }
      }
      v21 = *(_QWORD *)(a1 + 8);
      if ( (v21 & 1) != 0 )
      {
        if ( v21 == 1 )
          i = 0LL;
        else
          i = (_QWORD *)(v21 ^ (a1 | 1));
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
          v20 = (unsigned __int64)i;
        }
        else
        {
          PageFromSlabEntry = MiGetPageFromSlabEntry(i, a1);
          if ( PageFromSlabEntry != -1LL )
            goto LABEL_39;
        }
        v23 = (_QWORD **)i[1];
        v24 = i;
        if ( v23 )
        {
          v25 = *v23;
          for ( i = (_QWORD *)i[1]; v25; v25 = (_QWORD *)*v25 )
            i = v25;
        }
        else
        {
          while ( 1 )
          {
            i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || (_QWORD *)*i == v24 )
              break;
            v24 = i;
          }
        }
      }
      if ( !v20
        || **(_QWORD **)(a1 + 80)
        || (*(_QWORD *)(a1 + 48) = v20 | 2,
            PageFromSlabEntry = MiGetPageFromSlabEntry(v20, a1),
            PageFromSlabEntry == -1LL) )
      {
        PageFromSlabEntry = -1LL;
        goto LABEL_14;
      }
      goto LABEL_39;
    }
LABEL_48:
    v33 = 0LL;
    goto LABEL_49;
  }
LABEL_12:
  PageFromSlabEntry = MiGetPageFromSlabEntry(v10, a1);
  if ( PageFromSlabEntry == -1LL )
  {
    v33 = 0LL;
    goto LABEL_28;
  }
  v12 = 17;
LABEL_14:
  MiReleaseSpinLockShared((volatile signed __int32 *)(a1 + 16), v31);
  if ( PageFromSlabEntry != -1LL )
  {
LABEL_15:
    v13 = *(_DWORD *)(a1 + 128);
    if ( v13 <= 4 && v13 != 2 )
    {
      v14 = 48 * PageFromSlabEntry - 0x220000000000LL;
      if ( (a2 & 0x10) != 0 )
      {
        v26 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v26 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v26);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v14 + 24) < 0 );
        }
      }
      else
      {
        v12 = MiLockPageInline(48 * PageFromSlabEntry - 0x220000000000LL);
      }
      MiUpdateSlabPagePlaceholderState(*(_DWORD *)(a1 + 128), PageFromSlabEntry, 1LL, 0);
      MiUnlockPage(48 * PageFromSlabEntry - 0x220000000000LL, v12);
    }
    goto LABEL_22;
  }
  v5 = v32;
LABEL_21:
  PageFromSlabEntry = MiGetRepurposedSlabStandbyPage(a1);
  if ( PageFromSlabEntry == -1LL )
  {
    if ( *(_QWORD *)(a1 + 176) )
    {
      LOBYTE(v15) = v5;
      PageFromSlabEntry = MiRepurposeStandbySlabPage(a1, v15);
      if ( PageFromSlabEntry == -1LL && v5 != -1 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 164));
        LOBYTE(v19) = -1;
        PageFromSlabEntry = MiRepurposeStandbySlabPage(a1, v19);
      }
    }
  }
LABEL_22:
  if ( *(_QWORD *)(a1 + 104)
    && !*(_QWORD *)(a1 + 208)
    && *(_QWORD *)(a1 + 96) + **(_QWORD **)(a1 + 80) <= *(_QWORD *)(a1 + 104) >> 1 )
  {
    MiAsyncSlabReplenish(a1, 0LL, (a2 & 0x10 | 4u) >> 2);
  }
  return PageFromSlabEntry;
}
