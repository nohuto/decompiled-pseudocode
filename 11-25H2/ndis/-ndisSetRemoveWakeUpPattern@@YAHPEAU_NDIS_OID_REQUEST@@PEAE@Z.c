/*
 * XREFs of ?ndisSetRemoveWakeUpPattern@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400BD9B4
 * Callers:
 *     ?ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BB640 (-ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisSetRemoveWakeUpPattern(struct _NDIS_OID_REQUEST *a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // rsi
  UINT InformationBufferLength; // r8d
  UINT v5; // eax
  _DWORD *InformationBuffer; // rcx
  unsigned int v7; // ebx
  unsigned int v8; // edx
  unsigned int v9; // r9d
  int v10; // edx

  v2 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      41,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      (char)a1);
  }
  InformationBufferLength = a1->DATA.QUERY_INFORMATION.InformationBufferLength;
  v5 = 24;
  *v2 = 1;
  if ( InformationBufferLength >= 0x18 )
  {
    InformationBuffer = a1->DATA.QUERY_INFORMATION.InformationBuffer;
    v7 = 0;
    v8 = InformationBuffer[2];
    if ( !v8
      || (v9 = v8 + 24, v8 + 24 < 0x18)
      || (v8 = InformationBuffer[3], v8 < v9)
      || (v5 = v8 + InformationBuffer[4], v5 < v8) )
    {
      v7 = -1073676267;
      goto LABEL_13;
    }
    if ( InformationBufferLength >= v5 )
    {
      *v2 = 0;
      goto LABEL_13;
    }
  }
  v10 = (int)a1;
  v7 = -1073676268;
  a1->DATA.QUERY_INFORMATION.BytesNeeded = v5;
  if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    return v7;
  LOBYTE(v10) = 2;
  WPP_RECORDER_SF_q(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    v10,
    11,
    42,
    (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
    (char)a1);
LABEL_13:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      11,
      43,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      (char)a1);
  }
  return v7;
}
