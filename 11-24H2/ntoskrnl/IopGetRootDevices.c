/*
 * XREFs of IopGetRootDevices @ 0x140A5ADB8
 * Callers:
 *     IopPnPDispatch @ 0x140A55010 (IopPnPDispatch.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x140A163D4 (_CmGetMatchingFilteredDeviceList.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A5AFD8 (IopInitializeDeviceInstanceKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetRootDevices(_QWORD *a1)
{
  void *Pool2; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int inited; // ebx
  unsigned int v5; // edi
  __int64 v6; // rax
  const WCHAR *i; // rdi
  __int64 v8; // rdi
  _DWORD *v10; // rax
  _DWORD *v11; // r14
  PVOID *v12; // r14
  int MatchingFilteredDeviceList; // eax
  PVOID v14; // rdx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  int v16; // [rsp+60h] [rbp-20h]
  __int64 v17; // [rsp+64h] [rbp-1Ch]
  int v18; // [rsp+6Ch] [rbp-14h]
  PVOID P; // [rsp+70h] [rbp-10h]
  unsigned int v20; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+48h] BYREF

  *a1 = 0LL;
  v16 = 0;
  v18 = 0;
  Handle = 0LL;
  Pool2 = 0LL;
  DestinationString = 0LL;
  P = (PVOID)ExAllocatePool2(0x100uLL, 0x400uLL, 0x64647050u);
  if ( !P )
    return 3221225626LL;
  CurrentThread = KeGetCurrentThread();
  v17 = 128LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v20 = 2048;
  inited = -1073741789;
  v5 = 0;
  do
  {
    if ( v5 >= 5 )
      goto LABEL_18;
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = (void *)ExAllocatePool2(0x100uLL, 2LL * v20, 0x64647050u);
    if ( !Pool2 )
    {
      inited = -1073741670;
      goto LABEL_18;
    }
    MatchingFilteredDeviceList = CmGetMatchingFilteredDeviceList(
                                   *(__int64 *)&PiPnpRtlCtx,
                                   (__int64)L"Root",
                                   1,
                                   0LL,
                                   0LL,
                                   (__int64)Pool2,
                                   v20,
                                   (__int64)&v20);
    ++v5;
    inited = MatchingFilteredDeviceList;
  }
  while ( MatchingFilteredDeviceList == -1073741789 );
  if ( MatchingFilteredDeviceList < 0 )
    goto LABEL_18;
  for ( i = (const WCHAR *)Pool2; *i; i += v6 + 1 )
  {
    inited = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)i, 16, 0, 983103, 0, (__int64)&Handle, 0LL);
    if ( inited < 0 )
      goto LABEL_16;
    inited = RtlInitUnicodeStringEx(&DestinationString, i);
    if ( inited >= 0 && !(unsigned int)IopInitializeDeviceInstanceKey(Handle, &DestinationString) )
    {
      ZwClose(Handle);
      break;
    }
    ZwClose(Handle);
    if ( inited < 0 )
      goto LABEL_16;
    v6 = -1LL;
    do
      ++v6;
    while ( i[v6] );
  }
  inited = v16;
  if ( v16 < 0 )
  {
LABEL_16:
    v8 = HIDWORD(v17);
    if ( HIDWORD(v17) )
    {
      if ( inited >= 0 )
        goto LABEL_18;
      goto LABEL_27;
    }
LABEL_26:
    inited = -1073741823;
    goto LABEL_27;
  }
  v8 = HIDWORD(v17);
  if ( !HIDWORD(v17) )
    goto LABEL_26;
  v10 = (_DWORD *)ExAllocatePool2(0x100uLL, 8LL * HIDWORD(v17) + 16, 0x64647050u);
  v11 = v10;
  if ( v10 )
  {
    v14 = P;
    *v10 = v8;
    memmove(v10 + 2, v14, 8 * v8);
    *a1 = v11;
    goto LABEL_18;
  }
  inited = -1073741670;
LABEL_27:
  if ( (_DWORD)v8 )
  {
    v12 = (PVOID *)P;
    do
    {
      ObfDereferenceObject(*v12++);
      --v8;
    }
    while ( v8 );
  }
LABEL_18:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  ExFreePoolWithTag(P, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)inited;
}
