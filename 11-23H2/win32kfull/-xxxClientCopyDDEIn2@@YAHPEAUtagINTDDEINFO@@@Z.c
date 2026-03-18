/*
 * XREFs of ?xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z @ 0x1C0204C54
 * Callers:
 *     xxxClientCopyDDEIn1 @ 0x1C0210FDC (xxxClientCopyDDEIn1.c)
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientCopyDDEIn2(struct tagINTDDEINFO *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 *v7; // rcx
  __int64 result; // rax
  _BYTE v9[4]; // [rsp+30h] [rbp-88h] BYREF
  int v10; // [rsp+34h] [rbp-84h] BYREF
  _QWORD v11[3]; // [rsp+38h] [rbp-80h] BYREF
  _OWORD v12[4]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v13; // [rsp+90h] [rbp-28h]

  v11[0] = 0LL;
  v10 = 0;
  v12[0] = *(_OWORD *)a1;
  v12[1] = *((_OWORD *)a1 + 1);
  v12[2] = *((_OWORD *)a1 + 2);
  v12[3] = *((_OWORD *)a1 + 3);
  v13 = *((_QWORD *)a1 + 8);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v9, a2, a3, a4);
  EtwTraceBeginCallback(61LL);
  v4 = KeUserModeCallback(61LL, v12, 72LL, v11, &v10);
  EtwTraceEndCallback(61LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v9, v5, v6);
  if ( v4 < 0 || v10 != 24 )
    return 0LL;
  v7 = (__int64 *)v11[0];
  if ( (unsigned __int64)(v11[0] + 8LL) < v11[0] || v11[0] + 8LL > MmUserProbeAddress )
    v7 = (__int64 *)MmUserProbeAddress;
  result = *v7;
  v11[1] = *v7;
  return result;
}
