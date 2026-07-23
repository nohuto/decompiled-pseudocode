/*
 * XREFs of EtwpProviderArrivalCallback @ 0x140899014
 * Callers:
 *     EtwpTrackProviderBinary @ 0x140894358 (EtwpTrackProviderBinary.c)
 *     EtwpAddRegEntryToGroup @ 0x140899D60 (EtwpAddRegEntryToGroup.c)
 *     EtwpEnableGuid @ 0x14089BB2C (EtwpEnableGuid.c)
 *     EtwpTrackProviderRegistration @ 0x14089E6D0 (EtwpTrackProviderRegistration.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1409FED50 (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     RtlCopyUnicodeString @ 0x14036CBB0 (RtlCopyUnicodeString.c)
 *     MmUnlockLoadedDataTableEntryShared @ 0x14036CEEC (MmUnlockLoadedDataTableEntryShared.c)
 *     MmLockLoadedDataTableEntryShared @ 0x14036D178 (MmLockLoadedDataTableEntryShared.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     EtwpEventWriteDebugLookupFailed @ 0x140797DF8 (EtwpEventWriteDebugLookupFailed.c)
 *     EtwpSendDbgId @ 0x14079D8F0 (EtwpSendDbgId.c)
 *     EtwpTrackDebugIdForSession @ 0x140897F00 (EtwpTrackDebugIdForSession.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x140898054 (EtwpLocateDbgIdForRegEntry.c)
 *     MmGetFileNameForAddress @ 0x140899218 (MmGetFileNameForAddress.c)
 *     EtwpTrackBinaryForSession @ 0x140899338 (EtwpTrackBinaryForSession.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpProviderArrivalCallback(__int64 a1, char a2, __int64 a3)
{
  __int64 v4; // rcx
  int v7; // ebx
  wchar_t *Buffer; // r14
  int FileNameForAddress; // eax
  NTSTATUS v11; // eax
  _BYTE *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned int v18; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING v19; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v20[512]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = *(_QWORD *)(a3 + 88);
  *(_DWORD *)(&v19.MaximumLength + 1) = 0;
  v7 = 0;
  if ( !v4 )
    return 3221225793LL;
  if ( (*(_BYTE *)(a3 + 98) & 0x10) != 0 || (*(_DWORD *)(a1 + 816) & 0x2000000) != 0 )
  {
    *(_DWORD *)&v19.Length = 0x2000000;
    Buffer = (wchar_t *)v20;
    v19.Buffer = (wchar_t *)v20;
    if ( a2 )
    {
      FileNameForAddress = MmGetFileNameForAddress(v4, &v19);
      Buffer = v19.Buffer;
      v7 = FileNameForAddress;
    }
    else
    {
      v16 = MmLockLoadedDataTableEntryShared(v4);
      v17 = v16;
      if ( v16 )
      {
        RtlCopyUnicodeString(&v19, (PCUNICODE_STRING)(v16 + 72));
        MmUnlockLoadedDataTableEntryShared(v17);
        Buffer = v19.Buffer;
        v7 = 0;
LABEL_7:
        EtwpTrackBinaryForSession(a1, &v19, *(_QWORD *)(a3 + 32) + 40LL);
LABEL_8:
        if ( Buffer != (wchar_t *)v20 )
          ExFreePoolWithTag(Buffer, 0);
        goto LABEL_10;
      }
      v7 = -1073741275;
    }
    if ( v7 < 0 )
      goto LABEL_8;
    goto LABEL_7;
  }
LABEL_10:
  if ( (*(_BYTE *)(a3 + 98) & 8) == 0 )
    return (unsigned int)v7;
  if ( (*(_DWORD *)(a1 + 12) & 0x80u) == 0 )
  {
    v18 = 512;
    *(_QWORD *)&v19.Length = v20;
    v11 = EtwpLocateDbgIdForRegEntry(a2, a3, (struct _MDL **)&v19, &v18);
    v12 = *(_BYTE **)&v19.Length;
    v7 = v11;
    if ( v11 < 0 )
    {
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_DEBUG_LOOKUP_FAILED) )
        EtwpEventWriteDebugLookupFailed(v14, v13, v15, a3, a1, v7);
    }
    else
    {
      EtwpTrackDebugIdForSession(a1, *(const void **)&v19.Length, v18);
      if ( (*(_DWORD *)(a1 + 12) & 0x80000) != 0
        && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
      {
        EtwpSendDbgId(a1);
      }
    }
    if ( v12 != v20 )
      ExFreePoolWithTag(v12, 0);
    return (unsigned int)v7;
  }
  return 3221225659LL;
}
