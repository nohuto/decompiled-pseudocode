/*
 * XREFs of ??$ndisInvokeIterativeDatapath@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20K@Z@Z @ 0x1400430D0
 * Callers:
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001A8A0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall ndisInvokeIterativeDatapath<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 (__fastcall *a7)(__int64, __int64, __int64))
{
  __int64 v7; // r12
  _UNKNOWN **result; // rax
  __int64 *v10; // rbx
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 v15; // rdi
  __int64 v16; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v17; // rax
  __int64 v18; // r8
  __int64 v19; // rbx
  struct _VF_NDIS_DISPATCH_TABLE *v20; // rax
  __int64 v21; // r8
  __int64 v22; // rdi
  __int64 v23; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v24; // rax
  __int64 v25; // r8
  __int64 v26; // rbx
  _QWORD v27[9]; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = &retaddr;
  v10 = v27;
  LODWORD(v7) = KeGetPcr()->Prcb.Number;
  v27[2] = 0LL;
  v27[0] = a1;
  v27[1] = a1;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_DWORD *)(a1 + 132) = a4;
  while ( *(_BYTE *)a5 == 5 )
  {
    v13 = *v10;
    if ( !*v10 )
      break;
    v14 = a5;
    v15 = *(_QWORD *)(a5 + 424) + 96 * v7;
    if ( *(_BYTE *)(v15 + 88) )
    {
      *v10 = 0LL;
      do
      {
        v20 = ndisVerifierNdisDispatch;
        v21 = *(unsigned int *)(v13 + 132);
        v22 = *(_QWORD *)(v13 + 112);
        *(_DWORD *)(v13 + 132) = 0;
        if ( v20 && *(_BYTE *)a5 == 5 && *(_QWORD *)(a5 + 776) )
          result = (_UNKNOWN **)(*((__int64 (__fastcall **)(__int64, __int64, __int64))v20 + 17))(a6, v13, v21);
        else
          result = (_UNKNOWN **)a7(a6, v13, v21);
        v13 = v22;
      }
      while ( v22 );
      break;
    }
    *(_BYTE *)(v15 + 88) = 1;
    v16 = *v10;
    *v10 = 0LL;
    if ( v16 )
    {
      do
      {
        v17 = ndisVerifierNdisDispatch;
        v18 = *(unsigned int *)(v16 + 132);
        v19 = *(_QWORD *)(v16 + 112);
        *(_DWORD *)(v16 + 132) = 0;
        if ( v17 && *(_BYTE *)a5 == 5 && *(_QWORD *)(a5 + 776) )
          result = (_UNKNOWN **)(*((__int64 (__fastcall **)(__int64, __int64, __int64))v17 + 17))(a6, v16, v18);
        else
          result = (_UNKNOWN **)a7(a6, v16, v18);
        v16 = v19;
      }
      while ( v19 );
    }
    *(_BYTE *)(v15 + 88) = 0;
    v10 = (__int64 *)(v15 + 72);
    a5 = *(_QWORD *)(a5 + 552);
    a7 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v14 + 528);
    a6 = *(_QWORD *)(v14 + 536);
  }
  v23 = *v10;
  if ( *v10 )
  {
    *v10 = 0LL;
    do
    {
      v24 = ndisVerifierNdisDispatch;
      v25 = *(unsigned int *)(v23 + 132);
      v26 = *(_QWORD *)(v23 + 112);
      *(_DWORD *)(v23 + 132) = 0;
      if ( v24 && *(_BYTE *)a5 == 5 && *(_QWORD *)(a5 + 776) )
        result = (_UNKNOWN **)(*((__int64 (__fastcall **)(__int64, __int64, __int64))v24 + 17))(a6, v23, v25);
      else
        result = (_UNKNOWN **)a7(a6, v23, v25);
      v23 = v26;
    }
    while ( v26 );
  }
  return result;
}
