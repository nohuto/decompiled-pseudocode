/*
 * XREFs of VidSchIsVSyncAvailable @ 0x1400E7D10
 * Callers:
 *     VidSchCreatePeriodicFrameNotification @ 0x140002B20 (VidSchCreatePeriodicFrameNotification.c)
 *     VidSchiSetFlipDevice @ 0x14001E0BC (VidSchiSetFlipDevice.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

unsigned __int8 __fastcall VidSchIsVSyncAvailable(__int64 a1, unsigned int a2)
{
  struct _ERESOURCE *v4; // rdi
  int v5; // eax
  unsigned __int8 v6; // bl
  __int64 v8; // rcx
  __int64 v9; // rcx

  if ( a1 )
  {
    if ( a2 >= *(_DWORD *)(a1 + 40) )
    {
      WdLogSingleEntry1(1LL, a2);
      WdLogGlobalForLineNumber = 9940;
      DxgkLogInternalTriageEvent(v8, 0x40000LL);
      return 0;
    }
    else
    {
      v4 = (struct _ERESOURCE *)(a1 + 1344);
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1344), 1u);
      v5 = *(_DWORD *)(a1 + 2464);
      v6 = _bittest(&v5, a2);
      ExReleaseResourceLite(v4);
      return v6;
    }
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9931;
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
    return 0;
  }
}
