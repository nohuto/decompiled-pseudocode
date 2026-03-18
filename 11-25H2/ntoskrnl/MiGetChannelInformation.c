/*
 * XREFs of MiGetChannelInformation @ 0x140392D28
 * Callers:
 *     MmManagePartitionMemoryInformation @ 0x14093BA7C (MmManagePartitionMemoryInformation.c)
 *     MmGetChannelInformation @ 0x140A56864 (MmGetChannelInformation.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     MiReleaseSpinLockShared @ 0x140323610 (MiReleaseSpinLockShared.c)
 *     MiGetNodeChannelPageCounts @ 0x140392E78 (MiGetNodeChannelPageCounts.c)
 *     MiUnlockDynamicMemoryShared @ 0x140393038 (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x140393098 (MiLockDynamicMemoryShared.c)
 */

__int64 __fastcall MiGetChannelInformation(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int8 v5; // si
  __int64 v9; // rbp
  KIRQL v10; // al
  int v11; // r8d
  unsigned __int8 v12; // dl
  unsigned __int8 v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int8 i; // cl
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF
  __int64 v19; // [rsp+80h] [rbp+18h] BYREF
  __int64 v20; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v9 = *(_QWORD *)(a1 + 16) + 57216LL * a2;
  *a4 = 40LL * (unsigned __int8)MmNumberOfChannels;
  MiLockDynamicMemoryShared(a1, CurrentThread);
  v10 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v9 + 15220));
  v12 = MmNumberOfChannels;
  v13 = v10;
  if ( MmNumberOfChannels )
  {
    v14 = a3 + 4;
    do
    {
      *(_DWORD *)(v14 - 4) = v5;
      if ( (*(_DWORD *)(v9 + 15184) & 1) != 0 )
      {
        for ( i = 0; i < v12; ++i )
        {
          if ( *(_BYTE *)(i + v9 + 15233) == v5 )
          {
            *(_DWORD *)v14 = i;
            break;
          }
        }
      }
      else
      {
        *(_DWORD *)v14 = -1;
      }
      LOBYTE(v11) = v5;
      *(_QWORD *)(v14 + 4) = *(_QWORD *)(v9 + 8LL * v5 + 14960);
      MiGetNodeChannelPageCounts(a1, a2, v11, (unsigned int)&v18, (__int64)&v19, (__int64)&v20);
      *(_QWORD *)(v14 + 12) = v18;
      *(_QWORD *)(v14 + 20) = v19;
      v15 = v20;
      *(_QWORD *)(v14 + 28) = v20;
      if ( v15 == -1 )
        *(_QWORD *)(v14 + 28) = -1LL;
      v12 = MmNumberOfChannels;
      ++v5;
      v14 += 40LL;
    }
    while ( v5 < (unsigned __int8)MmNumberOfChannels );
  }
  MiReleaseSpinLockShared((volatile signed __int32 *)(v9 + 15220), v13);
  return MiUnlockDynamicMemoryShared(a1, CurrentThread);
}
