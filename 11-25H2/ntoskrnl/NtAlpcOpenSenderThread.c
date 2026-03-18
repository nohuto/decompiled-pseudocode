/*
 * XREFs of NtAlpcOpenSenderThread @ 0x1409CCE90
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
 *     PsOpenThread @ 0x1408430F0 (PsOpenThread.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x1408AAFC0 (AlpcpLookupMessage.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1409CD120 (AlpcpProbeAndCaptureMessageHeader.c)
 */

__int64 __fastcall NtAlpcOpenSenderThread(_QWORD *a1, void *a2, __int128 *a3, __int64 a4, int a5, __int128 *Src)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r15
  int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rcx
  PVOID v14; // rdi
  ULONG_PTR v15; // rbx
  _QWORD *v16; // rsi
  __int64 v17; // rax
  PVOID Object; // [rsp+30h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-70h] BYREF
  HANDLE v21; // [rsp+40h] [rbp-68h] BYREF
  __int128 v22; // [rsp+48h] [rbp-60h] BYREF
  __int128 v23; // [rsp+58h] [rbp-50h]
  __int64 v24; // [rsp+68h] [rbp-40h]
  __int128 v25; // [rsp+70h] [rbp-38h] BYREF
  __int128 v26; // [rsp+80h] [rbp-28h]
  __int128 v27; // [rsp+90h] [rbp-18h]

  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  *(_QWORD *)&v27 = 0LL;
  DWORD2(v27) = 0;
  v21 = 0LL;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(a2, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v10 >= 0 )
  {
    if ( PreviousMode )
    {
      v12 = 0x7FFFFFFF0000LL;
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
        v13 = (__int64)a1;
      *(_QWORD *)v13 = *(_QWORD *)v13;
      AlpcpProbeAndCaptureMessageHeader(a3, &v22);
      if ( (unsigned __int64)Src < 0x7FFFFFFF0000LL )
        v12 = (__int64)Src;
      RtlCopyVolatileMemory(&v25, (const void *)v12, 0x30uLL);
    }
    else
    {
      v22 = *a3;
      v23 = a3[1];
      v24 = *((_QWORD *)a3 + 4);
      v25 = *Src;
      v26 = Src[1];
      v27 = Src[2];
    }
    v14 = Object;
    v10 = AlpcpLookupMessage((__int64)Object, DWORD2(v23), v24, v11, &BugCheckParameter2);
    if ( v10 < 0 )
    {
      ObfDereferenceObject(v14);
    }
    else
    {
      v15 = BugCheckParameter2;
      if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) != 0 )
      {
        AlpcpUnlockMessage(BugCheckParameter2);
        ObfDereferenceObject(v14);
        v10 = -1073740029;
      }
      else
      {
        v16 = *(_QWORD **)(BugCheckParameter2 + 32);
        if ( !v16 )
          goto LABEL_18;
        v17 = v16[161] - *((_QWORD *)&v22 + 1);
        if ( !v17 )
          v17 = v16[162] - v23;
        if ( v17 )
        {
LABEL_18:
          AlpcpUnlockMessage(BugCheckParameter2);
          ObfDereferenceObject(v14);
          v10 = -1073741790;
        }
        else
        {
          PsReferenceSiloContext(*(void **)(BugCheckParameter2 + 32));
          AlpcpUnlockMessage(v15);
          v10 = PsOpenThread(&v21, a5, (__int64)&v25, (__int128 *)((char *)&v22 + 8), 0, PreviousMode);
          ObfDereferenceObject(v16);
          ObfDereferenceObject(v14);
          if ( v10 >= 0 )
            *a1 = v21;
        }
      }
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v10;
}
