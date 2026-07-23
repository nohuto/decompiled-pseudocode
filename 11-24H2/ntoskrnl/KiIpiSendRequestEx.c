/*
 * XREFs of KiIpiSendRequestEx @ 0x1402A2B80
 * Callers:
 *     KxFlushSingleTb @ 0x1405C7048 (KxFlushSingleTb.c)
 * Callees:
 *     KiIpiSendRequest @ 0x1402A24D0 (KiIpiSendRequest.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiIpiSendRequestEx(__int64 a1, __int64 a2, char *a3, _OWORD *a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned int v7; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 result; // rax
  unsigned __int16 i; // cx
  __int64 v15; // r10

  v7 = 0;
  if ( (_DWORD)a2 )
  {
    if ( (unsigned int)KeNumberProcessors_0 > 1 )
    {
LABEL_3:
      KiIpiSendRequest(a1, a2, a3, a4, a5);
      if ( a6 )
        guard_dispatch_icall_no_overrides(a7, v9);
      for ( result = *(unsigned int *)(a1 + 11648); (_DWORD)result; result = *(unsigned int *)(a1 + 11648) )
      {
        if ( (++v7 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10, v9, v11, v12) )
        {
          HvlNotifyLongSpinWait(v7);
        }
        else
        {
          _mm_pause();
        }
      }
      return result;
    }
  }
  else
  {
    for ( i = 0; i < *(_WORD *)a3; ++i )
    {
      v15 = *(_QWORD *)&a3[8 * i + 8];
      if ( v15 && (i != *(unsigned __int8 *)(a1 + 208) || v15 != *(_QWORD *)(a1 + 200)) )
        goto LABEL_3;
    }
  }
  result = a6;
  if ( a6 )
    return guard_dispatch_icall_no_overrides(a7, a2);
  return result;
}
