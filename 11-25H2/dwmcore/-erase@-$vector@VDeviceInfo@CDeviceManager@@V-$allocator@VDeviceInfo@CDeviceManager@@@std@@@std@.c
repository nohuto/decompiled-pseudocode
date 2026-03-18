/*
 * XREFs of ?erase@?$vector@VDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VDeviceInfo@CDeviceManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VDeviceInfo@CDeviceManager@@@std@@@std@@@2@@Z @ 0x180030158
 * Callers:
 *     ?DeleteUnusedDevices@CDeviceManager@@AEAAXXZ @ 0x180031AC0 (-DeleteUnusedDevices@CDeviceManager@@AEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DDevice@@@@YAXAEAPEAVCD3DDevice@@@Z @ 0x180254734 (--$ReleaseInterface@VCD3DDevice@@@@YAXAEAPEAVCD3DDevice@@@Z.c)
 */

_QWORD *__fastcall std::vector<CDeviceManager::DeviceInfo>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r15
  _QWORD *v4; // rdi
  __int64 v8; // rsi
  _QWORD *result; // rax

  v3 = *(_QWORD **)(a1 + 8);
  v4 = (_QWORD *)(a3 + 16);
  if ( (_QWORD *)(a3 + 16) != v3 )
  {
    v8 = a3;
    do
    {
      if ( (_QWORD *)v8 != v4 )
      {
        ReleaseInterface<CD3DDevice>(v8);
        *(_QWORD *)v8 = *v4;
        *(_BYTE *)(v8 + 8) = *(_BYTE *)(v8 + 24);
        *v4 = 0LL;
      }
      v4 += 2;
      v8 += 16LL;
    }
    while ( v4 != v3 );
  }
  ReleaseInterface<CD3DDevice>(*(_QWORD *)(a1 + 8) - 16LL);
  *(_QWORD *)(a1 + 8) -= 16LL;
  result = a2;
  *a2 = a3;
  return result;
}
