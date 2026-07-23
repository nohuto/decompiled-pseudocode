/*
 * XREFs of GetUCBytes @ 0x1800F21F0
 * Callers:
 *     RtlpLogHeapExtendEvent @ 0x1800F2038 (RtlpLogHeapExtendEvent.c)
 *     RtlpLogHeapContractEvent @ 0x1800F20F0 (RtlpLogHeapContractEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetUCBytes(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // r9
  __int64 *v5; // rdx
  __int64 v7; // rbx
  __int64 *v8; // rcx
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx

  v3 = 0LL;
  v5 = (__int64 *)(a1 + 288);
  *a3 = 0;
  v7 = 0LL;
  v8 = *(__int64 **)(a1 + 288);
  while ( v8 != v5 )
  {
    *a2 += (unsigned int)(*((_DWORD *)v8 + 8) << 12);
    *a3 += *((_DWORD *)v8 + 15);
    v9 = *((_DWORD *)v8 + 14);
    v8 = (__int64 *)*v8;
    v7 += (unsigned int)(v9 << 12);
  }
  v10 = *a2 + *(_QWORD *)(a1 + 592);
  *a2 = v10;
  v11 = *(_QWORD *)(a1 + 592) - *(_QWORD *)(a1 + 600) + v7;
  if ( *(_BYTE *)(a1 + 418) == 2 && (v12 = *(_QWORD *)(a1 + 408)) != 0 )
  {
    v3 = *(_QWORD *)(v12 + 48) - v12;
    v13 = *(_QWORD *)(v12 + 40) - v12;
  }
  else
  {
    v13 = 0LL;
  }
  *a2 = v10 + v3;
  return v11 + v3 - v13;
}
