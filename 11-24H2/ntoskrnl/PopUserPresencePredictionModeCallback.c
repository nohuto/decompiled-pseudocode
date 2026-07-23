/*
 * XREFs of PopUserPresencePredictionModeCallback @ 0x140A963A0
 * Callers:
 *     <none>
 * Callees:
 *     PopUmpoSendUserPresencePredictionAction @ 0x140ABC06C (PopUmpoSendUserPresencePredictionAction.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopUserPresencePredictionModeCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  __int64 v4; // r9
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-8h]

  v4 = *(_QWORD *)&GUID_USER_PRESENCE_PREDICTION.Data1 - *a1;
  if ( *(_QWORD *)&GUID_USER_PRESENCE_PREDICTION.Data1 == *a1 )
    v4 = *(_QWORD *)GUID_USER_PRESENCE_PREDICTION.Data4 - a1[1];
  v5 = 0;
  if ( v4 || a3 != 4 || !a2 )
    return (unsigned int)-1073741811;
  PopAcquirePolicyLock(a1, a2);
  if ( !*a2 )
  {
    dword_140F0B3E0 = 0;
    v11 = 2LL;
LABEL_13:
    PopUmpoSendUserPresencePredictionAction(v11);
    goto LABEL_8;
  }
  if ( *a2 == 1 )
  {
    dword_140F0B3E0 = 1;
    v11 = 3LL;
    goto LABEL_13;
  }
LABEL_8:
  PopReleasePolicyLock(v7, v6, v8, v9, v12);
  return v5;
}
