/*
 * XREFs of PpmEventTracePlatformIdleAccounting @ 0x140A99D74
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x1404A7454 (PpmTranslatePlatformIdleAccounting.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void PpmEventTracePlatformIdleAccounting()
{
  __int64 v0; // rdi
  int v1; // r14d
  _QWORD *Pool2; // rbx
  unsigned int v3; // eax
  __int64 i; // r9
  unsigned __int64 v5; // r8
  __int64 v6; // rdx
  ULONG v7; // esi
  __int64 v8; // rax
  void *v9; // r15
  char v10; // [rsp+38h] [rbp-39h] BYREF
  __int16 v11; // [rsp+3Ch] [rbp-35h] BYREF
  unsigned int v12; // [rsp+40h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-29h] BYREF
  __int16 *v14; // [rsp+58h] [rbp-19h]
  int v15; // [rsp+60h] [rbp-11h]
  int v16; // [rsp+64h] [rbp-Dh]
  char *v17; // [rsp+68h] [rbp-9h]
  int v18; // [rsp+70h] [rbp-1h]
  int v19; // [rsp+74h] [rbp+3h]
  unsigned int *v20; // [rsp+78h] [rbp+7h]
  int v21; // [rsp+80h] [rbp+Fh]
  int v22; // [rsp+84h] [rbp+13h]
  _QWORD *v23; // [rsp+88h] [rbp+17h]
  int v24; // [rsp+90h] [rbp+1Fh]
  int v25; // [rsp+94h] [rbp+23h]
  __int64 v26; // [rsp+98h] [rbp+27h]
  int v27; // [rsp+A0h] [rbp+2Fh]
  int v28; // [rsp+A4h] [rbp+33h]

  v11 = 32;
  v10 = 64;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PLATFORM_IDLE_ACCOUNTING_RUNDOWN) )
    {
      if ( PpmPlatformStates )
      {
        v0 = *(_QWORD *)(PpmPlatformStates + 48);
        v12 = *(_DWORD *)(v0 + 4);
        v1 = 80 * v12;
        Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, 80 * v12, 0x654D5050u);
        if ( Pool2 )
        {
          v3 = v12;
          for ( i = 0LL; (unsigned int)i < v12; v3 = v12 )
          {
            v5 = (unsigned __int64)(unsigned int)i << 10;
            v6 = 10 * i;
            i = (unsigned int)(i + 1);
            Pool2[v6 + 1] = *(_QWORD *)(v5 + v0 + 120) + *(_QWORD *)(v5 + v0 + 216);
            Pool2[v6 + 2] = *(_QWORD *)(v5 + v0 + 128) + *(_QWORD *)(v5 + v0 + 208);
            Pool2[v6 + 3] = *(_QWORD *)(v5 + v0 + 144);
            Pool2[v6 + 4] = *(_QWORD *)(v5 + v0 + 136);
            Pool2[v6 + 7] = *(_QWORD *)(v5 + v0 + 104);
            Pool2[v6 + 8] = *(_QWORD *)(v5 + v0 + 96);
            Pool2[v6 + 9] = *(_QWORD *)(v5 + v0 + 88);
            Pool2[v6] = *(_QWORD *)(v5 + v0 + 168);
            Pool2[v6 + 5] = *(_QWORD *)(v5 + v0 + 184);
            Pool2[v6 + 6] = *(_QWORD *)(v5 + v0 + 176);
          }
          v7 = 664 * v3 + 32;
          v8 = ExAllocatePool2(0x40uLL, v7, 0x654D5050u);
          v9 = (void *)v8;
          if ( v8 )
          {
            PpmTranslatePlatformIdleAccounting(v0, v8);
            UserData.Reserved = 0;
            v16 = 0;
            v19 = 0;
            v22 = 0;
            v25 = 0;
            v28 = 0;
            v14 = &v11;
            v17 = &v10;
            v20 = &v12;
            v26 = v0 + 16;
            UserData.Ptr = (ULONGLONG)v9;
            UserData.Size = v7;
            v15 = 2;
            v18 = 1;
            v21 = 4;
            v23 = Pool2;
            v24 = v1;
            v27 = 8;
            EtwWrite(PpmEtwHandle, &PPM_ETW_PLATFORM_IDLE_ACCOUNTING_RUNDOWN, 0LL, 6u, &UserData);
            ExFreePoolWithTag(v9, 0x654D5050u);
          }
          ExFreePoolWithTag(Pool2, 0x654D5050u);
        }
      }
    }
  }
}
