/*
 * XREFs of NtAlpcQueryInformationMessage @ 0x1408ABDF0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x1407357C0 (AlpcpQueryTokenModifiedIdMessage.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x1408AAFC0 (AlpcpLookupMessage.c)
 *     AlpcpQueryHandleInformationMessage @ 0x1408AD638 (AlpcpQueryHandleInformationMessage.c)
 *     ExRaiseAccessViolation @ 0x140936B90 (ExRaiseAccessViolation.c)
 *     AlpcpQuerySidMessage @ 0x140A0A58C (AlpcpQuerySidMessage.c)
 */

NTSTATUS __cdecl NtAlpcQueryInformationMessage(
        HANDLE PortHandle,
        PPORT_MESSAGE PortMessage,
        ALPC_MESSAGE_INFORMATION_CLASS MessageInformationClass,
        PVOID MessageInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r10
  char v11; // r9
  __int64 v12; // rcx
  unsigned int MessageId; // esi
  unsigned int CallbackId; // eax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  PULONG v18; // rdi
  __int64 v19; // r8
  NTSTATUS v20; // ebx
  __int64 v21; // r9
  ULONG_PTR v22; // rsi
  __int32 v23; // r14d
  __int32 v24; // r14d
  NTSTATUS TokenModifiedIdMessage; // eax
  unsigned int v27; // [rsp+30h] [rbp-28h]
  int v28; // [rsp+34h] [rbp-24h]
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-18h] BYREF
  struct _KTHREAD *v31; // [rsp+48h] [rbp-10h]

  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v31 = KeGetCurrentThread();
  v11 = v31->PreviousMode;
  if ( v11 )
  {
    v12 = (unsigned __int8)PortMessage & 3;
    if ( ((unsigned __int8)PortMessage & 3) != 0 )
      goto LABEL_3;
    v19 = 0x7FFFFFFF0000LL;
  }
  else
  {
    v12 = (unsigned __int8)PortMessage & 3;
    v19 = 0x7FFFFFFF0000LL;
  }
  if ( (PortMessage->u2.s2.Type & 0x1000) != 0 )
  {
    MessageId = *((_DWORD *)&PortMessage->DoNotUseThisField + 2);
    v27 = MessageId;
    CallbackId = *((_DWORD *)&PortMessage->DoNotUseThisField + 3);
  }
  else
  {
    if ( v11 && v12 )
      goto LABEL_3;
    MessageId = PortMessage->MessageId;
    v27 = MessageId;
    CallbackId = PortMessage->CallbackId;
  }
  v28 = CallbackId;
  if ( !PreviousMode )
  {
    v18 = ReturnLength;
    goto LABEL_27;
  }
  if ( Length )
  {
    v15 = (unsigned __int64)MessageInformation;
    if ( ((unsigned __int8)MessageInformation & 3) == 0 )
    {
      v16 = (unsigned __int64)MessageInformation + Length - 1;
      if ( v16 >= 0x7FFFFFFF0000LL || (unsigned __int64)MessageInformation > v16 )
        ExRaiseAccessViolation();
      v17 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v15 = *(_BYTE *)v15;
        v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v15 != v17 );
      MessageId = v27;
      goto LABEL_13;
    }
LABEL_3:
    ExRaiseDatatypeMisalignment();
  }
LABEL_13:
  v18 = ReturnLength;
  if ( ReturnLength )
  {
    if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
      v19 = (__int64)ReturnLength;
    *(_DWORD *)v19 = *(_DWORD *)v19;
    MessageId = v27;
  }
LABEL_27:
  if ( !MessageId )
  {
    v20 = -1073741811;
    goto LABEL_39;
  }
  Object = 0LL;
  v20 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v20 >= 0 )
  {
    v20 = AlpcpLookupMessage((__int64)Object, MessageId, v28, v21, &BugCheckParameter2);
    if ( v20 < 0 )
    {
LABEL_38:
      ObfDereferenceObject(Object);
      goto LABEL_39;
    }
    v22 = BugCheckParameter2;
    if ( !*(_QWORD *)(BugCheckParameter2 + 24) )
    {
      v20 = -1073740029;
      goto LABEL_37;
    }
    if ( MessageInformationClass )
    {
      v23 = MessageInformationClass - 1;
      if ( !v23 )
      {
        TokenModifiedIdMessage = AlpcpQueryTokenModifiedIdMessage(
                                   (__int64)Object,
                                   BugCheckParameter2,
                                   MessageInformation,
                                   Length,
                                   v18);
        goto LABEL_36;
      }
      v24 = v23 - 1;
      if ( v24 )
      {
        if ( v24 == 1 )
        {
          TokenModifiedIdMessage = AlpcpQueryHandleInformationMessage(
                                     (_DWORD)Object,
                                     BugCheckParameter2,
                                     (_DWORD)MessageInformation,
                                     Length,
                                     (__int64)v18);
LABEL_36:
          v20 = TokenModifiedIdMessage;
LABEL_37:
          AlpcpUnlockMessage(v22);
          goto LABEL_38;
        }
      }
      else if ( !MessageInformation && !Length && !v18 )
      {
        v20 = (*(_DWORD *)(BugCheckParameter2 + 40) & 7) != 4 ? 0x103 : 0;
        goto LABEL_37;
      }
      v20 = -1073741811;
      goto LABEL_37;
    }
    TokenModifiedIdMessage = AlpcpQuerySidMessage(
                               (_DWORD)Object,
                               BugCheckParameter2,
                               (_DWORD)MessageInformation,
                               Length,
                               (__int64)v18);
    goto LABEL_36;
  }
LABEL_39:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v20;
}
