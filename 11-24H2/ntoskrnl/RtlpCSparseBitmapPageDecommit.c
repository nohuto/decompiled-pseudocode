/*
 * XREFs of RtlpCSparseBitmapPageDecommit @ 0x140451E3C
 * Callers:
 *     RtlCSparseBitmapBitsClear @ 0x140364118 (RtlCSparseBitmapBitsClear.c)
 * Callees:
 *     MmFreePoolMemory @ 0x14020C540 (MmFreePoolMemory.c)
 *     RtlpCSparseBitmapUnlock @ 0x14021966C (RtlpCSparseBitmapUnlock.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExpUnblockPushLock @ 0x1402BC2BC (ExpUnblockPushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x140452274 (RtlpCSparseBitmapWaitOnAddress.c)
 *     RtlCSparseBitmapEnterLockingRegion @ 0x140452338 (RtlCSparseBitmapEnterLockingRegion.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall RtlpCSparseBitmapPageDecommit(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r15
  ULONG_PTR v9; // rsi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  BOOL v12; // eax
  _QWORD *v13; // r9
  __int64 v14; // r8
  unsigned __int64 v15; // rax
  unsigned __int64 *v16; // r15
  volatile LONG *v17; // rcx
  __int64 v18; // r8
  bool v19; // al
  char v20; // al
  unsigned __int64 *v21; // r8
  unsigned __int64 *v22; // r9
  unsigned __int64 v23; // rax
  bool j; // zf
  struct _KTHREAD *CurrentThread; // rax
  char *v26; // rax
  signed __int32 v27[8]; // [rsp+0h] [rbp-F8h] BYREF
  char *v28; // [rsp+20h] [rbp-D8h] BYREF
  BOOL v29; // [rsp+28h] [rbp-D0h]
  _QWORD *i; // [rsp+30h] [rbp-C8h]
  unsigned __int64 v31; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v32; // [rsp+40h] [rbp-B8h]
  __int64 v33; // [rsp+48h] [rbp-B0h]
  __int128 v34; // [rsp+50h] [rbp-A8h] BYREF
  ULONG_PTR v35; // [rsp+60h] [rbp-98h] BYREF
  ULONG_PTR v36[4]; // [rsp+68h] [rbp-90h] BYREF
  __int64 v37; // [rsp+88h] [rbp-70h]
  _QWORD *v38; // [rsp+90h] [rbp-68h]
  __int128 v39; // [rsp+98h] [rbp-60h]
  __int64 v40; // [rsp+A8h] [rbp-50h] BYREF
  int v42; // [rsp+118h] [rbp+20h]

  v37 = a1;
  v28 = 0LL;
  v36[0] = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  v42 = 0;
  v5 = *(_QWORD *)(a1 + 16);
  v38 = (_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 8);
  v32 = v5;
  v33 = v6;
  v7 = a2 << 15;
  v36[1] = a2 << 15;
  v8 = a2 << 15;
  v31 = a2 << 15;
  v9 = 0x8000LL;
  v10 = v5 - (a2 << 15);
  if ( v10 <= 0x8000 )
    v9 = v10;
  v36[2] = v9;
  v39 = *(_OWORD *)RtlCSparseBitmapEnterLockingRegion(&v40, a1);
  while ( 1 )
  {
    if ( a3 )
      goto LABEL_21;
    i = 0LL;
    if ( v7 < v32 )
    {
      if ( v9 <= 1 )
      {
        if ( v9 == 1 )
        {
          v12 = !_bittest64((const signed __int64 *)(v33 + 8 * (v8 >> 6)), 0);
          goto LABEL_20;
        }
        goto LABEL_19;
      }
      if ( v32 - v7 >= v9 )
      {
        v11 = v33 + 8 * ((a2 << 9) & 0x3FFFFFFFFFFFFFFLL);
        i = (_QWORD *)v11;
        v13 = (_QWORD *)(v33 + 8 * ((v9 + v7 - 1) >> 6));
        v14 = *(_QWORD *)v11;
        if ( (_QWORD *)v11 == v13 )
        {
          v15 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9);
LABEL_12:
          v12 = (v14 & v15) == 0;
          goto LABEL_20;
        }
        if ( !v14 )
        {
          v11 += 8LL;
          for ( i = (_QWORD *)v11; ; i = (_QWORD *)v11 )
          {
            v14 = *(_QWORD *)v11;
            if ( (_QWORD *)v11 == v13 )
              break;
            if ( v14 )
              goto LABEL_19;
            v11 += 8LL;
          }
          v15 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 - 1);
          goto LABEL_12;
        }
      }
    }
LABEL_19:
    v12 = 0;
LABEL_20:
    v29 = v12;
    if ( !v12 )
      goto LABEL_33;
LABEL_21:
    a3 = 0;
    v16 = (unsigned __int64 *)(v37 + 24);
    v17 = (volatile LONG *)(v37 + 24);
    if ( *(_BYTE *)(a1 + 48) )
    {
      BYTE4(v34) = ExAcquireSpinLockExclusive(v17);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v26 = (char *)KeAbPreAcquire((__int64)v17, 0LL);
      v28 = v26;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
      {
        ExfAcquirePushLockExclusiveEx(v16, v26, (__int64)v16);
        v26 = v28;
      }
      if ( v26 )
        v26[10] = 1;
      BYTE4(v34) = -1;
    }
    LODWORD(v34) = 1;
    *((_QWORD *)&v34 + 1) = a1;
    v28 = *(char **)(a1 + 32);
    if ( v28 == (char *)-1LL )
      break;
    RtlpCSparseBitmapUnlock((int *)&v34);
    RtlpCSparseBitmapWaitOnAddress(a1 + 32, &v28, v18, a1);
    if ( !_bittest64(*(const signed __int64 **)a1, a2) )
      goto LABEL_33;
    v8 = v31;
  }
  *(_QWORD *)(a1 + 32) = a2;
  RtlpCSparseBitmapUnlock((int *)&v34);
  v42 = 1;
  if ( _bittest64(*(const signed __int64 **)a1, a2) )
  {
    if ( v7 >= v32 )
      goto LABEL_48;
    if ( v9 <= 1 )
    {
      if ( v9 == 1 )
      {
        v19 = !_bittest64((const signed __int64 *)(v33 + 8 * (v31 >> 6)), 0);
        goto LABEL_31;
      }
LABEL_48:
      v19 = 0;
      goto LABEL_31;
    }
    if ( v32 - v7 < v9 )
      goto LABEL_48;
    v21 = (unsigned __int64 *)(v33 + 8 * ((a2 << 9) & 0x3FFFFFFFFFFFFFFLL));
    v22 = (unsigned __int64 *)(v33 + 8 * ((v9 + v7 - 1) >> 6));
    v11 = *v21;
    if ( v21 != v22 )
    {
      for ( j = v11 == 0; j; j = v11 == 0 )
      {
        v11 = *++v21;
        if ( v21 == v22 )
        {
          v23 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 - 1);
          goto LABEL_43;
        }
      }
      goto LABEL_48;
    }
    v23 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9);
LABEL_43:
    v19 = (v11 & v23) == 0;
LABEL_31:
    if ( v19 )
    {
      _interlockedbittestandreset64(*(volatile signed __int32 **)a1, a2);
      v36[0] = *v38 + (a2 << 12);
      v35 = 4096LL;
      MmFreePoolMemory(v36, &v35);
    }
  }
LABEL_33:
  if ( v42 )
  {
    *(_QWORD *)(a1 + 32) = -1LL;
    v20 = *(_BYTE *)(a1 + 48);
    _InterlockedOr(v27, 0);
    if ( !v20 )
    {
      if ( *(_QWORD *)(a1 + 40) )
        ExpUnblockPushLock((volatile __int64 *)(a1 + 40), 0LL, 0);
    }
  }
  if ( *(_BYTE *)(*((_QWORD *)&v39 + 1) + 48LL) )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v11) = v39;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    }
    __writecr8((unsigned __int8)v39);
  }
  else
  {
    KeLeaveGuardedRegion();
  }
}
