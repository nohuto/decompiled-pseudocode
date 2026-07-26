/*
 * XREFs of ndisCoOidRequestToRequest @ 0x140074D50
 * Callers:
 *     NdisCoOidRequest @ 0x140089750 (NdisCoOidRequest.c)
 *     NdisMCmOidRequest @ 0x1400D2840 (NdisMCmOidRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisCoOidRequestToRequest(
        __int64 (__fastcall **a1)(__int64, __int64, __int64, __int64),
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 Pool2; // rax
  __int64 v10; // rbx
  int v12; // ecx
  int v13; // ecx
  _DWORD *v14; // r13
  _DWORD *v15; // rax
  int *v16; // rdx
  int *v17; // rcx
  int v18; // edx
  int v19; // ecx
  __int64 v20; // r8
  int v21; // r9d
  unsigned int v22; // edi
  int v23; // edx
  _DWORD *v24; // [rsp+68h] [rbp-30h]

  Pool2 = ExAllocatePool2(64LL, 176LL, 1701987406LL);
  v10 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v12 = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(Pool2 + 24) |= 0x400u;
  *(_DWORD *)(Pool2 + 32) = v12;
  *(_QWORD *)(Pool2 + 8) = a5;
  if ( !v12 )
  {
LABEL_8:
    v15 = (_DWORD *)(a5 + 56);
    v16 = (int *)(a5 + 52);
    v14 = (_DWORD *)(a5 + 52);
    v17 = (int *)(a5 + 56);
    goto LABEL_9;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    if ( v13 == 11 )
    {
      ExFreePoolWithTag((PVOID)Pool2, 0);
      return 3221225659LL;
    }
    goto LABEL_8;
  }
  v14 = (_DWORD *)(a5 + 52);
  v15 = (_DWORD *)(a5 + 56);
  v16 = (int *)(a5 + 52);
  v17 = (int *)(a5 + 56);
LABEL_9:
  v18 = *v16;
  v19 = *v17;
  v24 = v15;
  v20 = *(_QWORD *)(a5 + 40);
  v21 = *(_DWORD *)(a5 + 48);
  *(_DWORD *)(v10 + 40) = *(_DWORD *)(a5 + 32);
  *(_QWORD *)(v10 + 48) = v20;
  *(_DWORD *)(v10 + 56) = v21;
  *(_DWORD *)(v10 + 60) = v18;
  *(_DWORD *)(v10 + 64) = v19;
  v22 = (*a1)(a2, a3, a4, v10);
  if ( v22 != 259 )
  {
    v23 = *(_DWORD *)(v10 + 64);
    *v14 = *(_DWORD *)(v10 + 60);
    *v24 = v23;
    ExFreePoolWithTag((PVOID)v10, 0);
  }
  return v22;
}
