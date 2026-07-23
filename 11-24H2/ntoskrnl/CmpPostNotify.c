/*
 * XREFs of CmpPostNotify @ 0x14086D048
 * Callers:
 *     CmpDeleteKeyObject @ 0x140843620 (CmpDeleteKeyObject.c)
 *     CmpFlushNotify @ 0x14086C98C (CmpFlushNotify.c)
 *     CmpPerformUnloadKey @ 0x140963D3C (CmpPerformUnloadKey.c)
 *     CmpNotifyChangeKey @ 0x140AE6344 (CmpNotifyChangeKey.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     CmpFreeSubordinatePost @ 0x14086D3B4 (CmpFreeSubordinatePost.c)
 *     CmpAddToDelayedDeref @ 0x14086DAAC (CmpAddToDelayedDeref.c)
 *     CmpSignalDeferredPosts @ 0x14086E9C0 (CmpSignalDeferredPosts.c)
 *     CmpFreePostBlock @ 0x14086EA70 (CmpFreePostBlock.c)
 *     CmpDelayedDerefKeys @ 0x140A10DA8 (CmpDelayedDerefKeys.c)
 */

void __fastcall CmpPostNotify(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5, __int128 *a6, __int128 *a7)
{
  __int128 *v8; // rdi
  __int128 *v9; // r15
  int v10; // eax
  _QWORD *v11; // r14
  _DWORD *v12; // rbx
  __int64 v13; // rax
  int v14; // eax
  _DWORD *v15; // rcx
  __int128 **v16; // rax
  __int128 **v17; // rcx
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  unsigned __int8 CurrentIrql; // si
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  int v26; // eax
  __int128 **v27; // rbx
  __int128 *v28; // rcx
  __int128 ***v29; // rax
  __int128 **v30; // rax
  _DWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int128 v34; // [rsp+20h] [rbp-20h] BYREF
  __int128 v35; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v36; // [rsp+78h] [rbp+38h]

  v36 = a4;
  v34 = 0LL;
  v35 = 0LL;
  if ( !a6 )
  {
    *((_QWORD *)&v34 + 1) = &v34;
    *(_QWORD *)&v34 = &v34;
  }
  v8 = &v34;
  if ( a6 )
    v8 = a6;
  if ( !a7 )
  {
    *((_QWORD *)&v35 + 1) = &v35;
    *(_QWORD *)&v35 = &v35;
  }
  v9 = &v35;
  if ( a7 )
    v9 = a7;
  if ( !a5 )
  {
    ExAcquireFastMutexUnsafe(&CmpPostLock);
    a4 = v36;
  }
  v10 = *(_DWORD *)(a1 + 48);
  v11 = (_QWORD *)(a1 + 16);
  if ( (_QWORD *)*v11 == v11 )
  {
    *(_DWORD *)(a1 + 48) = v10 | 0x80000000;
    if ( !a5 )
      ExReleaseFastMutexUnsafe(&CmpPostLock);
    return;
  }
  *(_DWORD *)(a1 + 48) = v10 & 0x7FFFFFFF;
  while ( 1 )
  {
    v12 = (_DWORD *)*v11;
    if ( (_QWORD *)*v11 == v11 )
      break;
    if ( *((_QWORD **)v12 + 1) != v11 )
      goto LABEL_25;
    v13 = *(_QWORD *)v12;
    if ( *(_DWORD **)(*(_QWORD *)v12 + 8LL) != v12 )
      goto LABEL_25;
    *v11 = v13;
    *(_QWORD *)(v13 + 8) = v11;
    if ( a4 != 267 || (v12[14] & 0x10000) != 0 )
    {
      v14 = v12[14];
      if ( (v14 & 0x10000) == 0 )
      {
        v31 = v12;
        do
        {
          v32 = *((_QWORD *)v31 + 4);
          *(_DWORD *)(v32 + 24) &= ~0x10000u;
          v31 = (_DWORD *)(v32 - 32);
        }
        while ( v31 != v12 );
        v14 = v12[14] | 0x10000;
        v12[14] = v14;
      }
      if ( (unsigned __int16)v14 != 1 )
      {
        v15 = (_DWORD *)*((_QWORD *)v12 + 4);
        if ( v15 != v12 + 8 )
        {
          v18 = v15 - 8;
          v19 = *v18;
          if ( *(_QWORD **)(*v18 + 8LL) != v18 )
            goto LABEL_25;
          v20 = (_QWORD *)v18[1];
          if ( (_QWORD *)*v20 != v18 )
            goto LABEL_25;
          *v20 = v19;
          *(_QWORD *)(v19 + 8) = v20;
          if ( v8 )
            CmpAddToDelayedDeref(v18, v8);
        }
        v16 = (__int128 **)*((_QWORD *)v12 + 6);
        if ( v16 )
        {
          v17 = (__int128 **)*((_QWORD *)v8 + 1);
          if ( *v17 != v8 )
            goto LABEL_25;
          *v16 = v8;
          v16[1] = (__int128 *)v17;
          *v17 = (__int128 *)v16;
          *((_QWORD *)v8 + 1) = v16;
          *((_QWORD *)v12 + 6) = 0LL;
        }
      }
      v26 = v12[14];
      if ( (unsigned __int16)v26 == 1 )
      {
        v33 = *((_QWORD *)v12 + 8);
        *(_QWORD *)v12 = 0LL;
        *(_DWORD *)(v33 + 24) = a4;
        KeSetEvent(*((PRKEVENT *)v12 + 8), 0, 0);
        goto LABEL_56;
      }
      if ( (unsigned __int16)v26 == 2 )
      {
        KeInsertQueueApc(*((_QWORD *)v12 + 8) + 16LL, a4, (__int64)v12, 0);
        goto LABEL_56;
      }
      if ( (unsigned int)(unsigned __int16)v26 - 3 <= 1 )
      {
        CmpFreeSubordinatePost(v12);
        v27 = (__int128 **)(v12 + 4);
        v28 = *v27;
        if ( *((__int128 ***)*v27 + 1) != v27 )
          goto LABEL_25;
        v29 = (__int128 ***)v27[1];
        if ( *v29 != v27 )
          goto LABEL_25;
        *v29 = (__int128 **)v28;
        *((_QWORD *)v28 + 1) = v29;
        v30 = (__int128 **)*((_QWORD *)v9 + 1);
        if ( *v30 != v9 )
          goto LABEL_25;
        *v27 = v9;
        v27[1] = (__int128 *)v30;
        *v30 = (__int128 *)v27;
        *((_QWORD *)v9 + 1) = v27;
LABEL_56:
        a4 = v36;
      }
    }
    else
    {
      v21 = *((_QWORD *)v12 + 4);
      if ( *(_DWORD **)(v21 + 8) != v12 + 8 )
        goto LABEL_25;
      v22 = (_QWORD *)*((_QWORD *)v12 + 5);
      if ( (_DWORD *)*v22 != v12 + 8 )
        goto LABEL_25;
      *v22 = v21;
      *(_QWORD *)(v21 + 8) = v22;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v21) = 1;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v21);
      }
      v24 = *((_QWORD *)v12 + 2);
      if ( *(_DWORD **)(v24 + 8) != v12 + 4 || (v25 = (_QWORD *)*((_QWORD *)v12 + 3), (_DWORD *)*v25 != v12 + 4) )
LABEL_25:
        __fastfail(3u);
      *v25 = v24;
      *(_QWORD *)(v24 + 8) = v25;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      a4 = v36;
      if ( v12[14] != 1 )
      {
        CmpAddToDelayedDeref(v12, v8);
        CmpFreePostBlock(v12);
        goto LABEL_56;
      }
    }
  }
  if ( !a5 )
    ExReleaseFastMutexUnsafe(&CmpPostLock);
  if ( !a6 )
    CmpDelayedDerefKeys(v8);
  if ( !a7 )
    CmpSignalDeferredPosts(v9);
}
