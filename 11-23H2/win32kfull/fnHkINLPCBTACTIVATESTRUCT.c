/*
 * XREFs of fnHkINLPCBTACTIVATESTRUCT @ 0x1C020FA28
 * Callers:
 *     xxxCallCtfHook @ 0x1C007EE54 (xxxCallCtfHook.c)
 *     xxxHkCallHook @ 0x1C0120F60 (xxxHkCallHook.c)
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall fnHkINLPCBTACTIVATESTRUCT(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  ULONG64 v8; // rcx
  _DWORD v10[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-30h]
  __int128 v12; // [rsp+50h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-18h]
  __int64 v14; // [rsp+68h] [rbp-10h]
  char v15; // [rsp+80h] [rbp+8h] BYREF
  int v16; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v17; // [rsp+90h] [rbp+18h] BYREF

  v17 = 0LL;
  v16 = 0;
  v10[1] = 0;
  v10[0] = a1;
  v11 = a2;
  *(_DWORD *)(a3 + 4) = 0;
  v12 = *(_OWORD *)a3;
  v13 = a4;
  v14 = a5;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15, a2, a3, a4);
  EtwTraceBeginCallback(41LL);
  v5 = KeUserModeCallback(41LL, v10, 48LL, &v17, &v16);
  EtwTraceEndCallback(41LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15, v6, v7);
  if ( v5 < 0 || v16 != 24 )
    return 0LL;
  v8 = v17;
  if ( v17 + 8 < v17 || v17 + 8 > MmUserProbeAddress )
    v8 = MmUserProbeAddress;
  return *(_QWORD *)v8;
}
