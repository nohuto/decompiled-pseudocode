/*
 * XREFs of StorTickEventQueue @ 0x14002EE90
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x14002ED00 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     RaidAdapterRequestComplete @ 0x140025020 (RaidAdapterRequestComplete.c)
 *     StorEtwHwTimeoutDetectedEvent @ 0x14002F5A4 (StorEtwHwTimeoutDetectedEvent.c)
 *     RaidUnitAbortSrb @ 0x14009DC10 (RaidUnitAbortSrb.c)
 *     StorEtwMiniportBugAbortTimeoutEvent @ 0x1400A84E0 (StorEtwMiniportBugAbortTimeoutEvent.c)
 *     StorEtwMiniportBugResetBrokenEvent @ 0x1400A873C (StorEtwMiniportBugResetBrokenEvent.c)
 */

__int64 __fastcall StorTickEventQueue(__int64 a1, _DWORD *a2, KSPIN_LOCK **a3, _QWORD *a4)
{
  unsigned int v4; // edi
  unsigned int v6; // ecx
  char v7; // r14
  _QWORD *v8; // r13
  unsigned int v10; // ebp
  KSPIN_LOCK *v11; // rbx
  KSPIN_LOCK v12; // rcx
  unsigned int v13; // eax
  unsigned int v15; // r13d
  KSPIN_LOCK v16; // rcx
  _DWORD *v17; // r13
  __int64 v18; // r9
  __int64 v19; // rdi
  ULONGLONG v20; // rdx
  ULONG_PTR *v21; // r9
  ULONG_PTR v22; // r11
  ULONG_PTR v23; // rax
  __int64 v24; // r10
  __int64 v25; // rcx
  ULONG_PTR v26; // r8
  __int64 v27; // rdi
  unsigned int v28; // eax
  unsigned int v29; // edx
  _WORD *v30; // r8
  __int64 v31; // rdx
  KSPIN_LOCK *v32; // rax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  unsigned int v38; // eax
  KSPIN_LOCK v39; // rcx
  char v40; // [rsp+30h] [rbp-A8h]
  __int64 v41; // [rsp+38h] [rbp-A0h]
  __int64 v42; // [rsp+40h] [rbp-98h]
  unsigned int v43; // [rsp+48h] [rbp-90h]
  int v44; // [rsp+4Ch] [rbp-8Ch]
  unsigned int v45; // [rsp+50h] [rbp-88h]
  _BYTE v46[12]; // [rsp+54h] [rbp-84h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-78h] BYREF
  __int128 v48; // [rsp+78h] [rbp-60h] BYREF
  ULONGLONG UnbiasedInterruptTime; // [rsp+88h] [rbp-50h]
  char v50; // [rsp+E0h] [rbp+8h]
  char v51; // [rsp+E8h] [rbp+10h]

  v4 = 0;
  v41 = 0LL;
  v6 = a2[1];
  v7 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 512), 2u);
  v43 = v6;
  v8 = a4;
  v10 = 0;
  v11 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( (*(_BYTE *)a2 & 1) != 0 )
  {
    v40 = 1;
    v15 = 0;
    v51 = 0;
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
    while ( 1 )
    {
      v50 = 0;
      while ( 1 )
      {
        v45 = v4;
        if ( v4 >= a2[2] )
          goto LABEL_51;
        v42 = 0LL;
        v11 = (KSPIN_LOCK *)&a2[16 * v4 + 16];
        *(_DWORD *)&v46[8] = 0;
        v44 = 0;
        v41 = 0LL;
        *(_QWORD *)v46 = v15 + 1;
        KeAcquireInStackQueuedSpinLockAtDpcLevel(v11 + 5, &LockHandle);
        if ( v40 )
        {
          v32 = (KSPIN_LOCK *)v11[2];
          v11[4] = (KSPIN_LOCK)v32;
          if ( v32 != v11 + 2 )
            v7 = 1;
        }
        v16 = v11[4];
        v17 = v11 + 2;
        if ( (KSPIN_LOCK *)v16 == v11 + 2 )
        {
          v31 = 0LL;
          v18 = 0LL;
        }
        else
        {
          v18 = v16 - 64;
          v19 = *(_QWORD *)(v16 + 24);
          v41 = v16 - 64;
          v20 = v19 + (unsigned int)(5000000 * *(_DWORD *)(v16 + 16));
          if ( v20 <= UnbiasedInterruptTime && (*(_BYTE *)(v18 + 16) & 0x1C) != 0x10 )
          {
            v21 = *(ULONG_PTR **)(v18 + 224);
            v22 = v21[176];
            if ( v20 < v22 )
            {
              v23 = v21[3];
              v48 = 0LL;
              v24 = *(_QWORD *)(v23 + 16);
              v25 = *(_QWORD *)(v24 + 48);
              if ( !v25 )
                goto LABEL_24;
              v28 = *(unsigned __int16 *)(v24 + 40);
              if ( !(_WORD)v28 )
                goto LABEL_24;
              v29 = v28 >> 1;
              do
              {
                if ( !v29 )
                  goto LABEL_24;
                v30 = (_WORD *)(v25 + 2LL * --v29);
              }
              while ( *v30 != 92 );
              if ( v30 )
                v26 = (ULONG_PTR)(v30 + 1);
              else
LABEL_24:
                v26 = *(_QWORD *)(v24 + 48);
              LOWORD(v48) = *(_WORD *)(v24 + 40) + v25 - v26;
              WORD1(v48) = v48 + 2;
              *((_QWORD *)&v48 + 1) = v26;
              if ( MiniportBugActionPolicy == 1 )
              {
                StorEtwMiniportBugResetBrokenEvent(v41, v22 - v19, &v48);
              }
              else if ( MiniportBugActionPolicy == 2 )
              {
                KeBugCheckEx(0xF0u, 1uLL, v26, *(_QWORD *)(v41 + 168), v21[1]);
              }
            }
            v18 = v41;
            if ( (*a2 & 4) == 0 )
            {
              v10 = -1073741643;
              goto LABEL_44;
            }
            v33 = *(_DWORD *)(v41 + 776);
            if ( v33 == 3 )
            {
              v10 = -1073741643;
              v50 = 0;
              goto LABEL_44;
            }
            if ( v33 )
            {
              if ( (*(_BYTE *)(v41 + 17) & 4) != 0 )
              {
                v50 = 1;
                v11[4] = *(_QWORD *)v11[4];
              }
            }
            else
            {
              v50 = 1;
              v11[4] = *(_QWORD *)v11[4];
              v42 = *(_QWORD *)(v41 + 224);
              v35 = *(_QWORD *)(v41 + 168);
              *(_QWORD *)&v46[4] = v35;
              v36 = *(unsigned __int8 *)(v35 + 2);
              if ( (_BYTE)v36 == 40 )
                v36 = *(unsigned int *)(v35 + 20);
              v44 = v36;
              if ( (unsigned int)v36 > 0x20 || (v37 = 0x1000D0000LL, !_bittest64(&v37, v36)) )
              {
                if ( _InterlockedCompareExchange((volatile signed __int32 *)(v41 + 776), 1, 0) )
                {
                  v31 = 0LL;
                  v42 = 0LL;
                  *(_QWORD *)&v46[4] = 0LL;
                  if ( (*(_BYTE *)(v41 + 17) & 4) == 0 )
                    v11[4] = (KSPIN_LOCK)v17;
                  goto LABEL_45;
                }
              }
            }
LABEL_44:
            v31 = v42;
LABEL_45:
            v4 = v45;
            goto LABEL_46;
          }
          v4 = v45;
          v31 = 0LL;
          v11[4] = (KSPIN_LOCK)v17;
          v41 = v16 - 64;
        }
LABEL_46:
        if ( (*a2 & 4) != 0 )
        {
          if ( v10 != -1073741643 )
            goto LABEL_48;
          goto LABEL_67;
        }
        if ( v10 == -1073741643 )
        {
          *((_DWORD *)v11 + 12) = -2;
          goto LABEL_67;
        }
        v38 = *((_DWORD *)v11 + 12);
        if ( !v38 )
          goto LABEL_90;
        if ( v38 > v43 )
        {
          v38 -= v43;
          *((_DWORD *)v11 + 12) = v38;
LABEL_90:
          if ( v38 )
            goto LABEL_48;
          goto LABEL_91;
        }
        *((_DWORD *)v11 + 12) = 0;
LABEL_91:
        v39 = *v11;
        if ( (*(_DWORD *)(*v11 + 48) & 1) != 0 )
        {
          *((_DWORD *)v11 + 12) = v43;
LABEL_48:
          if ( v51 || !v31 )
            goto LABEL_49;
          goto LABEL_67;
        }
        v18 = v39 - 48;
        *((_DWORD *)v11 + 12) = -2;
        v41 = v39 - 48;
        v10 = -1073741643;
LABEL_67:
        if ( v18 && *(_DWORD *)(v18 + 776) != 3 )
        {
          v34 = *a2 >> 2;
          LOBYTE(v34) = (*a2 & 4) != 0;
          StorEtwHwTimeoutDetectedEvent(v18, v34);
          v51 = 1;
        }
LABEL_49:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( v10 == -1073741643 )
          break;
        if ( v42 )
        {
          if ( v44 == 16 )
          {
            v27 = v41;
            v10 = -1073741643;
            StorEtwMiniportBugAbortTimeoutEvent(v41);
            v8 = a4;
            goto LABEL_73;
          }
          if ( (unsigned int)(v44 - 18) > 1 && v44 != 32 )
          {
            *(_BYTE *)(v41 + 17) |= 4u;
            if ( (int)RaidUnitAbortSrb(v42, *(_QWORD *)&v46[4]) < 0 )
            {
              v27 = v41;
              *(_BYTE *)(v41 + 17) &= ~4u;
              if ( _InterlockedCompareExchange((volatile signed __int32 *)(v41 + 776), 0, 1) != 4 )
              {
                v8 = a4;
                v10 = -1073741643;
                goto LABEL_73;
              }
              RaidAdapterRequestComplete(*(_QWORD *)(v42 + 24), v41, 1);
              v15 = *(_DWORD *)v46;
              v4 = 0;
              v10 = 0;
              goto LABEL_52;
            }
          }
        }
        v15 = *(_DWORD *)v46;
        ++v4;
      }
      v15 = *(_DWORD *)v46;
LABEL_51:
      v4 = 0;
LABEL_52:
      v40 = 0;
      if ( !v50 || v15 >= 0x64 )
      {
        v8 = a4;
LABEL_11:
        if ( v10 == -1073741643 )
        {
          v27 = v41;
          goto LABEL_73;
        }
        goto LABEL_12;
      }
    }
  }
  if ( !a2[2] )
    return v10;
  while ( 1 )
  {
    v11 = (KSPIN_LOCK *)&a2[16 * v4 + 16];
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v11 + 5, &LockHandle);
    v12 = *v11;
    v13 = *((_DWORD *)v11 + 12);
    if ( (KSPIN_LOCK *)*v11 != v11 )
      v7 = 1;
    if ( v13 > 0xFFFFFFFD )
      goto LABEL_10;
    if ( v13 && v13 <= v43 )
      break;
    if ( v13 > v43 )
    {
      v13 -= v43;
      *((_DWORD *)v11 + 12) = v13;
    }
    if ( !v13 )
      goto LABEL_35;
LABEL_10:
    v10 = 0;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( ++v4 >= a2[2] )
      goto LABEL_11;
  }
  *((_DWORD *)v11 + 12) = 0;
LABEL_35:
  v27 = v12 - 48;
  StorEtwHwTimeoutDetectedEvent(v12 - 48, 0LL);
  *((_DWORD *)v11 + 12) = -2;
  v10 = -1073741643;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_73:
  if ( a3 )
    *a3 = v11;
  if ( v8 && v27 )
    *v8 = *(_QWORD *)(v27 + 168);
LABEL_12:
  if ( v7 )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 512), 2u);
  return v10;
}
