/*
 * XREFs of PopShutdownListenerRemoveCallback @ 0x1405D2FB0
 * Callers:
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopShutdownListenerRemoveCallback(__m256i *a1)
{
  KIRQL v1; // al
  PVOID *v2; // rbx
  KIRQL v3; // r9
  _QWORD *v4; // rcx
  PVOID *v5; // rax
  unsigned int v6; // edi
  __m256i v8; // [rsp+20h] [rbp-28h]

  v8 = *a1;
  v1 = KeAcquireSpinLockRaiseToDpc(&PopShutdownNotificationCallbackLock);
  v2 = (PVOID *)PopShutdownNotificationCallbackList;
  v3 = v1;
  if ( PopShutdownNotificationCallbackList == &PopShutdownNotificationCallbackList )
    goto LABEL_10;
  do
  {
    if ( *((_OWORD *)v2 + 1) == *(_OWORD *)&v8.m256i_u64[1] && v2[4] == (PVOID)v8.m256i_i64[3] )
      break;
    v2 = (PVOID *)*v2;
  }
  while ( v2 != &PopShutdownNotificationCallbackList );
  if ( v2 == &PopShutdownNotificationCallbackList )
  {
LABEL_10:
    v2 = 0LL;
    v6 = -1073741275;
  }
  else
  {
    v4 = *v2;
    if ( *((PVOID **)*v2 + 1) != v2 || (v5 = (PVOID *)v2[1], *v5 != v2) )
      __fastfail(3u);
    *v5 = v4;
    v6 = 0;
    v4[1] = v5;
  }
  KeReleaseSpinLock(&PopShutdownNotificationCallbackLock, v3);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x206D654Du);
  return v6;
}
