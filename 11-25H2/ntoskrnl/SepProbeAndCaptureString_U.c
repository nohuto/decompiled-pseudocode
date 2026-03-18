/*
 * XREFs of SepProbeAndCaptureString_U @ 0x14092D0E0
 * Callers:
 *     NtDeleteObjectAuditAlarm @ 0x140783450 (NtDeleteObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14092B360 (SepAccessCheckAndAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x14092DA70 (NtOpenObjectAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x14092E1E0 (NtPrivilegedServiceAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x14092E4B0 (NtPrivilegeObjectAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x140A0BC10 (NtCloseObjectAuditAlarm.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
