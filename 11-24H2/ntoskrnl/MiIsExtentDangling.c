/*
 * XREFs of MiIsExtentDangling @ 0x1407F09E0
 * Callers:
 *     FsRtlIsExtentDangling @ 0x14070AAD0 (FsRtlIsExtentDangling.c)
 *     MiAddPhysicalMemory @ 0x1407E8C3C (MiAddPhysicalMemory.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiIsPfn @ 0x14044F7D0 (MiIsPfn.c)
 */

unsigned __int64 __fastcall MiIsExtentDangling(unsigned __int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  const signed __int64 *v8; // rsi
  __int64 v9; // rsi
  struct _KTHREAD *CurrentThread; // rax
  char *v11; // rdi
  _QWORD *v12; // r9
  _QWORD *v13; // rdx
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rcx
  _QWORD *v17; // r8
  __int64 i; // rcx
  struct _KTHREAD *v19; // rbx
  bool v20; // zf

  v4 = a1 + a2;
  v5 = a2;
  v6 = a1;
  v7 = a1;
  v8 = (const signed __int64 *)(48 * a1 - 0x21FFFFFFFFD8LL);
  while ( v7 < v4 )
  {
    if ( (unsigned int)MiIsPfn(v7) && _bittest64(v8, 0x35u) )
    {
      v4 = v7;
      v5 = v7 - v6;
      break;
    }
    ++v7;
    v8 += 6;
  }
  v9 = 2LL;
  if ( (a3 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v11 = (char *)KeAbPreAcquire((__int64)&qword_140E2D8D8, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E2D8D8, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E2D8D8, 0, v11, (__int64)&qword_140E2D8D8);
    if ( v11 )
      v11[10] = 1;
    v12 = &unk_140E2D8C8;
    do
    {
      v13 = (_QWORD *)*v12;
      v14 = v6;
      if ( *v12 )
      {
        do
        {
          v15 = v13[4];
          if ( v6 + v5 > v15 )
          {
            if ( v6 < v13[5] + v15 )
              break;
            v13 = (_QWORD *)v13[1];
          }
          else
          {
            v13 = (_QWORD *)*v13;
          }
        }
        while ( v13 );
        if ( v13 )
        {
          while ( 1 )
          {
            v16 = (_QWORD *)*v13;
            v17 = v13;
            if ( *v13 )
            {
              for ( ; v16[1]; v16 = (_QWORD *)v16[1] )
                ;
            }
            else
            {
              for ( i = v13[2]; ; i = v16[2] )
              {
                v16 = (_QWORD *)(i & 0xFFFFFFFFFFFFFFFCuLL);
                if ( !v16 || (_QWORD *)v16[1] == v17 )
                  break;
                v17 = v16;
              }
            }
            if ( !v16 || v16[4] + v16[5] <= v6 )
              break;
            v13 = v16;
          }
          v6 = v13[4];
          if ( v14 >= v6 )
            v6 = v14;
          if ( v4 > v6 )
            v4 = v6;
        }
      }
      ++v12;
      --v9;
    }
    while ( v9 );
    v19 = KeGetCurrentThread();
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E2D8D8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140E2D8D8);
    KeAbPostRelease((ULONG_PTR)&qword_140E2D8D8);
    v20 = v19->SpecialApcDisable++ == -1;
    if ( v20 && ($727077A9B6E167EAE1398C74674DC5A5 *)v19->ApcState.ApcListHead[0].Flink != &v19->152 )
      KiCheckForKernelApcDelivery();
  }
  return v4;
}
