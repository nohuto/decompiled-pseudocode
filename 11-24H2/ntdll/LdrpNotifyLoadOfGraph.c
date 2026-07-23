/*
 * XREFs of LdrpNotifyLoadOfGraph @ 0x1800316E0
 * Callers:
 *     LdrpPrepareModuleForExecution @ 0x1800315A4 (LdrpPrepareModuleForExecution.c)
 *     LdrpNotifyLoadOfGraph @ 0x1800316E0 (LdrpNotifyLoadOfGraph.c)
 * Callees:
 *     LdrpNotifyLoadOfGraph @ 0x1800316E0 (LdrpNotifyLoadOfGraph.c)
 *     LdrpSendPostSnapNotifications @ 0x18008D080 (LdrpSendPostSnapNotifications.c)
 */

__int64 __fastcall LdrpNotifyLoadOfGraph(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 result; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
  int v7; // ecx

  v1 = *(_QWORD **)(a1 + 40);
  if ( !v1 )
    goto LABEL_2;
  v4 = *(_QWORD **)(a1 + 40);
  while ( 1 )
  {
    v4 = (_QWORD *)*v4;
    v5 = v4[1];
    v6 = *(_DWORD *)(v5 + 56);
    if ( v6 != 6 )
      break;
    v7 = LdrpNotifyLoadOfGraph(v5);
    if ( v7 < 0 )
      goto LABEL_12;
LABEL_9:
    if ( v4 == v1 )
      goto LABEL_12;
  }
  if ( v6 >= 7 )
  {
    v7 = 0;
    goto LABEL_9;
  }
  v7 = -1073741595;
  if ( v6 == -4 )
    v7 = -1073741502;
LABEL_12:
  if ( v7 < 0 )
    return (unsigned int)v7;
LABEL_2:
  *(_DWORD *)(a1 + 56) = 7;
  result = LdrpSendPostSnapNotifications(a1);
  if ( (int)result < 0 )
    *(_DWORD *)(a1 + 56) = 6;
  return result;
}
