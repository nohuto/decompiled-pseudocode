/*
 * XREFs of SepAdtCloseObjectAuditAlarm @ 0x14084987C
 * Callers:
 *     SeCloseObjectAuditAlarmForNonObObject @ 0x1407927F0 (SeCloseObjectAuditAlarmForNonObObject.c)
 *     ObCloseHandleTableEntry @ 0x140848260 (ObCloseHandleTableEntry.c)
 *     NtCloseObjectAuditAlarm @ 0x140A0E0E0 (NtCloseObjectAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x140A70650 (SeCloseObjectAuditAlarm.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x1403C288C (SepAdtLogAuditRecord.c)
 *     PsGetCurrentThreadProcess @ 0x14046B080 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SepAuditFailed @ 0x14084D220 (SepAuditFailed.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14084D2F0 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x14084EED0 (SepAdtAuditThisEventWithContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140860D60 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ObNormalizeHandleValue @ 0x140861E80 (ObNormalizeHandleValue.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SepAdtCloseObjectAuditAlarm(const int *a1, __int64 a2, __int64 *a3, int a4, char a5)
{
  __int64 *v5; // rbx
  __int64 v8; // rdx
  _KPROCESS *CurrentThreadProcess; // rax
  struct _LIST_ENTRY *Flink; // rsi
  int AllocatedFullProcessImageName; // eax
  const int *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 *v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  int v19; // r9d
  int v20; // eax
  int v21; // r10d
  __int64 v22; // [rsp+20h] [rbp-E0h]
  __int16 v23; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD Src[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v26; // [rsp+60h] [rbp-A0h]
  __int16 v27; // [rsp+62h] [rbp-9Eh]
  int v28; // [rsp+68h] [rbp-98h]
  int v29; // [rsp+6Ch] [rbp-94h]
  __int64 v30; // [rsp+80h] [rbp-80h]
  int v31; // [rsp+88h] [rbp-78h]
  int v32; // [rsp+8Ch] [rbp-74h]
  const int *v33; // [rsp+A0h] [rbp-60h]
  int v34; // [rsp+A8h] [rbp-58h]
  int v35; // [rsp+ACh] [rbp-54h]
  __int64 v36; // [rsp+B0h] [rbp-50h]
  int v37; // [rsp+C8h] [rbp-38h]
  int v38; // [rsp+CCh] [rbp-34h]
  const int *v39; // [rsp+E0h] [rbp-20h]
  int v40; // [rsp+E8h] [rbp-18h]
  int v41; // [rsp+ECh] [rbp-14h]
  __int64 v42; // [rsp+F0h] [rbp-10h]
  int v43; // [rsp+108h] [rbp+8h]
  int v44; // [rsp+10Ch] [rbp+Ch]
  struct _LIST_ENTRY *v45; // [rsp+110h] [rbp+10h]
  int v46; // [rsp+128h] [rbp+28h]
  int v47; // [rsp+12Ch] [rbp+2Ch]
  PVOID v48; // [rsp+140h] [rbp+40h]

  v5 = a3;
  v22 = (__int64)a3;
  P = 0LL;
  v23 = 0;
  LOBYTE(a3) = 1;
  if ( (unsigned __int8)SepAdtAuditObjectAccessWithContext(a4, (_DWORD)a1, (_DWORD)a3, 0, v22, a5, (__int64)&v23) )
  {
    LOBYTE(v8) = 1;
    if ( (unsigned __int8)SepAdtAuditThisEventWithContext(124LL, v8, 0LL, v5) )
    {
      CurrentThreadProcess = PsGetCurrentThreadProcess();
      Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
      AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(CurrentThreadProcess, &P);
      if ( AllocatedFullProcessImageName < 0 )
      {
        SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
      }
      else
      {
        memset_0(Src, 0, 0x418uLL);
        v12 = &SeSubsystemName;
        v13 = *v5;
        v26 = v23;
        if ( a1 )
          v12 = a1;
        Src[0] = 3;
        Src[1] = 4658;
        v14 = v13;
        v27 = 8;
        v28 = 4;
        if ( !v13 )
          v14 = v5[2];
        v29 = 4 * *(unsigned __int8 *)(**(_QWORD **)(v14 + 152) + 1LL) + 8;
        v15 = v13;
        if ( !v13 )
          v15 = v5[2];
        v16 = *(__int64 **)(v15 + 152);
        v31 = 1;
        v33 = v12;
        v34 = 5;
        v30 = *v16;
        v17 = *(unsigned __int16 *)v12 + 16;
        v35 = 8;
        v32 = v17;
        if ( !v13 )
          v13 = v5[2];
        v18 = *(_QWORD *)(v13 + 24);
        v38 = v17;
        v36 = v18;
        v40 = 11;
        v37 = 1;
        v39 = v12;
        v41 = 8;
        v42 = ObNormalizeHandleValue(a2);
        v48 = P;
        v43 = v19;
        v20 = *(unsigned __int16 *)P + 16;
        v44 = v21;
        v47 = v20;
        v45 = Flink;
        v46 = 2;
        Src[2] = 7;
        SepAdtLogAuditRecord(Src);
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
  }
}
