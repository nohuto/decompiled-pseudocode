/*
 * XREFs of PpmEventTraceProcessorIdleAccounting @ 0x140436770
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PpmTranslateIdleAccounting @ 0x1404369F0 (PpmTranslateIdleAccounting.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmEventTraceProcessorIdleAccounting(__int64 a1)
{
  unsigned int *v2; // rdi
  __int64 v3; // rbx
  __int64 Pool2; // rax
  void *v5; // r14
  _QWORD *v7; // rdx
  __int64 v8; // r9
  __int64 *v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  void *v12; // r12
  __int16 v13; // cx
  __int16 v14; // [rsp+48h] [rbp-49h] BYREF
  int v15; // [rsp+4Ch] [rbp-45h] BYREF
  __int64 v16; // [rsp+50h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-39h] BYREF
  __int16 *v18; // [rsp+68h] [rbp-29h]
  __int64 v19; // [rsp+70h] [rbp-21h]
  __int64 v20; // [rsp+78h] [rbp-19h]
  __int64 v21; // [rsp+80h] [rbp-11h]
  __int64 *v22; // [rsp+88h] [rbp-9h]
  __int64 v23; // [rsp+90h] [rbp-1h]
  int *v24; // [rsp+98h] [rbp+7h]
  __int64 v25; // [rsp+A0h] [rbp+Fh]
  void *v26; // [rsp+A8h] [rbp+17h]
  int v27; // [rsp+B0h] [rbp+1Fh]
  int v28; // [rsp+B4h] [rbp+23h]

  v14 = 0;
  v15 = 0;
  v16 = 0LL;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_IDLE_ACCOUNTING_RUNDOWN) )
    {
      if ( *(_QWORD *)(a1 + 34880) )
      {
        v2 = *(unsigned int **)(a1 + 34888);
        if ( v2 )
        {
          v3 = *v2;
          Pool2 = ExAllocatePool2(0x40uLL, (unsigned int)(80 * v3), 0x654D5050u);
          v5 = (void *)Pool2;
          if ( Pool2 )
          {
            if ( (_DWORD)v3 )
            {
              v7 = (_QWORD *)(Pool2 + 24);
              v8 = v3;
              v9 = (__int64 *)(v2 + 38);
              do
              {
                *(v7 - 3) = *(v9 - 1);
                v10 = *v9;
                v9 += 127;
                *(v7 - 1) = v10;
                *v7 = *(v9 - 132);
                v7 += 10;
                *(v7 - 9) = *(v9 - 131);
                *(v7 - 6) = *(v9 - 134);
                *(v7 - 5) = *(v9 - 135);
                *(v7 - 4) = *(v9 - 136);
                *(v7 - 12) = *(v9 - 126);
                *(v7 - 8) = *(v9 - 124);
                *(v7 - 7) = *(v9 - 125);
                --v8;
              }
              while ( v8 );
            }
            v11 = ExAllocatePool2(0x40uLL, (unsigned int)(416 * v3 + 24), 0x654D5050u);
            v12 = (void *)v11;
            if ( v11 )
            {
              PpmTranslateIdleAccounting(a1 + 34880, v11, &v16);
              v13 = *(unsigned __int8 *)(a1 + 208);
              v18 = &v14;
              UserData.Reserved = 0;
              v20 = a1 + 209;
              v14 = v13;
              v22 = &v16;
              v24 = &v15;
              v28 = 0;
              UserData.Ptr = (ULONGLONG)v12;
              UserData.Size = 416 * v3 + 24;
              v19 = 2LL;
              v21 = 1LL;
              v23 = 8LL;
              v26 = v5;
              v27 = 80 * v3;
              v15 = v3;
              v25 = 4LL;
              EtwWriteEx(PpmEtwHandle, &PPM_ETW_IDLE_ACCOUNTING_RUNDOWN, 0LL, 0, 0LL, 0LL, 6u, &UserData);
              ExFreePoolWithTag(v12, 0x654D5050u);
            }
            ExFreePoolWithTag(v5, 0x654D5050u);
          }
        }
      }
    }
  }
  return 0LL;
}
