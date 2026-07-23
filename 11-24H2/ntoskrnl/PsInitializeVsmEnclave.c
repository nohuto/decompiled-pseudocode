/*
 * XREFs of PsInitializeVsmEnclave @ 0x14077B1DC
 * Callers:
 *     MiInitializeVsmEnclave @ 0x1407F7EF0 (MiInitializeVsmEnclave.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     VslInitializeEnclave @ 0x14070D664 (VslInitializeEnclave.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsInitializeVsmEnclave(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v6; // r15
  _QWORD *Pool2; // r14
  char *v11; // rax
  char *v12; // rdi
  int v13; // ecx
  int v14; // edi
  __int64 v15; // rbp
  _QWORD *v16; // rcx
  _QWORD *v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // rcx

  CurrentThread = KeGetCurrentThread();
  v6 = (unsigned __int64 *)(a1 + 48);
  --CurrentThread->KernelApcDisable;
  Pool2 = 0LL;
  v11 = (char *)KeAbPreAcquire(a1 + 48, 0LL);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v11, (__int64)v6);
  if ( v12 )
    v12[10] = 1;
  v13 = *(_DWORD *)(a1 + 44);
  if ( v13 )
  {
    if ( v13 == 1 )
      v14 = -1073740528;
    else
      v14 = -1073740526;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 76) )
    {
      LODWORD(v15) = 0;
    }
    else
    {
      if ( a3 != 8 || *(_DWORD *)a2 != 8 )
      {
        v14 = -1073741820;
        goto LABEL_23;
      }
      v15 = *(unsigned int *)(a2 + 4);
      Pool2 = (_QWORD *)ExAllocatePool2(0x101uLL, 40 * v15, 0x74457350u);
      if ( !Pool2 )
      {
        v14 = -1073741670;
        goto LABEL_23;
      }
    }
    v14 = VslInitializeEnclave(*(_QWORD *)(a1 + 24), a1 + 80, (struct _MDL *)a2, a3, a4, a5, (_DWORD *)(a1 + 40));
    if ( v14 >= 0 )
    {
      if ( !*(_BYTE *)(a1 + 76) )
      {
        *(_DWORD *)(a1 + 72) = v15;
        *Pool2 = 0LL;
        if ( (unsigned int)v15 > 1 )
        {
          v16 = Pool2 + 5;
          v17 = Pool2;
          v18 = (unsigned int)(v15 - 1);
          do
          {
            *v16 = v17;
            v17 += 5;
            v16 += 5;
            --v18;
          }
          while ( v18 );
        }
        *(_QWORD *)(a1 + 120) = Pool2;
        v19 = &Pool2[5 * (unsigned int)(v15 - 1)];
        Pool2 = 0LL;
        *(_QWORD *)(a1 + 128) = v19;
      }
      v14 = 0;
      *(_QWORD *)(a1 + 64) = a1 + 56;
      *(_QWORD *)(a1 + 56) = a1 + 56;
      *(_DWORD *)(a1 + 44) = 1;
    }
  }
LABEL_23:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KeLeaveCriticalRegion();
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v14;
}
