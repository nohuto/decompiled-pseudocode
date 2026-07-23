/*
 * XREFs of NtAlpcQueryInformation @ 0x140994E70
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     AlpcpPortQueryServerInfo @ 0x140740094 (AlpcpPortQueryServerInfo.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408BEAA0 (ExRaiseAccessViolation.c)
 *     AlpcpPortQueryBasicInfo @ 0x140995090 (AlpcpPortQueryBasicInfo.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1409950F4 (AlpcpPortQueryConnectedSidInfo.c)
 *     AlpcpWaitForPortReferences @ 0x140995308 (AlpcpWaitForPortReferences.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x1409953FC (AlpcpPortQueryServerSessionInfo.c)
 */

NTSTATUS __cdecl NtAlpcQueryInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  PVOID v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r13
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned int *v13; // rsi
  PVOID v14; // rbx
  int v15; // r14d
  NTSTATUS ServerSessionInfo; // eax
  __int32 v18; // r15d
  __int32 v19; // r15d
  __int32 v20; // r15d
  int Object; // [rsp+20h] [rbp-38h]
  PVOID v22; // [rsp+70h] [rbp+18h] BYREF

  v6 = PortInformation;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !PortInformation )
  {
    v15 = -1073741811;
    goto LABEL_24;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((PortInformationClass - 3) & 0xFFFFFFF7) != 0 && Length )
    {
      v10 = (unsigned __int64)PortInformation;
      if ( ((unsigned __int8)PortInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = (unsigned __int64)PortInformation + Length - 1;
      if ( (unsigned __int64)PortInformation > v11
        || (PortInformation = (PVOID)0x7FFFFFFF0000LL, v11 >= 0x7FFFFFFF0000LL) )
      {
        ExRaiseAccessViolation();
      }
      v12 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v10 = *(_BYTE *)v10;
        v10 = (v10 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v10 != v12 );
    }
    else
    {
      PortInformation = (PVOID)0x7FFFFFFF0000LL;
    }
    v13 = ReturnLength;
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        PortInformation = ReturnLength;
      *(_DWORD *)PortInformation = *(_DWORD *)PortInformation;
    }
  }
  else
  {
    v13 = ReturnLength;
  }
  v14 = 0LL;
  if ( !PortHandle
    || (v22 = 0LL,
        v15 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &v22, 0LL),
        v14 = v22,
        v15 >= 0) )
  {
    if ( PortInformationClass )
    {
      v18 = PortInformationClass - 3;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 7;
          if ( v20 )
          {
            if ( v20 != 1 )
            {
              v15 = -1073741811;
LABEL_22:
              if ( v14 )
                ObfDereferenceObject(v14);
              goto LABEL_24;
            }
            ServerSessionInfo = AlpcpPortQueryServerSessionInfo(v14, v6, Length, v13);
          }
          else
          {
            ServerSessionInfo = AlpcpWaitForPortReferences((_DWORD)v14, (_DWORD)v6, Length, (_DWORD)v13, PreviousMode);
          }
        }
        else
        {
          ServerSessionInfo = AlpcpPortQueryServerInfo((__int64)v14, (__int64)v6, Length, v13, PreviousMode);
        }
      }
      else
      {
        LOBYTE(Object) = PreviousMode;
        ServerSessionInfo = AlpcpPortQueryConnectedSidInfo(v14, v6, PortInformation, v13, Object);
      }
    }
    else
    {
      ServerSessionInfo = AlpcpPortQueryBasicInfo(v14, v6, Length, v13);
    }
    v15 = ServerSessionInfo;
    goto LABEL_22;
  }
LABEL_24:
  KeLeaveCriticalRegionThread();
  return v15;
}
