/*
 * XREFs of ??$FindEx@VCAppLayoutItemFinderByApplication@AppLayoutFinders@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutItemFinderByApplication@AppLayoutFinders@@AEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1806C31D4
 * Callers:
 *     ?ContainsApp@CAppLayout@@UEAAHPEAUIImmersiveApplication@@@Z @ 0x1806C38D0 (-ContainsApp@CAppLayout@@UEAAHPEAUIImmersiveApplication@@@Z.c)
 *     ?FindAppItem@CAppLayout@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIAppLayoutItem@@PEAI@Z @ 0x1806C39D0 (-FindAppItem@CAppLayout@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIAppLayoutItem@@PEAI@Z.c)
 *     ?RemoveApp@CAppLayout@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1806C4A30 (-RemoveApp@CAppLayout@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?Compare@CAppLayoutItemFinderByApplication@AppLayoutFinders@@QEBAHAEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@0@Z @ 0x1806C3808 (-Compare@CAppLayoutItemFinderByApplication@AppLayoutFinders@@QEBAHAEBV-$ComPtr@UIAppLayoutItem@@.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::FindEx<AppLayoutFinders::CAppLayoutItemFinderByApplication>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  unsigned __int64 i; // rbx

  *a4 = 0LL;
  for ( i = 0LL; i < a1[1]; ++i )
  {
    if ( !(unsigned int)AppLayoutFinders::CAppLayoutItemFinderByApplication::Compare(a2, *a1 + 8 * i) )
    {
      *a4 = i;
      return 0LL;
    }
  }
  return 2147647531LL;
}
