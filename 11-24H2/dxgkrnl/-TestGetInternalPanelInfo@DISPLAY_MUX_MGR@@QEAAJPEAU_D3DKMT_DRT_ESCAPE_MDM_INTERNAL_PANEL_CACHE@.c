/*
 * XREFs of ?TestGetInternalPanelInfo@DISPLAY_MUX_MGR@@QEAAJPEAU_D3DKMT_DRT_ESCAPE_MDM_INTERNAL_PANEL_CACHE@@@Z @ 0x140088684
 * Callers:
 *     DpiDrtGetInternalPanelInfoCacheMux @ 0x140088A8C (DpiDrtGetInternalPanelInfoCacheMux.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DISPLAY_MUX_MGR::TestGetInternalPanelInfo(
        DISPLAY_MUX_MGR *this,
        struct _D3DKMT_DRT_ESCAPE_MDM_INTERNAL_PANEL_CACHE *a2)
{
  __int64 result; // rax

  if ( *((_BYTE *)this + 148) )
  {
    *(_OWORD *)((char *)a2 + 12) = *(_OWORD *)((char *)this + 149);
    *(_OWORD *)((char *)a2 + 28) = *(_OWORD *)((char *)this + 165);
    *(_OWORD *)((char *)a2 + 44) = *(_OWORD *)((char *)this + 181);
    *(_OWORD *)((char *)a2 + 60) = *(_OWORD *)((char *)this + 197);
    *(_OWORD *)((char *)a2 + 76) = *(_OWORD *)((char *)this + 213);
    *(_OWORD *)((char *)a2 + 92) = *(_OWORD *)((char *)this + 229);
    *(_OWORD *)((char *)a2 + 108) = *(_OWORD *)((char *)this + 245);
    *(_OWORD *)((char *)a2 + 124) = *(_OWORD *)((char *)this + 261);
    *(_OWORD *)((char *)a2 + 140) = *(_OWORD *)((char *)this + 277);
    *(_OWORD *)((char *)a2 + 156) = *(_OWORD *)((char *)this + 293);
    *(_OWORD *)((char *)a2 + 172) = *(_OWORD *)((char *)this + 309);
    *(_OWORD *)((char *)a2 + 188) = *(_OWORD *)((char *)this + 325);
    *(_OWORD *)((char *)a2 + 204) = *(_OWORD *)((char *)this + 341);
    *((_BYTE *)a2 + 220) = *((_BYTE *)this + 357);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(3LL);
    result = 3221225534LL;
    WdLogGlobalForLineNumber = 3613;
  }
  return result;
}
