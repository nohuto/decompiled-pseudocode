/*
 * XREFs of xxxClientGetDDEFlags @ 0x1402BC2BC
 * Callers:
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402B0BF0 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientGetDDEFlags(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp-20h] BYREF
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]
  void *Src; // [rsp+60h] [rbp+8h] BYREF
  int v9; // [rsp+68h] [rbp+10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h]

  Src = 0LL;
  v9 = 0;
  v7 = 0;
  v5 = a1;
  v6 = a2;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v10, a2, a3);
  EtwTraceBeginCallback(70LL);
  v3 = KeUserModeCallback(70LL, &v5, 16LL, &Src, &v9);
  EtwTraceEndCallback(70LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v10);
  if ( v3 < 0 || v9 != 24 )
    return 0LL;
  v10 = 0LL;
  RtlCopyFromUser(&v10, Src, 8uLL);
  result = v10;
  v11 = v10;
  return result;
}
