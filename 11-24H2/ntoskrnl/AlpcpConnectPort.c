/*
 * XREFs of AlpcpConnectPort @ 0x140868BB0
 * Callers:
 *     NtAlpcConnectPortEx @ 0x1408670E0 (NtAlpcConnectPortEx.c)
 *     NtAlpcConnectPort @ 0x140868460 (NtAlpcConnectPort.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     AlpcpProcessConnectionRequest @ 0x140867F3C (AlpcpProcessConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x140868FD0 (AlpcpCreateClientPort.c)
 *     SeCaptureSid @ 0x140869508 (SeCaptureSid.c)
 *     SeCaptureSecurityDescriptor @ 0x1409108D0 (SeCaptureSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcpConnectPort(
        HANDLE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *Src,
        int a6,
        PVOID a7,
        PVOID a8,
        char *a9,
        unsigned __int64 *a10,
        __int64 a11,
        int *a12,
        __int64 *a13)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  unsigned int v16; // r13d
  __int64 v17; // rdx
  __int64 v18; // rcx
  int ClientPort; // ebx
  _QWORD *v21; // rdi
  int v22; // [rsp+20h] [rbp-158h]
  PVOID Object[3]; // [rsp+68h] [rbp-110h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-F8h] BYREF
  PVOID P; // [rsp+88h] [rbp-F0h] BYREF
  PVOID v26; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v27; // [rsp+98h] [rbp-E0h]
  __int64 v28; // [rsp+A0h] [rbp-D8h]
  __int64 v29; // [rsp+A8h] [rbp-D0h]
  __int64 *v30; // [rsp+B0h] [rbp-C8h]
  int *v31; // [rsp+B8h] [rbp-C0h]
  __int64 v32; // [rsp+C0h] [rbp-B8h]
  unsigned __int64 *v33; // [rsp+C8h] [rbp-B0h]
  char *v34; // [rsp+D0h] [rbp-A8h]
  HANDLE *v35; // [rsp+D8h] [rbp-A0h]
  _OWORD v36[4]; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v37; // [rsp+120h] [rbp-58h]

  v27 = a4;
  v28 = a3;
  v29 = a2;
  v35 = a1;
  Object[1] = a7;
  Object[2] = a8;
  v34 = a9;
  v33 = a10;
  v32 = a11;
  v31 = a12;
  v30 = a13;
  Object[0] = 0LL;
  Handle = 0LL;
  memset_0(v36, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v16 = a6 & 0xFFFF0000;
  P = a8;
  v26 = a7;
  if ( !PreviousMode )
  {
    if ( Src )
    {
      v36[0] = *Src;
      v36[1] = Src[1];
      v36[2] = Src[2];
      v36[3] = Src[3];
      v37 = *((_QWORD *)Src + 8);
    }
    goto LABEL_14;
  }
  v17 = 0x7FFFFFFF0000LL;
  v18 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v18 = (__int64)a1;
  *(_QWORD *)v18 = *(_QWORD *)v18;
  if ( Src )
  {
    if ( (unsigned __int64)Src < 0x7FFFFFFF0000LL )
      v17 = (__int64)Src;
    RtlCopyVolatileMemory(v36, (const void *)v17, 0x48uLL);
  }
  if ( !a8 || (ClientPort = SeCaptureSid(a8, v22, 1, (__int64)&P), ClientPort >= 0) )
  {
    if ( !a7
      || (LOBYTE(v17) = PreviousMode,
          ClientPort = SeCaptureSecurityDescriptor((_DWORD)a7, v17, 1, 0, (__int64)&v26),
          ClientPort >= 0) )
    {
LABEL_14:
      ClientPort = AlpcpCreateClientPort(
                     (unsigned int)&Handle,
                     (unsigned int)Object,
                     v16,
                     v29,
                     v28,
                     v27,
                     (unsigned __int64)v36 & -(__int64)(Src != 0LL),
                     (__int64)v26,
                     (__int64)P,
                     0LL,
                     0);
      if ( ClientPort >= 0 )
      {
        v21 = Object[0];
        ClientPort = AlpcpProcessConnectionRequest((__int64)Object[0], v16, v34, v33, v32, v31, v30, PreviousMode);
        if ( ClientPort == -1073741759 && (v21[52] & 0x100) != 0 )
          *a1 = (HANDLE)v21[7];
        if ( !ClientPort )
          *a1 = Handle;
        ObfDereferenceObject(v21);
        if ( ClientPort )
          NtClose(Handle);
      }
    }
  }
  if ( P && (unsigned __int8)PreviousMode <= 1u && P != a8 )
    ExFreePoolWithTag(P, 0);
  if ( v26 && PreviousMode == 1 && v26 != a7 )
    ExFreePoolWithTag(v26, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)ClientPort;
}
