/*
 * XREFs of PpmEventProcessorVetoRundown @ 0x14048088C
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PpmEventTracePreVetoAccounting @ 0x140480A8C (PpmEventTracePreVetoAccounting.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PpmEventProcessorVetoRundown(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edx
  unsigned __int8 *v3; // rsi
  _BYTE *i; // rdi
  __int16 v5; // ax
  __int16 v6; // ax
  KIRQL v7; // al
  unsigned int v8; // edx
  KIRQL v9; // r14
  unsigned int v10; // ecx
  _QWORD **v11; // rsi
  _QWORD *v12; // rdi
  int v13; // [rsp+40h] [rbp-29h] BYREF
  __int16 v14; // [rsp+44h] [rbp-25h] BYREF
  _DWORD v15[2]; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  _BYTE *v17; // [rsp+60h] [rbp-9h]
  int v18; // [rsp+68h] [rbp-1h]
  int v19; // [rsp+6Ch] [rbp+3h]
  int *v20; // [rsp+70h] [rbp+7h]
  int v21; // [rsp+78h] [rbp+Fh]
  int v22; // [rsp+7Ch] [rbp+13h]
  _QWORD *v23; // [rsp+80h] [rbp+17h]
  int v24; // [rsp+88h] [rbp+1Fh]
  int v25; // [rsp+8Ch] [rbp+23h]
  char *v26; // [rsp+90h] [rbp+27h]
  int v27; // [rsp+98h] [rbp+2Fh]
  int v28; // [rsp+9Ch] [rbp+33h]

  v1 = *(_QWORD *)(a1 + 34880);
  memset(v15, 0, 7);
  if ( v1 )
  {
    v2 = 1;
    v13 = 1;
    v3 = (unsigned __int8 *)(a1 + 208);
    for ( i = (_BYTE *)(a1 + 209); v2 < *(_DWORD *)(v1 + 40); v13 = v2 )
    {
      v5 = *v3;
      UserData.Reserved = 0;
      LOWORD(v15[0]) = v5;
      BYTE2(v15[0]) = *i;
      UserData.Ptr = (ULONGLONG)v15;
      *(_DWORD *)((char *)v15 + 3) = v2;
      UserData.Size = 7;
      PpmEventTracePreVetoAccounting(&PPM_ETW_PROCESSOR_PRE_VETO_ACCOUNTING_RUNDOWN);
      v2 = v13 + 1;
    }
    if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_IDLE_VETO_RUNDOWN) )
    {
      v6 = *v3;
      UserData.Reserved = 0;
      v19 = 0;
      v14 = v6;
      UserData.Ptr = (ULONGLONG)&v14;
      UserData.Size = 2;
      v17 = i;
      v18 = 1;
      v7 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
      v8 = 0;
      v9 = v7;
      v13 = 0;
      if ( *(_DWORD *)(v1 + 40) )
      {
        v10 = 0;
        do
        {
          v22 = 0;
          v20 = &v13;
          v21 = 4;
          v11 = (_QWORD **)(v1 + 344LL * v10 + 1360);
          v12 = *v11;
          if ( *v11 != v11 )
          {
            do
            {
              v25 = 0;
              v28 = 0;
              v23 = v12 + 2;
              v24 = 4;
              v26 = (char *)v12 + 20;
              v27 = 4;
              EtwWriteEx(PpmEtwHandle, &PPM_ETW_PROCESSOR_IDLE_VETO_RUNDOWN, 0LL, 0, 0LL, 0LL, 5u, &UserData);
              v12 = (_QWORD *)*v12;
            }
            while ( v12 != v11 );
            v8 = v13;
          }
          v13 = ++v8;
          v10 = v8;
        }
        while ( v8 < *(_DWORD *)(v1 + 40) );
      }
      KeReleaseSpinLock(&PpmIdleVetoLock, v9);
    }
  }
}
