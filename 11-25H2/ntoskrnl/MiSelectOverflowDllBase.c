/*
 * XREFs of MiSelectOverflowDllBase @ 0x140A82678
 * Callers:
 *     MiSelectImageBase @ 0x1409401DC (MiSelectImageBase.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 *     MiImageCanUseHighOverflowArea @ 0x140A8282C (MiImageCanUseHighOverflowArea.c)
 */

__int64 __fastcall MiSelectOverflowDllBase(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  int v6; // r8d
  int CanUseHighOverflowArea; // r9d
  unsigned __int64 v8; // rdx
  __int64 *v9; // rcx
  __int64 v10; // rbp
  __int64 *v11; // rdi
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v13; // r12
  __int64 *v14; // rax
  signed __int8 v15; // cf
  __int64 *v16; // rbx
  __int64 v17; // rbx
  unsigned int v20; // ecx

  v4 = ((*(_DWORD *)(a1 + 8) << 12) + 0xFFFF) & 0xFFFF0000;
  v5 = (unsigned int)v4;
  CanUseHighOverflowArea = MiImageCanUseHighOverflowArea(a1, a2, a3);
  v8 = CanUseHighOverflowArea != 0 ? 0x10000000LL : 0x4000000LL;
  if ( (unsigned int)v4 <= v8 )
  {
    v9 = &qword_140E2D408;
    if ( v6 == 3 )
      v9 = (__int64 *)&unk_140E2D438;
    v10 = *v9;
    v11 = v9 + 1;
    if ( CanUseHighOverflowArea )
    {
      v10 = v9[2];
      v11 = v9 + 3;
    }
    CurrentThread = KeGetCurrentThread();
    v13 = v8 + v10;
    --CurrentThread->SpecialApcDisable;
    v14 = KeAbPreAcquire((__int64)&qword_140E2D3E8, 0LL);
    v15 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2D3E8, 0LL);
    v16 = v14;
    if ( v15 )
      ExfAcquirePushLockExclusiveEx(&qword_140E2D3E8, v14, (__int64)&qword_140E2D3E8);
    if ( v16 )
      *((_BYTE *)v16 + 10) = 1;
    v17 = *v11;
    if ( v5 > v13 - *v11 )
      v17 = v10;
    *v11 = v5 + v17;
    if ( v5 + v17 == v13 )
      *v11 = v10;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2D3E8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2D3E8);
    KeAbPostRelease((ULONG_PTR)&qword_140E2D3E8);
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    return v17;
  }
  v20 = (unsigned __int8)ExGenRandom(1) << 16;
  if ( a2 >= 0x1010000
    && (!(_DWORD)v4 || (unsigned int)v4 + a2 - 1 >= a2)
    && a2 + ((v4 - 1) & -(__int64)((_DWORD)v4 != 0)) <= 0x7FFFFFFEFFFFLL )
  {
    return a2 - v20;
  }
  return v20 + 0x10000LL;
}
