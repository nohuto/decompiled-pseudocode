/*
 * XREFs of MiCreatePerSessionProtos @ 0x140A4FE70
 * Callers:
 *     MiInsertInSystemSpace @ 0x140415F30 (MiInsertInSystemSpace.c)
 *     MiCloneImageVad @ 0x1406911E8 (MiCloneImageVad.c)
 *     MiInitializeImageExtents @ 0x1407F0358 (MiInitializeImageExtents.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MiFinishCreateSection @ 0x140941784 (MiFinishCreateSection.c)
 *     MiValidateSectionCreate @ 0x140957B50 (MiValidateSectionCreate.c)
 * Callees:
 *     MiLocateSessionProtosInSubsection @ 0x140210CC0 (MiLocateSessionProtosInSubsection.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiUpdatePerSessionProto @ 0x1404A382C (MiUpdatePerSessionProto.c)
 *     MiDereferenceSubsectionProtos @ 0x140A24554 (MiDereferenceSubsectionProtos.c)
 *     MiAllocatePerSessionProtos @ 0x140A4FFC0 (MiAllocatePerSessionProtos.c)
 *     MiFreeSubsectionProtos @ 0x140A89E54 (MiFreeSubsectionProtos.c)
 */

__int64 __fastcall MiCreatePerSessionProtos(_QWORD *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rbp
  __int64 i; // rdi
  __int64 *SessionProtosInSubsection; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf
  int v16; // r15d
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 *v20; // [rsp+70h] [rbp+18h] BYREF
  __int64 v21; // [rsp+78h] [rbp+20h] BYREF

  if ( a2 - 0x7FFFF <= 0xFFF7FFFF )
    return 3221225678LL;
  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(*a1 + 40LL);
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire((__int64)v5, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, (__int64)v6, (__int64)v5);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  v8 = (__int64)(a1 + 16);
  for ( i = (__int64)(a1 + 16); i; i = *(_QWORD *)(i + 16) )
  {
    if ( (*(_DWORD *)(i + 32) & 0x20000) != 0 )
    {
      SessionProtosInSubsection = MiLocateSessionProtosInSubsection(i, a2);
      v20 = SessionProtosInSubsection;
      if ( SessionProtosInSubsection )
      {
        ++*((_DWORD *)SessionProtosInSubsection + 20);
      }
      else
      {
        v16 = MiAllocatePerSessionProtos(v11, &v20);
        if ( v16 < 0 )
        {
          v21 = 0LL;
          while ( v8 != i )
          {
            MiDereferenceSubsectionProtos(v8, a2, &v21);
            v8 = *(_QWORD *)(v8 + 16);
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v5);
          KeAbPostRelease((ULONG_PTR)v5);
          v14 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v14
            && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v19, v18);
          }
          MiFreeSubsectionProtos(&v21);
          return (unsigned int)v16;
        }
        v17 = (__int64)v20;
        *((_DWORD *)v20 + 16) = a2;
        MiUpdatePerSessionProto((__int64)a1, i, v17, 1);
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((ULONG_PTR)v5);
  v14 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v14 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v13, v12);
  return 0LL;
}
