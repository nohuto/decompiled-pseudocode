/*
 * XREFs of ?reset@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x14016AC90
 * Callers:
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@PEBU_GUID@@K@Z @ 0x14016AA10 (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@U.c)
 * Callees:
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x14016AEA0 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 */

__int64 __fastcall KRef<NDIS_BIND_FILTER_DRIVER>::reset(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 != *a1 )
  {
    result = KRef<NDIS_BIND_FILTER_DRIVER>::unref(a1, a2, a3);
    *a1 = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 64));
  }
  return result;
}
