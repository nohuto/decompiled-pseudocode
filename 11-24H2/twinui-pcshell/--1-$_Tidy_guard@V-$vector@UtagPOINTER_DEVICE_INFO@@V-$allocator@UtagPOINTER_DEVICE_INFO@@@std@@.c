/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@UtagPOINTER_DEVICE_INFO@@V?$allocator@UtagPOINTER_DEVICE_INFO@@@std@@@std@@@std@@QEAA@XZ @ 0x1804855CC
 * Callers:
 *     ??0?$vector@UtagPOINTER_DEVICE_INFO@@V?$allocator@UtagPOINTER_DEVICE_INFO@@@std@@@std@@QEAA@_KAEBV?$allocator@UtagPOINTER_DEVICE_INFO@@@1@@Z @ 0x1804852E8 (--0-$vector@UtagPOINTER_DEVICE_INFO@@V-$allocator@UtagPOINTER_DEVICE_INFO@@@std@@@std@@QEAA@_KAE.c)
 * Callees:
 *     ?_Tidy@?$vector@UtagPOINTER_DEVICE_INFO@@V?$allocator@UtagPOINTER_DEVICE_INFO@@@std@@@std@@AEAAXXZ @ 0x1804881C8 (-_Tidy@-$vector@UtagPOINTER_DEVICE_INFO@@V-$allocator@UtagPOINTER_DEVICE_INFO@@@std@@@std@@AEAAX.c)
 */

__int64 __fastcall std::_Tidy_guard<std::vector<tagPOINTER_DEVICE_INFO>>::~_Tidy_guard<std::vector<tagPOINTER_DEVICE_INFO>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::vector<tagPOINTER_DEVICE_INFO>::_Tidy();
  return result;
}
