/*
 * XREFs of MiInitializeVadBitMap @ 0x140A35738
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140904AC8 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1402A3CEC (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403D824C (LOCK_ADDRESS_SPACE.c)
 *     MiExpandVadBitMap @ 0x140900244 (MiExpandVadBitMap.c)
 */

__int64 MiInitializeVadBitMap()
{
  unsigned int v0; // edi
  __int64 v1; // rsi
  volatile _KAFFINITY_EX *ActiveProcessors; // rbp
  __int64 *i; // rbx
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v5; // rcx
  __int64 Process; // r12
  __int64 v7; // rcx
  int v8; // r13d

  v0 = 0;
  v1 = 0LL;
  ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
  if ( ActiveProcessors[3].StaticBitmap[23] )
  {
    for ( i = (__int64 *)&ActiveProcessors[2].StaticBitmap[31]; ; i += 9 )
    {
      CurrentThread = KeGetCurrentThread();
      v5 = (unsigned __int64)i[6] >> 15 << 12;
      Process = (__int64)CurrentThread->ApcState.Process;
      *i = i[6] & 0x7FFF;
      v7 = qword_140E2F048 + v5;
      *(i - 2) = 0LL;
      *(i - 1) = v7;
      LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
      v8 = MiExpandVadBitMap((unsigned __int64 *)i - 2, 1uLL, 0LL, 0LL);
      if ( !v8 )
        *(i - 2) = 0LL;
      i[2] = *i;
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
      if ( !v8 )
        break;
      if ( ++v1 >= ActiveProcessors[3].StaticBitmap[23] )
        return v0;
    }
    return (unsigned int)-1073741801;
  }
  return v0;
}
