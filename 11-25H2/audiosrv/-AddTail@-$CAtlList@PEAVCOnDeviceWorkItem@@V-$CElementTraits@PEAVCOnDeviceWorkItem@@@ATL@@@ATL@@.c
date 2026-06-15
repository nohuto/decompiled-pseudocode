/*
 * XREFs of ?AddTail@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCOnDeviceWorkItem@@@Z @ 0x180052BF0
 * Callers:
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@@Z @ 0x1800527A0 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@W4__MIDL___MIDL_itf_mmdevi.c)
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z @ 0x1800529B0 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_QWORD *__fastcall ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::AddTail(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rsi
  unsigned __int64 v5; // rcx
  _QWORD *v6; // rax
  int v7; // r8d
  _QWORD *i; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 32) )
    goto LABEL_8;
  v5 = *(unsigned int *)(a1 + 40);
  if ( v5 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v5 < 0x18 )
      goto LABEL_12;
    v5 *= 24LL;
  }
  v6 = malloc(v5 + 8);
  if ( !v6 )
LABEL_12:
    ATL::AtlThrowImpl(-2147024882);
  *v6 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v6;
  v7 = *(_DWORD *)(a1 + 40) - 1;
  for ( i = &v6[2 * v7 + 1 + (unsigned int)v7]; v7 >= 0; --v7 )
  {
    *i = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = i;
    i -= 3;
  }
LABEL_8:
  v9 = *(_QWORD **)(a1 + 32);
  v10 = *v9;
  v9[2] = *a2;
  *(_QWORD *)(a1 + 32) = v10;
  *v9 = 0LL;
  v9[1] = v3;
  ++*(_QWORD *)(a1 + 16);
  v11 = *(_QWORD **)(a1 + 8);
  if ( v11 )
    *v11 = v9;
  else
    *(_QWORD *)a1 = v9;
  result = v9;
  *(_QWORD *)(a1 + 8) = v9;
  return result;
}
