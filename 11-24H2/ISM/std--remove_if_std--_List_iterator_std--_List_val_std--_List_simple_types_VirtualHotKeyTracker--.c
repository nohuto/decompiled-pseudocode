/*
 * XREFs of std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_VirtualHotKeyTracker::KeyEventData_______lambda_7f079bc5e87df2e09bd622ff86c26e64___ @ 0x1801B1340
 * Callers:
 *     ?OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z @ 0x1801B1500 (-OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     _lambda_7f079bc5e87df2e09bd622ff86c26e64_::operator() @ 0x1801B14BC (_lambda_7f079bc5e87df2e09bd622ff86c26e64_--operator().c)
 */

_QWORD *__fastcall std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_VirtualHotKeyTracker::KeyEventData_______lambda_7f079bc5e87df2e09bd622ff86c26e64___(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int128 v8; // xmm1
  __int64 *v9; // rdi
  __int64 *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm1
  _QWORD *result; // rax
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int128 v15; // [rsp+30h] [rbp-18h]

  while ( 1 )
  {
    if ( a2 == a3 )
    {
      v9 = a2;
      goto LABEL_9;
    }
    v8 = *((_OWORD *)a2 + 2);
    v14 = *((_OWORD *)a2 + 1);
    v15 = v8;
    if ( (unsigned __int8)lambda_7f079bc5e87df2e09bd622ff86c26e64_::operator()(a4, &v14) )
      break;
    a2 = (__int64 *)*a2;
  }
  v9 = a2;
  while ( 1 )
  {
    v10 = (__int64 *)*a2;
    a2 = v10;
    if ( v10 == a3 )
      break;
    v11 = *((_OWORD *)v10 + 2);
    v14 = *((_OWORD *)v10 + 1);
    v15 = v11;
    if ( !(unsigned __int8)lambda_7f079bc5e87df2e09bd622ff86c26e64_::operator()(a4, &v14) )
    {
      v12 = *((_OWORD *)a2 + 2);
      *((_OWORD *)v9 + 1) = *((_OWORD *)a2 + 1);
      *((_OWORD *)v9 + 2) = v12;
      v9 = (__int64 *)*v9;
    }
  }
LABEL_9:
  result = a1;
  *a1 = v9;
  return result;
}
