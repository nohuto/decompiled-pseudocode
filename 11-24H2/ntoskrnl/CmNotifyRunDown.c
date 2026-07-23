/*
 * XREFs of CmNotifyRunDown @ 0x1408FEA30
 * Callers:
 *     PspExitThread @ 0x1408FDFF0 (PspExitThread.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     DbgPrint @ 0x140274290 (DbgPrint.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeRemoveQueueApc @ 0x14032CCE0 (KeRemoveQueueApc.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     CmpFreeSubordinatePost @ 0x14086D3B4 (CmpFreeSubordinatePost.c)
 *     CmpFreePostBlock @ 0x14086EA70 (CmpFreePostBlock.c)
 *     CmpCancelSubordinatePost @ 0x140A2BA34 (CmpCancelSubordinatePost.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

_KAFFINITY_EX *__fastcall CmNotifyRunDown(__int64 a1)
{
  _KAFFINITY_EX *v1; // rsi
  _KAFFINITY_EX *result; // rax
  __int64 v3; // rcx
  int v4; // edx
  unsigned __int8 CurrentIrql; // r15
  __int64 v6; // rcx
  _KAFFINITY_EX **v7; // rax
  _KAFFINITY_EX *v8; // rcx
  _KAFFINITY_EX **v9; // rdi
  int v10; // ecx
  _KAFFINITY_EX *v11; // rdx
  _KPROCESS *Process; // rax
  bool v13; // cl
  bool v14; // zf
  unsigned __int64 v15; // rcx
  _KAFFINITY_EX *v16; // rdx
  __int16 v17; // ax
  struct _KEVENT *v19; // rcx
  _KAFFINITY_EX *v20; // rcx
  _KAFFINITY_EX ***v21; // rax
  _KAFFINITY_EX **v22; // rcx
  _KAFFINITY_EX **v23; // rcx
  _KAFFINITY_EX *v24; // rdx
  _KAFFINITY_EX ***v25; // rax
  _KAFFINITY_EX *v26; // rcx
  _KAFFINITY_EX ***v27; // rax
  _KAFFINITY_EX **v28; // rcx
  __int128 v29; // [rsp+30h] [rbp-48h] BYREF
  __int64 v30; // [rsp+40h] [rbp-38h]

  v29 = 0LL;
  v30 = 0LL;
  v1 = (_KAFFINITY_EX *)(a1 + 1240);
  result = *(_KAFFINITY_EX **)(a1 + 1240);
  if ( result && result != v1 )
  {
    CmpInitializeThreadInfo((_KAFFINITY_EX *)&v29);
    CmpLockRegistry(v3);
    ExAcquireFastMutexUnsafe(&CmpPostLock);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v4) = 1;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v4);
    }
    if ( *(_QWORD *)&v1->Count )
    {
      while ( 1 )
      {
        v7 = *(_KAFFINITY_EX ***)&v1->Count;
        if ( *(_KAFFINITY_EX **)&v1->Count == v1 )
          break;
        v8 = *v7;
        if ( v7[1] != v1 || (_KAFFINITY_EX **)v8->Bitmap[0] != v7 )
LABEL_39:
          __fastfail(3u);
        *(_QWORD *)&v1->Count = v8;
        v8->Bitmap[0] = (unsigned __int64)v1;
        v9 = v7 - 2;
        v10 = *((_DWORD *)v7 + 10);
        if ( (v10 & 0x10000) != 0 )
        {
          if ( (_WORD)v10 == 2 )
          {
            v11 = v9[8];
            if ( (unsigned __int64 *)v11->StaticBitmap[12] == &v11->StaticBitmap[12] )
            {
              DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v11);
              if ( (_BYTE)KdDebuggerEnabled )
              {
                if ( !(_BYTE)KdDebuggerNotPresent )
                  __debugbreak();
              }
            }
            Process = KeGetCurrentThread()->ApcState.Process;
            v13 = 0;
            if ( Process[1].ReadyTime )
            {
              v17 = WORD2(Process[3].PerProcessorCycleTimes);
              if ( v17 == 332 || v17 == 452 )
                v13 = 1;
            }
            *(_DWORD *)v9[8]->StaticBitmap[12] = 267;
            v14 = !v13;
            v15 = v9[8]->StaticBitmap[12];
            if ( v14 )
              *(_QWORD *)(v15 + 8) = 0LL;
            else
              *(_DWORD *)(v15 + 4) = 0;
            v16 = v9[8];
            if ( (unsigned __int64 *)v16->StaticBitmap[12] == &v16->StaticBitmap[12] )
            {
              DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v16);
              if ( (_BYTE)KdDebuggerEnabled )
              {
                if ( !(_BYTE)KdDebuggerNotPresent )
                  __debugbreak();
              }
            }
            v19 = (struct _KEVENT *)v9[8]->Bitmap[0];
            if ( v19 )
            {
              KeSetEvent(v19, 0, 0);
              ObfDereferenceObject((PVOID)v9[8]->Bitmap[0]);
            }
            if ( !KeRemoveQueueApc((__int64)&v9[8]->StaticBitmap[1]) )
            {
              v20 = *v9;
              v21 = (_KAFFINITY_EX ***)v9[1];
              if ( (_KAFFINITY_EX **)(*v9)->Bitmap[0] != v9 || *v21 != v9 )
                goto LABEL_39;
              *v21 = (_KAFFINITY_EX **)v20;
              v20->Bitmap[0] = (unsigned __int64)v21;
              v22 = (_KAFFINITY_EX **)v9[4];
              if ( v22 != v9 + 4 )
              {
                v23 = v22 - 4;
                v24 = *v23;
                v25 = (_KAFFINITY_EX ***)v23[1];
                if ( (_KAFFINITY_EX **)(*v23)->Bitmap[0] != v23 || *v25 != v23 )
                  goto LABEL_39;
                *v25 = (_KAFFINITY_EX **)v24;
                v24->Bitmap[0] = (unsigned __int64)v25;
              }
            }
          }
          else
          {
            v26 = *v9;
            v27 = (_KAFFINITY_EX ***)v9[1];
            if ( (_KAFFINITY_EX **)(*v9)->Bitmap[0] != v9 || *v27 != v9 )
              goto LABEL_39;
            *v27 = (_KAFFINITY_EX **)v26;
            v26->Bitmap[0] = (unsigned __int64)v27;
            CmpCancelSubordinatePost(v9, 0LL);
          }
          CmpFreeSubordinatePost((__int64)v9);
          CmpFreePostBlock(v9);
        }
        else
        {
          v28 = (_KAFFINITY_EX **)v1->Bitmap[0];
          if ( *v28 != v1 )
            goto LABEL_39;
          *v7 = v1;
          v7[1] = (_KAFFINITY_EX *)v28;
          *v28 = (_KAFFINITY_EX *)v7;
          v1->Bitmap[0] = (unsigned __int64)v7;
        }
      }
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    ExReleaseFastMutexUnsafe(&CmpPostLock);
    CmpUnlockRegistry(v6);
    return CmpCleanupThreadInfo((_KAFFINITY_EX **)&v29);
  }
  return result;
}
