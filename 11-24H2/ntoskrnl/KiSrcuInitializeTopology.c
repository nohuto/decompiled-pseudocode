/*
 * XREFs of KiSrcuInitializeTopology @ 0x1405BE5C8
 * Callers:
 *     KeSrcuAllocate @ 0x1405BDE00 (KeSrcuAllocate.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     KiSrcuProcessorAddToTopologyTree @ 0x1405BEC3C (KiSrcuProcessorAddToTopologyTree.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 KiSrcuInitializeTopology()
{
  __int64 v0; // rdi
  unsigned __int8 v1; // si
  unsigned __int64 v2; // rbx
  void *Pool2; // r14
  KIRQL v4; // r12
  char *v6; // r8
  __int64 *v7; // r9
  char *v8; // r10
  __int64 v9; // r11
  unsigned int v10; // r13d
  unsigned int v11; // ecx
  __int64 *v12; // rbx
  unsigned int v13; // r15d
  __int64 v14; // rax
  unsigned int v15; // r11d
  __int64 v16; // r9
  unsigned int v17; // eax
  unsigned int v18; // r10d
  __int64 v19; // r8
  signed __int32 v20[8]; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int16 *v21[2]; // [rsp+20h] [rbp-20h] BYREF
  __int16 v22; // [rsp+30h] [rbp-10h]
  int v23; // [rsp+32h] [rbp-Eh]
  __int16 v24; // [rsp+36h] [rbp-Ah]
  unsigned int v25; // [rsp+70h] [rbp+30h] BYREF

  v0 = (unsigned int)KeMaximumProcessors;
  if ( (unsigned int)KeMaximumProcessors <= 0x40 )
  {
    LODWORD(v2) = 0;
    v1 = 1;
  }
  else
  {
    v1 = 2;
    v2 = ((unsigned __int64)(unsigned int)KeMaximumProcessors + 63) >> 6;
  }
  Pool2 = (void *)ExAllocatePool2(
                    0x40uLL,
                    8 * ((unsigned int)KeMaximumProcessors + 2LL * (unsigned int)(v2 + 1)),
                    0x75635253u);
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140F10318);
  if ( !byte_140F10320 )
  {
    if ( !Pool2 )
    {
      KeReleaseSpinLock(&qword_140F10318, v4);
      return 0LL;
    }
    byte_140F10321[0] = v1;
    byte_140F10324 = 1;
    if ( v1 == 1 )
    {
      byte_140F10322 = v0;
    }
    else
    {
      byte_140F10325 = v2;
      byte_140F10322 = v2;
      byte_140F10323 = 64;
    }
    qword_140F10328 = (__int64)Pool2;
    qword_140F10330 = (__int64)Pool2 + 8 * v0;
    Pool2 = 0LL;
    qword_140F10338 = qword_140F10330 + 16;
    if ( v1 > 1u )
    {
      v6 = &byte_140F10325;
      v7 = &qword_140F10338;
      v8 = &byte_140F10322;
      v9 = (unsigned int)v1 - 1;
      do
      {
        v25 = 0;
        v10 = (unsigned __int8)*v8;
        if ( *v6 )
        {
          v11 = 0;
          v12 = (__int64 *)(*v7 + 8);
          v13 = 0;
          do
          {
            v14 = 1LL << (v11 % v10);
            v11 = v13 + 1;
            *v12 = v14;
            v13 = v11;
            v12 += 2;
          }
          while ( v11 < (unsigned __int8)*v6 );
          v25 = v11;
        }
        ++v8;
        ++v7;
        ++v6;
        --v9;
      }
      while ( v9 );
    }
    v25 = 0;
    v15 = (unsigned __int8)byte_140F10321[v1];
    if ( (_DWORD)v0 )
    {
      v16 = 0LL;
      v17 = 0;
      v18 = 0;
      do
      {
        *(_QWORD *)(v16 + qword_140F10328) = 1LL << (v17 % v15);
        v17 = v18 + 1;
        v16 += 8LL;
        v18 = v17;
      }
      while ( v17 < (unsigned int)v0 );
      v25 = v17;
    }
    v21[1] = (unsigned __int16 *)KeActiveProcessors.Bitmap[0];
    v21[0] = (unsigned __int16 *)&KeActiveProcessors;
    v23 = 0;
    v24 = 0;
    v22 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v25, v21) )
      KiSrcuProcessorAddToTopologyTree(KiProcessorBlock[v25], 1LL, v19);
    _InterlockedOr(v20, 0);
    byte_140F10320 = 1;
  }
  KeReleaseSpinLock(&qword_140F10318, v4);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x75635253u);
  return 1LL;
}
