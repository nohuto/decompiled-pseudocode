/*
 * XREFs of MiGetPageFromSlabAllocator @ 0x14021D5AC
 * Callers:
 *     MiGetSlabPage @ 0x14021CE24 (MiGetSlabPage.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     MiGetRepurposedSlabStandbyPage @ 0x140218448 (MiGetRepurposedSlabStandbyPage.c)
 *     MiGetPageFromSlabEntry @ 0x14021DA94 (MiGetPageFromSlabEntry.c)
 *     MiGetCurrentSlabIdentity @ 0x1402619D0 (MiGetCurrentSlabIdentity.c)
 *     MiAsyncSlabReplenish @ 0x14026F604 (MiAsyncSlabReplenish.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1403A9C00 (MiUpdateSlabPagePlaceholderState.c)
 *     MiRepurposeStandbySlabPage @ 0x1403F80A4 (MiRepurposeStandbySlabPage.c)
 *     MiGetPageFromSlabAllocatorByIdentity @ 0x1404C3D84 (MiGetPageFromSlabAllocatorByIdentity.c)
 */

__int64 __fastcall MiGetPageFromSlabAllocator(__int64 a1, char a2)
{
  unsigned __int8 CurrentSlabIdentity; // bp
  char v5; // si
  unsigned __int64 v6; // r12
  volatile LONG *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rcx
  __int64 v12; // rcx
  __int64 PageFromSlabEntry; // rdi
  char v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // eax
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  __int64 v26; // rdx
  unsigned __int64 v27; // r15
  __int64 v28; // rax
  _QWORD *i; // rsi
  _QWORD **v30; // rax
  _QWORD *v31; // rcx
  _QWORD *v32; // rcx
  unsigned int v33; // ebp
  __int64 v34; // rdx
  volatile LONG *v35; // rcx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rax
  KIRQL v38; // [rsp+60h] [rbp+8h]
  char v39; // [rsp+70h] [rbp+18h]
  _QWORD *v40; // [rsp+78h] [rbp+20h] BYREF

  if ( *(_DWORD *)(a1 + 128) == 8 )
    CurrentSlabIdentity = MiGetCurrentSlabIdentity(KeGetCurrentThread());
  else
    CurrentSlabIdentity = -1;
  v5 = CurrentSlabIdentity;
  v39 = CurrentSlabIdentity;
  if ( !*(_QWORD *)(a1 + 96) )
    goto LABEL_21;
  v6 = -1LL;
  v7 = (volatile LONG *)(a1 + 16);
  if ( (a2 & 0x10) != 0 )
  {
    v38 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(v7);
  }
  else
  {
    v38 = ExAcquireSpinLockShared(v7);
  }
  if ( *(_DWORD *)(a1 + 128) == 8 )
  {
    if ( CurrentSlabIdentity == 0xFF )
      goto LABEL_32;
    v8 = CurrentSlabIdentity;
    v11 = (__int64 *)(*(_QWORD *)(a1 + 32) + 8LL * CurrentSlabIdentity);
  }
  else
  {
    v11 = (__int64 *)(a1 + 32);
  }
  if ( !v11 )
    goto LABEL_32;
  v12 = *v11;
  v40 = (_QWORD *)v12;
  if ( !v12 )
    goto LABEL_32;
  if ( CurrentSlabIdentity != 0xFF )
  {
    if ( v12 != 1 )
    {
      v8 = *(unsigned int *)(v12 + 92);
      if ( (v8 & 4) != 0 )
      {
        v8 = ((unsigned int)v8 >> 3) & 0x3F;
        if ( (_BYTE)v8 == CurrentSlabIdentity )
          goto LABEL_12;
      }
    }
    if ( *(int *)(a1 + 140) >= 512 )
    {
      if ( v12 != 1 )
        v6 = *(_QWORD *)(v12 + 40);
      v40 = 0LL;
      _InterlockedExchange((volatile __int32 *)(a1 + 140), 0);
      goto LABEL_28;
    }
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 140));
  }
  if ( v12 == 1 )
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
      *(_QWORD *)v8 = v40;
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
      v24 = *(_QWORD *)v8;
      v40 = (_QWORD *)v24;
      if ( v24 )
      {
        if ( CurrentSlabIdentity == 0xFF
          || (v8 = *(unsigned int *)(v24 + 92), (v8 & 4) != 0)
          && (v8 = ((unsigned int)v8 >> 3) & 0x3F, (_BYTE)v8 == CurrentSlabIdentity) )
        {
          PageFromSlabEntry = MiGetPageFromSlabEntry(v24, a1);
          if ( PageFromSlabEntry != -1 )
            goto LABEL_38;
        }
      }
LABEL_49:
      v27 = 0LL;
      if ( CurrentSlabIdentity == 0xFF )
      {
        v14 = 17;
      }
      else
      {
        LOBYTE(v8) = CurrentSlabIdentity;
        PageFromSlabEntry = MiGetPageFromSlabAllocatorByIdentity(a1, v8, &v40);
        if ( PageFromSlabEntry != -1 || !*(_QWORD *)(a1 + 176) )
        {
LABEL_38:
          v14 = 17;
          goto LABEL_39;
        }
        MiReleaseSpinLockShared((volatile signed __int32 *)(a1 + 16), v38, v9, v10);
        LOBYTE(v34) = CurrentSlabIdentity;
        PageFromSlabEntry = MiRepurposeStandbySlabPage(a1, v34);
        if ( PageFromSlabEntry != -1 )
        {
          v14 = 17;
          goto LABEL_15;
        }
        v39 = -1;
        v35 = (volatile LONG *)(a1 + 16);
        if ( (a2 & 0x10) != 0 )
        {
          v14 = 17;
          v38 = 17;
          ExAcquireSpinLockSharedAtDpcLevel(v35);
        }
        else
        {
          v38 = ExAcquireSpinLockShared(v35);
          v14 = 17;
        }
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 164));
        if ( v6 != -1LL )
        {
          v36 = *(_QWORD *)a1;
          if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v36 )
            v36 ^= a1;
          while ( v36 )
          {
            if ( v6 <= *(_QWORD *)(v36 + 48) )
            {
              if ( v6 >= *(_QWORD *)(v36 + 40) )
                break;
              v37 = *(_QWORD *)v36;
            }
            else
            {
              v37 = *(_QWORD *)(v36 + 8);
            }
            if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v37 )
              v36 ^= v37;
            else
              v36 = v37;
          }
          if ( v36 )
          {
            v40 = (_QWORD *)v36;
            PageFromSlabEntry = MiGetPageFromSlabEntry(v36, a1);
            if ( PageFromSlabEntry != -1 )
            {
LABEL_39:
              if ( *(_DWORD *)(a1 + 128) == 8 )
              {
                if ( CurrentSlabIdentity == 0xFF )
                  goto LABEL_14;
                v25 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * CurrentSlabIdentity);
              }
              else
              {
                v25 = (_QWORD *)(a1 + 32);
              }
              if ( v25 )
                *v25 = v40;
              goto LABEL_14;
            }
          }
        }
      }
      v28 = *(_QWORD *)(a1 + 8);
      if ( (v28 & 1) != 0 )
      {
        if ( v28 == 1 )
          i = 0LL;
        else
          i = (_QWORD *)(v28 ^ (a1 | 1));
      }
      else
      {
        i = *(_QWORD **)(a1 + 8);
      }
      while ( i )
      {
        v40 = i;
        if ( i == *(_QWORD **)(a1 + 48) )
        {
          v27 = (unsigned __int64)i;
        }
        else
        {
          PageFromSlabEntry = MiGetPageFromSlabEntry(i, a1);
          if ( PageFromSlabEntry != -1 )
            goto LABEL_39;
        }
        v30 = (_QWORD **)i[1];
        v31 = i;
        if ( v30 )
        {
          v32 = *v30;
          for ( i = (_QWORD *)i[1]; v32; v32 = (_QWORD *)*v32 )
            i = v32;
        }
        else
        {
          while ( 1 )
          {
            i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || (_QWORD *)*i == v31 )
              break;
            v31 = i;
          }
        }
      }
      if ( !v27
        || **(_QWORD **)(a1 + 80)
        || (*(_QWORD *)(a1 + 48) = v27 | 2, PageFromSlabEntry = MiGetPageFromSlabEntry(v27, a1), PageFromSlabEntry == -1) )
      {
        PageFromSlabEntry = -1LL;
        goto LABEL_14;
      }
      goto LABEL_39;
    }
LABEL_48:
    v40 = 0LL;
    goto LABEL_49;
  }
LABEL_12:
  PageFromSlabEntry = MiGetPageFromSlabEntry(v12, a1);
  if ( PageFromSlabEntry == -1 )
  {
    v40 = 0LL;
    goto LABEL_28;
  }
  v14 = 17;
LABEL_14:
  MiReleaseSpinLockShared((volatile signed __int32 *)(a1 + 16), v38, v9, v10);
  if ( PageFromSlabEntry != -1 )
  {
LABEL_15:
    v19 = *(_DWORD *)(a1 + 128);
    if ( v19 <= 4 && v19 != 2 )
    {
      v20 = 48 * PageFromSlabEntry - 0x220000000000LL;
      if ( (a2 & 0x10) != 0 )
      {
        v33 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v33 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v16, v15, v17, v18) )
            {
              HvlNotifyLongSpinWait(v33);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v20 + 24) < 0 );
        }
      }
      else
      {
        v14 = MiLockPageInline(48 * PageFromSlabEntry - 0x220000000000LL);
      }
      MiUpdateSlabPagePlaceholderState(*(unsigned int *)(a1 + 128), PageFromSlabEntry, 1LL, 0LL);
      LOBYTE(v21) = v14;
      MiUnlockPage(48 * PageFromSlabEntry - 0x220000000000LL, v21);
    }
    goto LABEL_22;
  }
  v5 = v39;
LABEL_21:
  PageFromSlabEntry = MiGetRepurposedSlabStandbyPage(a1);
  if ( PageFromSlabEntry == -1 )
  {
    if ( *(_QWORD *)(a1 + 176) )
    {
      LOBYTE(v22) = v5;
      PageFromSlabEntry = MiRepurposeStandbySlabPage(a1, v22);
      if ( PageFromSlabEntry == -1 && v5 != -1 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 164));
        LOBYTE(v26) = -1;
        PageFromSlabEntry = MiRepurposeStandbySlabPage(a1, v26);
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
