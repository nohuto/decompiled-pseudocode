/*
 * XREFs of fnHkINLPNOTIFYSTRUCT @ 0x1C02105AC
 * Callers:
 *     ?xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z @ 0x1C01BF514 (-xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z.c)
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall fnHkINLPNOTIFYSTRUCT(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int *a6)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD *v14; // rcx
  int v16; // [rsp+40h] [rbp-68h] BYREF
  __int64 v17; // [rsp+48h] [rbp-60h]
  __int64 v18; // [rsp+50h] [rbp-58h]
  __int64 v19; // [rsp+58h] [rbp-50h]
  int v20; // [rsp+60h] [rbp-48h]
  __int64 v21; // [rsp+68h] [rbp-40h]
  int v22; // [rsp+70h] [rbp-38h]
  __int64 v23; // [rsp+78h] [rbp-30h]
  __int64 v24; // [rsp+80h] [rbp-28h]
  int v25; // [rsp+88h] [rbp-20h]
  char v26; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int64 v27; // [rsp+B8h] [rbp+10h] BYREF
  int v28; // [rsp+C8h] [rbp+20h] BYREF
  int v29; // [rsp+CCh] [rbp+24h]

  v29 = HIDWORD(a4);
  v27 = 0LL;
  v28 = 0;
  memset_0(&v16, 0, 0x60uLL);
  v16 = a1;
  v17 = 0LL;
  v21 = *(_QWORD *)(a3 + 32);
  v22 = *(_DWORD *)(a3 + 48);
  v23 = *(int *)(a3 + 40);
  v24 = *(int *)(a3 + 44);
  v25 = *(_DWORD *)(a3 + 52);
  v18 = 0LL;
  v19 = a5;
  v20 = *a6;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v26, v8, v9, v10);
  EtwTraceBeginCallback(127LL);
  v11 = KeUserModeCallback(127LL, &v16, 96LL, &v27, &v28);
  EtwTraceEndCallback(127LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v26, v12, v13);
  if ( v11 < 0 || v28 != 24 )
    return 0LL;
  v14 = (_QWORD *)v27;
  if ( v27 + 8 < v27 || v27 + 8 > MmUserProbeAddress )
    v14 = (_QWORD *)MmUserProbeAddress;
  return (unsigned int)*v14;
}
