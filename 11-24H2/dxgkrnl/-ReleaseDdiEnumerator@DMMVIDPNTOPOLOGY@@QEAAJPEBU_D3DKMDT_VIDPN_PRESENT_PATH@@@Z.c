/*
 * XREFs of ?ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140378B34
 * Callers:
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140264F80 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::ReleaseDdiEnumerator(
        DMMVIDPNTOPOLOGY *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a2)
{
  SIZE_T *p_DataSize; // rbx
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *pRgb256x3x16; // r9
  char *v5; // r8
  char *v6; // rcx
  char *v7; // rcx
  __int64 result; // rax
  char *v9; // rax

  if ( !a2 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 2114;
    return 3223192345LL;
  }
  p_DataSize = &a2[-1].GammaRamp.DataSize;
  if ( LODWORD(a2[-1].GammaRamp.DataSize) != 305419896 )
  {
    WdLogSingleEntry1(2LL, &a2[-1].GammaRamp.DataSize);
    WdLogGlobalForLineNumber = 2128;
    return 3223192345LL;
  }
  pRgb256x3x16 = a2[-1].GammaRamp.Data.pRgb256x3x16;
  if ( !pRgb256x3x16 )
  {
LABEL_7:
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a2->GammaRamp.Data.pRgb256x3x16);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(p_DataSize);
    return 0LL;
  }
  v5 = (char *)this + 24;
  v6 = (char *)*((_QWORD *)this + 3);
  if ( v6 != v5 )
  {
    v7 = v6 - 8;
    if ( v7 )
    {
      while ( v7 != (char *)pRgb256x3x16 )
      {
        v9 = (char *)*((_QWORD *)v7 + 1);
        v7 = v9 - 8;
        if ( v9 == v5 )
          v7 = 0LL;
        if ( !v7 )
          goto LABEL_13;
      }
      goto LABEL_7;
    }
  }
LABEL_13:
  WdLogSingleEntry2(2LL, &a2[-1].GammaRamp.DataSize, this);
  result = 3223192368LL;
  WdLogGlobalForLineNumber = 2144;
  return result;
}
