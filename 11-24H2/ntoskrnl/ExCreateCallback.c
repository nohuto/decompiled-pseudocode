/*
 * XREFs of ExCreateCallback @ 0x140A64310
 * Callers:
 *     HvlPhase2Initialize @ 0x140582B80 (HvlPhase2Initialize.c)
 *     DifExCreateCallbackWrapper @ 0x14061D280 (DifExCreateCallbackWrapper.c)
 *     HaliInitPowerManagement @ 0x140702360 (HaliInitPowerManagement.c)
 *     HalpMiscInitializeKsr @ 0x140702E94 (HalpMiscInitializeKsr.c)
 *     IoRegisterBootDriverCallback @ 0x140720500 (IoRegisterBootDriverCallback.c)
 *     KeRegisterProcessorChangeCallback @ 0x14073C2D0 (KeRegisterProcessorChangeCallback.c)
 *     ExInitLicenseCallback @ 0x1407B8114 (ExInitLicenseCallback.c)
 *     KiFilterFiberContext @ 0x140BDF530 (KiFilterFiberContext.c)
 *     IopInitializeSessionNotifications @ 0x140C1E018 (IopInitializeSessionNotifications.c)
 *     PiCslInitialize @ 0x140C26098 (PiCslInitialize.c)
 *     PiKsrNotifyInitialize @ 0x140C26320 (PiKsrNotifyInitialize.c)
 *     PopSetupKsrCallbacks @ 0x140C2EDFC (PopSetupKsrCallbacks.c)
 *     PopUmpoInitializeChannel @ 0x140C32438 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140C326B4 (PopUmpoInitializeMonitorChannel.c)
 *     SshpAlpcInitialize @ 0x140C34404 (SshpAlpcInitialize.c)
 *     EtwpInitializeKsrSupport @ 0x140C3E954 (EtwpInitializeKsrSupport.c)
 *     ExpInitializeCallbacks @ 0x140C42828 (ExpInitializeCallbacks.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140402420 (PsGetCurrentSilo.c)
 *     ExpUnlockCallbackListExclusive @ 0x1404CC00C (ExpUnlockCallbackListExclusive.c)
 *     ExpLockCallbackListExclusive @ 0x1404CD1C0 (ExpLockCallbackListExclusive.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     ObOpenObjectByNameEx @ 0x14089BB40 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x14089C4F0 (ObCreateObjectEx.c)
 */

NTSTATUS __stdcall ExCreateCallback(
        PCALLBACK_OBJECT *CallbackObject,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN Create,
        BOOLEAN AllowMultipleCallbacks)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int128 v5; // xmm0
  __int128 v7; // xmm1
  ULONG v8; // eax
  __int128 v11; // xmm0
  POBJECT_TYPE v12; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  NTSTATUS inserted; // ebx
  struct _FILE_OBJECT *v16; // rbx
  PSECTION_OBJECT_POINTERS **v17; // rax
  PSECTION_OBJECT_POINTERS *p_SectionObjectPointer; // rcx
  PVOID *Object; // [rsp+20h] [rbp-39h]
  PVOID v20; // [rsp+50h] [rbp-9h] BYREF
  __int128 v21; // [rsp+58h] [rbp-1h] BYREF
  __int128 v22; // [rsp+68h] [rbp+Fh]
  __int128 v23; // [rsp+78h] [rbp+1Fh]
  HANDLE Handle; // [rsp+C8h] [rbp+6Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = *(_OWORD *)&ObjectAttributes->Length;
  v7 = *(_OWORD *)&ObjectAttributes->ObjectName;
  v8 = ObjectAttributes->Attributes | 0x200;
  Handle = 0LL;
  v21 = v5;
  v11 = *(_OWORD *)&ObjectAttributes->SecurityDescriptor;
  v20 = 0LL;
  v22 = v7;
  DWORD2(v22) = v8;
  v23 = v11;
  if ( (_QWORD)v7 )
  {
    v12 = ExCallbackObjectType;
    CurrentSilo = PsGetCurrentSilo();
    inserted = ObOpenObjectByNameEx((__int64)&v21, (__int64)v12, 0, 0LL, 0, 0LL, (__int64)CurrentSilo, &Handle);
    if ( inserted >= 0 )
    {
LABEL_3:
      v20 = 0LL;
      inserted = ObReferenceObjectByHandle(Handle, 0, ExCallbackObjectType, 0, &v20, 0LL);
      ZwClose(Handle);
      if ( inserted >= 0 )
        *CallbackObject = (PCALLBACK_OBJECT)v20;
      return inserted;
    }
  }
  else
  {
    inserted = -1073741823;
  }
  if ( Create )
  {
    inserted = ObCreateObjectEx(0, ExCallbackObjectType, (int)&v21, 0, (__int64)Object, 56, 0, 0, &v20, 0LL);
    if ( inserted >= 0 )
    {
      v16 = (struct _FILE_OBJECT *)v20;
      *(_DWORD *)v20 = 1819042115;
      LOBYTE(v16->FsContext2) = AllowMultipleCallbacks;
      v16->FsContext = &v16->Vpb;
      v16->Vpb = (PVPB)&v16->Vpb;
      v16->DeviceObject = 0LL;
      ExpLockCallbackListExclusive((__int64)CurrentThread);
      v17 = (PSECTION_OBJECT_POINTERS **)qword_140EFA788;
      p_SectionObjectPointer = &v16->SectionObjectPointer;
      if ( *(__int64 **)qword_140EFA788 != &ExpCallbackListHead )
        __fastfail(3u);
      *p_SectionObjectPointer = (PSECTION_OBJECT_POINTERS)&ExpCallbackListHead;
      v16->PrivateCacheMap = v17;
      *v17 = p_SectionObjectPointer;
      qword_140EFA788 = (__int64)&v16->SectionObjectPointer;
      ExpUnlockCallbackListExclusive((__int64)CurrentThread);
      inserted = ObInsertObjectEx(v16, 0LL, 1, 0, 0, 0LL, (__int64)&Handle);
      if ( inserted >= 0 )
        goto LABEL_3;
    }
  }
  return inserted;
}
