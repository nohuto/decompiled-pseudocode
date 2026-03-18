/*
 * XREFs of ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x14002ED7C
 * Callers:
 *     ?InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x14002ECF0 (-InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 * Callees:
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x14002EE88 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     ?IsDeviceActive@CAdapter@@QEAA_NXZ @ 0x14002F084 (-IsDeviceActive@CAdapter@@QEAA_NXZ.c)
 *     ?Release@CPushLockCriticalSection@@QEAAXXZ @ 0x14002F0F0 (-Release@CPushLockCriticalSection@@QEAAXXZ.c)
 *     ?InternalDiscard@CAdapterCollection@@AEAAXXZ @ 0x14002F128 (-InternalDiscard@CAdapterCollection@@AEAAXXZ.c)
 *     ?IsEqualLuid@CAdapter@@IEAA_NAEBU_LUID@@@Z @ 0x14009A848 (-IsEqualLuid@CAdapter@@IEAA_NAEBU_LUID@@@Z.c)
 */

char __fastcall CAdapterCollection::UpdateCollection(
        CAdapterCollection *this,
        struct CSM_TOKEN_ADAPTER_INFO *a2,
        void **a3,
        unsigned int a4)
{
  struct CSM_TOKEN_ADAPTER_INFO *v4; // rsi
  char v7; // bl
  __int64 v9; // r15
  char *v10; // r9
  char *v11; // r8
  CAdapter *v12; // rsi
  CAdapter *v13; // rcx
  char **v14; // r8
  void *v15; // rax
  __int64 v16; // rdi
  struct _LUID v17; // [rsp+60h] [rbp+8h] BYREF
  struct CSM_TOKEN_ADAPTER_INFO *v18; // [rsp+68h] [rbp+10h]
  void **v19; // [rsp+70h] [rbp+18h]

  v19 = a3;
  v18 = a2;
  v4 = a2;
  v7 = 1;
  ExAcquirePushLockExclusiveEx((char *)this + 40, 0LL);
  *((_BYTE *)this + 48) = 1;
  if ( *((_DWORD *)this + 1) != a4 )
  {
LABEL_2:
    v7 = 0;
    CAdapterCollection::InternalDiscard(this);
    goto LABEL_3;
  }
  v16 = 0LL;
LABEL_4:
  if ( (unsigned int)v16 < a4 )
  {
    v9 = 0LL;
    v10 = (char *)this + 24;
    v11 = (char *)*((_QWORD *)this + 3);
    v17 = (struct _LUID)*((_QWORD *)v4 + 3 * v16);
    while ( v11 != v10 )
    {
      v12 = (CAdapter *)((unsigned __int64)(v11 - 8) & -(__int64)(v11 != 0LL));
      if ( CAdapter::IsEqualLuid(v12, &v17) )
      {
        if ( CAdapter::IsDeviceActive(v13) && CAdapter::UpdateRenderFence(v12, *((void **)v18 + 3 * v16 + 1)) >= 0 )
        {
          v15 = (void *)*((_QWORD *)v12 + 6);
          v16 = (unsigned int)(v16 + 1);
          v4 = v18;
          v19[v9] = v15;
          goto LABEL_4;
        }
        goto LABEL_2;
      }
      v11 = *v14;
      v9 = (unsigned int)(v9 + 1);
    }
    goto LABEL_2;
  }
LABEL_3:
  CPushLockCriticalSection::Release((CAdapterCollection *)((char *)this + 40));
  return v7;
}
