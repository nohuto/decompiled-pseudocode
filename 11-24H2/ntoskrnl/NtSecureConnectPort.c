/*
 * XREFs of NtSecureConnectPort @ 0x140890D60
 * Callers:
 *     IopConnectLinkTrackingPort @ 0x14070F8C0 (IopConnectLinkTrackingPort.c)
 *     NtConnectPort @ 0x140A47F50 (NtConnectPort.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AlpcpLogConnectFail @ 0x140740728 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x14074079C (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x14074080C (AlpcpLogConnectSuccess.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     AlpcpCreateClientPort @ 0x140868FD0 (AlpcpCreateClientPort.c)
 *     SeCaptureSid @ 0x140869508 (SeCaptureSid.c)
 *     AlpcpDispatchConnectionRequest @ 0x14089032C (AlpcpDispatchConnectionRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x14089137C (AlpcpFormatConnectionRequest.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x140AC1D10 (AlpcpReceiveLegacyConnectionReply.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtSecureConnectPort(
        PHANDLE PortHandle,
        PUNICODE_STRING PortName,
        PSECURITY_QUALITY_OF_SERVICE SecurityQos,
        PPORT_VIEW ClientView,
        PSID RequiredServerSid,
        PREMOTE_PORT_VIEW ServerView,
        PULONG MaxMessageLength,
        PVOID ConnectionInformation,
        PULONG ConnectionInformationLength)
{
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  char v22; // r12
  NTSTATUS v23; // edi
  PVOID v24; // r15
  _DWORD *v25; // r15
  __int64 v26; // r13
  int v27; // r12d
  int v28; // eax
  int v29; // eax
  int v31; // [rsp+20h] [rbp-1A8h]
  unsigned __int64 v32; // [rsp+48h] [rbp-180h]
  char PreviousMode; // [rsp+60h] [rbp-168h]
  ULONG v34; // [rsp+64h] [rbp-164h] BYREF
  int v35; // [rsp+68h] [rbp-160h]
  PVOID P; // [rsp+70h] [rbp-158h] BYREF
  volatile void *Address; // [rsp+78h] [rbp-150h]
  PVOID Object; // [rsp+80h] [rbp-148h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-140h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-138h] BYREF
  __int64 v41; // [rsp+98h] [rbp-130h]
  ULONG_PTR v42; // [rsp+A0h] [rbp-128h] BYREF
  PHANDLE v43; // [rsp+A8h] [rbp-120h]
  PULONG v44; // [rsp+B0h] [rbp-118h]
  PULONG v45; // [rsp+B8h] [rbp-110h]
  __int128 v46; // [rsp+C0h] [rbp-108h] BYREF
  __int128 v47; // [rsp+D0h] [rbp-F8h]
  __int128 v48; // [rsp+E0h] [rbp-E8h]
  _REMOTE_PORT_VIEW v49; // [rsp+F0h] [rbp-D8h] BYREF
  _OWORD v50[2]; // [rsp+108h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+128h] [rbp-A0h]
  __int64 v52[6]; // [rsp+130h] [rbp-98h] BYREF
  int v53; // [rsp+160h] [rbp-68h]
  __int64 v54; // [rsp+170h] [rbp-58h] BYREF
  int v55; // [rsp+178h] [rbp-50h]

  v41 = (__int64)PortName;
  v43 = PortHandle;
  v44 = MaxMessageLength;
  v45 = ConnectionInformationLength;
  Address = ConnectionInformation;
  Object = 0LL;
  memset_0(v52, 0, 0x40uLL);
  Handle = 0LL;
  P = 0LL;
  v42 = 0LL;
  memset(v50, 0, sizeof(v50));
  v51 = 0LL;
  v34 = 0;
  v54 = 0LL;
  v55 = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  memset(&v49, 0, sizeof(v49));
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
    if ( ConnectionInformationLength )
      v34 = *ConnectionInformationLength;
    if ( ClientView )
    {
      v46 = *(_OWORD *)&ClientView->Length;
      v47 = *(_OWORD *)&ClientView->SectionOffset;
      v48 = *(_OWORD *)&ClientView->ViewBase;
    }
    if ( SecurityQos )
    {
      v54 = *(_QWORD *)&SecurityQos->Length;
      v55 = *(_DWORD *)&SecurityQos->ContextTrackingMode;
    }
    P = RequiredServerSid;
    v22 = 0;
LABEL_39:
    v32 = (unsigned __int64)&v54 & -(__int64)(SecurityQos != 0LL);
    v24 = P;
    v23 = AlpcpCreateClientPort((__int64 *)&Handle, &Object, 0, v41, 0LL, 0LL, 0LL, 0LL, (__int64)P, v32, 1);
    if ( v24 != RequiredServerSid && (unsigned __int8)v22 <= 1u )
      ExFreePoolWithTag(v24, 0);
    if ( v23 >= 0 )
    {
      LOWORD(v50[0]) = v34;
      v41 = (unsigned __int64)&v46 & -(__int64)(ClientView != 0LL);
      v25 = Object;
      v23 = AlpcpFormatConnectionRequest(
              (unsigned int)&v42,
              0,
              (_DWORD)Object,
              (_DWORD)Address,
              (__int64)v50,
              0LL,
              v41,
              (__int64)&BugCheckParameter2,
              1,
              v22);
      if ( v23 >= 0 )
      {
        v26 = v42;
        v27 = *(_DWORD *)(v42 + 264);
        if ( AlpcpLogEnabled )
          AlpcpLogConnectRequest(v42);
        v52[0] = (__int64)v25;
        v52[1] = v26;
        v53 = 0x20000;
        v28 = AlpcpDispatchConnectionRequest(v52);
        v23 = v28;
        if ( v28 < 0 )
        {
          if ( AlpcpLogEnabled )
            AlpcpLogConnectFail(v27, v28);
          AlpcpUnlockMessage(v26);
        }
        else
        {
          v29 = AlpcpReceiveLegacyConnectionReply(
                  (unsigned int)v52,
                  (_DWORD)Address,
                  (unsigned int)&v34,
                  BugCheckParameter2,
                  v41,
                  (unsigned __int64)&v49 & -(__int64)(ServerView != 0LL));
          v23 = v29;
          if ( v29 )
          {
            if ( AlpcpLogEnabled )
              AlpcpLogConnectFail(v27, v29);
          }
          else
          {
            if ( AlpcpLogEnabled )
              AlpcpLogConnectSuccess(v27);
            *v43 = Handle;
            if ( ClientView )
            {
              *(_OWORD *)&ClientView->Length = v46;
              *(_OWORD *)&ClientView->SectionOffset = v47;
              *(_OWORD *)&ClientView->ViewBase = v48;
            }
            if ( ServerView )
              *ServerView = v49;
            if ( v45 )
              *v45 = v34;
            if ( v44 )
              *v44 = v25[68];
          }
        }
      }
      ObfDereferenceObject(v25);
      if ( BugCheckParameter2 )
        AlpcpDereferenceBlobEx(BugCheckParameter2);
      if ( v23 )
        NtClose(Handle);
    }
    goto LABEL_60;
  }
  v14 = 0x7FFFFFFF0000LL;
  v15 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)v43 < 0x7FFFFFFF0000LL )
    v15 = (__int64)v43;
  *(_QWORD *)v15 = *(_QWORD *)v15;
  if ( ConnectionInformationLength )
  {
    v16 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ConnectionInformationLength < 0x7FFFFFFF0000LL )
      v16 = (__int64)ConnectionInformationLength;
    v34 = *(_DWORD *)v16;
    ProbeForWrite(Address, v34, 1u);
  }
  if ( ClientView )
  {
    v17 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ClientView < 0x7FFFFFFF0000LL )
      v17 = (__int64)ClientView;
    RtlCopyVolatileMemory(&v46, (const void *)v17, 0x30uLL);
    if ( (_DWORD)v46 != 48 )
    {
      v23 = -1073741811;
      v35 = -1073741811;
      goto LABEL_60;
    }
    if ( ((unsigned __int8)ClientView & 3) != 0 )
      goto LABEL_13;
    v18 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ClientView < 0x7FFFFFFF0000LL )
      v18 = (__int64)ClientView;
    *(_BYTE *)v18 = *(_BYTE *)v18;
    *(_BYTE *)(v18 + 47) = *(_BYTE *)(v18 + 47);
  }
  if ( ServerView )
  {
    v19 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ServerView < 0x7FFFFFFF0000LL )
      v19 = (__int64)ServerView;
    if ( *(_DWORD *)v19 != 24 )
    {
      v23 = -1073741811;
      v35 = -1073741811;
      goto LABEL_60;
    }
    if ( ((unsigned __int8)ServerView & 3) != 0 )
LABEL_13:
      ExRaiseDatatypeMisalignment();
    v20 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ServerView < 0x7FFFFFFF0000LL )
      v20 = (__int64)ServerView;
    *(_BYTE *)v20 = *(_BYTE *)v20;
    *(_BYTE *)(v20 + 23) = *(_BYTE *)(v20 + 23);
  }
  if ( v44 )
  {
    v21 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v44 < 0x7FFFFFFF0000LL )
      v21 = (__int64)v44;
    *(_DWORD *)v21 = *(_DWORD *)v21;
  }
  if ( SecurityQos )
  {
    if ( (unsigned __int64)SecurityQos < 0x7FFFFFFF0000LL )
      v14 = (__int64)SecurityQos;
    RtlCopyVolatileMemory(&v54, (const void *)v14, 0xCuLL);
  }
  P = RequiredServerSid;
  v22 = PreviousMode;
  if ( !RequiredServerSid )
    goto LABEL_39;
  v23 = SeCaptureSid(RequiredServerSid, PreviousMode, v11, v12, v31, 1, &P);
  v35 = v23;
  if ( v23 >= 0 )
    goto LABEL_39;
LABEL_60:
  KeLeaveCriticalRegion();
  return v23;
}
