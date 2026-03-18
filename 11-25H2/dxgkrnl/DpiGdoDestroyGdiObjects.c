/*
 * XREFs of DpiGdoDestroyGdiObjects @ 0x14024EF2C
 * Callers:
 *     DpiFdoDestroyRelatedObjects @ 0x140236C10 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoCreateRelatedObjects @ 0x14040B520 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140042008 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004204C (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     DxgkReleaseGdiViewId @ 0x1401F67DC (DxgkReleaseGdiViewId.c)
 *     DpiAppendNumberToString @ 0x1403F87DC (DpiAppendNumberToString.c)
 */

__int64 __fastcall DpiGdoDestroyGdiObjects(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD *v2; // r14
  _QWORD *v3; // rbx
  NTSTATUS v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  PCWSTR ValueName[2]; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+40h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  KeWaitForSingleObject((PVOID)(v1 + 3720), Executive, 0, 0, 0LL);
  v2 = (_QWORD *)(v1 + 3704);
  while ( 1 )
  {
    v3 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 == v2 )
      break;
    SymbolicLinkName = 0LL;
    v4 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)v3 + 2, v3, File, 1u, 0x20u);
    v5 = v4;
    if ( v4 < 0 )
    {
      WdLogSingleEntry3(0LL, 275LL, 21LL, v4);
      WdLogGlobalForLineNumber = 545;
      goto LABEL_16;
    }
    IoSetDeviceInterfaceState((PUNICODE_STRING)v3 + 10, 0);
    v6 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v7 = (_QWORD *)v3[1], (_QWORD *)*v7 != v3) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    --*(_DWORD *)(v1 + 3776);
    KeReleaseMutex((PRKMUTEX)(v1 + 3720), 0);
    ExReleaseResourceLite(*(PERESOURCE *)(v1 + 168));
    ReleaseMiniportListMutex();
    IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)v3 + 2, v3, 0x20u);
    AcquireMiniportListMutex();
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v1 + 168), 1u);
    KeWaitForSingleObject((PVOID)(v1 + 3720), Executive, 0, 0, 0LL);
    if ( !*(_BYTE *)(v1 + 2847) )
    {
      v8 = v3[3];
      *(_OWORD *)ValueName = 0LL;
      v9 = *(_QWORD *)(v8 + 64);
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 64LL) + 2847LL)
        && (int)DpiAppendNumberToString(L"\\Device\\Video", *(_DWORD *)(v9 + 152), (PUNICODE_STRING)ValueName) >= 0 )
      {
        RtlDeleteRegistryValue(4u, L"VIDEO", ValueName[1]);
        RtlFreeUnicodeString((PUNICODE_STRING)ValueName);
      }
      if ( (int)DpiAppendNumberToString(L"\\DosDevices\\DISPLAY", *((_DWORD *)v3 + 38) + 1, &SymbolicLinkName) >= 0 )
      {
        IoDeleteSymbolicLink(&SymbolicLinkName);
        RtlFreeUnicodeString(&SymbolicLinkName);
      }
    }
    RtlFreeUnicodeString((PUNICODE_STRING)v3 + 10);
    DxgkReleaseGdiViewId(*(_BYTE *)(v1 + 2847), *(_QWORD *)(v1 + 5888), *((_DWORD *)v3 + 38), 0);
    IoDeleteDevice((PDEVICE_OBJECT)v3[3]);
  }
  v5 = 0;
LABEL_16:
  KeReleaseMutex((PRKMUTEX)(v1 + 3720), 0);
  return v5;
}
