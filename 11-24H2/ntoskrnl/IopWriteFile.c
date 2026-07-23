/*
 * XREFs of IopWriteFile @ 0x1408BEFF0
 * Callers:
 *     IopIoRingDispatchWrite @ 0x140714A08 (IopIoRingDispatchWrite.c)
 *     NtWriteFile @ 0x1408BEB30 (NtWriteFile.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     IopReleaseFileObjectLock @ 0x1402C60B0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     IopProcessUpdateTransferCount @ 0x1403B31E0 (IopProcessUpdateTransferCount.c)
 *     IopValidateAndGetWriteParameters @ 0x1403FB3F0 (IopValidateAndGetWriteParameters.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1403FB9B0 (IopAllocateAndPopulateWriteIrp.c)
 *     MmIsDriverVerifying @ 0x140499230 (MmIsDriverVerifying.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     IopSynchronousServiceTail @ 0x1408C0CC0 (IopSynchronousServiceTail.c)
 *     VfFastIoCheckState @ 0x140BAB450 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140BAB7CC (VfFastIoSnapState.c)
 */

__int64 __fastcall IopWriteFile(
        ULONG_PTR BugCheckParameter2,
        void *a2,
        __int64 a3,
        __int64 a4,
        struct _DRIVER_OBJECT *a5,
        __int64 a6,
        int a7,
        struct _KTHREAD **a8,
        _DWORD *a9,
        char a10,
        __int64 a11,
        __int64 a12,
        int a13,
        __int64 a14)
{
  void *v15; // rbx
  struct _DRIVER_OBJECT *v16; // r13
  int v17; // r14d
  __int64 result; // rax
  __int64 v19; // r8
  ULONG_PTR v20; // r12
  char v21; // si
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v23; // rdx
  PRKEVENT v24; // rcx
  int v25; // [rsp+20h] [rbp-F8h]
  int v26; // [rsp+28h] [rbp-F0h]
  struct _KTHREAD *v27; // [rsp+60h] [rbp-B8h] BYREF
  __int16 v28; // [rsp+68h] [rbp-B0h]
  unsigned __int8 v29; // [rsp+6Ah] [rbp-AEh]
  int v30; // [rsp+6Bh] [rbp-ADh]
  char v31; // [rsp+6Fh] [rbp-A9h]
  ULONG_PTR v32; // [rsp+70h] [rbp-A8h]
  __int64 v33; // [rsp+78h] [rbp-A0h]
  PRKEVENT Event; // [rsp+80h] [rbp-98h]
  __int64 v35; // [rsp+88h] [rbp-90h]
  __int64 v36; // [rsp+90h] [rbp-88h]
  struct _DRIVER_OBJECT *v37; // [rsp+98h] [rbp-80h]
  __int64 v38; // [rsp+A0h] [rbp-78h]
  int v39; // [rsp+A8h] [rbp-70h]
  int v40; // [rsp+ACh] [rbp-6Ch]
  __int64 v41; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-60h]
  __int64 v43; // [rsp+C0h] [rbp-58h]
  __int64 v44; // [rsp+C8h] [rbp-50h]
  int v45; // [rsp+D0h] [rbp-48h]
  int v46; // [rsp+D4h] [rbp-44h]
  __int64 v47; // [rsp+D8h] [rbp-40h]
  __int64 v48; // [rsp+E0h] [rbp-38h]
  IRP *v49; // [rsp+130h] [rbp+18h] BYREF

  v30 = 0;
  v31 = 0;
  v40 = 0;
  v42 = 0LL;
  v46 = 0;
  v15 = 0LL;
  v49 = 0LL;
  v27 = 0LL;
  v28 = 0;
  v29 = 1;
  v32 = BugCheckParameter2;
  v33 = 0LL;
  Event = 0LL;
  v35 = a3;
  v36 = a4;
  v16 = a5;
  v37 = a5;
  v17 = a6;
  v38 = a6;
  v39 = a7;
  v41 = 0LL;
  v43 = a11;
  v44 = a12;
  v45 = a13;
  v47 = a14;
  v48 = 0LL;
  result = IopValidateAndGetWriteParameters(&v27, a2, a8, a9, a10);
  if ( (int)result >= 0 )
  {
    if ( !HIBYTE(v28) || !*(_QWORD *)(BugCheckParameter2 + 48) )
      goto LABEL_3;
    v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 8) + 80LL) + 24LL);
    if ( (MmVerifierData & 0x10) != 0 )
    {
      a5 = *(struct _DRIVER_OBJECT **)(v33 + 8);
      if ( MmIsDriverVerifying(a5) )
        v15 = (void *)VfFastIoSnapState(a5);
    }
    v26 = v17;
    v25 = v42;
    v21 = guard_dispatch_icall_no_overrides(BugCheckParameter2, &v41);
    if ( v15 )
      VfFastIoCheckState(v15, v20);
    if ( v21 )
    {
      CurrentThread = KeGetCurrentThread();
      ++CurrentThread->WriteOperationCount;
      __incgsdword(0x2EE0u);
      IopProcessUpdateTransferCount(0LL, 0, 0x3A0u, 0x3C0u);
      __addgsqword(0x2EF0u, v23);
      *(_OWORD *)&v16->Type = 0LL;
      v24 = Event;
      if ( Event )
      {
        if ( (*(_DWORD *)(BugCheckParameter2 + 80) & 0x8000000) == 0 )
        {
          KeSetEvent(Event, 0, 0);
          v24 = Event;
        }
        ObfDereferenceObject(v24);
      }
      IopReleaseFileObjectLock(BugCheckParameter2);
      ObfDereferenceObject((PVOID)BugCheckParameter2);
      return 0LL;
    }
    else
    {
LABEL_3:
      result = IopAllocateAndPopulateWriteIrp((__int64)&v27, &v49, v19);
      if ( (int)result >= 0 )
      {
        LOBYTE(v26) = HIBYTE(v28);
        LOBYTE(v25) = v28;
        return IopSynchronousServiceTail(v33, v49, BugCheckParameter2, v29, v25, v26, 1);
      }
    }
  }
  return result;
}
