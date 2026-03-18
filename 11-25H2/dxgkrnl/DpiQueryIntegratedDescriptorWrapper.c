/*
 * XREFs of DpiQueryIntegratedDescriptorWrapper @ 0x14005D800
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x140085690 (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 *     DpiFdoCreateRelatedObjects @ 0x14040B520 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     memset @ 0x14009FCC0 (memset.c)
 *     DxgkGetDriverVersionNoLock @ 0x14018AA00 (DxgkGetDriverVersionNoLock.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x14023D870 (DpiFdoQueryAdapterInfoIntegratedDisplay.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x14023DB08 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiFdoValidateIntegratedDisplayDescriptor @ 0x140241DB4 (DpiFdoValidateIntegratedDisplayDescriptor.c)
 */

__int64 __fastcall DpiQueryIntegratedDescriptorWrapper(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned int v6; // ebx
  unsigned int v7; // esi
  __int64 result; // rax
  _QWORD *v9; // r14
  _QWORD *v10; // rdi
  __int64 v11; // rax
  void *Pool2; // rax
  __int64 v13; // rax
  int AdapterInfoIntegratedDisplay2; // eax
  int AdapterInfoIntegratedDisplay; // eax
  int v16; // edx

  v4 = *(_QWORD *)(a1 + 64);
  v6 = 0;
  v7 = 0;
  if ( *(_BYTE *)(v4 + 6440) == 1 )
  {
    WdLogSingleEntry1(4LL, *(_QWORD *)(a1 + 64));
    result = 0LL;
    WdLogGlobalForLineNumber = 1377;
  }
  else
  {
    v9 = *(_QWORD **)(v4 + 3600);
    while ( v9 != (_QWORD *)(v4 + 3600) )
    {
      v10 = v9 - 4;
      v9 = (_QWORD *)*v9;
      v11 = *((unsigned __int16 *)v10 + 46);
      if ( (_WORD)v11 )
      {
        Pool2 = (void *)ExAllocatePool2(256LL, v11 + 128, 1953656900LL, a4);
        v10[13] = Pool2;
        if ( !Pool2 )
        {
          WdLogSingleEntry1(6LL, (int)v6);
          result = 3221225626LL;
          WdLogGlobalForLineNumber = 1409;
          return result;
        }
        memset(Pool2, 0, *((unsigned __int16 *)v10 + 46) + 128LL);
        v13 = v10[13] + 128LL;
        v10[14] = v13;
        v10[15] = v13;
        if ( (int)DxgkGetDriverVersionNoLock(*(_QWORD *)(v4 + 4032)) < 2400 )
        {
          AdapterInfoIntegratedDisplay = DpiFdoQueryAdapterInfoIntegratedDisplay(a1, v10);
          v6 = AdapterInfoIntegratedDisplay;
          if ( AdapterInfoIntegratedDisplay < 0 )
          {
            WdLogSingleEntry1(2LL, AdapterInfoIntegratedDisplay);
            WdLogGlobalForLineNumber = 1452;
            return v6;
          }
        }
        else
        {
          AdapterInfoIntegratedDisplay2 = DpiFdoQueryAdapterInfoIntegratedDisplay2(a1, v10);
          v6 = AdapterInfoIntegratedDisplay2;
          if ( AdapterInfoIntegratedDisplay2 < 0 )
          {
            WdLogSingleEntry1(2LL, AdapterInfoIntegratedDisplay2);
            WdLogGlobalForLineNumber = 1437;
            return v6;
          }
        }
        result = DpiFdoValidateIntegratedDisplayDescriptor(v4, v10);
        v6 = result;
        if ( (int)result < 0 )
          return result;
        v16 = 1 << *(_BYTE *)(v10[13] + 122LL);
        if ( (v16 & v7) != 0 )
        {
          WdLogSingleEntry2(2LL, *(unsigned __int8 *)(v10[13] + 122LL), *((unsigned int *)v10 + 6));
          result = 3221225485LL;
          WdLogGlobalForLineNumber = 1468;
          return result;
        }
        v7 |= v16;
      }
    }
    *(_BYTE *)(v4 + 6440) = 1;
    if ( ((v7 + 1) & v7) != 0 )
    {
      v6 = -1073741811;
      WdLogSingleEntry1(2LL, v7);
      WdLogGlobalForLineNumber = 1487;
    }
    return v6;
  }
  return result;
}
