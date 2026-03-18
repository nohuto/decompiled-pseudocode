/*
 * XREFs of NtAlpcCreatePortSection @ 0x14093EB80
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x140893140 (AlpcpDeleteBlob.c)
 *     AlpcpCreateSection @ 0x14093EF54 (AlpcpCreateSection.c)
 */

__int64 __fastcall NtAlpcCreatePortSection(HANDLE Handle, int a2, __int64 a3, __int64 a4, _QWORD *a5, __int64 *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  char v11; // di
  __int64 v12; // rdx
  __int64 v13; // rcx
  KPROCESSOR_MODE v14; // r9
  __int64 v15; // rdx
  NTSTATUS v16; // ebx
  __int64 v17; // r8
  __int64 v18; // r9
  PVOID v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r9
  ULONG_PTR v22; // rdi
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+38h] [rbp-10h] BYREF

  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a2 & 0xFFFBFFFF) != 0 )
    goto LABEL_19;
  if ( (a2 & 0x40000) == 0 )
  {
    v11 = 0;
    goto LABEL_5;
  }
  if ( a3 )
  {
LABEL_19:
    v16 = -1073741811;
    goto LABEL_17;
  }
  v11 = 1;
LABEL_5:
  if ( PreviousMode )
  {
    v12 = 0x7FFFFFFF0000LL;
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
      v13 = (__int64)a5;
    *(_QWORD *)v13 = *(_QWORD *)v13;
    if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
      v12 = (__int64)a6;
    *(_QWORD *)v12 = *(_QWORD *)v12;
  }
  v14 = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v16 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, v14, &Object, 0LL);
  if ( v16 >= 0 )
  {
    v18 = a3;
    LOBYTE(v17) = 1;
    LOBYTE(v15) = v11;
    v19 = Object;
    v16 = AlpcpCreateSection(Object, v15, v17, v18, a4, &BugCheckParameter2);
    if ( v16 >= 0 )
    {
      v22 = BugCheckParameter2;
      *a5 = *(_QWORD *)(BugCheckParameter2 + 24);
      if ( PreviousMode )
      {
        *a6 = *(_QWORD *)(v22 + 8);
      }
      else
      {
        v20 = *(_QWORD *)(v22 + 8);
        *a6 = v20;
      }
      AlpcpDereferenceBlobEx(v22, 1, v20, v21);
    }
    ObfDereferenceObject(v19);
  }
LABEL_17:
  KeLeaveCriticalRegion();
  return (unsigned int)v16;
}
