/*
 * XREFs of MiQuerySpecialPurposeMemoryInformation @ 0x1407FE898
 * Callers:
 *     NtManagePartition @ 0x140933FF0 (NtManagePartition.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiQuerySpecialPurposeMemoryInformation(__int64 a1, volatile void *a2, unsigned int a3, char a4)
{
  __int64 v4; // r15
  _DWORD *Pool; // rsi
  unsigned int v6; // r14d
  struct _KTHREAD *CurrentThread; // r13
  unsigned int v8; // edi
  int v9; // eax
  signed __int64 *v10; // rdi
  _QWORD *v11; // r15
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  _QWORD *v14; // r15
  _QWORD *v15; // rcx
  unsigned int v16; // r13d
  _QWORD *v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rdx
  _DWORD *v20; // rcx
  char *v21; // r8
  _QWORD *i; // rdx
  unsigned int v23; // r10d
  _QWORD *v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  bool v27; // zf
  unsigned int v29; // [rsp+30h] [rbp-58h]
  struct _KTHREAD *v30; // [rsp+40h] [rbp-48h]
  unsigned __int64 v31; // [rsp+48h] [rbp-40h]

  v4 = a1;
  Pool = 0LL;
  v6 = 0;
  CurrentThread = KeGetCurrentThread();
  v30 = CurrentThread;
  if ( a3 >= 4 )
  {
    if ( a4 )
      ProbeForWrite(a2, a3, 8u);
    --CurrentThread->SpecialApcDisable;
    v10 = (signed __int64 *)(v4 + 17672);
    v11 = KeAbPreAcquire(v4 + 17672, 0LL);
    if ( _InterlockedCompareExchange64(v10, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v10, 0, v11, (__int64)v10);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
    v12 = (unsigned int)(dword_140E2ED80 + 32);
    v31 = v12;
    v13 = v12;
    v29 = dword_140E2ED80 + 32;
    v14 = (_QWORD *)(a1 + 17624);
    v15 = *(_QWORD **)(a1 + 17624);
    if ( v15 != (_QWORD *)(a1 + 17624) )
    {
      v16 = v12;
      do
      {
        v13 += v12;
        v16 += v12;
        v17 = v15 + 3;
        v18 = 4LL;
        do
        {
          v19 = v13 + 16;
          if ( *v17 == -1LL )
            v19 = v13;
          ++v17;
          --v18;
          v13 = v19;
        }
        while ( v18 );
        v15 = (_QWORD *)*v15;
      }
      while ( v15 != v14 );
      v29 = v16;
      v6 = 0;
      CurrentThread = v30;
    }
    if ( v13 <= 0xFFFFFFFF )
    {
      Pool = (_DWORD *)MiAllocatePool(0x100uLL, (unsigned int)v13, 1901291853);
      if ( Pool )
      {
        if ( v13 <= a3 )
        {
          v20 = Pool;
          v21 = (char *)Pool + v29;
          for ( i = (_QWORD *)*v14; i != v14; i = (_QWORD *)*i )
          {
            *v20 = v31;
            v20[1] = 32;
            v20[3] = (_DWORD)v21 - (_DWORD)v20;
            *((_QWORD *)v20 + 3) = i[2];
            if ( i[9] )
              v20[2] |= 1u;
            v23 = 0;
            v24 = i + 3;
            do
            {
              if ( *v24 != -1LL )
              {
                *(_DWORD *)v21 = v23;
                *((_QWORD *)v21 + 1) = *v24;
                ++v20[4];
                v21 += 16;
              }
              ++v23;
              ++v24;
            }
            while ( v23 < 4 );
            v20 = (_DWORD *)((char *)v20 + v31);
          }
          v6 = v13;
          v8 = 0;
        }
        else
        {
          *Pool = v13;
          v8 = -1073741789;
          v6 = 4;
        }
      }
      else
      {
        v8 = -1073741670;
      }
      v9 = 1;
      v4 = a1;
    }
    else
    {
      v8 = -1073741675;
      v9 = 1;
      v4 = a1;
    }
  }
  else
  {
    v8 = -1073741820;
    v9 = 0;
  }
  if ( v9 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 17672), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v4 + 17672));
    KeAbPostRelease(v4 + 17672);
    v27 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v27 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v26, v25);
  }
  if ( v6 )
    memmove((void *)a2, Pool, v6);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  return v8;
}
