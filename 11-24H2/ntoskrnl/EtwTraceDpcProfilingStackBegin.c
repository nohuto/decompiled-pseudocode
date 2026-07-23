/*
 * XREFs of EtwTraceDpcProfilingStackBegin @ 0x14043FE7C
 * Callers:
 *     KeAccumulateTicks @ 0x1402AAEB0 (KeAccumulateTicks.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

int __fastcall EtwTraceDpcProfilingStackBegin(int a1, int a2, int a3, int a4, char a5)
{
  _UNKNOWN **v5; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-11h] BYREF
  int *v8; // [rsp+58h] [rbp-1h]
  __int64 v9; // [rsp+60h] [rbp+7h]
  int *v10; // [rsp+68h] [rbp+Fh]
  __int64 v11; // [rsp+70h] [rbp+17h]
  int *v12; // [rsp+78h] [rbp+1Fh]
  __int64 v13; // [rsp+80h] [rbp+27h]
  char *v14; // [rsp+88h] [rbp+2Fh]
  __int64 v15; // [rsp+90h] [rbp+37h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+57h] BYREF
  int v17; // [rsp+B8h] [rbp+5Fh] BYREF
  int v18; // [rsp+C0h] [rbp+67h] BYREF
  int v19; // [rsp+C8h] [rbp+6Fh] BYREF
  int v20; // [rsp+D0h] [rbp+77h] BYREF

  v5 = &retaddr;
  v20 = a4;
  v19 = a3;
  v18 = a2;
  v17 = a1;
  if ( EtwCpuStarvationProvRegHandle )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v17;
    v9 = 4LL;
    v8 = &v18;
    v11 = 4LL;
    v10 = &v19;
    v12 = &v20;
    v14 = &a5;
    v13 = 4LL;
    v15 = 4LL;
    LODWORD(v5) = EtwWriteEx(
                    EtwCpuStarvationProvRegHandle,
                    &CPU_STARVATION_EVENT_DPC_PROFILING_STACK_BEGIN,
                    0LL,
                    0,
                    0LL,
                    0LL,
                    5u,
                    &UserData);
  }
  return (int)v5;
}
