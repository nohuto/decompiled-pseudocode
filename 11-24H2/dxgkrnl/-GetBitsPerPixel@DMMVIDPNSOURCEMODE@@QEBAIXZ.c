/*
 * XREFs of ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x14003D9A0
 * Callers:
 *     _BmlGetPathModeListForPath @ 0x1402DC9A4 (_BmlGetPathModeListForPath.c)
 *     BmlGetNextBestSourceMode @ 0x1402DDD64 (BmlGetNextBestSourceMode.c)
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x140361958 (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNSOURCEMODE::GetBitsPerPixel(DMMVIDPNSOURCEMODE *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ecx
  unsigned int v6; // ebx

  v5 = *((_DWORD *)this + 18);
  if ( ((v5 - 1) & 0xFFFFFFFC) != 0 || v5 == 2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 191;
  }
  switch ( *((_DWORD *)this + 24) )
  {
    case 0x14:
      return 24;
    case 0x15:
    case 0x16:
      return 32;
    case 0x17:
      return 16;
    case 0x20:
      return 32;
    case 0x29:
      return 8;
    default:
      v6 = 0;
      *(_QWORD *)(WdLogNewEntry5_WdTrace((unsigned int)(*((_DWORD *)this + 24) - 32), a2, a3, a4) + 24) = *((int *)this + 24);
      WdLogGlobalForLineNumber = 198;
      break;
  }
  return v6;
}
