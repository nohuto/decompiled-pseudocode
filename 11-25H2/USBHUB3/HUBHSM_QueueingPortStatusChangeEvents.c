/*
 * XREFs of HUBHSM_QueueingPortStatusChangeEvents @ 0x140009B20
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBHSM_QueueingPortStatusChangeEvents(__int64 a1)
{
  __int64 v1; // rbx
  signed int v2; // esi
  signed int v3; // edi
  __int64 i; // rax
  __int64 v5; // rbp

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 0;
  v3 = RtlNumberOfSetBits((PRTL_BITMAP)(v1 + 1144));
  if ( !v3 )
  {
    *(_BYTE *)(v1 + 1120) = 1;
LABEL_10:
    HUBSM_AddEvent(v1 + 1272, 2046LL);
    return 2053LL;
  }
  *(_DWORD *)(v1 + 2336) = v3;
  for ( i = *(_QWORD *)(v1 + 2368); ; i = *(_QWORD *)(v5 + 248) )
  {
    v5 = i - 248;
    if ( v1 + 2368 == i )
      break;
    if ( _bittest64(*(const signed __int64 **)(v1 + 1152), *(unsigned __int16 *)(v5 + 200)) )
    {
      _InterlockedOr((volatile signed __int32 *)(v5 + 264), 1u);
      ++v2;
      (*(void (__fastcall **)(__int64, __int64))(v5 + 1240))(v5, 3030LL);
    }
  }
  if ( v3 > v2 && _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 2336), v2 - v3) == v3 - v2 )
    goto LABEL_10;
  return 2053LL;
}
