/*
 * XREFs of ?DelayAllocateTLS_AllocateInternal@@YAXPEAKPEBG@Z @ 0x1802AA268
 * Callers:
 *     ?GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AA184 (-GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??$Allocated@AEAPEBG@DelayAllocateTLSTelemetry@@SAXAEAPEBG@Z @ 0x180238C20 (--$Allocated@AEAPEBG@DelayAllocateTLSTelemetry@@SAXAEAPEBG@Z.c)
 */

void __fastcall DelayAllocateTLS_AllocateInternal(unsigned int *a1, const unsigned __int16 *a2)
{
  DWORD v2; // ecx
  const WCHAR *v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = L"ThumbnailCache";
  v2 = TlsAlloc();
  if ( v2 != -1 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)&g_tlsThumbnailCache, v2, -1) == -1 )
      DelayAllocateTLSTelemetry::Allocated<unsigned short const * &>(&v3);
    else
      TlsFree(v2);
  }
}
