/*
 * XREFs of SepProbeAndCaptureString_U @ 0x14091F8F0
 * Callers:
 *     NtDeleteObjectAuditAlarm @ 0x140792710 (NtDeleteObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14091DB90 (SepAccessCheckAndAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140920280 (NtOpenObjectAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x140920A00 (NtPrivilegedServiceAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140920CD0 (NtPrivilegeObjectAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x140A152C0 (NtCloseObjectAuditAlarm.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
    Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
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
