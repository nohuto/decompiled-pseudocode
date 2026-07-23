/*
 * XREFs of EtwpCrimsonProvEnableCallback @ 0x140A624A0
 * Callers:
 *     <none>
 * Callees:
 *     EtwProviderEnabled @ 0x140262770 (EtwProviderEnabled.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwpPsProvCaptureState @ 0x1407B1A14 (EtwpPsProvCaptureState.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

void __fastcall EtwpCrimsonProvEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  __int64 v9; // r9
  int *v10; // r10
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  int v13; // ecx
  unsigned int v14; // r8d
  struct _WORK_QUEUE_ITEM *Pool2; // rax
  int v16; // edi
  int v17; // ebx
  int v18; // edi
  BOOLEAN v19; // al
  int v20; // ecx
  int v21; // ebx
  int v22; // edi
  BOOLEAN v23; // al
  int v24; // ecx
  int v25; // ebx
  BOOLEAN v26; // al
  int v27; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-4Ch]
  int v29; // [rsp+38h] [rbp-48h]
  int v30; // [rsp+3Ch] [rbp-44h]
  int v31; // [rsp+40h] [rbp-40h]
  int v32; // [rsp+44h] [rbp-3Ch]

  KeWaitForSingleObject(&EtwpCrimsonMaskMutex, Executive, 0, 0, 0LL);
  if ( (_DWORD)CallbackContext != 1 )
  {
    if ( (_DWORD)CallbackContext == 0x2000000 )
    {
      v21 = EtwProviderEnabled(EtwpFileProvRegHandle, 0, 0x10uLL) != 0 ? 0x200 : 0;
      v22 = v21 | 0x2000000;
      v27 = 100663808;
      if ( !EtwProviderEnabled(EtwpFileProvRegHandle, 0, 0x60uLL) )
        v22 = v21;
      v23 = EtwProviderEnabled(EtwpFileProvRegHandle, 0, 0x1FA0uLL);
      v24 = v22 | 0x4000000;
      if ( !v23 )
        v24 = v22;
    }
    else
    {
      if ( (_DWORD)CallbackContext != 536870913 )
      {
        v27 = (int)CallbackContext;
        v28 = ControlCode != 0 ? (unsigned int)CallbackContext : 0;
LABEL_5:
        v9 = 1LL;
        goto LABEL_6;
      }
      v27 = 545783808;
      v25 = EtwProviderEnabled(EtwpMemoryProvRegHandle, 0, 0x420uLL) != 0 ? 0x20080000 : 0;
      v26 = EtwProviderEnabled(EtwpMemoryProvRegHandle, 0, 0x40uLL);
      v24 = v25 | 0x20800000;
      if ( !v26 )
        v24 = v25;
    }
    v28 = v24;
    goto LABEL_5;
  }
  v16 = 0;
  if ( EtwEventEnabled(EtwpPsProvRegHandle, &ProcessStart)
    || EtwEventEnabled(EtwpPsProvRegHandle, &EnableProcessTracingCallbacks) )
  {
    v16 = 1;
  }
  v17 = v16 | 2;
  if ( !EtwEventEnabled(EtwpPsProvRegHandle, &ThreadStart) )
    v17 = v16;
  v27 = 524295;
  v18 = v17 | 4;
  if ( !EtwEventEnabled(EtwpPsProvRegHandle, &ImageLoad) )
    v18 = v17;
  v19 = EtwEventEnabled(EtwpPsProvRegHandle, &JobStart);
  v20 = v18 | 0x80000;
  v29 = 536879104;
  if ( !v19 )
    v20 = v18;
  v28 = v20;
  v30 = EtwProviderEnabled(EtwpPsProvRegHandle, 0, 0x180uLL) != 0 ? 0x20002000 : 0;
  v31 = 1073741826;
  v32 = EtwProviderEnabled(EtwpPsProvRegHandle, 0, 0x200uLL) != 0 ? 0x40000002 : 0;
  if ( ControlCode == 2 )
    EtwpPsProvCaptureState((__int64 *)&PsProvGuid, MatchAnyKeyword);
  v9 = 3LL;
LABEL_6:
  v10 = &v27;
  do
  {
    v11 = EtwpHostSiloState;
    v12 = (unsigned __int64)(unsigned int)v10[1] >> 29;
    v13 = v10[1] & 0x1FFFFFFF;
    v14 = *v10 & ~v10[1];
    v10 += 2;
    *(_DWORD *)(EtwpHostSiloState + 4 * v12 + 4812) |= v13;
    *(_DWORD *)(v11 + 4 * ((unsigned __int64)v14 >> 29) + 4812) &= ~(v14 & 0x1FFFFFFF);
    --v9;
  }
  while ( v9 );
  KeReleaseMutex(&EtwpCrimsonMaskMutex, 0);
  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL, 0x20uLL, 0x57777445u);
  if ( Pool2 )
  {
    Pool2->List.Flink = 0LL;
    Pool2->WorkerRoutine = (void (__fastcall *)(void *))EtwpUpdateKernelGroupsWork;
    Pool2->Parameter = Pool2;
    ExQueueWorkItem(Pool2, DelayedWorkQueue);
  }
}
