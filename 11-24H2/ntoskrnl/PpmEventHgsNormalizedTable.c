/*
 * XREFs of PpmEventHgsNormalizedTable @ 0x1404C031C
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14031D920 (KeQueryMaximumProcessorCountEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void PpmEventHgsNormalizedTable()
{
  __int64 v0; // rax
  _BYTE *Pool2; // rbx
  ULONG v2; // r9d
  ULONG v3; // eax
  __int64 v4; // rdi
  unsigned int v5; // ecx
  unsigned int v6; // r11d
  char *v7; // r10
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  char v11; // al
  unsigned int v12; // [rsp+40h] [rbp-19h] BYREF
  ULONG MaximumProcessorCount; // [rsp+44h] [rbp-15h] BYREF
  int v14; // [rsp+48h] [rbp-11h] BYREF
  int v15; // [rsp+4Ch] [rbp-Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  ULONG *p_MaximumProcessorCount; // [rsp+60h] [rbp+7h]
  int v18; // [rsp+68h] [rbp+Fh]
  int v19; // [rsp+6Ch] [rbp+13h]
  unsigned int *v20; // [rsp+70h] [rbp+17h]
  int v21; // [rsp+78h] [rbp+1Fh]
  int v22; // [rsp+7Ch] [rbp+23h]
  int *v23; // [rsp+80h] [rbp+27h]
  int v24; // [rsp+88h] [rbp+2Fh]
  int v25; // [rsp+8Ch] [rbp+33h]
  _BYTE *v26; // [rsp+90h] [rbp+37h]
  int v27; // [rsp+98h] [rbp+3Fh]
  int v28; // [rsp+9Ch] [rbp+43h]

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v0 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  v12 = *(_DWORD *)(v0 + 4);
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_WPS_ORDER_VALUE_TABLE_RUNDOWN) )
    {
      v14 = MaximumProcessorCount * v12;
      Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL, 11 * MaximumProcessorCount * v12, 0x654D5050u);
      if ( Pool2 )
      {
        UserData.Reserved = 0;
        v2 = 0;
        v19 = 0;
        v22 = 0;
        v25 = 0;
        UserData.Ptr = (ULONGLONG)&v15;
        p_MaximumProcessorCount = &MaximumProcessorCount;
        v20 = &v12;
        v23 = &v14;
        v3 = MaximumProcessorCount;
        v15 = (unsigned __int8)PpmHeteroHgsThreadEnabled;
        UserData.Size = 4;
        v18 = 4;
        v21 = 4;
        v24 = 4;
        if ( MaximumProcessorCount )
        {
          v4 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
          v5 = v12;
          do
          {
            v6 = 0;
            v7 = (char *)(*(_QWORD *)(v4 + 8) + v2);
            if ( v5 )
            {
              do
              {
                v8 = v6 + v2 * v5;
                v9 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
                v10 = 11 * v8;
                Pool2[v10 + 9] = *(_BYTE *)(v9 + 4 * v8 + 25);
                Pool2[v10 + 10] = *(_BYTE *)(v9 + 4 * v8 + 24);
                v11 = *v7;
                *(_DWORD *)&Pool2[v10 + 4] = v6++;
                Pool2[v10 + 8] = v11;
                *(_DWORD *)&Pool2[v10] = v2;
                v5 = v12;
              }
              while ( v6 < v12 );
              v3 = MaximumProcessorCount;
            }
            ++v2;
          }
          while ( v2 < v3 );
        }
        v28 = 0;
        v26 = Pool2;
        v27 = 11 * v14;
        EtwWriteEx(PpmEtwHandle, &PPM_ETW_WPS_ORDER_VALUE_TABLE_RUNDOWN, 0LL, 0, 0LL, 0LL, 5u, &UserData);
        ExFreePoolWithTag(Pool2, 0x654D5050u);
      }
    }
  }
}
