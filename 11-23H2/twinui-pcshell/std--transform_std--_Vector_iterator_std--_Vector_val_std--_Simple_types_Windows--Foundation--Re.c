/*
 * XREFs of std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Windows::Foundation::Rect______std::back_insert_iterator_std::vector_tagRECT_std::allocator_tagRECT_______lambda_4c658d99aeacf5e09ef3fae70976934f___ @ 0x18065EAFC
 * Callers:
 *     ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x1806623F0 (-OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 * Callees:
 *     ??$_Emplace_reallocate@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@$$QEAU2@@Z @ 0x180092070 (--$_Emplace_reallocate@UtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAPEAU.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

_QWORD *__fastcall std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Windows::Foundation::Rect______std::back_insert_iterator_std::vector_tagRECT_std::allocator_tagRECT_______lambda_4c658d99aeacf5e09ef3fae70976934f___(
        _QWORD *a1,
        float *a2,
        float *a3,
        __int64 a4)
{
  float *v7; // rsi
  float v8; // xmm0_4
  float v9; // xmm1_4
  _BYTE *v10; // rdx
  int v11; // eax
  float v12; // xmm0_4
  int v13; // eax
  float v14; // xmm1_4
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 != a3 )
  {
    v7 = a2 + 2;
    do
    {
      v8 = *(v7 - 2);
      v9 = *(v7 - 1);
      v10 = *(_BYTE **)(a4 + 8);
      v11 = (int)v8;
      v12 = v8 + *v7;
      LODWORD(v16) = v11;
      v13 = (int)v9;
      v14 = v9 + v7[1];
      DWORD1(v16) = v13;
      DWORD2(v16) = (int)v12;
      HIDWORD(v16) = (int)v14;
      if ( v10 == *(_BYTE **)(a4 + 16) )
      {
        std::vector<tagRECT>::_Emplace_reallocate<tagRECT>((const void **)a4, v10, &v16);
      }
      else
      {
        *(_OWORD *)v10 = v16;
        *(_QWORD *)(a4 + 8) += 16LL;
      }
      v7 += 4;
    }
    while ( v7 - 2 != a3 );
  }
  *a1 = a4;
  return a1;
}
