/*
 * XREFs of PnpDeleteDeviceInterfaces @ 0x140981CA4
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x14097F7D4 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     PnpUnicodeStringToWstrFree @ 0x140956510 (PnpUnicodeStringToWstrFree.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1409A013C (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     _CmDeleteDeviceInterface @ 0x140AB7998 (_CmDeleteDeviceInterface.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpDeleteDeviceInterfaces(unsigned __int16 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v3; // rbp
  WCHAR *v4; // rsi
  __int64 v5; // r8
  _WORD *v6; // rcx
  unsigned __int64 v7; // rdx
  void *Pool2; // rax
  void *v9; // rbx
  _WORD *v10; // rax
  NTSTATUS MatchingFilteredDeviceInterfaceList; // ebx
  unsigned int i; // r15d
  const WCHAR *v13; // rdi
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-38h] BYREF
  int v16; // [rsp+98h] [rbp+10h] BYREF

  v16 = 0;
  DestinationString = 0LL;
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  if ( !a1 )
    goto LABEL_32;
  v5 = a1[1];
  if ( (unsigned __int16)v5 < 2u )
    goto LABEL_18;
  v6 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( !v6 )
    goto LABEL_18;
  v7 = *a1;
  if ( (unsigned __int16)v7 > (unsigned __int16)v5 )
  {
LABEL_32:
    MatchingFilteredDeviceInterfaceList = -1073741811;
    goto LABEL_33;
  }
  if ( (_WORD)v7 )
  {
    if ( !*v6
      || (_WORD)v7 == (_WORD)v5 && !v6[((unsigned __int64)*a1 >> 1) - 1]
      || v7 <= v5 - 2 && (!v6[(v7 >> 1) - 1] || !v6[v7 >> 1]) )
    {
      goto LABEL_12;
    }
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    v9 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, *((const void **)a1 + 1), *a1);
      v3 = v9;
      *((_WORD *)v9 + ((unsigned __int64)*a1 >> 1)) = 0;
      goto LABEL_18;
    }
LABEL_25:
    MatchingFilteredDeviceInterfaceList = -1073741670;
    goto LABEL_33;
  }
  if ( !*v6 )
  {
LABEL_12:
    v3 = (void *)*((_QWORD *)a1 + 1);
    goto LABEL_18;
  }
  v10 = (_WORD *)ExAllocatePool2(0x100uLL);
  if ( !v10 )
    goto LABEL_25;
  *v10 = 0;
  v3 = v10;
LABEL_18:
  v16 = 4096;
  MatchingFilteredDeviceInterfaceList = -1073741789;
  for ( i = 0; ; ++i )
  {
    v13 = v4;
    if ( MatchingFilteredDeviceInterfaceList != -1073741789 )
      break;
    if ( i >= 5 )
      goto LABEL_33;
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    v4 = (WCHAR *)ExAllocatePool2(0x100uLL);
    if ( !v4 )
      goto LABEL_25;
    MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                            PiPnpRtlCtx,
                                            0,
                                            (_DWORD)v3,
                                            0,
                                            0LL,
                                            0LL,
                                            (__int64)v4,
                                            v16,
                                            (__int64)&v16,
                                            0);
  }
  if ( MatchingFilteredDeviceInterfaceList >= 0 && *v4 )
  {
    do
    {
      MatchingFilteredDeviceInterfaceList = RtlInitUnicodeStringEx(&DestinationString, v13);
      if ( MatchingFilteredDeviceInterfaceList >= 0 )
        CmDeleteDeviceInterface(*(_QWORD *)&PiPnpRtlCtx, DestinationString.Buffer, 0LL);
      v13 += ((unsigned __int64)DestinationString.Length + 2) >> 1;
    }
    while ( *v13 );
  }
LABEL_33:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  PnpUnicodeStringToWstrFree(v3, (__int64)a1);
  return (unsigned int)MatchingFilteredDeviceInterfaceList;
}
