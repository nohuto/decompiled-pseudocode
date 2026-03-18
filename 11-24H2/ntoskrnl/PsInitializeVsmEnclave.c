/*
 * XREFs of PsInitializeVsmEnclave @ 0x14077B32C
 * Callers:
 *     MiInitializeVsmEnclave @ 0x1407F777C (MiInitializeVsmEnclave.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     VslInitializeEnclave @ 0x14070FAD4 (VslInitializeEnclave.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsInitializeVsmEnclave(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v6; // r15
  _QWORD *Pool2; // r14
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  int v13; // ecx
  int v14; // edi
  unsigned int v15; // ebp
  _QWORD *v16; // rcx
  _QWORD *v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // rcx

  CurrentThread = KeGetCurrentThread();
  v6 = (unsigned __int64 *)(a1 + 48);
  --CurrentThread->KernelApcDisable;
  Pool2 = 0LL;
  v11 = KeAbPreAcquire(a1 + 48, 0LL);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, (__int64)v11, (__int64)v6);
  if ( v12 )
    *((_BYTE *)v12 + 10) = 1;
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
      v15 = 0;
    }
    else
    {
      if ( a3 != 8 || *(_DWORD *)a2 != 8 )
      {
        v14 = -1073741820;
        goto LABEL_23;
      }
      v15 = *(_DWORD *)(a2 + 4);
      Pool2 = (_QWORD *)ExAllocatePool2(0x101uLL);
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
        if ( v15 > 1 )
        {
          v16 = Pool2 + 5;
          v17 = Pool2;
          v18 = v15 - 1;
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
        v19 = &Pool2[5 * v15 - 5];
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
