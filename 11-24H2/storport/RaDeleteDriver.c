/*
 * XREFs of RaDeleteDriver @ 0x140181190
 * Callers:
 *     RaDriverUnload @ 0x14003F3B0 (RaDriverUnload.c)
 *     StorPortInitialize @ 0x14006FD50 (StorPortInitialize.c)
 * Callees:
 *     RaidReleasePortData @ 0x14000A0FC (RaidReleasePortData.c)
 *     McGenEventUnregister_EtwUnregister @ 0x14006B220 (McGenEventUnregister_EtwUnregister.c)
 *     RaFreeDriverInitData @ 0x14006C1FC (RaFreeDriverInitData.c)
 *     RaidRemovePortDriver @ 0x14006F8B4 (RaidRemovePortDriver.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 *     StorpUnRegisterTraceLogging @ 0x14018CB74 (StorpUnRegisterTraceLogging.c)
 */

void __fastcall RaDeleteDriver(__int64 a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 *v5; // rsi
  int v6; // eax
  void (__fastcall *v7)(_QWORD); // rax
  void *v8; // rcx

  if ( *(_DWORD *)a1 )
  {
    v2 = (__int64 *)(a1 + 96);
    while ( 1 )
    {
      v3 = (__int64 *)*v2;
      if ( (__int64 *)*v2 == v2 )
        break;
      if ( (__int64 *)v3[1] != v2 || (v4 = *v3, *(__int64 **)(*v3 + 8) != v3) )
        __fastfail(3u);
      *v2 = v4;
      v5 = v3 - 26;
      *(_QWORD *)(v4 + 8) = v2;
      v6 = *((_DWORD *)v3 - 52);
      if ( v6 == 176 || v6 == 208 && (v5[23] & 1) != 0 )
      {
        v7 = (void (__fastcall *)(_QWORD))v5[21];
        if ( v7 )
          v7(*(_QWORD *)(a1 + 8));
      }
      RaFreeDriverInitData(v4, v5);
    }
    *(_DWORD *)a1 = 0;
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 40));
    if ( *(_QWORD *)(a1 + 24) )
    {
      RaidRemovePortDriver(*(_QWORD *)(a1 + 16), a1);
      *(_QWORD *)(a1 + 24) = 0LL;
    }
    v8 = *(void **)(a1 + 16);
    if ( v8 )
    {
      RaidReleasePortData(v8);
      *(_QWORD *)(a1 + 16) = 0LL;
    }
    if ( _InterlockedExchangeAdd(&g_RaidEtwRefCount, 0xFFFFFFFF) == 1 )
    {
      McGenEventUnregister_EtwUnregister();
      StorpUnRegisterTraceLogging();
    }
  }
}
