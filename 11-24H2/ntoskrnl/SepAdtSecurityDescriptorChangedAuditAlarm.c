/*
 * XREFs of SepAdtSecurityDescriptorChangedAuditAlarm @ 0x140861BC0
 * Callers:
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14086395C (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140912CF0 (SeSecurityDescriptorChangedAuditAlarm.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x1403C288C (SepAdtLogAuditRecord.c)
 *     PsGetCurrentThreadProcess @ 0x14046B080 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SepAuditFailed @ 0x14084D220 (SepAuditFailed.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140860D60 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ObNormalizeHandleValue @ 0x140861E80 (ObNormalizeHandleValue.c)
 *     SepSecurityDescriptorStrictLength @ 0x140861EB8 (SepSecurityDescriptorStrictLength.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SepAdtSecurityDescriptorChangedAuditAlarm(
        __int64 *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9)
{
  _KPROCESS *CurrentThreadProcess; // rax
  signed int AllocatedFullProcessImageName; // edi
  __int16 v15; // ax
  int v16; // edx
  int v17; // edx
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  PVOID P; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v26; // [rsp+30h] [rbp-D8h]
  struct _LIST_ENTRY *Flink; // [rsp+38h] [rbp-D0h]
  int Src; // [rsp+48h] [rbp-C0h] BYREF
  int v29; // [rsp+4Ch] [rbp-BCh]
  int v30; // [rsp+50h] [rbp-B8h]
  __int16 v31; // [rsp+58h] [rbp-B0h]
  __int16 v32; // [rsp+5Ah] [rbp-AEh]
  int v33; // [rsp+60h] [rbp-A8h]
  int v34; // [rsp+64h] [rbp-A4h]
  __int64 v35; // [rsp+78h] [rbp-90h]
  int v36; // [rsp+80h] [rbp-88h]
  int v37; // [rsp+84h] [rbp-84h]
  unsigned __int16 *v38; // [rsp+98h] [rbp-70h]
  int v39; // [rsp+A0h] [rbp-68h]
  int v40; // [rsp+A4h] [rbp-64h]
  __int64 v41; // [rsp+A8h] [rbp-60h]
  int v42; // [rsp+C0h] [rbp-48h]
  int v43; // [rsp+C4h] [rbp-44h]
  unsigned __int16 *v44; // [rsp+D8h] [rbp-30h]
  int v45; // [rsp+E0h] [rbp-28h]
  int v46; // [rsp+E4h] [rbp-24h]
  unsigned __int16 *v47; // [rsp+F8h] [rbp-10h]
  int v48; // [rsp+100h] [rbp-8h]
  int v49; // [rsp+104h] [rbp-4h]
  unsigned __int16 *v50; // [rsp+118h] [rbp+10h]
  int v51; // [rsp+120h] [rbp+18h]
  int v52; // [rsp+124h] [rbp+1Ch]
  __int64 v53; // [rsp+128h] [rbp+20h]
  int v54; // [rsp+140h] [rbp+38h]
  int v55; // [rsp+144h] [rbp+3Ch]
  __int64 v56; // [rsp+148h] [rbp+40h]
  __int64 v57; // [rsp+150h] [rbp+48h]
  __int64 v58; // [rsp+158h] [rbp+50h]
  int v59; // [rsp+160h] [rbp+58h]
  int v60; // [rsp+164h] [rbp+5Ch]
  __int64 v61; // [rsp+168h] [rbp+60h]
  __int64 v62; // [rsp+170h] [rbp+68h]
  __int64 v63; // [rsp+178h] [rbp+70h]
  int v64; // [rsp+180h] [rbp+78h]
  int v65; // [rsp+184h] [rbp+7Ch]
  struct _LIST_ENTRY *v66; // [rsp+188h] [rbp+80h]
  int v67; // [rsp+1A0h] [rbp+98h]
  int v68; // [rsp+1A4h] [rbp+9Ch]
  PVOID v69; // [rsp+1B8h] [rbp+B0h]

  P = 0LL;
  v26 = a9;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64 *)&P);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    memset_0(&Src, 0, 0x418uLL);
    if ( (a8 & 8) != 0 )
    {
      Src = 6;
      v15 = 140;
      v29 = 4907;
    }
    else
    {
      if ( (a8 & 0x20) != 0 )
      {
        v29 = 4911;
      }
      else
      {
        v29 = 4913;
        if ( (a8 & 0x40) == 0 )
          v29 = 4670;
      }
      Src = 3;
      v15 = 142;
    }
    v16 = *a2;
    v31 = v15;
    v17 = v16 + 16;
    v32 = 8;
    v18 = *(unsigned __int8 *)(a6 + 1);
    v33 = 4;
    v35 = a6;
    v36 = 1;
    v37 = v17;
    v34 = 4 * v18 + 8;
    v19 = *a1;
    v38 = a2;
    v39 = 5;
    v40 = 8;
    if ( v19 )
      v41 = *(_QWORD *)(v19 + 24);
    else
      v41 = *(_QWORD *)(a1[2] + 24);
    v20 = *a3 + 16;
    v42 = 1;
    v43 = v17;
    v44 = a2;
    v45 = 1;
    v46 = v20;
    v47 = a3;
    if ( a4 )
    {
      v24 = *a4;
      v48 = 2;
      v49 = v24 + 16;
      v50 = a4;
    }
    v51 = 11;
    v52 = 8;
    v53 = ObNormalizeHandleValue(a5);
    v54 = 24;
    v21 = SepSecurityDescriptorStrictLength(a7);
    v57 = 4LL;
    v55 = v21;
    v58 = a7;
    v56 = a8;
    v59 = 24;
    v60 = SepSecurityDescriptorStrictLength(v26);
    v63 = v22;
    v66 = Flink;
    v69 = P;
    v61 = a8;
    v23 = *(unsigned __int16 *)P + 16;
    v62 = 4LL;
    v68 = v23;
    v64 = 11;
    v65 = 8;
    v67 = 2;
    v30 = 11;
    SepAdtLogAuditRecord(&Src);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( AllocatedFullProcessImageName < 0 )
    SepAuditFailed(AllocatedFullProcessImageName);
}
