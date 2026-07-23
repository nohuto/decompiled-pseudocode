/*
 * XREFs of MiApplyLazyStampToAwePtes @ 0x14068236C
 * Callers:
 *     MiFinishPteChangesInPageTable @ 0x14046D518 (MiFinishPteChangesInPageTable.c)
 * Callees:
 *     MiIssueFlushTbEntire @ 0x14039E5D8 (MiIssueFlushTbEntire.c)
 *     MiInitializeTbFlushStamps @ 0x14043A0EC (MiInitializeTbFlushStamps.c)
 *     MiWriteAweClusterPte @ 0x1404D0434 (MiWriteAweClusterPte.c)
 */

__int64 __fastcall MiApplyLazyStampToAwePtes(__int64 a1)
{
  __int64 v2; // r12
  unsigned int v3; // esi
  __int64 v4; // r12
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned int v7; // r11d
  __int64 v8; // r15
  unsigned int v9; // edx
  int v10; // r9d
  unsigned int v11; // r8d
  __int64 v12; // rdi
  unsigned int v13; // r10d
  __int64 result; // rax
  __int64 v15; // rbx
  _QWORD *v16; // rbx
  __int64 i; // rdx
  unsigned int v18; // edx
  unsigned int v19; // esi
  unsigned int v20; // edx
  _DWORD *v21; // r8
  unsigned __int64 v22; // r10
  int v23; // r9d
  _DWORD *j; // rax
  unsigned int v25; // r9d
  __int64 v26; // rcx
  unsigned int v27; // edi
  unsigned __int64 k; // rax
  unsigned int *v29; // rax
  unsigned int v30; // esi
  unsigned int v31; // edi
  volatile signed __int64 *v32; // rbp
  __int64 v33; // r15
  unsigned __int64 v34; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(_QWORD *)a1 << 25;
  v3 = 0;
  v34 = 0LL;
  v4 = v2 >> 16;
  MiInitializeTbFlushStamps(&v34);
  v5 = v34;
  v6 = v34;
  if ( qword_140E2DCC0 && (v34 & 0x10) == 0 )
    v6 = v34 & ~qword_140E2DCC0;
  if ( (v6 & 0xFFFFFFFF00000000uLL) == 0 )
  {
    MiIssueFlushTbEntire(2LL, 1LL, qword_140E2DCC0);
    v5 = v34;
  }
  v34 = v5 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
  do
  {
    v7 = *(_DWORD *)(a1 + 72);
    v8 = *(_QWORD *)(a1 + 80);
    v9 = v7 - 1;
    v10 = (*(_DWORD *)(a1 + 80) & 4) != 0LL ? 0x20 : 0;
    v11 = v3 < v7 ? v3 : 0;
    v12 = v8 - ((v8 & 4) != 0 ? 4 : 0);
    while ( 1 )
    {
      v13 = v10 + v9;
      result = v9 - v11 + 1;
      if ( v9 - v11 == -1 )
        goto LABEL_9;
      v16 = (_QWORD *)(v12 + 8 * ((unsigned __int64)(v10 + v11) >> 6));
      result = ~*v16;
      for ( i = result | ((1LL << ((v10 + v11) & 0x3F)) - 1); i == -1; i = ~*v16 )
      {
        if ( (unsigned __int64)++v16 > v12 + 8 * ((unsigned __int64)v13 >> 6) )
          goto LABEL_9;
      }
      _BitScanForward64((unsigned __int64 *)&result, ~i);
      v15 = (unsigned int)result + ((unsigned int)(((__int64)v16 - v12) >> 3) << 6);
      if ( (unsigned int)v15 > v13 )
      {
LABEL_9:
        v15 = 0xFFFFFFFFLL;
        goto LABEL_16;
      }
      if ( (_DWORD)v15 != -1 )
        break;
LABEL_16:
      if ( !v11 )
        goto LABEL_21;
      v18 = v3 + 1;
      if ( v3 + 1 > v7 )
        v18 = *(_DWORD *)(a1 + 72);
      v9 = v18 - 1;
      v11 = 0;
    }
    v15 = (unsigned int)(v15 - v10);
LABEL_21:
    if ( (unsigned int)v15 < v3 || (_DWORD)v15 == -1 )
      break;
    v19 = 0;
    v20 = *(_DWORD *)(a1 + 72);
    if ( v20 <= (unsigned int)v15 )
      goto LABEL_41;
    v21 = (_DWORD *)(v8 + 4 * ((unsigned __int64)(unsigned int)v15 >> 5));
    v22 = v8 + 4 * ((unsigned __int64)(v20 - 1) >> 5);
    v23 = ((1 << (v15 & 0x1F)) - 1) | *v21;
    for ( j = v21 + 1; ; ++j )
    {
      v25 = ~v23;
      if ( v25 )
        break;
      if ( (unsigned __int64)j > v22 )
        goto LABEL_29;
      v23 = *++v21;
    }
    _BitScanForward64((unsigned __int64 *)&v26, v25);
    v27 = v26 + 32 * (((__int64)v21 - v8) >> 2);
    if ( v27 > v20 )
    {
LABEL_29:
      v27 = *(_DWORD *)(a1 + 72);
      goto LABEL_39;
    }
    for ( k = ~(v25 | ((1 << v26) - 1)); !(_DWORD)k; k = *v29 )
    {
      v29 = v21 + 1;
      if ( (unsigned __int64)(v21 + 1) > v22 )
      {
        LODWORD(k) = 32;
        goto LABEL_36;
      }
      ++v21;
    }
    _BitScanForward64(&k, k);
LABEL_36:
    v30 = k + 32 * (((__int64)v21 - v8) >> 2);
    if ( v30 > v20 )
      v30 = *(_DWORD *)(a1 + 72);
    v19 = v30 - v27;
LABEL_39:
    if ( v19 )
      v31 = v27 - v15;
    else
LABEL_41:
      v31 = v20 - v15;
    if ( v31 )
    {
      v32 = (volatile signed __int64 *)(v4 + 8 * v15);
      v33 = v31;
      do
      {
        MiWriteAweClusterPte(*(_QWORD *)(a1 + 40), v32++, v34, 6LL, *(_QWORD *)(a1 + 160));
        --v33;
      }
      while ( v33 );
    }
    result = *(_DWORD *)(a1 + 160) * v31;
    v3 = v31 + v15 + v19;
    *(_DWORD *)(a1 + 16) += result;
  }
  while ( v3 < *(_DWORD *)(a1 + 72) );
  return result;
}
