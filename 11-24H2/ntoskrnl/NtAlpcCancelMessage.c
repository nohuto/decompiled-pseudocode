/*
 * XREFs of NtAlpcCancelMessage @ 0x140891590
 * Callers:
 *     SepRmCommandServerThread @ 0x140A4A870 (SepRmCommandServerThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     AlpcpLookupMessage @ 0x140892E20 (AlpcpLookupMessage.c)
 *     AlpcpCancelMessage @ 0x14089C73C (AlpcpCancelMessage.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAlpcCancelMessage(HANDLE PortHandle, ULONG Flags, PALPC_CONTEXT_ATTR MessageContext)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  ULONG MessageId; // edi
  ULONG CallbackId; // r15d
  PVOID PortContext_high; // rsi
  int v9; // ebx
  int v10; // r9d
  ULONG v11; // edx
  _DWORD *v12; // rdi
  PVOID Object[6]; // [rsp+38h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+20h] BYREF

  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (Flags & 0xFFFFFFF0) != 0 )
  {
    v9 = -1073741811;
    goto LABEL_11;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
    MessageId = MessageContext->MessageId;
    CallbackId = MessageContext->CallbackId;
    PortContext_high = MessageContext->MessageContext;
    goto LABEL_4;
  }
  if ( (Flags & 4) != 0 )
  {
    if ( ((unsigned __int8)MessageContext & 3) != 0 )
      goto LABEL_14;
    MessageId = HIDWORD(MessageContext->MessageContext);
    CallbackId = MessageContext->Sequence;
    PortContext_high = (PVOID)HIDWORD(MessageContext->PortContext);
  }
  else
  {
    if ( ((unsigned __int8)MessageContext & 3) != 0 )
LABEL_14:
      ExRaiseDatatypeMisalignment();
    MessageId = MessageContext->MessageId;
    CallbackId = MessageContext->CallbackId;
    PortContext_high = MessageContext->MessageContext;
  }
  Object[1] = PortContext_high;
LABEL_4:
  if ( !MessageId )
  {
    v9 = -1073741559;
    goto LABEL_11;
  }
  Object[0] = 0LL;
  v9 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, Object, 0LL);
  if ( v9 >= 0 )
  {
    v11 = MessageId;
    v12 = Object[0];
    v9 = AlpcpLookupMessage(Object[0], v11, CallbackId, v10, (__int64)&BugCheckParameter2);
    if ( v9 >= 0 )
    {
      if ( (Flags & 8) == 0 )
        goto LABEL_8;
      if ( (v12[104] & 6) == 4 )
      {
        if ( PortContext_high == *(PVOID *)(BugCheckParameter2 + 104) )
        {
LABEL_8:
          if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) != 0 )
          {
            AlpcpUnlockMessage(BugCheckParameter2);
            v9 = -1073740029;
          }
          else
          {
            v9 = AlpcpCancelMessage(v12, BugCheckParameter2, Flags);
          }
          goto LABEL_10;
        }
      }
      else if ( PortContext_high == *(PVOID *)(BugCheckParameter2 + 112) )
      {
        goto LABEL_8;
      }
      AlpcpUnlockMessage(BugCheckParameter2);
      v9 = -1073740007;
    }
LABEL_10:
    ObfDereferenceObject(v12);
  }
LABEL_11:
  KeLeaveCriticalRegion();
  return v9;
}
