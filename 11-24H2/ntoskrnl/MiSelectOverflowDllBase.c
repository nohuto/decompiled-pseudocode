/*
 * XREFs of MiSelectOverflowDllBase @ 0x140A81C68
 * Callers:
 *     MiSelectImageBase @ 0x140AEB020 (MiSelectImageBase.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     MiImageCanUseHighOverflowArea @ 0x140A81E1C (MiImageCanUseHighOverflowArea.c)
 */

__int64 __fastcall MiSelectOverflowDllBase(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  unsigned int CanUseHighOverflowArea; // eax
  __int64 v5; // r8
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // rbp
  __int64 *v10; // rdi
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v12; // r12
  char *v13; // rax
  signed __int8 v14; // cf
  char *v15; // rbx
  __int64 v16; // rbx
  unsigned int v19; // ecx

  v3 = ((*(_DWORD *)(a1 + 8) << 12) + 0xFFFF) & 0xFFFF0000;
  CanUseHighOverflowArea = MiImageCanUseHighOverflowArea();
  v6 = (unsigned int)v3;
  v7 = CanUseHighOverflowArea != 0 ? 0x10000000LL : 0x4000000LL;
  if ( (unsigned int)v3 <= v7 )
  {
    v8 = &qword_140E2D788;
    if ( (_DWORD)v5 == 3 )
      v8 = (__int64 *)&unk_140E2D7B8;
    v9 = *v8;
    v10 = v8 + 1;
    if ( CanUseHighOverflowArea )
    {
      v9 = v8[2];
      v10 = v8 + 3;
    }
    CurrentThread = KeGetCurrentThread();
    v12 = v7 + v9;
    --CurrentThread->SpecialApcDisable;
    v13 = (char *)KeAbPreAcquire((__int64)&qword_140E2D768, 0LL);
    v14 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2D768, 0LL);
    v15 = v13;
    if ( v14 )
      ExfAcquirePushLockExclusiveEx(&qword_140E2D768, v13, (__int64)&qword_140E2D768);
    if ( v15 )
      v15[10] = 1;
    v16 = *v10;
    if ( v6 > v12 - *v10 )
      v16 = v9;
    *v10 = v6 + v16;
    if ( v6 + v16 == v12 )
      *v10 = v9;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2D768, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2D768);
    KeAbPostRelease((ULONG_PTR)&qword_140E2D768);
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    return v16;
  }
  v19 = (unsigned __int8)ExGenRandom(1, v7, v5, CanUseHighOverflowArea) << 16;
  if ( a2 >= 0x1010000
    && (!(_DWORD)v3 || (unsigned int)v3 + a2 - 1 >= a2)
    && a2 + ((v3 - 1) & -(__int64)((_DWORD)v3 != 0)) <= 0x7FFFFFFEFFFFLL )
  {
    return a2 - v19;
  }
  return v19 + 0x10000LL;
}
