/*
 * XREFs of ?vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z @ 0x14003CE00
 * Callers:
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x14003D278 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 * Callees:
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140029120 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     bFToL @ 0x14003BE84 (bFToL.c)
 *     ?RegionCore_vScale@Win32kRS@@YAXPEAVREGION_CORE@@VPOINTFL@@@Z @ 0x14003D324 (-RegionCore_vScale@Win32kRS@@YAXPEAVREGION_CORE@@VPOINTFL@@@Z.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x14003D3B8 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 */

_UNKNOWN **__fastcall RGNOBJ::vScale(__int64 *a1, struct REGION_CORE *a2)
{
  _UNKNOWN **result; // rax
  __int64 v4; // rcx
  unsigned int v5; // edi
  struct SCAN *pScan; // rbx
  unsigned int v7; // r8d
  __int64 i; // rsi
  double v9; // xmm0_8
  int v10; // eax
  double v11; // xmm0_8
  int v12; // eax
  double v13; // xmm0_8
  struct REGION_CORE *v14; // [rsp+20h] [rbp-28h] BYREF
  __int128 v15; // [rsp+28h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = *a1;
  v14 = a2;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    return (_UNKNOWN **)Win32kRS::RegionCore_vScale((v4 + 24) & -(__int64)(v4 != 0));
  v5 = *(_DWORD *)(v4 + 48);
  if ( v5 > 1 )
  {
    pScan = REGION_CORE::get_pScan((REGION_CORE *)(v4 + 24), a2);
    v7 = 6;
    do
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)pScan; i = (unsigned int)(i + 1) )
      {
        *(_QWORD *)&v9 = COERCE_UNSIGNED_INT((float)*((int *)pScan + i + 3));
        *(float *)&v9 = *(float *)&v9 * *(float *)&v14;
        bFToL(v9, (int *)pScan + i + 3, v7);
      }
      v10 = *((_DWORD *)pScan + 1);
      if ( v10 != 0x80000000 )
      {
        *(_QWORD *)&v11 = COERCE_UNSIGNED_INT((float)v10);
        *(float *)&v11 = *(float *)&v11 * *((float *)&v14 + 1);
        bFToL(v11, (int *)pScan + 1, v7);
      }
      v12 = *((_DWORD *)pScan + 2);
      if ( v12 != 0x7FFFFFFF )
      {
        *(_QWORD *)&v13 = COERCE_UNSIGNED_INT((float)v12);
        *(float *)&v13 = *(float *)&v13 * *((float *)&v14 + 1);
        bFToL(v13, (int *)pScan + 2, v7);
      }
      pScan = (struct SCAN *)((char *)pScan + (unsigned int)(4 * *(_DWORD *)pScan + 16));
      --v5;
    }
    while ( v5 );
    v15 = *(_OWORD *)(*a1 + 52);
    ERECTL::vScale((ERECTL *)&v15, (const struct POINTFL *)&v14);
    result = (_UNKNOWN **)*a1;
    *(_OWORD *)(*a1 + 52) = v15;
  }
  return result;
}
