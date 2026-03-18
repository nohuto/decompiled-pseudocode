/*
 * XREFs of ExCreateCallback @ 0x140A62280
 * Callers:
 *     HvlPhase2Initialize @ 0x14057F3D0 (HvlPhase2Initialize.c)
 *     DifExCreateCallbackWrapper @ 0x1406112C0 (DifExCreateCallbackWrapper.c)
 *     HaliInitPowerManagement @ 0x1406F6570 (HaliInitPowerManagement.c)
 *     HalpMiscInitializeKsr @ 0x1406F70A4 (HalpMiscInitializeKsr.c)
 *     IoRegisterBootDriverCallback @ 0x140714400 (IoRegisterBootDriverCallback.c)
 *     KeRegisterProcessorChangeCallback @ 0x140730040 (KeRegisterProcessorChangeCallback.c)
 *     ExInitLicenseCallback @ 0x1407A8C64 (ExInitLicenseCallback.c)
 *     KiFilterFiberContext @ 0x140BCE530 (KiFilterFiberContext.c)
 *     IopInitializeSessionNotifications @ 0x140C0CE48 (IopInitializeSessionNotifications.c)
 *     PiCslInitialize @ 0x140C15008 (PiCslInitialize.c)
 *     PiKsrNotifyInitialize @ 0x140C15290 (PiKsrNotifyInitialize.c)
 *     PopSetupKsrCallbacks @ 0x140C1DD00 (PopSetupKsrCallbacks.c)
 *     PopUmpoInitializeChannel @ 0x140C21334 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140C215B0 (PopUmpoInitializeMonitorChannel.c)
 *     SshpAlpcInitialize @ 0x140C23138 (SshpAlpcInitialize.c)
 *     EtwpInitializeKsrSupport @ 0x140C2D678 (EtwpInitializeKsrSupport.c)
 *     ExpInitializeCallbacks @ 0x140C31518 (ExpInitializeCallbacks.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x1403FA570 (PsGetCurrentSilo.c)
 *     ExpUnlockCallbackListExclusive @ 0x1404CC43C (ExpUnlockCallbackListExclusive.c)
 *     ExpLockCallbackListExclusive @ 0x1404CD640 (ExpLockCallbackListExclusive.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
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
  char *v16; // rbx
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
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
    inserted = ObOpenObjectByNameEx((__int64)&v21, (__int64)v12, 0, 0LL, 0, 0, (__int64)CurrentSilo, &Handle);
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
      v16 = (char *)v20;
      *(_DWORD *)v20 = 1819042115;
      v16[32] = AllowMultipleCallbacks;
      *((_QWORD *)v16 + 3) = v16 + 16;
      *((_QWORD *)v16 + 2) = v16 + 16;
      *((_QWORD *)v16 + 1) = 0LL;
      ExpLockCallbackListExclusive((__int64)CurrentThread);
      v17 = (_QWORD *)qword_140EFA418;
      v18 = v16 + 40;
      if ( *(__int64 **)qword_140EFA418 != &ExpCallbackListHead )
        __fastfail(3u);
      *v18 = &ExpCallbackListHead;
      *((_QWORD *)v16 + 6) = v17;
      *v17 = v18;
      qword_140EFA418 = (__int64)(v16 + 40);
      ExpUnlockCallbackListExclusive((__int64)CurrentThread);
      inserted = ObInsertObjectEx(v16, 0LL, 1, 0, 0, 0LL, (__int64)&Handle);
      if ( inserted >= 0 )
        goto LABEL_3;
    }
  }
  return inserted;
}
