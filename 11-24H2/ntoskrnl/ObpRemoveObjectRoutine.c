/*
 * XREFs of ObpRemoveObjectRoutine @ 0x140842AF0
 * Callers:
 *     PfSnGetFileInformation @ 0x14022B790 (PfSnGetFileInformation.c)
 *     IopReleaseFileObjectLock @ 0x1402C60B0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     NtTraceEvent @ 0x1402CE8A0 (NtTraceEvent.c)
 *     IopProcessWorkItem @ 0x1402D1B40 (IopProcessWorkItem.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 *     IoRemoveIoCompletion @ 0x1402D3950 (IoRemoveIoCompletion.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1403AD210 (NtReleaseWorkerFactoryWorker.c)
 *     ObpDereferenceNamedObject @ 0x1403B0688 (ObpDereferenceNamedObject.c)
 *     ExpSetTimerObject2 @ 0x1403B09D8 (ExpSetTimerObject2.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403B1560 (NtSignalAndWaitForSingleObject.c)
 *     IopUnloadSafeCompletion @ 0x1403B1A30 (IopUnloadSafeCompletion.c)
 *     IopDeleteFileObjectExtension @ 0x1403B1BD0 (IopDeleteFileObjectExtension.c)
 *     NtSetInformationFile @ 0x1403B2080 (NtSetInformationFile.c)
 *     IopReferenceFileObject @ 0x1403EB740 (IopReferenceFileObject.c)
 *     IopFreeWaitCompletionPacket @ 0x14040F850 (IopFreeWaitCompletionPacket.c)
 *     ObpProcessRemoveObjectQueue @ 0x1409C2460 (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     IopDeleteFile @ 0x14083E070 (IopDeleteFile.c)
 *     ObpFreeObject @ 0x140842C80 (ObpFreeObject.c)
 *     ObDeassignSecurity @ 0x140843480 (ObDeassignSecurity.c)
 *     CmpDeleteKeyObject @ 0x140843620 (CmpDeleteKeyObject.c)
 *     WmipSecurityMethod @ 0x140989620 (WmipSecurityMethod.c)
 *     SepTokenDeleteMethod @ 0x140AD6F50 (SepTokenDeleteMethod.c)
 */

__int64 __fastcall ObpRemoveObjectRoutine(__int64 a1, __int64 a2)
{
  char v3; // bp
  _QWORD *v4; // rdi
  __int64 (__fastcall *v5)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64, _DWORD, __int64); // rax
  void (__fastcall *v6)(ULONG_PTR); // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  v3 = a2;
  v4 = (_QWORD *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)];
  if ( v4 == ObpTypeObjectType )
    KeBugCheckEx(0xF4u, (ULONG_PTR)v4, a1 + 48, 0LL, 0LL);
  v9 = *(_QWORD *)(a1 + 40);
  if ( v9 )
  {
    v5 = (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64, _DWORD, __int64))v4[19];
    if ( (char *)v5 == (char *)&SeDefaultObjectMethod )
    {
      ObDeassignSecurity(&v9);
    }
    else if ( v5 == WmipSecurityMethod )
    {
      WmipSecurityMethod(a1 + 48, 2, 0, 0, 0LL, (__int64)&v9, 0, 0LL);
    }
    else
    {
      guard_dispatch_icall_no_overrides(a1 + 48, 2LL);
    }
  }
  if ( v4[17] )
  {
    if ( !v3 )
      *(_BYTE *)(a1 + 27) |= 0x80u;
    v6 = (void (__fastcall *)(ULONG_PTR))v4[17];
    if ( (char *)v6 == (char *)CmpDeleteKeyObject )
    {
      CmpDeleteKeyObject(a1 + 48);
    }
    else if ( v6 == IopDeleteFile )
    {
      IopDeleteFile(a1 + 48);
    }
    else
    {
      v8 = a1 + 48;
      if ( (char *)v6 == (char *)SepTokenDeleteMethod )
        SepTokenDeleteMethod(v8);
      else
        guard_dispatch_icall_no_overrides(v8, a2);
    }
  }
  return ObpFreeObject(a1);
}
