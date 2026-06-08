/*
 * XREFs of ProcLibTracePlatformIdleStates @ 0x14003E514
 * Callers:
 *     RegisterKernelPlatformStates @ 0x140037074 (RegisterKernelPlatformStates.c)
 *     UpdateKernelPlatformStates @ 0x140037624 (UpdateKernelPlatformStates.c)
 *     ProcLibTraceControlCallback @ 0x14003EA10 (ProcLibTraceControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E310 (__security_check_cookie.c)
 */

void __fastcall ProcLibTracePlatformIdleStates(char a1)
{
  _DWORD *v1; // rsi
  _WORD *Pool2; // rdi
  const EVENT_DESCRIPTOR *v3; // r15
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // r9d
  int v7; // r8d
  unsigned int v8; // edx
  unsigned int v9; // eax
  bool v10; // cc
  __int64 v11; // rax
  ULONG v12; // r9d
  char *v13; // r14
  unsigned int *v14; // r13
  unsigned int v15; // r12d
  __int64 v16; // rbx
  __int64 v17; // rdx
  unsigned int v18; // eax
  int v19; // [rsp+38h] [rbp-69h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+3Ch] [rbp-65h] BYREF
  int v21; // [rsp+40h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-59h] BYREF
  char *v23; // [rsp+58h] [rbp-49h]
  __int64 v24; // [rsp+60h] [rbp-41h]
  char *v25; // [rsp+68h] [rbp-39h]
  __int64 v26; // [rsp+70h] [rbp-31h]
  int *v27; // [rsp+78h] [rbp-29h]
  __int64 v28; // [rsp+80h] [rbp-21h]
  char *v29; // [rsp+88h] [rbp-19h]
  __int64 v30; // [rsp+90h] [rbp-11h]
  char *v31; // [rsp+98h] [rbp-9h]
  __int64 v32; // [rsp+A0h] [rbp-1h]
  char *v33; // [rsp+A8h] [rbp+7h]
  __int64 v34; // [rsp+B0h] [rbp+Fh]
  _WORD *v35; // [rsp+B8h] [rbp+17h]
  int v36; // [rsp+C0h] [rbp+1Fh]
  int v37; // [rsp+C4h] [rbp+23h]

  v1 = Src;
  v21 = 0;
  Pool2 = 0LL;
  ProcNumber = 0;
  if ( Src )
  {
    v3 = (const EVENT_DESCRIPTOR *)&PPM_ETW_GET_PLATFORM_IDLE_STATE;
    if ( a1 )
      v3 = &PPM_ETW_GET_PLATFORM_IDLE_STATE_RUNDOWN;
    if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v3) )
    {
      LODWORD(v4) = 0;
      if ( !v1[1] )
        goto LABEL_12;
      v5 = 0LL;
      v6 = 0;
      v7 = 0;
      do
      {
        v8 = v4;
        v9 = v1[12 * v5 + 16];
        v10 = v9 <= (unsigned int)v4;
        v4 = v9;
        if ( v10 )
        {
          v7 = v6;
          v4 = v8;
        }
        v5 = (unsigned int)(v7 + 1);
        v19 = v5;
        v6 = ++v7;
      }
      while ( (unsigned int)v5 < v1[1] );
      if ( !(_DWORD)v4 || (Pool2 = (_WORD *)ExAllocatePool2(256LL, 12 * v4, 1919119952LL)) != 0LL )
      {
LABEL_12:
        v19 = 0;
        if ( v1[1] )
        {
          v11 = 0LL;
          do
          {
            *(_QWORD *)&UserData.Size = 4LL;
            v24 = 2LL;
            v12 = 7;
            v26 = 1LL;
            v13 = (char *)&v1[12 * v11 + 12];
            UserData.Ptr = (unsigned __int64)&v19;
            v23 = v13;
            v25 = v13 + 2;
            v14 = (unsigned int *)(v13 + 16);
            v21 = (unsigned __int8)v13[4];
            v27 = &v21;
            v29 = v13 + 8;
            v31 = v13 + 12;
            v28 = 4LL;
            v30 = 4LL;
            v32 = 4LL;
            v33 = v13 + 16;
            v34 = 4LL;
            if ( *((_DWORD *)v13 + 4) )
            {
              v15 = 0;
              do
              {
                v16 = v15;
                KeGetProcessorNumberFromIndex(*(ULONG *)(*((_QWORD *)v13 + 5) + 8LL * v15), &ProcNumber);
                v17 = 3LL * v15;
                Pool2[2 * v17] = ProcNumber.Group;
                ++v15;
                LOBYTE(Pool2[2 * v17 + 1]) = ProcNumber.Number;
                HIBYTE(Pool2[2 * v17 + 1]) = *(_BYTE *)(*((_QWORD *)v13 + 5) + 8 * v16 + 4);
                *(_DWORD *)&Pool2[2 * v17 + 2] = *(unsigned __int8 *)(*((_QWORD *)v13 + 5) + 8 * v16 + 5);
                *(_DWORD *)&Pool2[2 * v17 + 4] = *(unsigned __int8 *)(*((_QWORD *)v13 + 5) + 8 * v16 + 6);
                v18 = *v14;
              }
              while ( v15 < *v14 );
              v35 = Pool2;
              v12 = 8;
              v36 = 12 * v18;
              v37 = 0;
            }
            EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v3, 0LL, v12, &UserData);
            v11 = (unsigned int)(v19 + 1);
            v19 = v11;
          }
          while ( (unsigned int)v11 < v1[1] );
        }
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, (ULONG)1919119952);
      }
    }
  }
}
