/*
 * XREFs of VidSchSubmitCommandContextless @ 0x14002A2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x14002934C (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x14002AEC0 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VidSchSubmitCommandContextless(__int64 *Src, struct _VIDSCH_DEVICE *a2, __int64 a3)
{
  struct _VIDSCH_GLOBAL *v4; // rsi
  __int64 result; // rax
  __int64 v6; // [rsp+70h] [rbp+18h] BYREF

  if ( a3 && a2 && Src )
  {
    v4 = *(struct _VIDSCH_GLOBAL **)(a3 + 8);
    v6 = *Src;
    if ( (v6 & 0x20) == 0 )
      return VidSchiRedirectedFlipWaitOnSyncObject(v4, Src);
    result = VidSchValidatePresentFlags((struct VIDSCH_SUBMIT_DATA2 *)Src, a2, (struct _VIDSCH_SUBMIT_FLAGS *)&v6);
    if ( (int)result >= 0 )
      return VidSchiRedirectedFlipWaitOnSyncObject(v4, Src);
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 7074;
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[88])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"NULL pointer in pVidSchSyncObj, pVidSchDevice or pVidSchSubmitCommandData, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  return result;
}
