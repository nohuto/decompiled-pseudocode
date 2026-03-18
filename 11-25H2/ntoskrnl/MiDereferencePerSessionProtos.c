/*
 * XREFs of MiDereferencePerSessionProtos @ 0x140A1D1D8
 * Callers:
 *     MiInsertInSystemSpace @ 0x1402A4B54 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x1402A8BCC (MiRemoveFromSystemSpace.c)
 *     MiInitializeImageExtents @ 0x1407E04B8 (MiInitializeImageExtents.c)
 *     MiDeletePartialCloneVads @ 0x1407F052C (MiDeletePartialCloneVads.c)
 *     MiDeleteVad @ 0x1408B4F54 (MiDeleteVad.c)
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 *     MiFinishCreateSection @ 0x14093CE8C (MiFinishCreateSection.c)
 *     MiValidateSectionCreate @ 0x140945124 (MiValidateSectionCreate.c)
 *     MiSectionDelete @ 0x140A1D090 (MiSectionDelete.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MiDeletePerSessionProtos @ 0x1404967DC (MiDeletePerSessionProtos.c)
 *     MiDereferenceSubsectionProtos @ 0x140A1D2D4 (MiDereferenceSubsectionProtos.c)
 */

_QWORD *__fastcall MiDereferencePerSessionProtos(__int64 *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rbx
  unsigned __int64 *v6; // rbx
  __int64 *v7; // rax
  __int64 *v8; // rdi
  _QWORD *i; // rdi
  _QWORD *result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // r9
  _QWORD *v15; // rbx
  void *v16; // rcx
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = *a1;
  P = 0LL;
  v6 = (unsigned __int64 *)(v4 + 40);
  --CurrentThread->SpecialApcDisable;
  v7 = KeAbPreAcquire((__int64)v6, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (__int64)v6);
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
