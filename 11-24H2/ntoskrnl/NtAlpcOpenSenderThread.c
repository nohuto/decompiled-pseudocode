/*
 * XREFs of NtAlpcOpenSenderThread @ 0x14093C960
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     RtlCopyVolatileMemory @ 0x1406B5CF0 (RtlCopyVolatileMemory.c)
 *     PsOpenThread @ 0x14083F680 (PsOpenThread.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     AlpcpUnlockMessage @ 0x140898D70 (AlpcpUnlockMessage.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14093C880 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpLookupMessage @ 0x14093E7E0 (AlpcpLookupMessage.c)
 */

__int64 __fastcall NtAlpcOpenSenderThread(_QWORD *a1, void *a2, unsigned __int64 a3, int a4, int a5, __int128 *Src)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r15
  int v11; // ebx
  int v12; // r9d
  __int64 v13; // rbx
  __int64 v14; // rcx
  PVOID v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  ULONG_PTR v19; // rbx
  _QWORD *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  PVOID Object; // [rsp+30h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-70h] BYREF
  __int64 v28; // [rsp+40h] [rbp-68h] BYREF
  __int128 v29; // [rsp+48h] [rbp-60h] BYREF
  __int128 v30; // [rsp+58h] [rbp-50h]
  __int64 v31; // [rsp+68h] [rbp-40h]
  __int128 v32; // [rsp+70h] [rbp-38h] BYREF
  __int128 v33; // [rsp+80h] [rbp-28h]
  __int128 v34; // [rsp+90h] [rbp-18h]

  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  *(_QWORD *)&v34 = 0LL;
  DWORD2(v34) = 0;
  v28 = 0LL;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(a2, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    if ( PreviousMode )
    {
      v13 = 0x7FFFFFFF0000LL;
      v14 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
        v14 = (__int64)a1;
      *(_QWORD *)v14 = *(_QWORD *)v14;
      AlpcpProbeAndCaptureMessageHeader(a3, &v29, a4);
      if ( (unsigned __int64)Src < 0x7FFFFFFF0000LL )
        v13 = (__int64)Src;
      RtlCopyVolatileMemory(&v32, (const void *)v13, 0x30uLL);
    }
    else
    {
      v29 = *(_OWORD *)a3;
      v30 = *(_OWORD *)(a3 + 16);
      v31 = *(_QWORD *)(a3 + 32);
      v32 = *Src;
      v33 = Src[1];
      v34 = Src[2];
    }
    v15 = Object;
    v11 = AlpcpLookupMessage((_DWORD)Object, DWORD2(v30), v31, v12, (__int64)&BugCheckParameter2);
    if ( v11 < 0 )
    {
      ObfDereferenceObject(v15);
    }
    else
    {
      v19 = BugCheckParameter2;
      if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) != 0 )
      {
        AlpcpUnlockMessage(BugCheckParameter2, v16, v17, v18);
        ObfDereferenceObject(v15);
        v11 = -1073740029;
      }
      else
      {
        v20 = *(_QWORD **)(BugCheckParameter2 + 32);
        if ( !v20 )
          goto LABEL_18;
        v21 = v20[161] - *((_QWORD *)&v29 + 1);
        if ( !v21 )
          v21 = v20[162] - v30;
        if ( v21 )
        {
LABEL_18:
          AlpcpUnlockMessage(BugCheckParameter2, v16, v17, v18);
          ObfDereferenceObject(v15);
          v11 = -1073741790;
        }
        else
        {
          PsReferenceSiloContext(*(void **)(BugCheckParameter2 + 32));
          AlpcpUnlockMessage(v19, v22, v23, v24);
          v11 = PsOpenThread((unsigned __int64)&v28, a5, (__int64)&v32, (__int128 *)((char *)&v29 + 8), 0, PreviousMode);
          ObfDereferenceObject(v20);
          ObfDereferenceObject(v15);
          if ( v11 >= 0 )
            *a1 = v28;
        }
      }
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v11;
}
