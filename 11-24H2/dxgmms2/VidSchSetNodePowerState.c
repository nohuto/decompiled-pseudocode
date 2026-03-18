/*
 * XREFs of VidSchSetNodePowerState @ 0x140048AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x1400122E0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     VidSchiUpdateContextStatus @ 0x14001AC80 (VidSchiUpdateContextStatus.c)
 */

void __fastcall VidSchSetNodePowerState(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  int v5; // edx
  __int64 *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rsi
  char v9; // r14
  _QWORD *v10; // rdi
  char i; // bp
  _QWORD *v12; // rcx
  __int64 **v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 *v16; // rax
  __int64 *v17; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+38h] [rbp-30h] BYREF
  __int64 v20; // [rsp+40h] [rbp-28h] BYREF
  __int64 *v21; // [rsp+48h] [rbp-20h]
  char v22; // [rsp+50h] [rbp-18h]
  int v23; // [rsp+54h] [rbp-14h]

  v5 = *(unsigned __int8 *)(a2 + a1 + 88);
  v6 = *(__int64 **)(a1 + 688);
  v7 = (unsigned int)(a3 + v5);
  if ( (unsigned int)v7 < *(_DWORD *)(a1 + 760) )
    v6 += v7;
  v8 = *v6;
  if ( a4 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 176)
      || *(_BYTE *)(a1 + 54)
      || (unsigned int)KeIsExecutingDpc(v6, v7, a3) )
    {
      v9 = 1;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1984), &LockHandle);
    }
    else
    {
      v9 = 0;
    }
    *(_BYTE *)(v8 + 16524) = 1;
    v10 = (_QWORD *)(v8 + 2728);
    for ( i = 0; ; i = 1 )
    {
      v12 = (_QWORD *)*v10;
      if ( (_QWORD *)*v10 == v10 )
        break;
      *((_DWORD *)v12 + 44) &= ~0x80u;
      VidSchiUpdateContextStatus((__int64)(v12 - 1), 5, 13243LL);
    }
    v13 = (__int64 **)(v8 + 2760);
    v19 = a1;
    v22 = 0;
    v21 = &v20;
    v20 = (__int64)&v20;
    v14 = *(__int64 **)(v8 + 2760);
    v23 = 2;
    v15 = *v14;
    if ( v14[1] != v8 + 2760 )
LABEL_19:
      __fastfail(3u);
    while ( 1 )
    {
      if ( *(__int64 **)(v15 + 8) != v14 )
        goto LABEL_19;
      *v13 = (__int64 *)v15;
      *(_QWORD *)(v15 + 8) = v13;
      if ( v14 == (__int64 *)v13 )
        break;
      *v14 = 0LL;
      v14[1] = 0LL;
      v16 = v14 - 2;
      if ( !*v16 )
      {
        v17 = v21;
        if ( (__int64 *)*v21 != &v20 )
          goto LABEL_19;
        *v16 = (__int64)&v20;
        v16[1] = (__int64)v17;
        *v17 = (__int64)v16;
        v21 = v16;
        v22 = 0;
      }
      v14 = *v13;
      v15 = **v13;
      if ( (__int64 **)(*v13)[1] != v13 )
        goto LABEL_19;
    }
    if ( v23 && !v22 )
      HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v19, 0LL);
    if ( v9 )
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( i )
    {
      *(_QWORD *)(a1 + 1480) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(a1 + 1448), 0, 0);
    }
  }
  else
  {
    *(_BYTE *)(v8 + 16524) = 0;
  }
}
