/*
 * XREFs of ndisNdkPcwRemoveCounter @ 0x1401408E4
 * Callers:
 *     ?ndisNdkPcwProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x140162510 (-ndisNdkPcwProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     NDIS_NDK_PCW_NUM_COUNTERS_SET_IN_MASK @ 0x1401408C4 (NDIS_NDK_PCW_NUM_COUNTERS_SET_IN_MASK.c)
 *     ?ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z @ 0x14015F050 (-ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015F4B0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015F730 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401645E0 (-ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisNdkPcwRemoveCounter(__int64 a1)
{
  struct _NDIS_NDK_BLOCK *v2; // rbx
  struct _NDIS_NDK_BLOCK **v3; // rdi
  struct _NDIS_MINIPORT_BLOCK *v4; // rbp
  const struct _UNICODE_STRING *MiniportName; // rax
  unsigned __int8 v6; // r8
  unsigned __int8 v7; // al
  int v8; // edx
  struct _NDIS_NDK_BLOCK *v9; // rax
  KLockHolder v11; // [rsp+20h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v11, &ndisPcwMutex);
  v2 = NdkPcwNdkBlockList;
  v3 = &NdkPcwNdkBlockList;
  while ( v2 )
  {
    v4 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)v2 + 1);
    MiniportName = ndisPcwGetMiniportName(v4);
    if ( ndisWildCardStringMatch(*(const struct _UNICODE_STRING **)(a1 + 8), MiniportName, v6)
      && (v7 = NDIS_NDK_PCW_NUM_COUNTERS_SET_IN_MASK(*(_QWORD *)a1)) != 0
      && (v8 = *((_DWORD *)v2 + 4) - v7, *((_DWORD *)v2 + 4) = v8, v8 <= 0) )
    {
      v9 = *(struct _NDIS_NDK_BLOCK **)v2;
      *((_DWORD *)v2 + 4) = 0;
      *v3 = v9;
      *(_QWORD *)v2 = 0LL;
      *((_QWORD *)v2 + 1) = 0LL;
      v2 = *v3;
      ndisDereferenceMiniport(v4, 0x5Du);
    }
    else
    {
      v3 = (struct _NDIS_NDK_BLOCK **)v2;
      v2 = *(struct _NDIS_NDK_BLOCK **)v2;
    }
  }
  KLockHolder::~KLockHolder(&v11);
  return 0LL;
}
