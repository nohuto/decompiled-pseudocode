/*
 * XREFs of PspCreateObjectHandle @ 0x1409BBD2C
 * Callers:
 *     PsCreateMinimalProcess @ 0x140769B14 (PsCreateMinimalProcess.c)
 *     PspInsertThread @ 0x1408F1D7C (PspInsertThread.c)
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x140A8F360 (PspCreateProcess.c)
 * Callees:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140854390 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     ObOpenObjectByPointer @ 0x140857EB0 (ObOpenObjectByPointer.c)
 */

__int64 __fastcall PspCreateObjectHandle(void *a1, __int64 a2, struct _OBJECT_TYPE *a3)
{
  __int64 *v3; // rsi
  NTSTATUS v5; // edi
  unsigned int *v6; // rdx

  v3 = (__int64 *)(a2 + 392);
  v5 = ObOpenObjectByPointer(
         a1,
         *(_DWORD *)(a2 + 384),
         (PACCESS_STATE)a2,
         0,
         a3,
         *(_BYTE *)(a2 + 388),
         (PHANDLE)(a2 + 392));
  if ( v5 >= 0 )
  {
    v6 = **(unsigned int ***)(a2 + 72);
    if ( v6 )
    {
      if ( *v6 && *(_BYTE *)(a2 + 388) )
        SepAdtPrivilegeObjectAuditAlarm(
          &SeSubsystemName,
          0LL,
          0LL,
          *v3,
          *(_QWORD *)(a2 + 32),
          *(_QWORD *)(a2 + 48),
          *(_QWORD *)(a2 + 56),
          *(_DWORD *)(a2 + 20),
          v6,
          1u);
    }
  }
  return (unsigned int)v5;
}
