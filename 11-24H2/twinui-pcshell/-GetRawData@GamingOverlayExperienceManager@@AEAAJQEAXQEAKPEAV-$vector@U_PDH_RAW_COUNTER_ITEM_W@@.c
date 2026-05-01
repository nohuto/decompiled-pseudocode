/*
 * XREFs of ?GetRawData@GamingOverlayExperienceManager@@AEAAJQEAXQEAKPEAV?$vector@U_PDH_RAW_COUNTER_ITEM_W@@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@@Z @ 0x18035060C
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1803572D4 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@U_PDH_RAW_COUNTER_ITEM_W@@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180344290 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@U_PDH_RAW_COUNTER_ITEM_W@@V-$allocator@U_P.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@YAPEAU_PDH_RAW_COUNTER_ITEM_W@@PEAU1@_KAEAV?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@0@@Z @ 0x180344824 (--$_Uninitialized_value_construct_n@V-$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@YAPEAU_PD.c)
 */

PDH_STATUS __fastcall GamingOverlayExperienceManager::GetRawData(__int64 a1, void *a2, DWORD *a3, __int64 a4)
{
  PPDH_RAW_COUNTER_ITEM_W v4; // rcx
  __int64 v5; // rax
  PDH_STATUS result; // eax
  unsigned __int64 v10; // rcx
  char *v11; // rax
  DWORD dwBufferSize; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(PPDH_RAW_COUNTER_ITEM_W *)a4;
  v5 = *(_QWORD *)(a4 + 8);
  dwBufferSize = 0;
  if ( 0xAAAAAAAAAAAAAAABuLL * ((v5 - (__int64)v4) >> 4) )
  {
    if ( v4 != *(PPDH_RAW_COUNTER_ITEM_W *)(a4 + 8) )
      *(_QWORD *)(a4 + 8) = v4;
  }
  result = PdhGetRawCounterArrayW(a2, &dwBufferSize, a3, 0LL);
  if ( result == -2147481646 )
  {
    v10 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a4 + 8) - *(_QWORD *)a4) >> 4);
    if ( dwBufferSize < v10 )
    {
      v11 = (char *)(*(_QWORD *)a4 + 48LL * dwBufferSize);
LABEL_11:
      *(_QWORD *)(a4 + 8) = v11;
      return PdhGetRawCounterArrayW(a2, &dwBufferSize, a3, *(PPDH_RAW_COUNTER_ITEM_W *)a4);
    }
    if ( dwBufferSize > v10 )
    {
      if ( dwBufferSize <= 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a4 + 16) - *(_QWORD *)a4) >> 4) )
      {
        v11 = std::_Uninitialized_value_construct_n<std::allocator<_PDH_RAW_COUNTER_ITEM_W>>(
                *(char **)(a4 + 8),
                dwBufferSize - v10);
        goto LABEL_11;
      }
      std::vector<_PDH_RAW_COUNTER_ITEM_W>::_Resize_reallocate<std::_Value_init_tag>(a4, dwBufferSize);
    }
    return PdhGetRawCounterArrayW(a2, &dwBufferSize, a3, *(PPDH_RAW_COUNTER_ITEM_W *)a4);
  }
  return result;
}
