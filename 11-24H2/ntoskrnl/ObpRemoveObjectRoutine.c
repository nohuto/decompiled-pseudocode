/*
 * XREFs of ObpRemoveObjectRoutine @ 0x140846830
 * Callers:
 *     PfSnGetFileInformation @ 0x140276200 (PfSnGetFileInformation.c)
 *     IopProcessWorkItem @ 0x1402A2410 (IopProcessWorkItem.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A3010 (NtWaitForWorkViaWorkerFactory.c)
 *     IoRemoveIoCompletion @ 0x1402A4220 (IoRemoveIoCompletion.c)
 *     IopReleaseFileObjectLock @ 0x14031D520 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     NtTraceEvent @ 0x140325D10 (NtTraceEvent.c)
 *     ObFastDereferenceObject @ 0x140356880 (ObFastDereferenceObject.c)
 *     SeAccessCheckByType @ 0x14035C8A0 (SeAccessCheckByType.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1403BE580 (NtReleaseWorkerFactoryWorker.c)
 *     ObpDereferenceNamedObject @ 0x1403C1AC8 (ObpDereferenceNamedObject.c)
 *     ExpSetTimerObject2 @ 0x1403C1E18 (ExpSetTimerObject2.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403C29A0 (NtSignalAndWaitForSingleObject.c)
 *     IopUnloadSafeCompletion @ 0x1403C2E70 (IopUnloadSafeCompletion.c)
 *     IopDeleteFileObjectExtension @ 0x1403C3010 (IopDeleteFileObjectExtension.c)
 *     NtSetInformationFile @ 0x1403C34C0 (NtSetInformationFile.c)
 *     IopReferenceFileObject @ 0x1403F5300 (IopReferenceFileObject.c)
 *     IopFreeWaitCompletionPacket @ 0x14041BD10 (IopFreeWaitCompletionPacket.c)
 *     ObpProcessRemoveObjectQueue @ 0x1409D2630 (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     IopDeleteFile @ 0x140841DB0 (IopDeleteFile.c)
 *     ObpFreeObject @ 0x1408469C0 (ObpFreeObject.c)
 *     ObDeassignSecurity @ 0x1408471C0 (ObDeassignSecurity.c)
 *     CmpDeleteKeyObject @ 0x140847360 (CmpDeleteKeyObject.c)
 *     WmipSecurityMethod @ 0x1409A6000 (WmipSecurityMethod.c)
 *     SepTokenDeleteMethod @ 0x140AD88D0 (SepTokenDeleteMethod.c)
 */

__int64 __fastcall ObpRemoveObjectRoutine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // bp
  _QWORD *v6; // rdi
  __int64 (__fastcall *v7)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64, _DWORD, __int64); // rax
  void (__fastcall *v8)(ULONG_PTR); // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v5 = a2;
  v6 = (_QWORD *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)];
  if ( v6 == ObpTypeObjectType )
    KeBugCheckEx(0xF4u, (ULONG_PTR)v6, a1 + 48, 0LL, 0LL);
  v11 = *(_QWORD *)(a1 + 40);
  if ( v11 )
  {
    v7 = (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64, _DWORD, __int64))v6[19];
    if ( (char *)v7 == (char *)&SeDefaultObjectMethod )
    {
      ObDeassignSecurity(&v11);
    }
    else if ( v7 == WmipSecurityMethod )
    {
      WmipSecurityMethod(a1 + 48, 2, 0, 0, 0LL, (__int64)&v11, 0, 0LL);
    }
    else
    {
      guard_dispatch_icall_no_overrides(a1 + 48, 2LL, 0LL, 0LL);
    }
  }
  if ( v6[17] )
  {
    if ( !v5 )
      *(_BYTE *)(a1 + 27) |= 0x80u;
    v8 = (void (__fastcall *)(ULONG_PTR))v6[17];
    if ( (char *)v8 == (char *)CmpDeleteKeyObject )
    {
      CmpDeleteKeyObject(a1 + 48);
    }
    else if ( v8 == IopDeleteFile )
    {
      IopDeleteFile(a1 + 48);
    }
    else
    {
      v10 = a1 + 48;
      if ( (char *)v8 == (char *)SepTokenDeleteMethod )
        SepTokenDeleteMethod(v10);
      else
        guard_dispatch_icall_no_overrides(v10, a2, a3, a4);
    }
  }
  return ObpFreeObject(a1);
}
