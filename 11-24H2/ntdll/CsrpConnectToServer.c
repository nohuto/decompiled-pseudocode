/*
 * XREFs of CsrpConnectToServer @ 0x1800243D4
 * Callers:
 *     CsrClientConnectToServer @ 0x180023B90 (CsrClientConnectToServer.c)
 * Callees:
 *     RtlpCreateHeap @ 0x1800248B0 (RtlpCreateHeap.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180160550 (ZwMapViewOfSection.c)
 *     NtOpenSection @ 0x180160730 (NtOpenSection.c)
 *     NtCreateSection @ 0x180160990 (NtCreateSection.c)
 *     ZwConnectPort @ 0x1801614C0 (ZwConnectPort.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall CsrpConnectToServer(_WORD *Src, int a2, _QWORD *a3, int a4, _DWORD *a5)
{
  __int64 v9; // rax
  size_t v10; // rdi
  SIZE_T v11; // r8
  wchar_t *Heap; // rax
  wchar_t *v14; // rbx
  size_t v15; // rbx
  NTSTATUS v16; // edi
  NTSTATUS v17; // ebx
  HANDLE v18; // rcx
  struct _PEB *v19; // rcx
  HANDLE v20; // rcx
  HANDLE SectionHandle; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ConnectionInformationLength; // [rsp+58h] [rbp-A8h] BYREF
  ULONG MaxMessageLength; // [rsp+5Ch] [rbp-A4h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-90h] BYREF
  _PORT_VIEW ClientView; // [rsp+78h] [rbp-88h] BYREF
  _REMOTE_PORT_VIEW ServerView; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR ViewSize; // [rsp+C0h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-38h] BYREF
  __int128 ConnectionInformation; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v32; // [rsp+108h] [rbp+8h]
  __int128 v33; // [rsp+118h] [rbp+18h]
  _DWORD v34[14]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v35; // [rsp+168h] [rbp+68h]
  SIZE_T v36; // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v37)(); // [rsp+178h] [rbp+78h]
  _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+190h] [rbp+90h] BYREF

  *(_QWORD *)&SecurityQos.Length = 0LL;
  MaxMessageLength = 0;
  ConnectionInformationLength = 0;
  *(_DWORD *)&SecurityQos.ContextTrackingMode = 0;
  Handle = 0LL;
  v34[1] = 0;
  memset(&ServerView, 0, 20);
  ConnectionInformation = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  memset(&ClientView, 0, 44);
  memset_thunk_772440563353939046(v34, 0, 0x5CuLL);
  SectionHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  if ( !Src )
    return 3221225485LL;
  v9 = -1LL;
  do
    ++v9;
  while ( Src[v9] );
  v10 = v9;
  v11 = 2 * v9 + 28;
  if ( v11 > 0xFFFF )
    return 3221225734LL;
  CsrPortName.MaximumLength = 2 * v9 + 28;
  Heap = (wchar_t *)RtlAllocateHeap(CsrHeap, NtdllBaseTag, v11);
  CsrPortName.Buffer = Heap;
  v14 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memmove(Heap, Src, v10 * 2);
  v14[v10] = 92;
  v15 = (size_t)&v14[v10 + 1];
  *(_OWORD *)v15 = *(_OWORD *)L"SharedSection";
  *(_QWORD *)(v15 + 16) = *(_QWORD *)L"ction";
  *(_WORD *)(v15 + 24) = aSharedsection[12];
  ObjectAttributes.Length = 48;
  CsrPortName.Length = v15 - LOWORD(CsrPortName.Buffer) + 26;
  ObjectAttributes.ObjectName = &CsrPortName;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v16 = NtOpenSection(&SectionHandle, 4u, &ObjectAttributes);
  if ( v16 >= 0 )
  {
    *(_QWORD *)v15 = *(_QWORD *)L"ApiPort";
    *(_DWORD *)(v15 + 8) = *(_DWORD *)L"ort";
    *(_WORD *)(v15 + 12) = aApiport[6];
    CsrPortName.Length = v15 - LOWORD(CsrPortName.Buffer) + 14;
    SecurityQos.ImpersonationLevel = SecurityImpersonation;
    *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
    MaximumSize.QuadPart = 0x10000LL;
    v17 = NtCreateSection(&Handle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
    if ( v17 < 0 )
      goto LABEL_24;
    ClientView.SectionHandle = Handle;
    ClientView.ViewSize = MaximumSize.LowPart;
    ClientView.Length = 48;
    ClientView.SectionOffset = 0;
    ServerView.Length = 24;
    ServerView.ViewSize = 0LL;
    ServerView.ViewBase = 0LL;
    ConnectionInformationLength = 48;
    *(_OWORD *)&ClientView.ViewBase = 0LL;
    if ( a4 != 8 )
      goto LABEL_16;
    if ( a2 == 1 )
    {
      *((_QWORD *)&v33 + 1) = *a3;
      LODWORD(v33) = 1;
    }
    else
    {
LABEL_16:
      DWORD1(v33) = -1073741811;
    }
    v17 = ZwConnectPort(
            &CsrPortHandle,
            &CsrPortName,
            &SecurityQos,
            &ClientView,
            &ServerView,
            &MaxMessageLength,
            &ConnectionInformation,
            &ConnectionInformationLength);
    NtClose(Handle);
    if ( v17 < 0 )
    {
LABEL_24:
      v20 = SectionHandle;
    }
    else
    {
      v18 = SectionHandle;
      *a5 = DWORD1(v33);
      v17 = ZwMapViewOfSection(
              v18,
              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
              &BaseAddress,
              0LL,
              0LL,
              0LL,
              &ViewSize,
              ViewUnmap,
              0x500000u,
              2u);
      NtClose(SectionHandle);
      SectionHandle = 0LL;
      if ( v17 >= 0 )
      {
        v19 = NtCurrentPeb();
        v19->CsrServerReadOnlySharedMemoryBase = ConnectionInformation;
        v19->ReadOnlySharedMemoryBase = BaseAddress;
        v19->ReadOnlyStaticServerData = (void **)((char *)BaseAddress
                                                + *((_QWORD *)&ConnectionInformation + 1)
                                                - ConnectionInformation);
        CsrProcessId = v32;
        CsrPortMemoryRemoteDelta = (char *)ClientView.ViewRemoteBase - (char *)ClientView.ViewBase;
        memset_thunk_772440563353939046(v34, 0, 0x60uLL);
        v37 = WinSqmCheckEscalationSetString;
        v34[0] = 96;
        v35 = 4096LL;
        v36 = ClientView.ViewSize;
        CsrPortHeap = (PVOID)RtlpCreateHeap(0x8000, ClientView.ViewBase, ClientView.ViewSize, 1, 0LL, (__int64)v34, 0);
        if ( CsrPortHeap )
        {
          CsrPortBaseTag = 0;
          return 0LL;
        }
        v17 = -1073741801;
      }
      NtClose(CsrPortHandle);
      v20 = SectionHandle;
      CsrPortHandle = 0LL;
      if ( !SectionHandle )
        goto LABEL_21;
    }
    NtClose(v20);
LABEL_21:
    RtlFreeHeap(CsrHeap, 0, CsrPortName.Buffer);
    return (unsigned int)v17;
  }
  RtlFreeHeap(CsrHeap, 0, CsrPortName.Buffer);
  return (unsigned int)v16;
}
