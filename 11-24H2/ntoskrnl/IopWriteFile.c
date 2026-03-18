/*
 * XREFs of IopWriteFile @ 0x1408C1630
 * Callers:
 *     IopIoRingDispatchWrite @ 0x140716E78 (IopIoRingDispatchWrite.c)
 *     NtWriteFile @ 0x1408C1170 (NtWriteFile.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     IopReleaseFileObjectLock @ 0x14031D520 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     IopProcessUpdateTransferCount @ 0x1403C4620 (IopProcessUpdateTransferCount.c)
 *     IopValidateAndGetWriteParameters @ 0x140400A70 (IopValidateAndGetWriteParameters.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x140401030 (IopAllocateAndPopulateWriteIrp.c)
 *     MmIsDriverVerifying @ 0x14049E430 (MmIsDriverVerifying.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     IopSynchronousServiceTail @ 0x1408C3300 (IopSynchronousServiceTail.c)
 *     VfFastIoCheckState @ 0x140BA9450 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140BA97CC (VfFastIoSnapState.c)
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
  unsigned int v18; // r15d
  __int64 result; // rax
  __int64 v20; // r9
  ULONG_PTR v21; // r12
  char v22; // si
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v24; // rdx
  PRKEVENT v25; // rcx
  int v26; // [rsp+20h] [rbp-F8h]
  int v27; // [rsp+28h] [rbp-F0h]
  struct _KTHREAD *v28; // [rsp+60h] [rbp-B8h] BYREF
  __int16 v29; // [rsp+68h] [rbp-B0h]
  unsigned __int8 v30; // [rsp+6Ah] [rbp-AEh]
  int v31; // [rsp+6Bh] [rbp-ADh]
  char v32; // [rsp+6Fh] [rbp-A9h]
  ULONG_PTR v33; // [rsp+70h] [rbp-A8h]
  __int64 v34; // [rsp+78h] [rbp-A0h]
  PRKEVENT Event; // [rsp+80h] [rbp-98h]
  __int64 v36; // [rsp+88h] [rbp-90h]
  __int64 v37; // [rsp+90h] [rbp-88h]
  struct _DRIVER_OBJECT *v38; // [rsp+98h] [rbp-80h]
  __int64 v39; // [rsp+A0h] [rbp-78h]
  int v40; // [rsp+A8h] [rbp-70h]
  int v41; // [rsp+ACh] [rbp-6Ch]
  __int64 v42; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v43; // [rsp+B8h] [rbp-60h]
  __int64 v44; // [rsp+C0h] [rbp-58h]
  __int64 v45; // [rsp+C8h] [rbp-50h]
  int v46; // [rsp+D0h] [rbp-48h]
  int v47; // [rsp+D4h] [rbp-44h]
  __int64 v48; // [rsp+D8h] [rbp-40h]
  __int64 v49; // [rsp+E0h] [rbp-38h]
  IRP *v50; // [rsp+130h] [rbp+18h] BYREF

  v31 = 0;
  v32 = 0;
  v41 = 0;
  v43 = 0LL;
  v47 = 0;
  v15 = 0LL;
  v50 = 0LL;
  v28 = 0LL;
  v29 = 0;
  v30 = 1;
  v33 = BugCheckParameter2;
  v34 = 0LL;
  Event = 0LL;
  v36 = a3;
  v37 = a4;
  v16 = a5;
  v38 = a5;
  v17 = a6;
  v39 = a6;
  v18 = a7;
  v40 = a7;
  v42 = 0LL;
  v44 = a11;
  v45 = a12;
  v46 = a13;
  v48 = a14;
  v49 = 0LL;
  result = IopValidateAndGetWriteParameters(&v28, a2, a8, a9, a10);
  if ( (int)result >= 0 )
  {
    if ( !HIBYTE(v29) || !*(_QWORD *)(BugCheckParameter2 + 48) )
      goto LABEL_3;
    v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 8) + 80LL) + 24LL);
    if ( (MmVerifierData & 0x10) != 0 )
    {
      a5 = *(struct _DRIVER_OBJECT **)(v34 + 8);
      if ( MmIsDriverVerifying(a5) )
        v15 = (void *)VfFastIoSnapState(a5);
    }
    v27 = v17;
    v26 = v43;
    LOBYTE(v20) = 1;
    v22 = guard_dispatch_icall_no_overrides(BugCheckParameter2, &v42, v18, v20);
    if ( v15 )
      VfFastIoCheckState(v15, v21);
    if ( v22 )
    {
      CurrentThread = KeGetCurrentThread();
      ++CurrentThread->WriteOperationCount;
      __incgsdword(0x2EE0u);
      IopProcessUpdateTransferCount(0LL, 0, 0x3A0u, 0x3C0u);
      __addgsqword(0x2EF0u, v24);
      *(_OWORD *)&v16->Type = 0LL;
      v25 = Event;
      if ( Event )
      {
        if ( (*(_DWORD *)(BugCheckParameter2 + 80) & 0x8000000) == 0 )
        {
          KeSetEvent(Event, 0, 0);
          v25 = Event;
        }
        ObfDereferenceObject(v25);
      }
      IopReleaseFileObjectLock(BugCheckParameter2);
      ObfDereferenceObject((PVOID)BugCheckParameter2);
      return 0LL;
    }
    else
    {
LABEL_3:
      result = IopAllocateAndPopulateWriteIrp((__int64)&v28, &v50);
      if ( (int)result >= 0 )
      {
        LOBYTE(v27) = HIBYTE(v29);
        LOBYTE(v26) = v29;
        return IopSynchronousServiceTail(v34, v50, BugCheckParameter2, v30, v26, v27, 1);
      }
    }
  }
  return result;
}
