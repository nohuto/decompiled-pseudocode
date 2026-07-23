/*
 * XREFs of NtAlpcCreatePortSection @ 0x1408931C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     AlpcpCreateSection @ 0x140893594 (AlpcpCreateSection.c)
 *     AlpcpDeleteBlob @ 0x14089CCE0 (AlpcpDeleteBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 */

NTSTATUS __cdecl NtAlpcCreatePortSection(
        HANDLE PortHandle,
        ULONG Flags,
        HANDLE SectionHandle,
        SIZE_T SectionSize,
        PALPC_HANDLE AlpcSectionHandle,
        PSIZE_T ActualSectionSize)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  char v11; // di
  __int64 v12; // rdx
  __int64 v13; // rcx
  KPROCESSOR_MODE v14; // r9
  __int64 v15; // rdx
  int v16; // ebx
  __int64 v17; // r8
  HANDLE v18; // r9
  PVOID v19; // rsi
  ULONG_PTR v20; // rdi
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+38h] [rbp-10h] BYREF

  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (Flags & 0xFFFBFFFF) != 0 )
    goto LABEL_17;
  if ( (Flags & 0x40000) == 0 )
  {
    v11 = 0;
    goto LABEL_5;
  }
  if ( SectionHandle )
  {
LABEL_17:
    v16 = -1073741811;
    goto LABEL_15;
  }
  v11 = 1;
LABEL_5:
  if ( PreviousMode )
  {
    v12 = 0x7FFFFFFF0000LL;
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)AlpcSectionHandle < 0x7FFFFFFF0000LL )
      v13 = (__int64)AlpcSectionHandle;
    *(_QWORD *)v13 = *(_QWORD *)v13;
    if ( (unsigned __int64)ActualSectionSize < 0x7FFFFFFF0000LL )
      v12 = (__int64)ActualSectionSize;
    *(_QWORD *)v12 = *(_QWORD *)v12;
  }
  v14 = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v16 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, v14, &Object, 0LL);
  if ( v16 >= 0 )
  {
    v18 = SectionHandle;
    LOBYTE(v17) = 1;
    LOBYTE(v15) = v11;
    v19 = Object;
    v16 = AlpcpCreateSection(Object, v15, v17, v18, SectionSize, &BugCheckParameter2);
    if ( v16 >= 0 )
    {
      v20 = BugCheckParameter2;
      *AlpcSectionHandle = *(HANDLE *)(BugCheckParameter2 + 24);
      *ActualSectionSize = *(_QWORD *)(v20 + 8);
      AlpcpDereferenceBlobEx(v20);
    }
    ObfDereferenceObject(v19);
  }
LABEL_15:
  KeLeaveCriticalRegion();
  return v16;
}
