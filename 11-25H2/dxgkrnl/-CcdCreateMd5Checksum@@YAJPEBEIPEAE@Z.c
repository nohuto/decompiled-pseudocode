/*
 * XREFs of ?CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z @ 0x14036B2B0
 * Callers:
 *     ?GetMonitorHashsForPath@CCD_TOPOLOGY@@QEAAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x1403691B8 (-GetMonitorHashsForPath@CCD_TOPOLOGY@@QEAAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z.c)
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z @ 0x14036A610 (-CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z.c)
 *     ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z @ 0x14036B1D4 (-_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DX_MD5Update@@YAXPEAUMD5_CTX@@PEBEI@Z @ 0x14036B394 (-DX_MD5Update@@YAXPEAUMD5_CTX@@PEBEI@Z.c)
 *     ?DX_MD5Final@@YAXPEAUMD5_CTX@@@Z @ 0x14036B488 (-DX_MD5Final@@YAXPEAUMD5_CTX@@@Z.c)
 */

__int64 __fastcall CcdCreateMd5Checksum(const unsigned __int8 *a1, unsigned int a2, unsigned __int8 *a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 result; // rax

  if ( !a1 || !a3 )
    return 3221225485LL;
  v7 = operator new(0x68uLL, 0x63644356u, 256LL, a4);
  v8 = v7;
  if ( v7 )
  {
    *(_OWORD *)a3 = 0LL;
    *(_DWORD *)(v7 + 4) = 0;
    *(_DWORD *)v7 = 0;
    *(_DWORD *)(v7 + 8) = 1732584193;
    *(_DWORD *)(v7 + 12) = -271733879;
    *(_DWORD *)(v7 + 16) = -1732584194;
    *(_DWORD *)(v7 + 20) = 271733878;
    DX_MD5Update((struct MD5_CTX *)v7, a1, a2);
    DX_MD5Final((struct MD5_CTX *)v8);
    *(_OWORD *)a3 = *(_OWORD *)(v8 + 88);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)v8);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 66;
  }
  return result;
}
