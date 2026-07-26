/*
 * XREFs of ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x14006CE70
 * Callers:
 *     _lambda_cf61730e764cafb5fbe53142b0d3259b_::operator() @ 0x14015D920 (_lambda_cf61730e764cafb5fbe53142b0d3259b_--operator().c)
 *     ?grow@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAA_N_K@Z @ 0x14015E5A0 (-grow@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@.c)
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x14015E690 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 * Callees:
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x14005DF50 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ??0?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@QEAA@$$QEAV01@@Z @ 0x140060C30 (--0-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@w.c)
 *     ??_G?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1400646D0 (--_G-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wist.c)
 */

char __fastcall Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::reserve(
        unsigned int *a1,
        unsigned __int64 a2)
{
  unsigned int v2; // edi
  char result; // al
  unsigned int v5; // ebp
  __int64 v6; // rdx
  _QWORD *PoolWithTag; // r14
  unsigned int v8; // ecx
  __int64 v9; // r8
  PVOID *i; // rsi
  int v11; // r8d
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  if ( *a1 >= a2 )
    return 1;
  if ( a2 >= 0xFFFFFFFF )
    return 0;
  v5 = 0;
  NumberOfBytes = 0LL;
  if ( (int)RtlULongLongMult(8uLL, a2, &NumberOfBytes) < 0 )
    return 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x7272414Bu);
  if ( !PoolWithTag )
    return 0;
  v8 = a1[1];
  v9 = 0LL;
  for ( i = (PVOID *)(a1 + 2); (unsigned int)v9 < v8; v9 = (unsigned int)(v11 + 1) )
  {
    wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>(
      &PoolWithTag[(unsigned int)v9],
      (__int64 *)*i + (unsigned int)v9);
    v8 = a1[1];
  }
  if ( *i )
  {
    if ( v8 )
    {
      do
        wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'(
          (NDIS_BIND_LINK_BASE **)*i + v5++,
          v6,
          v9);
      while ( v5 < a1[1] );
      i = (PVOID *)(a1 + 2);
    }
    ExFreePoolWithTag(*i, 0x7272414Bu);
  }
  *i = PoolWithTag;
  result = 1;
  *a1 = v2;
  return result;
}
