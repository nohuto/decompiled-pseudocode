/*
 * XREFs of ??$_Emplace_reallocate@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@?$vector@UPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@AEAAPEAUPlane@CDDisplayCachedScanout@@QEAU23@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1801C6D84
 * Callers:
 *     ?Set@CDDisplayCachedScanout@@QEAAXIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x1801C7268 (-Set@CDDisplayCachedScanout@@QEAAXIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAUIDisplayScanout@Cor.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@AEAAXQEAUPlane@CDDisplayCachedScanout@@_K1@Z @ 0x1801C6EC0 (-_Change_array@-$vector@UPlane@CDDisplayCachedScanout@@V-$allocator@UPlane@CDDisplayCachedScanou.c)
 *     ??$_Uninitialized_move@PEAUPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAPEAUPlane@CDDisplayCachedScanout@@QEAU12@0PEAU12@AEAV?$allocator@UPlane@CDDisplayCachedScanout@@@0@@Z @ 0x1801C6F4C (--$_Uninitialized_move@PEAUPlane@CDDisplayCachedScanout@@V-$allocator@UPlane@CDDisplayCachedScan.c)
 *     ??0Plane@CDDisplayCachedScanout@@QEAA@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1801C7000 (--0Plane@CDDisplayCachedScanout@@QEAA@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z.c)
 *     ??$_Get_size_of_n@$0FI@@std@@YA_K_K@Z @ 0x180250B1C (--$_Get_size_of_n@$0FI@@std@@YA_K_K@Z.c)
 */

CDDisplayCachedScanout::Plane *__fastcall std::vector<CDDisplayCachedScanout::Plane>::_Emplace_reallocate<DWM_PRESENT_MULTIPLANE_OVERLAY const &>(
        __int64 *a1,
        __int64 a2,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v8; // r14
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rdi
  CDDisplayCachedScanout::Plane *v14; // r14
  __int64 v15; // rdx
  char *v16; // r8
  __int64 v17; // rcx

  v5 = 0x2E8BA2E8BA2E8BALL;
  v6 = 0x2E8BA2E8BA2E8BA3LL * ((a1[1] - *a1) >> 3);
  v8 = (a2 - *a1) / 88;
  if ( v6 == 0x2E8BA2E8BA2E8BALL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = 0x2E8BA2E8BA2E8BA3LL * ((a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0x2E8BA2E8BA2E8BALL - (v10 >> 1) )
  {
    v5 = v11 + v10;
    if ( v11 + v10 < v9 )
      v5 = v9;
  }
  size_of = std::_Get_size_of_n<88>(v5);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (CDDisplayCachedScanout::Plane *)(v13 + 88 * v8);
  CDDisplayCachedScanout::Plane::Plane(v14, a3);
  v15 = a1[1];
  v16 = (char *)v13;
  v17 = *a1;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<CDDisplayCachedScanout::Plane *>(v17, a2, v13);
    v15 = a1[1];
    v16 = (char *)v14 + 88;
    v17 = a2;
  }
  std::_Uninitialized_move<CDDisplayCachedScanout::Plane *>(v17, v15, v16);
  std::vector<CDDisplayCachedScanout::Plane>::_Change_array(a1, v13, v9, v5);
  return v14;
}
