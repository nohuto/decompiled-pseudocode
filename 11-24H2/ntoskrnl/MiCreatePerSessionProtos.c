/*
 * XREFs of MiCreatePerSessionProtos @ 0x140A46C20
 * Callers:
 *     MiInsertInSystemSpace @ 0x140393BFC (MiInsertInSystemSpace.c)
 *     MiCloneImageVad @ 0x1406922B8 (MiCloneImageVad.c)
 *     MiInitializeImageExtents @ 0x1407F0928 (MiInitializeImageExtents.c)
 *     MiValidateSectionCreate @ 0x14093C5D8 (MiValidateSectionCreate.c)
 *     MiFinishCreateSection @ 0x14098B9F0 (MiFinishCreateSection.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     MiLocateSessionProtosInSubsection @ 0x14033A020 (MiLocateSessionProtosInSubsection.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiUpdatePerSessionProto @ 0x14049E78C (MiUpdatePerSessionProto.c)
 *     MiDereferenceSubsectionProtos @ 0x140A18924 (MiDereferenceSubsectionProtos.c)
 *     MiAllocatePerSessionProtos @ 0x140A46D70 (MiAllocatePerSessionProtos.c)
 *     MiFreeSubsectionProtos @ 0x140A86254 (MiFreeSubsectionProtos.c)
 */

__int64 __fastcall MiCreatePerSessionProtos(_QWORD *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *v5; // rbx
  char *v6; // rax
  char *v7; // rdi
  __int64 v8; // rbp
  __int64 i; // rdi
  __int64 *SessionProtosInSubsection; // rax
  __int64 v11; // rcx
  bool v12; // zf
  int v14; // r15d
  __int64 v15; // r8
  __int64 *v16; // [rsp+70h] [rbp+18h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  if ( a2 - 0x7FFFF <= 0xFFF7FFFF )
    return 3221225678LL;
  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(*a1 + 40LL);
  --CurrentThread->SpecialApcDisable;
  v6 = (char *)KeAbPreAcquire((__int64)v5, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v6, (__int64)v5);
  if ( v7 )
    v7[10] = 1;
  v8 = (__int64)(a1 + 16);
  for ( i = (__int64)(a1 + 16); i; i = *(_QWORD *)(i + 16) )
  {
    if ( (*(_DWORD *)(i + 32) & 0x20000) != 0 )
    {
      SessionProtosInSubsection = MiLocateSessionProtosInSubsection(i, a2);
      v16 = SessionProtosInSubsection;
      if ( SessionProtosInSubsection )
      {
        ++*((_DWORD *)SessionProtosInSubsection + 20);
      }
      else
      {
        v14 = MiAllocatePerSessionProtos(v11, &v16);
        if ( v14 < 0 )
        {
          v17 = 0LL;
          while ( v8 != i )
          {
            MiDereferenceSubsectionProtos(v8, a2, &v17);
            v8 = *(_QWORD *)(v8 + 16);
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v5);
          KeAbPostRelease((ULONG_PTR)v5);
          v12 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v12
            && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
          MiFreeSubsectionProtos(&v17);
          return (unsigned int)v14;
        }
        v15 = (__int64)v16;
        *((_DWORD *)v16 + 16) = a2;
        MiUpdatePerSessionProto((__int64)a1, i, v15, 1);
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((ULONG_PTR)v5);
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return 0LL;
}
