/*
 * XREFs of _lambda_5643a1c133fbb7bd4f6278ef2ca542af_::operator() @ 0x1800B7714
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_5643a1c133fbb7bd4f6278ef2ca542af___ @ 0x1800B6920 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800B6920.c)
 * Callees:
 *     WPP_SF_d @ 0x1800C180C (WPP_SF_d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_5643a1c133fbb7bd4f6278ef2ca542af_::operator()(_QWORD *a1, _QWORD *a2)
{
  __int64 (__fastcall *v4)(struct IDeviceGraphManager *, _QWORD, _QWORD, bool, _QWORD); // rsi
  char v5; // al
  __int64 result; // rax

  v4 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, _QWORD, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                            + 32LL);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 240LL))(*a2);
  result = v4(g_DeviceGraphManager, *a2, *a1, v5 == 0, 0LL);
  if ( (int)result < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    return WPP_SF_d(
             *((_QWORD *)WPP_GLOBAL_Control + 2),
             34LL,
             &WPP_376ec65dfd163502a9de53a59e5d86b2_Traceguids,
             (unsigned int)result);
  }
  return result;
}
