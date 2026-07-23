/*
 * XREFs of EtwpProcessNotification @ 0x1800421A0
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800443B0 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlSetThreadSubProcessTag @ 0x180043C00 (RtlSetThreadSubProcessTag.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180044BF0 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwProcessPrivateLoggerRequest @ 0x1800B5320 (EtwProcessPrivateLoggerRequest.c)
 *     EtwpProcessInternalNotification @ 0x1800FC324 (EtwpProcessInternalNotification.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EtwpProcessNotification(__int64 a1, __int16 *a2, _QWORD *a3, _DWORD *a4, _BYTE *a5)
{
  unsigned __int8 v9; // si
  PVOID v10; // rax
  int v11; // edx
  void *v12; // rbp
  __int16 v13; // ax
  __int16 v14; // ax
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rdx

  v9 = 0;
  v10 = RtlSetThreadSubProcessTag((PVOID)*(unsigned int *)(a1 + 248));
  v11 = *(_DWORD *)a2;
  v12 = v10;
  v13 = *(_WORD *)(a1 + 86);
  if ( *(_DWORD *)a2 == 3 )
  {
    v14 = v13 & 0x3FFF;
    if ( v14 == 3 || v14 == 2 )
    {
      if ( a2[39] < 0 && PrivateLoggerNotificationEntry )
        v15 = *(_QWORD *)(PrivateLoggerNotificationEntry + 88);
      else
        v15 = *(_QWORD *)(a1 + 88);
      *a3 = v15;
      *((_QWORD *)a2 + 3) = v15;
      EtwpUpdateEnableInfoAndCallback(a1, a2);
      *a5 = 1;
    }
  }
  else if ( v11 == 4 )
  {
    if ( (v13 & 0x3FFF) == 3 || (v13 & 0x3FFF) == 2 )
    {
      *a3 = *(_QWORD *)(a1 + 88);
      *a4 = EtwProcessPrivateLoggerRequest(a2);
      v9 = 1;
      *a5 = 1;
    }
  }
  else if ( (v13 & 0x3FFF) == v11 )
  {
    v17 = *(_QWORD *)(a1 + 88);
    *((_QWORD *)a2 + 3) = v17;
    v18 = *(_QWORD *)(a1 + 56);
    *a3 = v17;
    *a4 = (*(__int64 (__fastcall **)(__int16 *, __int64))(a1 + 48))(a2, v18);
    *a5 = 1;
  }
  else if ( (v13 & 0x3FFF) == 0xA
         && v11 == 7
         && *((_DWORD *)a2 + 9) == (unsigned int)NtCurrentTeb()->ClientId.UniqueProcess )
  {
    *a4 = EtwpProcessInternalNotification(a1, a2);
    *a5 = 1;
  }
  RtlSetThreadSubProcessTag(v12);
  return v9;
}
