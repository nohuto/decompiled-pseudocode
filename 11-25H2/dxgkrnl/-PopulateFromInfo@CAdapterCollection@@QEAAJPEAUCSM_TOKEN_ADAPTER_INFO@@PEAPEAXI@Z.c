/*
 * XREFs of ?PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1400989C8
 * Callers:
 *     ?InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x14002E750 (-InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 * Callees:
 *     ?Release@CPushLockCriticalSection@@QEAAXXZ @ 0x14002EB50 (-Release@CPushLockCriticalSection@@QEAAXXZ.c)
 *     ?InternalDiscard@CAdapterCollection@@AEAAXXZ @ 0x14002EB88 (-InternalDiscard@CAdapterCollection@@AEAAXXZ.c)
 *     ?Create@CAdapter@@SAJAEBUCSM_TOKEN_ADAPTER_INFO@@IPEAPEAV1@@Z @ 0x14005CB94 (-Create@CAdapter@@SAJAEBUCSM_TOKEN_ADAPTER_INFO@@IPEAPEAV1@@Z.c)
 */

__int64 __fastcall CAdapterCollection::PopulateFromInfo(
        CAdapterCollection *this,
        struct CSM_TOKEN_ADAPTER_INFO *a2,
        void **a3,
        unsigned int a4)
{
  int v7; // ebx
  __int64 v8; // r9
  _QWORD *v9; // rbp
  __int64 i; // rsi
  unsigned int v11; // edx
  struct CAdapter *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  struct CAdapter *v16; // [rsp+60h] [rbp+8h] BYREF
  struct CSM_TOKEN_ADAPTER_INFO *v17; // [rsp+68h] [rbp+10h]

  v17 = a2;
  v7 = 0;
  ExAcquirePushLockExclusiveEx((char *)this + 40, 0LL);
  v9 = (_QWORD *)((char *)this + 24);
  *((_BYTE *)this + 48) = 1;
  if ( (_QWORD *)*v9 != v9 )
    CAdapterCollection::InternalDiscard(this);
  *((_DWORD *)this + 1) = a4;
  for ( i = 0LL; (unsigned int)i < a4; i = (unsigned int)(i + 1) )
  {
    v11 = *((_DWORD *)this + 2);
    v16 = 0LL;
    v7 = CAdapter::Create((struct CSM_TOKEN_ADAPTER_INFO *)((char *)v17 + 24 * i), v11, &v16, v8);
    if ( v7 < 0 )
    {
      CAdapterCollection::InternalDiscard(this);
      break;
    }
    v12 = v16;
    if ( v16 )
      v13 = (_QWORD *)((char *)v16 + 8);
    else
      v13 = 0LL;
    v14 = (_QWORD *)*((_QWORD *)this + 4);
    if ( (_QWORD *)*v14 != v9 )
      __fastfail(3u);
    *v13 = v9;
    v13[1] = v14;
    *v14 = v13;
    *((_QWORD *)this + 4) = v13;
    a3[i] = (void *)*((_QWORD *)v12 + 6);
  }
  CPushLockCriticalSection::Release((CAdapterCollection *)((char *)this + 40));
  return (unsigned int)v7;
}
