/*
 * XREFs of xxxClientCharToWchar @ 0x1C0210F00
 * Callers:
 *     EditionClientCharToWchar @ 0x1C01CB2D0 (EditionClientCharToWchar.c)
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientCharToWchar(__int16 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  ULONG64 v7; // rcx
  char v9; // [rsp+50h] [rbp+8h] BYREF
  __int16 v10; // [rsp+58h] [rbp+10h] BYREF
  __int16 v11; // [rsp+5Ah] [rbp+12h]
  int v12; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v12 = 0;
  v10 = a1;
  v11 = a2;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9, a2, a3, a4);
  EtwTraceBeginCallback(82LL);
  v4 = KeUserModeCallback(82LL, &v10, 4LL, &v13, &v12);
  EtwTraceEndCallback(82LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9, v5, v6);
  if ( v4 < 0 || v12 != 24 )
    return 95LL;
  v7 = v13;
  if ( v13 + 8 < v13 || v13 + 8 > MmUserProbeAddress )
    v7 = MmUserProbeAddress;
  return *(_QWORD *)v7;
}
