/*
 * XREFs of TtmpCleanupPowerRequestsTrackingFromCurrentSession @ 0x14076A704
 * Callers:
 *     TtmCleanupCurrentSession @ 0x140AA850C (TtmCleanupCurrentSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall TtmpCleanupPowerRequestsTrackingFromCurrentSession(__int64 a1)
{
  _QWORD **v1; // rdi
  _QWORD *v3; // rbx
  _QWORD **v4; // r14
  _QWORD *i; // rcx
  _QWORD **v6; // rsi
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  void *v9; // rcx

  v1 = *(_QWORD ***)(a1 + 280);
  v3 = v1;
  while ( v3 )
  {
    v3 = (_QWORD *)*v3;
    if ( ((unsigned __int8)v3 & 1) != 0 )
      break;
LABEL_8:
    if ( !v3 )
      goto LABEL_22;
    v4 = (_QWORD **)v3;
    for ( i = v1; (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == v3 )
      {
        *i = *v3;
        --*(_DWORD *)(a1 + 272);
        *v3 |= 0x8000000000000002uLL;
        v3 = i;
        goto LABEL_15;
      }
    }
    v4 = 0LL;
LABEL_15:
    v6 = v4 + 6;
    while ( 1 )
    {
      v7 = *v6;
      if ( *v6 == v6 )
        break;
      if ( (_QWORD **)v7[1] != v6 || (v8 = (_QWORD *)*v7, *(_QWORD **)(*v7 + 8LL) != v7) )
        __fastfail(3u);
      *v6 = v8;
      v8[1] = v6;
      ExFreePoolWithTag(v7 - 1, 0x52507454u);
    }
    ExFreePoolWithTag(v4, 0x52507454u);
  }
  for ( ++v1; (unsigned __int64)v1 < *(_QWORD *)(a1 + 280) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 276) >> 5); ++v1 )
  {
    v3 = *v1;
    if ( ((unsigned __int8)*v1 & 1) == 0 )
      goto LABEL_8;
  }
LABEL_22:
  v9 = *(void **)(a1 + 280);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x52507454u);
}
