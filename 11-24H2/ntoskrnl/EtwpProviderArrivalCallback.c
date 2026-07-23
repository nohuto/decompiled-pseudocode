/*
 * XREFs of EtwpProviderArrivalCallback @ 0x140A3B8FC
 * Callers:
 *     EtwpTrackProviderBinaryKm @ 0x1407AA9F0 (EtwpTrackProviderBinaryKm.c)
 *     EtwpTrackProviderBinaryOld @ 0x1407AAC88 (EtwpTrackProviderBinaryOld.c)
 *     EtwpTrackProviderRegistration @ 0x14083A130 (EtwpTrackProviderRegistration.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x140A3B628 (EtwpTrackGuidEntryRegistrations.c)
 *     EtwpEnableGuid @ 0x140A3EA20 (EtwpEnableGuid.c)
 *     EtwpAddRegEntryToGroup @ 0x140AD9390 (EtwpAddRegEntryToGroup.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x14064D73C (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwpEventWriteDebugLookupFailed @ 0x1407A7308 (EtwpEventWriteDebugLookupFailed.c)
 *     EtwpSendDbgId @ 0x1407AD190 (EtwpSendDbgId.c)
 *     EtwpTrackDebugIdForSession @ 0x1409F7A5C (EtwpTrackDebugIdForSession.c)
 *     EtwpTrackBinaryForSession @ 0x1409F8C88 (EtwpTrackBinaryForSession.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x1409F91A0 (EtwpLocateDbgIdForRegEntry.c)
 *     MmGetFileNameForAddress @ 0x140A15B1C (MmGetFileNameForAddress.c)
 *     RtlPcToFilePath @ 0x140A15C50 (RtlPcToFilePath.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpProviderArrivalCallback(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rcx
  unsigned int v8; // edi
  int FileNameForAddress; // eax
  NTSTATUS v11; // eax
  _BYTE *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING v17; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v18[512]; // [rsp+50h] [rbp-B0h] BYREF

  v5 = *(_QWORD *)(a3 + 88);
  *(_DWORD *)(&v17.MaximumLength + 1) = 0;
  v8 = 0;
  if ( !v5 )
    return 3221225793LL;
  if ( (*(_BYTE *)(a3 + 98) & 0x10) != 0 || (*(_DWORD *)(a1 + 816) & 0x2000000) != 0 )
  {
    *(_DWORD *)&v17.Length = 0x2000000;
    v17.Buffer = (wchar_t *)v18;
    if ( a2 )
      FileNameForAddress = MmGetFileNameForAddress(v5, (__int64)&v17, a3, a4);
    else
      FileNameForAddress = RtlPcToFilePath(v5, &v17);
    v8 = FileNameForAddress;
    if ( FileNameForAddress >= 0 )
      EtwpTrackBinaryForSession(a1, (const void **)&v17, (_QWORD *)(*(_QWORD *)(a3 + 32) + 40LL));
    if ( (_BYTE *)v17.Buffer != v18 )
      ExFreePoolWithTag(v17.Buffer, 0);
  }
  if ( (*(_BYTE *)(a3 + 98) & 8) != 0
    || (unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline()
    && _bittest16((const signed __int16 *)(a3 + 98), 0xAu) )
  {
    if ( (*(_DWORD *)(a1 + 12) & 0x80u) != 0 )
      return 3221225659LL;
    v16 = 512;
    *(_QWORD *)&v17.Length = v18;
    v11 = EtwpLocateDbgIdForRegEntry(a2, a3, (struct _MDL **)&v17, &v16);
    v12 = *(_BYTE **)&v17.Length;
    v8 = v11;
    if ( v11 < 0 )
    {
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_DEBUG_LOOKUP_FAILED) )
        EtwpEventWriteDebugLookupFailed(v14, v13, v15, a3, a1, v8);
    }
    else
    {
      EtwpTrackDebugIdForSession(a1, *(const void **)&v17.Length, v16);
      if ( (*(_DWORD *)(a1 + 12) & 0x80000) != 0
        && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
      {
        EtwpSendDbgId(a1);
      }
    }
    if ( v12 != v18 )
      ExFreePoolWithTag(v12, 0);
  }
  return v8;
}
