/*
 * XREFs of DpiQueryIntegratedDescriptorWrapper @ 0x14005D260
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x140085D20 (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 *     DpiFdoCreateRelatedObjects @ 0x140404094 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     memset @ 0x1400A2000 (memset.c)
 *     DxgkGetDriverVersionNoLock @ 0x14018C9F0 (DxgkGetDriverVersionNoLock.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x140244460 (DpiFdoQueryAdapterInfoIntegratedDisplay.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1402446F8 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiFdoValidateIntegratedDisplayDescriptor @ 0x140248BB4 (DpiFdoValidateIntegratedDisplayDescriptor.c)
 */

__int64 __fastcall DpiQueryIntegratedDescriptorWrapper(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v3; // ebx
  unsigned int v4; // esi
  __int64 result; // rax
  _QWORD *v6; // r14
  _QWORD *v7; // rdi
  __int64 v8; // rax
  void *Pool2; // rax
  __int64 v10; // rax
  int AdapterInfoIntegratedDisplay2; // eax
  int AdapterInfoIntegratedDisplay; // eax
  int v13; // edx

  v1 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v4 = 0;
  if ( *(_BYTE *)(v1 + 6440) == 1 )
  {
    WdLogSingleEntry1(4LL, *(_QWORD *)(a1 + 64));
    result = 0LL;
    WdLogGlobalForLineNumber = 1457;
  }
  else
  {
    v6 = *(_QWORD **)(v1 + 3600);
    while ( v6 != (_QWORD *)(v1 + 3600) )
    {
      v7 = v6 - 4;
      v6 = (_QWORD *)*v6;
      v8 = *((unsigned __int16 *)v7 + 46);
      if ( (_WORD)v8 )
      {
        Pool2 = (void *)ExAllocatePool2(256LL, v8 + 128, 1953656900LL);
        v7[13] = Pool2;
        if ( !Pool2 )
        {
          WdLogSingleEntry1(6LL, (int)v3);
          result = 3221225626LL;
          WdLogGlobalForLineNumber = 1489;
          return result;
        }
        memset(Pool2, 0, *((unsigned __int16 *)v7 + 46) + 128LL);
        v10 = v7[13] + 128LL;
        v7[14] = v10;
        v7[15] = v10;
        if ( (int)DxgkGetDriverVersionNoLock(*(_QWORD *)(v1 + 4032)) < 2400 )
        {
          AdapterInfoIntegratedDisplay = DpiFdoQueryAdapterInfoIntegratedDisplay(a1, v7);
          v3 = AdapterInfoIntegratedDisplay;
          if ( AdapterInfoIntegratedDisplay < 0 )
          {
            WdLogSingleEntry1(2LL, AdapterInfoIntegratedDisplay);
            WdLogGlobalForLineNumber = 1532;
            return v3;
          }
        }
        else
        {
          AdapterInfoIntegratedDisplay2 = DpiFdoQueryAdapterInfoIntegratedDisplay2(a1, v7);
          v3 = AdapterInfoIntegratedDisplay2;
          if ( AdapterInfoIntegratedDisplay2 < 0 )
          {
            WdLogSingleEntry1(2LL, AdapterInfoIntegratedDisplay2);
            WdLogGlobalForLineNumber = 1517;
            return v3;
          }
        }
        result = DpiFdoValidateIntegratedDisplayDescriptor(v1, v7);
        v3 = result;
        if ( (int)result < 0 )
          return result;
        v13 = 1 << *(_BYTE *)(v7[13] + 122LL);
        if ( (v13 & v4) != 0 )
        {
          WdLogSingleEntry2(2LL, *(unsigned __int8 *)(v7[13] + 122LL), *((unsigned int *)v7 + 6));
          result = 3221225485LL;
          WdLogGlobalForLineNumber = 1548;
          return result;
        }
        v4 |= v13;
      }
    }
    *(_BYTE *)(v1 + 6440) = 1;
    if ( ((v4 + 1) & v4) != 0 )
    {
      v3 = -1073741811;
      WdLogSingleEntry1(2LL, v4);
      WdLogGlobalForLineNumber = 1567;
    }
    return v3;
  }
  return result;
}
