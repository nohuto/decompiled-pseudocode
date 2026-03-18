/*
 * XREFs of NtAlpcCreateSecurityContext @ 0x1408AFCC0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     AlpcpDeleteBlob @ 0x1408AF738 (AlpcpDeleteBlob.c)
 *     AlpcpCreateSecurityContext @ 0x1408AFF04 (AlpcpCreateSecurityContext.c)
 *     AlpcpDereferenceBlobEx @ 0x1408B27D0 (AlpcpDereferenceBlobEx.c)
 */

__int64 __fastcall NtAlpcCreateSecurityContext(HANDLE Handle, int a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v7; // rcx
  __m128i v8; // xmm1
  unsigned __int64 v9; // xmm1_8
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  NTSTATUS v12; // edi
  __int64 v13; // r8
  PVOID v14; // r14
  ULONG_PTR v15; // rbx
  PVOID Object; // [rsp+30h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-50h] BYREF
  __int128 v19; // [rsp+40h] [rbp-48h]
  __int64 v20; // [rsp+50h] [rbp-38h]
  __int64 v21; // [rsp+58h] [rbp-30h] BYREF
  int v22; // [rsp+60h] [rbp-28h]

  v19 = 0LL;
  LODWORD(v20) = 0;
  v21 = 0LL;
  v22 = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 )
  {
    v12 = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      if ( (a3 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v7 = 0x7FFFFFFF0000LL;
      if ( a3 < 0x7FFFFFFF0000LL )
        v7 = a3;
      *(_BYTE *)v7 = *(_BYTE *)v7;
      *(_BYTE *)(v7 + 23) = *(_BYTE *)(v7 + 23);
      v8 = *(__m128i *)a3;
      v20 = *(_QWORD *)(a3 + 16);
      v9 = _mm_srli_si128(v8, 8).m128i_u64[0];
      v10 = v9;
      if ( v9 )
      {
        v11 = v9;
        if ( v9 >= 0x7FFFFFFF0000LL )
          v11 = 0x7FFFFFFF0000LL;
        RtlCopyVolatileMemory(&v21, (const void *)v11, 0xCuLL);
      }
    }
    else
    {
      v10 = *(_QWORD *)(a3 + 8);
      if ( v10 )
      {
        v21 = *(_QWORD *)v10;
        v22 = *(_DWORD *)(v10 + 8);
      }
    }
    Object = 0LL;
    v12 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( v12 >= 0 )
    {
      if ( !v10 )
      {
        v21 = *(_QWORD *)((char *)Object + 260);
        v22 = *((_DWORD *)Object + 67);
      }
      LOBYTE(v13) = 1;
      v14 = Object;
      v12 = AlpcpCreateSecurityContext(Object, KeGetCurrentThread(), v13, &v21, &BugCheckParameter2);
      if ( v12 >= 0 )
      {
        v15 = BugCheckParameter2;
        *(_QWORD *)(a3 + 16) = *(_QWORD *)(BugCheckParameter2 + 8);
        AlpcpDereferenceBlobEx(v15);
      }
      ObfDereferenceObject(v14);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v12;
}
