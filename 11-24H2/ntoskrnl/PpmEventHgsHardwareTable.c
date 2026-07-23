/*
 * XREFs of PpmEventHgsHardwareTable @ 0x1404A81D4
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x1404E2E24 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14031D920 (KeQueryMaximumProcessorCountEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PpmEventHgsHardwareTable(char a1)
{
  const EVENT_DESCRIPTOR *v2; // rsi
  __int64 v3; // rax
  _BYTE *Pool2; // rdi
  unsigned __int64 v5; // r14
  __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned int v8; // r15d
  __int64 Prcb; // rax
  unsigned int v10; // r9d
  __int64 v11; // r10
  unsigned int i; // eax
  char v13; // r8
  __int64 v14; // rcx
  char v15; // al
  unsigned int v16; // [rsp+48h] [rbp-39h] BYREF
  ULONG MaximumProcessorCount; // [rsp+4Ch] [rbp-35h] BYREF
  int v18; // [rsp+50h] [rbp-31h] BYREF
  int v19; // [rsp+54h] [rbp-2Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-19h] BYREF
  ULONG *p_MaximumProcessorCount; // [rsp+78h] [rbp-9h]
  __int64 v22; // [rsp+80h] [rbp-1h]
  unsigned int *v23; // [rsp+88h] [rbp+7h]
  __int64 v24; // [rsp+90h] [rbp+Fh]
  int *v25; // [rsp+98h] [rbp+17h]
  __int64 v26; // [rsp+A0h] [rbp+1Fh]
  _BYTE *v27; // [rsp+A8h] [rbp+27h]
  int v28; // [rsp+B0h] [rbp+2Fh]
  int v29; // [rsp+B4h] [rbp+33h]

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v2 = (const EVENT_DESCRIPTOR *)PPM_ETW_WPS_DYNAMIC_TABLE_RUNDOWN;
  v3 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  if ( !a1 )
    v2 = &PPM_ETW_WPS_DYNAMIC_TABLE_CHANGED;
  v16 = *(_DWORD *)(v3 + 4);
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, v2) )
    {
      v18 = MaximumProcessorCount * v16;
      Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL, 10 * MaximumProcessorCount * v16, 0x654D5050u);
      if ( Pool2 )
      {
        v5 = PpmCheckRegistered.Bitmap[0];
        LOWORD(v6) = 0;
        UserData.Ptr = (ULONGLONG)&v19;
        p_MaximumProcessorCount = &MaximumProcessorCount;
        v23 = &v16;
        v25 = &v18;
        v19 = (unsigned __int8)PpmHeteroHgsThreadEnabled;
        *(_QWORD *)&UserData.Size = 4LL;
        v22 = 4LL;
        v24 = 4LL;
        v26 = 4LL;
        while ( 1 )
        {
          while ( v5 )
          {
            _BitScanForward64(&v7, v5);
            v5 &= ~(1LL << v7);
            v8 = *((_DWORD *)qword_140F22998 + 64 * (unsigned __int16)v6 + (unsigned __int8)v7);
            Prcb = KeGetPrcb(v8);
            v10 = 0;
            v11 = *(_QWORD *)(Prcb + 35408);
            for ( i = v16; v10 < v16; i = v16 )
            {
              v13 = *(_BYTE *)(v11 + 4LL * v10 + 7);
              v14 = 5LL * (v10 + v8 * i);
              v15 = *(_BYTE *)(v11 + 4LL * v10 + 6);
              *(_DWORD *)&Pool2[2 * v14 + 4] = v10++;
              Pool2[2 * v14 + 8] = v15;
              Pool2[2 * v14 + 9] = v13;
              *(_DWORD *)&Pool2[2 * v14] = v8;
            }
          }
          v6 = (unsigned __int16)(v6 + 1);
          if ( (unsigned int)v6 >= PpmCheckRegistered.Count )
            break;
          v5 = PpmCheckRegistered.Bitmap[v6];
        }
        v27 = Pool2;
        v29 = 0;
        v28 = 10 * v18;
        EtwWriteEx(PpmEtwHandle, v2, 0LL, 0, 0LL, 0LL, 5u, &UserData);
        ExFreePoolWithTag(Pool2, 0x654D5050u);
      }
    }
  }
}
