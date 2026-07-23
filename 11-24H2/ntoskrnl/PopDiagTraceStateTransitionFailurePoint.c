/*
 * XREFs of PopDiagTraceStateTransitionFailurePoint @ 0x1407564AC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceStateTransitionFailurePoint(int a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdx
  unsigned int v5; // r8d
  __int64 v6; // r10
  __int64 v7; // r10
  int v9; // [rsp+30h] [rbp-79h] BYREF
  int v10; // [rsp+34h] [rbp-75h] BYREF
  int v11; // [rsp+38h] [rbp-71h] BYREF
  struct _KTHREAD *v12; // [rsp+40h] [rbp-69h] BYREF
  struct _KTHREAD *v13; // [rsp+48h] [rbp-61h] BYREF
  __int64 v14; // [rsp+50h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-51h] BYREF
  int *v16; // [rsp+68h] [rbp-41h]
  int v17; // [rsp+70h] [rbp-39h]
  int v18; // [rsp+74h] [rbp-35h]
  int *v19; // [rsp+78h] [rbp-31h]
  int v20; // [rsp+80h] [rbp-29h]
  int v21; // [rsp+84h] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+90h] [rbp-19h] BYREF
  struct _KTHREAD **v23; // [rsp+B0h] [rbp+7h]
  int v24; // [rsp+B8h] [rbp+Fh]
  int v25; // [rsp+BCh] [rbp+13h]
  int *v26; // [rsp+C0h] [rbp+17h]
  int v27; // [rsp+C8h] [rbp+1Fh]
  int v28; // [rsp+CCh] [rbp+23h]
  int *v29; // [rsp+D0h] [rbp+27h]
  int v30; // [rsp+D8h] [rbp+2Fh]
  int v31; // [rsp+DCh] [rbp+33h]
  __int64 *v32; // [rsp+E0h] [rbp+37h]
  int v33; // [rsp+E8h] [rbp+3Fh]
  int v34; // [rsp+ECh] [rbp+43h]
  int v35; // [rsp+110h] [rbp+67h] BYREF

  v35 = a1;
  v9 = 0;
  CurrentThread = KeGetCurrentThread();
  v12 = CurrentThread;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(CurrentThread) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_STATE_TRANSITION_FAILURE);
    if ( (_BYTE)CurrentThread )
    {
      UserData.Reserved = 0;
      v18 = 0;
      v21 = 0;
      UserData.Ptr = (ULONGLONG)&v12;
      v16 = &v35;
      v19 = &v9;
      v9 = a2;
      UserData.Size = 8;
      v17 = 4;
      v20 = 4;
      LOBYTE(CurrentThread) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_STATE_TRANSITION_FAILURE, 0LL, 3u, &UserData);
    }
  }
  if ( dword_140E07680 )
  {
    LOBYTE(CurrentThread) = tlgKeywordOn((__int64)&dword_140E07680, 0x800000000000LL);
    if ( (_BYTE)CurrentThread )
    {
      if ( v5 > 5 )
      {
        LOBYTE(CurrentThread) = tlgKeywordOn(v6, v4);
        if ( (_BYTE)CurrentThread )
        {
          v25 = 0;
          v28 = 0;
          v31 = 0;
          v34 = 0;
          v13 = v12;
          v23 = &v13;
          v10 = v35;
          v26 = &v10;
          v29 = &v11;
          v32 = &v14;
          v24 = 8;
          v27 = 4;
          v11 = a2;
          v30 = 4;
          v14 = 0x1000000LL;
          v33 = 8;
          LOBYTE(CurrentThread) = tlgWriteTransfer_EtwWriteTransfer(
                                    v7,
                                    (unsigned __int8 *)byte_140048FF0,
                                    0LL,
                                    0LL,
                                    6u,
                                    &v22);
        }
      }
    }
  }
  return (char)CurrentThread;
}
