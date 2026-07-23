/*
 * XREFs of MiGetChannelInformation @ 0x140264320
 * Callers:
 *     MmManagePartitionMemoryInformation @ 0x1408F7014 (MmManagePartitionMemoryInformation.c)
 *     MmGetChannelInformation @ 0x140A519B8 (MmGetChannelInformation.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     MiGetNodeChannelPageCounts @ 0x140264470 (MiGetNodeChannelPageCounts.c)
 *     MiUnlockDynamicMemoryShared @ 0x140264630 (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x140264694 (MiLockDynamicMemoryShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MiGetChannelInformation(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int8 v5; // si
  __int64 v9; // rbp
  KIRQL v10; // al
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 v13; // dl
  unsigned __int8 v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned __int8 i; // cl
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+80h] [rbp+18h] BYREF
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v9 = *(_QWORD *)(a1 + 16) + 57216LL * a2;
  *a4 = 40LL * (unsigned __int8)MmNumberOfChannels;
  MiLockDynamicMemoryShared(a1, CurrentThread);
  v10 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v9 + 15220));
  v13 = MmNumberOfChannels;
  v14 = v10;
  if ( MmNumberOfChannels )
  {
    v15 = a3 + 4;
    do
    {
      *(_DWORD *)(v15 - 4) = v5;
      if ( (*(_DWORD *)(v9 + 15184) & 1) != 0 )
      {
        for ( i = 0; i < v13; ++i )
        {
          if ( *(_BYTE *)(i + v9 + 15233) == v5 )
          {
            *(_DWORD *)v15 = i;
            break;
          }
        }
      }
      else
      {
        *(_DWORD *)v15 = -1;
      }
      LOBYTE(v11) = v5;
      *(_QWORD *)(v15 + 4) = *(_QWORD *)(v9 + 8LL * v5 + 14960);
      MiGetNodeChannelPageCounts(a1, a2, v11, (unsigned int)&v19, (__int64)&v20, (__int64)&v21);
      *(_QWORD *)(v15 + 12) = v19;
      *(_QWORD *)(v15 + 20) = v20;
      v16 = v21;
      *(_QWORD *)(v15 + 28) = v21;
      if ( v16 == -1 )
        *(_QWORD *)(v15 + 28) = -1LL;
      v13 = MmNumberOfChannels;
      ++v5;
      v15 += 40LL;
    }
    while ( v5 < (unsigned __int8)MmNumberOfChannels );
  }
  MiReleaseSpinLockShared((volatile signed __int32 *)(v9 + 15220), v14, v11, v12);
  return MiUnlockDynamicMemoryShared(a1, CurrentThread);
}
