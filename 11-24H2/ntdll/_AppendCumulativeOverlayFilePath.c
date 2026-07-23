/*
 * XREFs of _AppendCumulativeOverlayFilePath @ 0x18007F95C
 * Callers:
 *     _BuildCumulativeOverlayFilePath @ 0x18007F7D8 (_BuildCumulativeOverlayFilePath.c)
 * Callees:
 *     wcscat_s @ 0x18012C0F0 (wcscat_s.c)
 *     wcsncat_s @ 0x18012C220 (wcsncat_s.c)
 */

__int64 __fastcall AppendCumulativeOverlayFilePath(
        int a1,
        const wchar_t *a2,
        const wchar_t *a3,
        int a4,
        wchar_t *a5,
        wchar_t *Source,
        unsigned int *a7,
        wchar_t *Destination)
{
  rsize_t v11; // rdi

  v11 = (unsigned __int64)*a7 >> 1;
  if ( wcscat_s(Destination, v11, a3)
    || wcsncat_s(Destination, v11, a2, (unsigned __int64)(unsigned int)(a1 - a4) >> 1)
    || wcscat_s(Destination, v11, Source)
    || wcscat_s(Destination, v11, L"\\") )
  {
    return 3221225701LL;
  }
  else
  {
    return wcscat_s(Destination, v11, a5) != 0 ? 0xC00000E5 : 0;
  }
}
