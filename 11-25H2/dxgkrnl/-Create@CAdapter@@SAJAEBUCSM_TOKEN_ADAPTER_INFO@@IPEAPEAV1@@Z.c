/*
 * XREFs of ?Create@CAdapter@@SAJAEBUCSM_TOKEN_ADAPTER_INFO@@IPEAPEAV1@@Z @ 0x14005CB94
 * Callers:
 *     ?PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1400989C8 (-PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 * Callees:
 *     ?Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z @ 0x14005E930 (-Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z.c)
 *     ??0CAdapter@@IEAA@I@Z @ 0x140098E34 (--0CAdapter@@IEAA@I@Z.c)
 *     ??_GCAdapter@@IEAAPEAXI@Z @ 0x140099048 (--_GCAdapter@@IEAAPEAXI@Z.c)
 */

__int64 __fastcall CAdapter::Create(
        const struct CSM_TOKEN_ADAPTER_INFO *a1,
        unsigned int a2,
        struct CAdapter **a3,
        __int64 a4)
{
  int v7; // edi
  CAdapter *Pool2; // rax
  CAdapter *v9; // rax
  CAdapter *v10; // rbx
  unsigned int v11; // edx

  *a3 = 0LL;
  v7 = -1073741801;
  Pool2 = (CAdapter *)ExAllocatePool2(256LL, 200LL, 1667321172LL, a4);
  if ( Pool2 )
  {
    v9 = CAdapter::CAdapter(Pool2, a2);
    v10 = v9;
    if ( v9 )
    {
      v7 = CAdapter::Initialize(v9, a1);
      if ( v7 < 0 )
        CAdapter::`scalar deleting destructor'(v10, v11);
      else
        *a3 = v10;
    }
  }
  return (unsigned int)v7;
}
