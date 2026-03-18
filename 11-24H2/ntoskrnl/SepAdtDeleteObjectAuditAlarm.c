/*
 * XREFs of SepAdtDeleteObjectAuditAlarm @ 0x1408F07FC
 * Callers:
 *     NtDeleteObjectAuditAlarm @ 0x140792710 (NtDeleteObjectAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x140A98130 (SeDeleteObjectAuditAlarmWithTransaction.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140348E4C (SepAdtLogAuditRecord.c)
 *     PsGetCurrentThreadProcess @ 0x1404709D0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SepAuditFailed @ 0x140850F60 (SepAuditFailed.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140851030 (SepAdtAuditObjectAccessWithContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1408EF560 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ObNormalizeHandleValue @ 0x1408F0680 (ObNormalizeHandleValue.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int64 v10; // r8
  __int64 v11; // r9
  signed int AllocatedFullProcessImageName; // eax
  __int128 *v13; // rdi
  const int *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 *v18; // rax
  int v19; // ecx
  __int64 v20; // rax
  int v21; // r9d
  _KPROCESS *v22; // rax
  unsigned __int16 v23; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD Src[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v26; // [rsp+60h] [rbp-A0h]
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
  unsigned __int64 v42; // [rsp+F0h] [rbp-10h]
  int v43; // [rsp+108h] [rbp+8h]
  int v44; // [rsp+10Ch] [rbp+Ch]
  struct _LIST_ENTRY *Flink; // [rsp+110h] [rbp+10h]
  int v46; // [rsp+128h] [rbp+28h]
  int v47; // [rsp+12Ch] [rbp+2Ch]
  PVOID v48; // [rsp+140h] [rbp+40h]
  int v49; // [rsp+148h] [rbp+48h]
  int v50; // [rsp+14Ch] [rbp+4Ch]
  __int128 *v51; // [rsp+160h] [rbp+60h]
  __int128 v52; // [rsp+470h] [rbp+370h] BYREF

  P = 0LL;
  v23 = 0;
  v52 = 0LL;
  if ( SepAdtAuditObjectAccessWithContext(a4, a1, 1u, 0, 0LL, a6, &v23) )
  {
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(
                                      (__int64)CurrentThreadProcess,
                                      (__int64 *)&P,
                                      v10,
                                      v11);
    if ( AllocatedFullProcessImageName < 0 )
    {
      SepAuditFailed(AllocatedFullProcessImageName);
    }
    else
    {
      v13 = &v52;
      if ( a5 )
        v13 = a5;
      memset_0(Src, 0, 0x418uLL);
      v14 = &SeSubsystemName;
      v15 = *a3;
      v26 = v23;
      Src[0] = 3;
      v16 = v15;
      if ( a1 )
        v14 = (const int *)a1;
      Src[1] = 4660;
      v27 = 8;
      v28 = 4;
      if ( !v15 )
        v16 = a3[2];
      v29 = 4 * *(unsigned __int8 *)(**(_QWORD **)(v16 + 152) + 1LL) + 8;
      v17 = v15;
      if ( !v15 )
        v17 = a3[2];
      v18 = *(__int64 **)(v17 + 152);
      v31 = 1;
      v33 = v14;
      v34 = 5;
      v30 = *v18;
      v19 = *(unsigned __int16 *)v14 + 16;
      v35 = 8;
      v32 = v19;
      if ( !v15 )
        v15 = a3[2];
      v20 = *(_QWORD *)(v15 + 24);
      v38 = v19;
      v36 = v20;
      v40 = 11;
      v37 = 1;
      v39 = v14;
      v41 = 8;
      v42 = ObNormalizeHandleValue(a2);
      v43 = v21;
      v44 = 8;
      v22 = PsGetCurrentThreadProcess();
      v46 = 2;
      v49 = 13;
      v50 = 16;
      Flink = v22[1].Header.WaitListHead.Flink;
      v48 = P;
      v51 = v13;
      Src[2] = 8;
      v47 = *(unsigned __int16 *)P + 16;
      SepAdtLogAuditRecord(Src);
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
}
