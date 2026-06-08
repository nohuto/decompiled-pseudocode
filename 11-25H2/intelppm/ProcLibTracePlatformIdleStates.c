/*
 * XREFs of ProcLibTracePlatformIdleStates @ 0x1400405EC
 * Callers:
 *     RegisterKernelPlatformStates @ 0x140038AC4 (RegisterKernelPlatformStates.c)
 *     UpdateKernelPlatformStates @ 0x14003FD54 (UpdateKernelPlatformStates.c)
 *     ProcLibTraceControlCallback @ 0x140041B80 (ProcLibTraceControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 */

void __fastcall ProcLibTracePlatformIdleStates(char a1)
{
  _DWORD *v1; // rsi
  _WORD *Pool2; // rdi
  const EVENT_DESCRIPTOR *v3; // r15
  __int64 v4; // rcx
  __int64 v5; // rax
  ULONG v6; // r9d
  char *v7; // r14
  unsigned int *v8; // r13
  unsigned int v9; // r12d
  __int64 v10; // rbx
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rax
  int v14; // r9d
  int v15; // r8d
  unsigned int v16; // edx
  unsigned int v17; // eax
  bool v18; // cc
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
    if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v3) )
    {
      LODWORD(v4) = 0;
      if ( !v1[1] )
        goto LABEL_9;
      v13 = 0LL;
      v14 = 0;
      v15 = 0;
      do
      {
        v16 = v4;
        v17 = v1[12 * v13 + 16];
        v18 = v17 <= (unsigned int)v4;
        v4 = v17;
        if ( v18 )
        {
          v15 = v14;
          v4 = v16;
        }
        v13 = (unsigned int)(v15 + 1);
        v19 = v13;
        v14 = ++v15;
      }
      while ( (unsigned int)v13 < v1[1] );
      if ( !(_DWORD)v4 || (Pool2 = (_WORD *)ExAllocatePool2(256LL, 12 * v4, 1919119952LL)) != 0LL )
      {
LABEL_9:
        v19 = 0;
        if ( v1[1] )
        {
          v5 = 0LL;
          do
          {
            *(_QWORD *)&UserData.Size = 4LL;
            v24 = 2LL;
            v6 = 7;
            v26 = 1LL;
            v7 = (char *)&v1[12 * v5 + 12];
            UserData.Ptr = (unsigned __int64)&v19;
            v23 = v7;
            v25 = v7 + 2;
            v8 = (unsigned int *)(v7 + 16);
            v21 = (unsigned __int8)v7[4];
            v27 = &v21;
            v29 = v7 + 8;
            v31 = v7 + 12;
            v28 = 4LL;
            v30 = 4LL;
            v32 = 4LL;
            v33 = v7 + 16;
            v34 = 4LL;
            if ( *((_DWORD *)v7 + 4) )
            {
              v9 = 0;
              do
              {
                v10 = v9;
                KeGetProcessorNumberFromIndex(*(ULONG *)(*((_QWORD *)v7 + 5) + 8LL * v9), &ProcNumber);
                v11 = 3LL * v9;
                Pool2[2 * v11] = ProcNumber.Group;
                ++v9;
                LOBYTE(Pool2[2 * v11 + 1]) = ProcNumber.Number;
                HIBYTE(Pool2[2 * v11 + 1]) = *(_BYTE *)(*((_QWORD *)v7 + 5) + 8 * v10 + 4);
                *(_DWORD *)&Pool2[2 * v11 + 2] = *(unsigned __int8 *)(*((_QWORD *)v7 + 5) + 8 * v10 + 5);
                *(_DWORD *)&Pool2[2 * v11 + 4] = *(unsigned __int8 *)(*((_QWORD *)v7 + 5) + 8 * v10 + 6);
                v12 = *v8;
              }
              while ( v9 < *v8 );
              v35 = Pool2;
              v6 = 8;
              v36 = 12 * v12;
              v37 = 0;
            }
            EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v3, 0LL, v6, &UserData);
            v5 = (unsigned int)(v19 + 1);
            v19 = v5;
          }
          while ( (unsigned int)v5 < v1[1] );
        }
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, (ULONG)1919119952);
      }
    }
  }
}
