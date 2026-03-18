/*
 * XREFs of ?xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z @ 0x1C0204D7C
 * Callers:
 *     xxxClientCopyDDEOut1 @ 0x1C0211450 (xxxClientCopyDDEOut1.c)
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientCopyDDEOut2(struct tagINTDDEINFO *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 *v8; // rcx
  __int64 result; // rax
  _BYTE v10[4]; // [rsp+30h] [rbp-88h] BYREF
  int v11; // [rsp+34h] [rbp-84h] BYREF
  _QWORD v12[3]; // [rsp+38h] [rbp-80h] BYREF
  __int128 v13; // [rsp+50h] [rbp-68h] BYREF
  __int128 v14; // [rsp+60h] [rbp-58h]
  __int128 v15; // [rsp+70h] [rbp-48h]
  __int128 v16; // [rsp+80h] [rbp-38h]
  __int64 v17; // [rsp+90h] [rbp-28h]

  v12[0] = 0LL;
  v11 = 0;
  v13 = *(_OWORD *)a1;
  v14 = *((_OWORD *)a1 + 1);
  v15 = *((_OWORD *)a1 + 2);
  v16 = *((_OWORD *)a1 + 3);
  v17 = *((_QWORD *)a1 + 8);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v10, a2, a3, a4);
  EtwTraceBeginCallback(63LL);
  v5 = KeUserModeCallback(63LL, &v13, 72LL, v12, &v11);
  EtwTraceEndCallback(63LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v10, v6, v7);
  *((_QWORD *)a1 + 3) = *((_QWORD *)&v14 + 1);
  if ( v5 < 0 || v11 != 24 )
    return 0LL;
  v8 = (__int64 *)v12[0];
  if ( (unsigned __int64)(v12[0] + 8LL) < v12[0] || v12[0] + 8LL > MmUserProbeAddress )
    v8 = (__int64 *)MmUserProbeAddress;
  result = *v8;
  v12[1] = *v8;
  return result;
}
