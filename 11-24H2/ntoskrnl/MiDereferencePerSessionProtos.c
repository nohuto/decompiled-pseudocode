/*
 * XREFs of MiDereferencePerSessionProtos @ 0x140A24458
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x14026086C (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x140415F30 (MiInsertInSystemSpace.c)
 *     MiInitializeImageExtents @ 0x1407F0358 (MiInitializeImageExtents.c)
 *     MiDeletePartialCloneVads @ 0x1408003E4 (MiDeletePartialCloneVads.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
 *     MiFinishCreateSection @ 0x140941784 (MiFinishCreateSection.c)
 *     MiValidateSectionCreate @ 0x140957B50 (MiValidateSectionCreate.c)
 *     MiSectionDelete @ 0x140A24310 (MiSectionDelete.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiDeletePerSessionProtos @ 0x140495AB0 (MiDeletePerSessionProtos.c)
 *     MiDereferenceSubsectionProtos @ 0x140A24554 (MiDereferenceSubsectionProtos.c)
 */

_QWORD *__fastcall MiDereferencePerSessionProtos(__int64 *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rbx
  unsigned __int64 *v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  _QWORD *i; // rdi
  _QWORD *result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v14; // rbx
  void *v15; // rcx
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = *a1;
  P = 0LL;
  v6 = (unsigned __int64 *)(v4 + 40);
  --CurrentThread->SpecialApcDisable;
  v7 = KeAbPreAcquire((__int64)v6, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, (__int64)v7, (__int64)v6);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  for ( i = a1 + 16; i; i = (_QWORD *)i[2] )
    MiDereferenceSubsectionProtos(i, a2, &P);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  result = (_QWORD *)KeAbPostRelease((ULONG_PTR)v6);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = &CurrentThread->152;
    if ( (_QWORD *)*result != result )
      result = (_QWORD *)KiCheckForKernelApcDelivery(v12, v11);
  }
  v14 = P;
  while ( 1 )
  {
    v15 = v14;
    if ( v14 )
      v14 = (_QWORD *)*v14;
    if ( !v15 )
      break;
    result = (_QWORD *)MiDeletePerSessionProtos(v15);
  }
  return result;
}
