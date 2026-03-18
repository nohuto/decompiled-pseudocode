/*
 * XREFs of MiReturnLockedVadOrNextVa @ 0x1402A77E4
 * Callers:
 *     MmQueryVirtualMemory @ 0x1409D0670 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiUnlockVadShared @ 0x1402A6620 (MiUnlockVadShared.c)
 *     MiWaitForVadDeletion @ 0x1402A668C (MiWaitForVadDeletion.c)
 *     MiLockVad @ 0x1402A6CB4 (MiLockVad.c)
 *     MiReferenceVad @ 0x1402A7A40 (MiReferenceVad.c)
 *     MiLockVadShared @ 0x1402A7C94 (MiLockVadShared.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     MiGetNextVad @ 0x1402A96D8 (MiGetNextVad.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140320840 (MiUnlockAndDereferenceVadShared.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall MiReturnLockedVadOrNextVa(unsigned __int64 a1, _QWORD *a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // r15
  char v8; // al
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rdi
  unsigned __int64 v12; // rbp
  __int64 v13; // r9
  _QWORD *v14; // rax
  char v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  bool v21; // zf
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 v36; // rbx
  __int64 NextVad; // rax

  *a3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
LABEL_2:
  --CurrentThread->SpecialApcDisable;
  v8 = MiLockVadTree(0LL);
  LOBYTE(v10) = v8;
  if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    LOBYTE(v9) = v8;
    MiUnlockVadTree(0LL, v9);
    v21 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v21 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v33, v32, v34, v35);
    *a2 = 0LL;
    return 3221225738LL;
  }
  else
  {
    v11 = *(_QWORD **)&Process[3].Header.Lock;
    if ( !v11 )
      goto LABEL_19;
    v12 = a1 >> 12;
    while ( 1 )
    {
      v13 = *((unsigned int *)v11 + 6);
      v9 = v13 | ((unsigned __int64)*((unsigned __int8 *)v11 + 32) << 32);
      if ( v12 >= v9 )
      {
        if ( v12 <= (*((unsigned int *)v11 + 7) | ((unsigned __int64)*((unsigned __int8 *)v11 + 33) << 32)) )
        {
          MiReferenceVad(v11);
          LOBYTE(v16) = v15;
          MiUnlockVadTree(0LL, v16);
          MiLockVadShared(CurrentThread, v11);
          if ( (v11[6] & 4) != 0 )
          {
            MiUnlockVadShared((__int64)CurrentThread, (__int64)v11);
            MiLockVad((__int64)CurrentThread, (__int64)v11);
            MiWaitForVadDeletion((__int64)v11);
            MiUnlockAndDereferenceVad(v11);
            v21 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v21
              && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery(v29, v28, v30, v31);
            }
          }
          else
          {
            v21 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v21
              && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery(v18, v17, v19, v20);
            }
            if ( v12 >= (*((unsigned int *)v11 + 6) | ((unsigned __int64)*((unsigned __int8 *)v11 + 32) << 32))
              && v12 <= (*((unsigned int *)v11 + 7) | ((unsigned __int64)*((unsigned __int8 *)v11 + 33) << 32)) )
            {
              *a2 = v11;
              return 0LL;
            }
            MiUnlockAndDereferenceVadShared(v11);
          }
          goto LABEL_2;
        }
        v14 = (_QWORD *)v11[1];
      }
      else
      {
        v14 = (_QWORD *)*v11;
      }
      if ( !v14 )
        break;
      v11 = v14;
    }
    if ( v9 >= v12 )
    {
      v36 = v13 | ((unsigned __int64)*((unsigned __int8 *)v11 + 32) << 32);
LABEL_34:
      v23 = v36 << 12;
      goto LABEL_20;
    }
    NextVad = MiGetNextVad(v11, v9, v10);
    if ( NextVad )
    {
      v36 = *(unsigned int *)(NextVad + 24) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 32) << 32);
      goto LABEL_34;
    }
LABEL_19:
    v23 = 0x7FFFFFFF0000LL;
LABEL_20:
    LOBYTE(v9) = v10;
    MiUnlockVadTree(0LL, v9);
    v21 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v21 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v25, v24, v26, v27);
    *a3 = v23;
    *a2 = 0LL;
    return 0LL;
  }
}
