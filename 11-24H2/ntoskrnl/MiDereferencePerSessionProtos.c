/*
 * XREFs of MiDereferencePerSessionProtos @ 0x140A18828
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x140290E7C (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x140393BFC (MiInsertInSystemSpace.c)
 *     MiInitializeImageExtents @ 0x1407F0928 (MiInitializeImageExtents.c)
 *     MiDeletePartialCloneVads @ 0x140800B24 (MiDeletePartialCloneVads.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiValidateSectionCreate @ 0x14093C5D8 (MiValidateSectionCreate.c)
 *     MiFinishCreateSection @ 0x14098B9F0 (MiFinishCreateSection.c)
 *     MiSectionDelete @ 0x140A186E0 (MiSectionDelete.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiDeletePerSessionProtos @ 0x140490370 (MiDeletePerSessionProtos.c)
 *     MiDereferenceSubsectionProtos @ 0x140A18924 (MiDereferenceSubsectionProtos.c)
 */

_QWORD *__fastcall MiDereferencePerSessionProtos(__int64 *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rbx
  unsigned __int64 *v6; // rbx
  char *v7; // rax
  char *v8; // rdi
  _QWORD *i; // rdi
  _QWORD *result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v15; // rbx
  void *v16; // rcx
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = *a1;
  P = 0LL;
  v6 = (unsigned __int64 *)(v4 + 40);
  --CurrentThread->SpecialApcDisable;
  v7 = (char *)KeAbPreAcquire((__int64)v6, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (__int64)v6);
  if ( v8 )
    v8[10] = 1;
  for ( i = a1 + 16; i; i = (_QWORD *)i[2] )
    MiDereferenceSubsectionProtos(i, a2, &P);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  result = (_QWORD *)KeAbPostRelease((ULONG_PTR)v6);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = &CurrentThread->152;
    if ( (_QWORD *)*result != result )
      result = (_QWORD *)KiCheckForKernelApcDelivery();
  }
  v15 = P;
  while ( 1 )
  {
    v16 = v15;
    if ( v15 )
      v15 = (_QWORD *)*v15;
    if ( !v16 )
      break;
    result = (_QWORD *)MiDeletePerSessionProtos(v16, v11, v12, v13);
  }
  return result;
}
