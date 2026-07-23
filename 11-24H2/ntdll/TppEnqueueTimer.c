/*
 * XREFs of TppEnqueueTimer @ 0x1800892C0
 * Callers:
 *     TppSingleTimerExpiration @ 0x180088760 (TppSingleTimerExpiration.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall TppEnqueueTimer(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // r9
  __int64 v4; // r8
  __int64 *v6; // rcx
  __int64 v8; // r10
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rax
  _QWORD *result; // rax
  __int64 *v14; // rdx
  _QWORD *v15; // r8
  __int64 v16; // rcx
  _QWORD *v17; // r8
  __int64 v18; // rcx

  v2 = *(unsigned int *)(a2 + 344);
  v3 = (_QWORD *)(a2 + 288);
  v4 = *(_QWORD *)(a2 + 328);
  *(_QWORD *)(a2 + 320) = v4;
  v6 = (__int64 *)(a2 + 304);
  *(_QWORD *)(a2 + 312) = a2 + 304;
  v8 = v4 + 10000 * v2;
  *(_QWORD *)(a2 + 304) = a2 + 304;
  *(_QWORD *)(a2 + 296) = a2 + 288;
  *(_QWORD *)(a2 + 288) = a2 + 288;
  v9 = *(_QWORD **)(a1 + 8);
  if ( v8 < v4 )
    v8 = 0x7FFFFFFFFFFFFFFFLL;
  if ( !v9 )
  {
LABEL_9:
    *(_QWORD *)(a1 + 8) = v3;
    goto LABEL_10;
  }
  if ( v9[4] >= v3[4] )
  {
    v12 = *v6;
    if ( *(__int64 **)(*v6 + 8) != v6 )
      goto LABEL_6;
    *v9 = v12;
    v9[1] = v6;
    *(_QWORD *)(v12 + 8) = v9;
    *v6 = (__int64)v9;
    goto LABEL_9;
  }
  v10 = v9[2];
  v11 = v9 + 2;
  if ( *(_QWORD **)(v10 + 8) != v9 + 2 )
    goto LABEL_6;
  *v3 = v10;
  v3[1] = v11;
  *(_QWORD *)(v10 + 8) = v3;
  *v11 = v3;
LABEL_10:
  result = (_QWORD *)(a2 + 248);
  *(_QWORD *)(a2 + 280) = v8;
  v14 = (__int64 *)(a2 + 264);
  *(_QWORD *)(a2 + 272) = a2 + 264;
  *(_QWORD *)(a2 + 264) = a2 + 264;
  *(_QWORD *)(a2 + 256) = a2 + 248;
  *(_QWORD *)(a2 + 248) = a2 + 248;
  v15 = *(_QWORD **)(a1 + 16);
  if ( !v15 )
    goto LABEL_16;
  if ( v15[4] >= *(_QWORD *)(a2 + 280) )
  {
    v18 = *v14;
    if ( *(__int64 **)(*v14 + 8) != v14 )
LABEL_6:
      __fastfail(3u);
    *v15 = v18;
    v15[1] = v14;
    *(_QWORD *)(v18 + 8) = v15;
    *v14 = (__int64)v15;
LABEL_16:
    *(_QWORD *)(a1 + 16) = result;
    goto LABEL_17;
  }
  v16 = v15[2];
  v17 = v15 + 2;
  if ( *(_QWORD **)(v16 + 8) != v17 )
    goto LABEL_6;
  *result = v16;
  *(_QWORD *)(a2 + 256) = v17;
  *(_QWORD *)(v16 + 8) = result;
  *v17 = result;
LABEL_17:
  *(_BYTE *)(a2 + 354) |= 1u;
  *(_BYTE *)(a2 + 352) = 1;
  return result;
}
