/*
 * XREFs of PfTStart @ 0x140746B0C
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140932C24 (PfSetSuperfetchInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     PfpPartitionToParent @ 0x1404BCA40 (PfpPartitionToParent.c)
 *     PfpTraceLogPfPartitionId @ 0x1405CCB4C (PfpTraceLogPfPartitionId.c)
 *     PfFbBufferListAllocate @ 0x1405CCB6C (PfFbBufferListAllocate.c)
 *     PfFbBufferListUpdateMax @ 0x1405CCC64 (PfFbBufferListUpdateMax.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PfTAllocateBuffers @ 0x14074646C (PfTAllocateBuffers.c)
 *     PfTCleanup @ 0x140746568 (PfTCleanup.c)
 *     PfTInitialize @ 0x1407468B4 (PfTInitialize.c)
 *     PfpCreateEventInternal @ 0x1407487E0 (PfpCreateEventInternal.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x140854F10 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     PsEnumProcesses @ 0x1408EE0F4 (PsEnumProcesses.c)
 *     PsCreateSystemThreadEx @ 0x140A224A0 (PsCreateSystemThreadEx.c)
 *     PfTAccessTracingStart @ 0x140B5B5B0 (PfTAccessTracingStart.c)
 */

__int64 __fastcall PfTStart(__int64 a1, int a2, KPROCESSOR_MODE a3, HANDLE *a4)
{
  int EventInternal; // esi
  __int64 v9; // rax
  HANDLE v10; // rcx
  void *v11; // r10
  _SLIST_ENTRY *v12; // rcx
  _SLIST_ENTRY *v13; // rcx
  __int64 v14; // r8
  signed __int32 v16[8]; // [rsp+0h] [rbp-A9h] BYREF
  int v17; // [rsp+50h] [rbp-59h] BYREF
  HANDLE v18; // [rsp+58h] [rbp-51h] BYREF
  PVOID Object; // [rsp+60h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21[2]; // [rsp+70h] [rbp-39h] BYREF
  int *v22; // [rsp+90h] [rbp-19h]
  __int64 v23; // [rsp+98h] [rbp-11h]
  PVOID *p_Object; // [rsp+A0h] [rbp-9h]
  __int64 v25; // [rsp+A8h] [rbp-1h]
  HANDLE *v26; // [rsp+B0h] [rbp+7h]
  __int64 v27; // [rsp+B8h] [rbp+Fh]

  Handle = 0LL;
  if ( (unsigned int)dword_140E074B8 > 4 && tlgKeywordOn((__int64)&dword_140E074B8, 2LL) )
  {
    v17 = PfpTraceLogPfPartitionId((__int64 *)a1);
    v23 = 4LL;
    v22 = &v17;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E074B8, (unsigned __int8 *)byte_140047FED, 0LL, 0LL, 3u, v21);
  }
  v18 = 0LL;
  if ( (a2 & 1) != 0 && (xmmword_140E66CA4 & 1) == 0 )
    a2 &= ~1u;
  if ( (a2 & 2) != 0 && (xmmword_140E66CA4 & 1) == 0 && dword_140E66CC0 != 1 && dword_140E66CC4 != 1 )
    a2 &= ~2u;
  if ( (a2 & 1) != 0 )
  {
    EventInternal = PfTAllocateBuffers(a1 + 88, 0x8000u, 8u);
    if ( EventInternal < 0 )
      goto LABEL_22;
    EventInternal = PfTAllocateBuffers(a1 + 128, 0x14028u, 2u);
    if ( EventInternal < 0 )
      goto LABEL_22;
    v9 = PfpPartitionToParent(a1);
    EventInternal = PsCreateSystemThreadEx(
                      &Handle,
                      0x1FFFFFLL,
                      0LL,
                      *(_QWORD *)(v9 + 128),
                      0LL,
                      PfTLoggingWorker,
                      a1,
                      0LL,
                      0LL);
    if ( EventInternal < 0 )
      goto LABEL_22;
    Object = 0LL;
    ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    v10 = Handle;
    *(_QWORD *)(a1 + 168) = Object;
    ObCloseHandle(v10, 0);
  }
  if ( (a2 & 3) != 0
    && !*(_QWORD *)(a1 + 680)
    && (EventInternal = PfpCreateEventInternal(0LL, 1LL, 512LL, a1 + 680), EventInternal < 0)
    || (v11 = *(void **)(a1 + 680)) != 0LL
    && (EventInternal = ObOpenObjectByPointer(
                          v11,
                          a3 == 0 ? 0x200 : 0,
                          0LL,
                          0x120001u,
                          (POBJECT_TYPE)ExEventObjectType,
                          a3,
                          &v18),
        EventInternal < 0) )
  {
LABEL_22:
    PfTCleanup(a1, 0);
    PfTInitialize(a1, 1);
    if ( v18 )
      ObCloseHandle(v18, a3);
    goto LABEL_36;
  }
  if ( (a2 & 1) != 0 )
  {
    PfFbBufferListUpdateMax(a1 + 416, 0x100000);
    PfFbBufferListAllocate(v12, ((_DWORD)KeNumberProcessors_0 + 2) << 12, 2 * KeNumberProcessors_0 + 4);
  }
  if ( (a2 & 2) != 0 )
  {
    PfFbBufferListUpdateMax(a1 + 288, 0x1000000);
    PfFbBufferListAllocate(v13, ((_DWORD)KeNumberProcessors_0 + 7) << 15, 2 * KeNumberProcessors_0 + 14);
  }
  ExAcquireFastMutex((PKGUARDED_MUTEX)(a1 + 624));
  if ( (a2 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 604) = HIDWORD(xmmword_140E66CA4);
    if ( *(_DWORD *)(a1 + 600) < HIDWORD(xmmword_140E66CA4) )
      PfTAccessTracingStart(a1, 2LL);
  }
  if ( (a2 & 2) != 0 )
    *(_DWORD *)(a1 + 612) = DWORD2(xmmword_140E66CA4);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 624));
  *(_DWORD *)(a1 + 72) |= a2;
  if ( (a2 & 1) != 0 )
  {
    _InterlockedOr(v16, 0);
    PsEnumProcesses(PfCalculateProcessHash, 0LL);
    PfTAccessTracingStart(a1, 1LL);
  }
  EventInternal = 0;
  *a4 = v18;
LABEL_36:
  if ( (unsigned int)dword_140E074B8 > 4 && tlgKeywordOn((__int64)&dword_140E074B8, 2LL) )
  {
    v17 = PfpTraceLogPfPartitionId((__int64 *)a1);
    v23 = v14;
    v22 = &v17;
    v25 = v14;
    p_Object = &Object;
    v27 = v14;
    v26 = &v18;
    LODWORD(Object) = a2;
    LODWORD(v18) = EventInternal;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E074B8, (unsigned __int8 *)&word_14004809E, 0LL, 0LL, 5u, v21);
  }
  return (unsigned int)EventInternal;
}
