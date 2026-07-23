/*
 * XREFs of AlpcpInitSystem @ 0x14073FD1C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ExInitializePagedLookasideListInternal @ 0x1404541E0 (ExInitializePagedLookasideListInternal.c)
 *     ExInitializeNPagedLookasideList @ 0x140454990 (ExInitializeNPagedLookasideList.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AlpcpInitializeMessageLog @ 0x140740B60 (AlpcpInitializeMessageLog.c)
 *     ExCreateHandleTable @ 0x14094D1CC (ExCreateHandleTable.c)
 *     ObCreateObjectTypeEx @ 0x140A99090 (ObCreateObjectTypeEx.c)
 *     NtQuerySystemInformation @ 0x140AE28B0 (NtQuerySystemInformation.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 AlpcpInitSystem()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *Pool2; // rax
  NTSTATUS v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rdx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int16 Src; // [rsp+50h] [rbp-B0h] BYREF
  char v8; // [rsp+52h] [rbp-AEh]
  int v9; // [rsp+58h] [rbp-A8h]
  __int128 v10; // [rsp+5Ch] [rbp-A4h]
  int v11; // [rsp+6Ch] [rbp-94h]
  int v12; // [rsp+74h] [rbp-8Ch]
  int v13; // [rsp+78h] [rbp-88h]
  int v14; // [rsp+7Ch] [rbp-84h]
  __int64 (__fastcall *v15)(int, int, int, int, __int64); // [rsp+88h] [rbp-78h]
  __int64 (__fastcall *v16)(); // [rsp+90h] [rbp-70h]
  __int64 (__fastcall *v17)(); // [rsp+98h] [rbp-68h]
  _BYTE SystemInformation[8]; // [rsp+D0h] [rbp-30h] BYREF
  int v19; // [rsp+D8h] [rbp-28h]
  int v20; // [rsp+E8h] [rbp-18h]

  DestinationString = 0LL;
  memset_0(SystemInformation, 0, 0x40uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  Pool2 = (struct _KEVENT *)ExAllocatePool2(0x40uLL, 0x18uLL, 0x6E496C41u);
  AlpcpDummyEvent = (__int64)Pool2;
  if ( Pool2 )
  {
    KeInitializeEvent(Pool2, NotificationEvent, 1u);
    AlpcpPortListLock = 0LL;
    qword_140F0F5B8 = (__int64)&AlpcpPortList;
    AlpcpPortList = &AlpcpPortList;
    RtlInitUnicodeString(&DestinationString, L"ALPC Port");
    memset_0(&Src, 0, 0x78uLL);
    v13 = 0;
    v15 = AlpcpOpenPort;
    Src = 120;
    v16 = AlpcpClosePort;
    v12 = 512;
    v17 = AlpcpDeletePort;
    v14 = 504;
    v9 = 128;
    v8 = v8 & 0xCB | 0x10;
    v10 = AlpcpPortMapping;
    v11 = 2031617;
    v2 = ObCreateObjectTypeEx(&DestinationString, &Src, (__int64)&AlpcPortObjectType);
    if ( v2 >= 0 )
    {
      AlpcMessageTable = ExCreateHandleTable(0LL, 0LL);
      ExInitializePagedLookasideListInternal(
        (__int64)&AlpcpLookasides,
        (PVOID (__fastcall *)(int, SIZE_T, ULONG))AlpcpAllocateMessageFunction,
        (void (__stdcall *)(PVOID))AlpcpFreeMessageFunction,
        0,
        840,
        1934453825,
        32,
        0);
      ExInitializePagedLookasideListInternal(
        (__int64)&unk_140E271C0,
        (PVOID (__fastcall *)(int, SIZE_T, ULONG))AlpcpAllocateBuffer,
        (void (__stdcall *)(PVOID))PspUserApcKernelRoutine,
        0,
        128,
        1229155393,
        32,
        0);
      ExInitializePagedLookasideListInternal((__int64)&stru_140E27240, 0LL, 0LL, 0, 128, 1632136257, 32, 0);
      ExInitializeNPagedLookasideList(&AlpcpNPLookasides, 0LL, 0LL, 0x200u, 0x20uLL, 0x65536C41u, 0x20u);
      v2 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
      if ( v2 >= 0 )
      {
        AlpcpRegionGranularity = v20;
        AlpcpViewGranularity = v19;
      }
      if ( AlpcpMessageLogEnabled )
      {
        v3 = 4096LL;
        v4 = 0x8000LL;
      }
      else
      {
        v3 = 0LL;
        v4 = 0LL;
      }
      AlpcpInitializeMessageLog(v3, v4);
      AlpcpCompletionListDatabase = 0LL;
      qword_140F0F5D8 = (__int64)&qword_140F0F5D0;
      qword_140F0F5D0 = (__int64)&qword_140F0F5D0;
    }
  }
  else
  {
    v2 = -1073741670;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
