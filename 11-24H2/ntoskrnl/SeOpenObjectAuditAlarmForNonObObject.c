/*
 * XREFs of SeOpenObjectAuditAlarmForNonObObject @ 0x140A6FBA0
 * Callers:
 *     <none>
 * Callees:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14084C800 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x14084EED0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x140862A14 (SepAdtOpenObjectAuditAlarm.c)
 *     SeExamineSacl @ 0x14088DA20 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x14088DC88 (SeExamineGlobalSacl.c)
 */

void SeOpenObjectAuditAlarmForNonObObject(
        UNICODE_STRING *a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        _WORD *a5,
        struct _SECURITY_SUBJECT_CONTEXT *a6,
        unsigned int a7,
        unsigned int a8,
        int *a9,
        ...)
{
  BOOLEAN AccessGranted; // si
  __int64 *v10; // rdi
  char v12; // al
  int *v13; // r12
  unsigned __int16 *v14; // rbx
  unsigned __int16 *v15; // r14
  void *v16; // r8
  _WORD *v17; // rbx
  __int16 v18; // ax
  __int16 v19; // cx
  __int64 v20; // rax
  ACL *v21; // rdx
  __int64 v22; // rax
  ACL *v23; // rcx
  unsigned int v24; // r15d
  ACCESS_MASK v25; // r14d
  void *v26; // r8
  ACL *v27; // rdx
  __int16 v28; // ax
  __int64 v29; // rax
  __int16 *GenerateAudit; // [rsp+30h] [rbp-81h]
  BOOLEAN GenerateAlarm[64]; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v32; // [rsp+100h] [rbp+4Fh] BYREF
  unsigned __int16 *v33; // [rsp+108h] [rbp+57h]
  __int64 v34; // [rsp+110h] [rbp+5Fh]
  __int64 v35; // [rsp+140h] [rbp+8Fh] BYREF
  va_list va; // [rsp+140h] [rbp+8Fh]
  _BYTE *v37; // [rsp+148h] [rbp+97h]
  va_list va1; // [rsp+150h] [rbp+9Fh] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v35 = va_arg(va1, _QWORD);
  v37 = va_arg(va1, _BYTE *);
  v34 = a4;
  v33 = a3;
  v32 = a2;
  AccessGranted = v35;
  v10 = (__int64 *)a6;
  GenerateAlarm[0] = 0;
  v12 = SepAdtAuditThisEventWithContext(119LL, v35, (_BYTE)v35 == 0, a6);
  v13 = a9;
  LOBYTE(v35) = v12;
  if ( !v12 )
  {
    v14 = (unsigned __int16 *)v34;
    v15 = v33;
    goto LABEL_3;
  }
  v16 = (void *)*v10;
  if ( !*v10 )
    v16 = (void *)v10[2];
  v17 = a5;
  v18 = a5[1];
  v19 = v18 & 0x8000;
  if ( (v18 & 0x10) != 0 )
  {
    if ( v19 )
    {
      v20 = *((unsigned int *)a5 + 3);
      if ( (_DWORD)v20 )
        v21 = (ACL *)((char *)a5 + v20);
      else
        v21 = 0LL;
    }
    else
    {
      v21 = (ACL *)*((_QWORD *)a5 + 3);
    }
    if ( !v19 )
    {
      v23 = (ACL *)*((_QWORD *)a5 + 3);
      goto LABEL_21;
    }
    v22 = *((unsigned int *)a5 + 3);
    if ( (_DWORD)v22 )
    {
      v23 = (ACL *)((char *)a5 + v22);
      goto LABEL_21;
    }
  }
  else
  {
    v21 = 0LL;
  }
  v23 = 0LL;
LABEL_21:
  v24 = a8;
  v25 = a8 | a7;
  SeExamineSacl(v23, v21, v16, a8 | a7, AccessGranted, (PBOOLEAN)va, GenerateAlarm);
  v26 = (void *)*v10;
  v27 = 0LL;
  if ( !*v10 )
    v26 = (void *)v10[2];
  v28 = v17[1];
  if ( (v28 & 0x10) != 0 )
  {
    if ( v28 >= 0 )
    {
      v27 = (ACL *)*((_QWORD *)v17 + 3);
    }
    else
    {
      v29 = *((unsigned int *)v17 + 3);
      if ( (_DWORD)v29 )
        v27 = (ACL *)((char *)v17 + v29);
    }
  }
  SeExamineGlobalSacl(a1, v27, v26, v25, AccessGranted, (PBOOLEAN)va, GenerateAlarm);
  v15 = v33;
  if ( (_BYTE)v35 )
  {
    GenerateAudit = v17;
    v14 = (unsigned __int16 *)v34;
    SepAdtOpenObjectAuditAlarm(
      119,
      (const int *)a1,
      (unsigned __int64 *)&v32,
      v33,
      (unsigned __int16 *)v34,
      GenerateAudit,
      (_QWORD *)*v10,
      (_QWORD *)v10[2],
      a7,
      v24,
      v13,
      AccessGranted,
      (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
      2,
      0LL,
      0,
      0LL,
      0LL,
      0LL);
    *v37 = 1;
    v12 = v35;
LABEL_3:
    if ( v12 )
      return;
    goto LABEL_5;
  }
  v14 = (unsigned __int16 *)v34;
LABEL_5:
  if ( v13 )
  {
    if ( AccessGranted )
      SepAdtPrivilegeObjectAuditAlarm(
        (const int *)a1,
        v15,
        v14,
        v32,
        *v10,
        v10[2],
        (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
        a7,
        (unsigned int *)v13,
        AccessGranted);
  }
}
