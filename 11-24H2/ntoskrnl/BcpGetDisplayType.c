/*
 * XREFs of BcpGetDisplayType @ 0x14069AE40
 * Callers:
 *     BgpDisplaySafeToPowerOffScreen @ 0x14069B16C (BgpDisplaySafeToPowerOffScreen.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14069B214 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14069B3E0 (BgpFwDisplayBugCheckScreen.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14069B730 (BgpFwDisplayBugCheckScreenModernized.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BcpGetDisplayType(_DWORD *a1)
{
  __int64 result; // rax
  __int64 i; // rdx

  result = 0LL;
  for ( i = 84LL; i < 420; i += 84LL )
  {
    if ( *a1 < *(_DWORD *)((char *)&unk_140E0EFE0 + i) )
      break;
    if ( a1[1] < *(_DWORD *)((char *)&unk_140E0EFE4 + i) )
      break;
    result = (unsigned int)(result + 1);
  }
  return result;
}
