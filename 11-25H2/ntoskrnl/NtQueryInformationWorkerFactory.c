/*
 * XREFs of NtQueryInformationWorkerFactory @ 0x1404CD1F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExSystemExceptionFilter @ 0x1407A7AE0 (ExSystemExceptionFilter.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall NtQueryInformationWorkerFactory(HANDLE Handle, int a2, unsigned __int64 a3, int a4, _DWORD *a5)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  char *v12; // rbx
  __int64 v13; // rdx
  int v14; // ecx
  PVOID Object; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v16; // [rsp+50h] [rbp-A8h]
  __int128 v17; // [rsp+60h] [rbp-98h]
  __int128 v18; // [rsp+70h] [rbp-88h]
  __int128 v19; // [rsp+80h] [rbp-78h]
  __int128 v20; // [rsp+90h] [rbp-68h]
  __int128 v21; // [rsp+A0h] [rbp-58h]
  __int64 v22; // [rsp+B0h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 != 7 )
    return -1073741821;
  if ( PreviousMode )
  {
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = 0x7FFFFFFF0000LL;
    v11 = 0x7FFFFFFF0000LL;
    if ( a3 < 0x7FFFFFFF0000LL )
      v11 = a3;
    *(_BYTE *)v11 = *(_BYTE *)v11;
    *(_BYTE *)(v11 + 119) = *(_BYTE *)(v11 + 119);
    if ( a5 )
    {
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v10 = (__int64)a5;
      *(_DWORD *)v10 = 120;
    }
  }
  else if ( a5 )
  {
    *a5 = 120;
  }
  if ( a4 != 120 )
    return -1073741820;
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 8u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    HIBYTE(v16) = 0;
    HIDWORD(v18) = 0;
    HIDWORD(v22) = 0;
    v12 = (char *)Object;
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), &LockHandle);
    *(_QWORD *)&v16 = *((_QWORD *)v12 + 14);
    WORD4(v16) = 0;
    BYTE10(v16) = (v12[408] & 8) != 0;
    v13 = *((_QWORD *)v12 + 2);
    v14 = *(_DWORD *)(v13 + 28);
    BYTE11(v16) = v14 == 0;
    BYTE12(v16) = *((_DWORD *)v12 + 100) != 0;
    *(_WORD *)((char *)&v16 + 13) = *(_WORD *)(v13 + 32);
    LODWORD(v17) = *((_DWORD *)v12 + 101);
    *(_QWORD *)((char *)&v17 + 4) = *((_QWORD *)v12 + 47);
    HIDWORD(v17) = *((_DWORD *)v12 + 98);
    LODWORD(v18) = v14;
    DWORD1(v18) = *((_DWORD *)v12 + 97);
    DWORD2(v18) = *(_DWORD *)(v13 + 24);
    *(_QWORD *)&v19 = 0LL;
    *((_QWORD *)&v19 + 1) = *((_QWORD *)v12 + 3);
    *(_QWORD *)&v20 = *((_QWORD *)v12 + 4);
    *((_QWORD *)&v20 + 1) = *(_QWORD *)(*((_QWORD *)v12 + 6) + 464LL);
    v21 = *(_OWORD *)(v12 + 56);
    LODWORD(v22) = *((_DWORD *)v12 + 104);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ObfDereferenceObjectWithTag(v12, 0x746C6644u);
    *(_OWORD *)a3 = 0LL;
    *(_OWORD *)(a3 + 16) = v16;
    *(_OWORD *)(a3 + 32) = v17;
    *(_OWORD *)(a3 + 48) = v18;
    *(_OWORD *)(a3 + 64) = v19;
    *(_OWORD *)(a3 + 80) = v20;
    *(_OWORD *)(a3 + 96) = v21;
    *(_QWORD *)(a3 + 112) = v22;
    return 0;
  }
  return result;
}
