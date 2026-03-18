/*
 * XREFs of ??0CAdapter@@IEAA@I@Z @ 0x140098E34
 * Callers:
 *     ?Create@CAdapter@@SAJAEBUCSM_TOKEN_ADAPTER_INFO@@IPEAPEAV1@@Z @ 0x14005CB94 (-Create@CAdapter@@SAJAEBUCSM_TOKEN_ADAPTER_INFO@@IPEAPEAV1@@Z.c)
 * Callees:
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x140078D98 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

CAdapter *__fastcall CAdapter::CAdapter(CAdapter *this, int a2)
{
  _QWORD *v3; // rdx
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _OWORD v8[5]; // [rsp+30h] [rbp-58h] BYREF

  *(_QWORD *)this = &CAdapter::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 6) = -1LL;
  *((_DWORD *)this + 24) = a2;
  *((_DWORD *)this + 48) = 1;
  v3 = (_QWORD *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
  v3[1] = v3;
  *v3 = v3;
  *((_QWORD *)this + 14) = (char *)this + 104;
  *((_QWORD *)this + 13) = (char *)this + 104;
  if ( (unsigned int)Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline() )
  {
    RtlInitializeGenericTable(
      (PRTL_GENERIC_TABLE)((char *)this + 120),
      (PRTL_GENERIC_COMPARE_ROUTINE)CTokenManager::TokenQueueTableEntry::Compare,
      CAdapter::FlipManagerSyncContext::Allocate,
      (PRTL_GENERIC_FREE_ROUTINE)CTokenManager::TokenQueueTableEntry::Free,
      0LL);
  }
  else
  {
    memset(v8, 0, 0x48uLL);
    v4 = v8[1];
    *(_OWORD *)((char *)this + 120) = v8[0];
    v5 = v8[2];
    *(_OWORD *)((char *)this + 136) = v4;
    v6 = v8[3];
    *(_OWORD *)((char *)this + 152) = v5;
    *(_QWORD *)&v5 = *(_QWORD *)&v8[4];
    *(_OWORD *)((char *)this + 168) = v6;
    *((_QWORD *)this + 23) = v5;
  }
  return this;
}
