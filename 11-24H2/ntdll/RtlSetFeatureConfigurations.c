/*
 * XREFs of RtlSetFeatureConfigurations @ 0x18010CAF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     ZwSetSystemInformation @ 0x1801637C0 (ZwSetSystemInformation.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

NTSTATUS __cdecl RtlSetFeatureConfigurations(
        PRTL_FEATURE_CHANGE_STAMP PreviousChangeStamp,
        RTL_FEATURE_CONFIGURATION_TYPE ConfigurationType,
        PRTL_FEATURE_CONFIGURATION_UPDATE ConfigurationUpdates,
        SIZE_T ConfigurationUpdateCount)
{
  unsigned __int64 v7; // rbx
  int v8; // ebp
  NTSTATUS v9; // edi
  char *Heap; // rax
  void *v11; // rsi
  int v12; // ebx

  if ( ConfigurationUpdateCount > 0xFFFFFFFF )
    return -1073741811;
  v7 = 32LL * (unsigned int)ConfigurationUpdateCount;
  v8 = ConfigurationUpdateCount;
  if ( v7 > 0xFFFFFFFF || (unsigned int)v7 >= 0xFFFFFFE8 )
    return -1073741675;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v7 + 24));
  v9 = 0;
  v11 = Heap;
  if ( !Heap )
    return -1073741670;
  *(_DWORD *)Heap = 0;
  *((_DWORD *)Heap + 4) = ConfigurationType;
  if ( PreviousChangeStamp )
    *((_QWORD *)Heap + 1) = *PreviousChangeStamp;
  *((_DWORD *)Heap + 5) = v8;
  memmove(Heap + 24, ConfigurationUpdates, (unsigned int)v7);
  v12 = ZwSetSystemInformation(SystemFeatureConfigurationInformation, v11, v7 + 24);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
  if ( v12 < 0 )
    return v12;
  return v9;
}
