/*
 * XREFs of ObpRemoveObjectRoutine @ 0x14084AB80
 * Callers:
 *     IopfCompleteRequest @ 0x140251740 (IopfCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     IopReleaseFileObjectLock @ 0x140285FF0 (IopReleaseFileObjectLock.c)
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     IoRemoveIoCompletion @ 0x14029E4A0 (IoRemoveIoCompletion.c)
 *     NtSetInformationFile @ 0x1402A04A0 (NtSetInformationFile.c)
 *     PfSnGetFileInformation @ 0x140302AF0 (PfSnGetFileInformation.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140303750 (NtReleaseWorkerFactoryWorker.c)
 *     IopProcessWorkItem @ 0x140306B80 (IopProcessWorkItem.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140307190 (NtWaitForWorkViaWorkerFactory.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     NtTraceEvent @ 0x14030A680 (NtTraceEvent.c)
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     ObpDereferenceNamedObject @ 0x140370914 (ObpDereferenceNamedObject.c)
 *     ExpSetTimerObject2 @ 0x140370C68 (ExpSetTimerObject2.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403717F0 (NtSignalAndWaitForSingleObject.c)
 *     IopUnloadSafeCompletion @ 0x140371CB0 (IopUnloadSafeCompletion.c)
 *     IopDeleteFileObjectExtension @ 0x140371E50 (IopDeleteFileObjectExtension.c)
 *     IopReferenceFileObject @ 0x1403F6490 (IopReferenceFileObject.c)
 *     IopFreeWaitCompletionPacket @ 0x14041E430 (IopFreeWaitCompletionPacket.c)
 *     ObpProcessRemoveObjectQueue @ 0x1409CF320 (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     IopDeleteFile @ 0x140844B30 (IopDeleteFile.c)
 *     ObpFreeObject @ 0x14084AD10 (ObpFreeObject.c)
 *     ObDeassignSecurity @ 0x14084B510 (ObDeassignSecurity.c)
 *     CmpDeleteKeyObject @ 0x14084B6B0 (CmpDeleteKeyObject.c)
 *     WmipSecurityMethod @ 0x1409A5180 (WmipSecurityMethod.c)
 *     SepTokenDeleteMethod @ 0x1409A7370 (SepTokenDeleteMethod.c)
 */

__int64 __fastcall ObpRemoveObjectRoutine(__int64 a1, char a2)
{
  _QWORD *v4; // rdi
  __int64 (__fastcall *v5)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64, _DWORD, __int64); // rax
  void (__fastcall *v6)(ULONG_PTR); // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

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
      guard_dispatch_icall_no_overrides(a1 + 48);
    }
  }
  if ( v4[17] )
  {
    if ( !a2 )
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
        guard_dispatch_icall_no_overrides(v8);
    }
  }
  return ObpFreeObject(a1);
}
