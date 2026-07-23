/*
 * XREFs of SepAdtDeleteObjectAuditAlarm @ 0x140861FFC
 * Callers:
 *     NtDeleteObjectAuditAlarm @ 0x1407926E0 (NtDeleteObjectAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x140863C20 (SeDeleteObjectAuditAlarmWithTransaction.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x1403C288C (SepAdtLogAuditRecord.c)
 *     PsGetCurrentThreadProcess @ 0x14046B080 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SepAuditFailed @ 0x14084D220 (SepAuditFailed.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14084D2F0 (SepAdtAuditObjectAccessWithContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140860D60 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ObNormalizeHandleValue @ 0x140861E80 (ObNormalizeHandleValue.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SepAdtDeleteObjectAuditAlarm(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int128 *a5,
        char a6)
{
  _KPROCESS *CurrentThreadProcess; // rax
  signed int AllocatedFullProcessImageName; // eax
  __int128 *v11; // rdi
  const int *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 *v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  int v19; // r9d
  _KPROCESS *v20; // rax
  unsigned __int16 v21; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD Src[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v24; // [rsp+60h] [rbp-A0h]
  __int16 v25; // [rsp+62h] [rbp-9Eh]
  int v26; // [rsp+68h] [rbp-98h]
  int v27; // [rsp+6Ch] [rbp-94h]
  __int64 v28; // [rsp+80h] [rbp-80h]
  int v29; // [rsp+88h] [rbp-78h]
  int v30; // [rsp+8Ch] [rbp-74h]
  const int *v31; // [rsp+A0h] [rbp-60h]
  int v32; // [rsp+A8h] [rbp-58h]
  int v33; // [rsp+ACh] [rbp-54h]
  __int64 v34; // [rsp+B0h] [rbp-50h]
  int v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+CCh] [rbp-34h]
  const int *v37; // [rsp+E0h] [rbp-20h]
  int v38; // [rsp+E8h] [rbp-18h]
  int v39; // [rsp+ECh] [rbp-14h]
  unsigned __int64 v40; // [rsp+F0h] [rbp-10h]
  int v41; // [rsp+108h] [rbp+8h]
  int v42; // [rsp+10Ch] [rbp+Ch]
  struct _LIST_ENTRY *Flink; // [rsp+110h] [rbp+10h]
  int v44; // [rsp+128h] [rbp+28h]
  int v45; // [rsp+12Ch] [rbp+2Ch]
  PVOID v46; // [rsp+140h] [rbp+40h]
  int v47; // [rsp+148h] [rbp+48h]
  int v48; // [rsp+14Ch] [rbp+4Ch]
  __int128 *v49; // [rsp+160h] [rbp+60h]
  __int128 v50; // [rsp+470h] [rbp+370h] BYREF

  P = 0LL;
  v21 = 0;
  v50 = 0LL;
  if ( SepAdtAuditObjectAccessWithContext(a4, a1, 1u, 0, 0LL, a6, &v21) )
  {
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64 *)&P);
    if ( AllocatedFullProcessImageName < 0 )
    {
      SepAuditFailed(AllocatedFullProcessImageName);
    }
    else
    {
      v11 = &v50;
      if ( a5 )
        v11 = a5;
      memset_0(Src, 0, 0x418uLL);
      v12 = &SeSubsystemName;
      v13 = *a3;
      v24 = v21;
      Src[0] = 3;
      v14 = v13;
      if ( a1 )
        v12 = (const int *)a1;
      Src[1] = 4660;
      v25 = 8;
      v26 = 4;
      if ( !v13 )
        v14 = a3[2];
      v27 = 4 * *(unsigned __int8 *)(**(_QWORD **)(v14 + 152) + 1LL) + 8;
      v15 = v13;
      if ( !v13 )
        v15 = a3[2];
      v16 = *(__int64 **)(v15 + 152);
      v29 = 1;
      v31 = v12;
      v32 = 5;
      v28 = *v16;
      v17 = *(unsigned __int16 *)v12 + 16;
      v33 = 8;
      v30 = v17;
      if ( !v13 )
        v13 = a3[2];
      v18 = *(_QWORD *)(v13 + 24);
      v36 = v17;
      v34 = v18;
      v38 = 11;
      v35 = 1;
      v37 = v12;
      v39 = 8;
      v40 = ObNormalizeHandleValue(a2);
      v41 = v19;
      v42 = 8;
      v20 = PsGetCurrentThreadProcess();
      v44 = 2;
      v47 = 13;
      v48 = 16;
      Flink = v20[1].Header.WaitListHead.Flink;
      v46 = P;
      v49 = v11;
      Src[2] = 8;
      v45 = *(unsigned __int16 *)P + 16;
      SepAdtLogAuditRecord(Src);
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
}
