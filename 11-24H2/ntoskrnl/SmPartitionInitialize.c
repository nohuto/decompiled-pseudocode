/*
 * XREFs of SmPartitionInitialize @ 0x140797794
 * Callers:
 *     SmCreatePartition @ 0x140A34664 (SmCreatePartition.c)
 * Callees:
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     SmFpInitialize @ 0x14049F0BC (SmFpInitialize.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x140608C4C (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     SmKmVirtualLockCtxInitialize @ 0x14060C5A4 (SmKmVirtualLockCtxInitialize.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SmcCacheManagerInitialize @ 0x14079D20C (SmcCacheManagerInitialize.c)
 */

void *__fastcall SmPartitionInitialize(__int64 a1)
{
  void *result; // rax
  _DWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 (__fastcall *v4)(struct _EX_RUNDOWN_REF *, unsigned __int64 *, int); // [rsp+28h] [rbp-20h]
  __int64 v5; // [rsp+30h] [rbp-18h]

  memset_0((void *)a1, 0, 0xD40uLL);
  v3[0] = 123;
  v4 = SmpStoreMgrCallback;
  v3[1] = (unsigned __int16)KeNumberNodes;
  v5 = a1 + 3120;
  SMKM_STORE_MGR<SM_TRAITS>::SmInitialize(a1, (__int64)v3);
  *(_QWORD *)(a1 + 2152) = 0LL;
  KeInitializeEvent((PRKEVENT)(a1 + 2176), NotificationEvent, 0);
  *(_QWORD *)(a1 + 2240) = 0LL;
  *(_QWORD *)(a1 + 2248) = 0LL;
  *(_QWORD *)(a1 + 2256) = 0LL;
  *(_QWORD *)(a1 + 2264) = 0LL;
  *(_QWORD *)(a1 + 2232) = 0LL;
  *(_DWORD *)(a1 + 2240) = 0;
  *(_QWORD *)(a1 + 2248) = 0LL;
  *(_DWORD *)(a1 + 2244) = 0;
  *(_DWORD *)(a1 + 2272) = -1;
  *(_QWORD *)(a1 + 2280) = 0LL;
  *(_BYTE *)(a1 + 2200) = 5;
  SmcCacheManagerInitialize(a1 + 2288);
  *(_QWORD *)(a1 + 2848) = 0LL;
  SmKmVirtualLockCtxInitialize((_QWORD *)(a1 + 2856));
  SmFpInitialize(a1 + 2880, a1);
  SmFpInitialize(a1 + 3000, a1);
  result = memset_0((void *)(a1 + 3120), 0, 0x50uLL);
  *(_QWORD *)(a1 + 3144) = 0LL;
  *(_DWORD *)(a1 + 2144) = 3;
  return result;
}
