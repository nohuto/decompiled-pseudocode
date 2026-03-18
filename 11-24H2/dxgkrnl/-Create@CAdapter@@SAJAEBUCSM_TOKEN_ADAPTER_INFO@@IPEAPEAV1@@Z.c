/*
 * XREFs of ?Create@CAdapter@@SAJAEBUCSM_TOKEN_ADAPTER_INFO@@IPEAPEAV1@@Z @ 0x14005C5F4
 * Callers:
 *     ?PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x14009AB20 (-PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 * Callees:
 *     ?Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z @ 0x14005F0F0 (-Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z.c)
 *     ??0CAdapter@@IEAA@I@Z @ 0x14009AF84 (--0CAdapter@@IEAA@I@Z.c)
 *     ??_GCAdapter@@IEAAPEAXI@Z @ 0x14009B198 (--_GCAdapter@@IEAAPEAXI@Z.c)
 */

__int64 __fastcall CAdapter::Create(const struct CSM_TOKEN_ADAPTER_INFO *a1, unsigned int a2, struct CAdapter **a3)
{
  int v6; // edi
  CAdapter *Pool2; // rax
  CAdapter *v8; // rax
  CAdapter *v9; // rbx
  unsigned int v10; // edx

  *a3 = 0LL;
  v6 = -1073741801;
  Pool2 = (CAdapter *)ExAllocatePool2(256LL, 200LL, 1667321172LL);
  if ( Pool2 )
  {
    v8 = CAdapter::CAdapter(Pool2, a2);
    v9 = v8;
    if ( v8 )
    {
      v6 = CAdapter::Initialize(v8, a1);
      if ( v6 < 0 )
        CAdapter::`scalar deleting destructor'(v9, v10);
      else
        *a3 = v9;
    }
  }
  return (unsigned int)v6;
}
