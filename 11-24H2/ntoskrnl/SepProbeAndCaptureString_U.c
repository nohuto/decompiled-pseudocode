/*
 * XREFs of SepProbeAndCaptureString_U @ 0x140912BA0
 * Callers:
 *     NtDeleteObjectAuditAlarm @ 0x1407926E0 (NtDeleteObjectAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140911F00 (NtOpenObjectAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1409134B0 (NtPrivilegedServiceAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140913820 (NtPrivilegeObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x140A0E0E0 (NtCloseObjectAuditAlarm.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepProbeAndCaptureString_U(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // edi
  const void *v5; // r14
  _WORD *Pool2; // rax
  unsigned int v8; // [rsp+24h] [rbp-34h]

  *(_QWORD *)a2 = 0LL;
  v8 = 0;
  v3 = 0x7FFFFFFF0000LL;
  if ( a1 < 0x7FFFFFFF0000LL )
    v3 = a1;
  v4 = *(_DWORD *)v3;
  v5 = *(const void **)(v3 + 8);
  if ( (unsigned __int16)*(_DWORD *)v3 && ((unsigned __int8)v5 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (v4 & 1) != 0 || (unsigned __int16)v4 == 65534 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    Pool2 = (_WORD *)ExAllocatePool2(0x100uLL, (unsigned __int16)v4 + 16LL, 0x73556553u);
    *(_QWORD *)a2 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = v4;
      *(_WORD *)(*(_QWORD *)a2 + 2LL) = v4;
      *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)a2 + 16LL;
      if ( (_WORD)v4 )
        memmove(*(void **)(*(_QWORD *)a2 + 8LL), v5, (unsigned __int16)v4);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v8;
}
