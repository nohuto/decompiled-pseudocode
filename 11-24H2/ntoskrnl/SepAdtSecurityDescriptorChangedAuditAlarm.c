/*
 * XREFs of SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1408F03C0
 * Callers:
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1408F1C3C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1408F2FA8 (SeTokenDefaultDaclChangedAuditAlarm.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140348E4C (SepAdtLogAuditRecord.c)
 *     PsGetCurrentThreadProcess @ 0x1404709D0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SepAuditFailed @ 0x140850F60 (SepAuditFailed.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1408EF560 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ObNormalizeHandleValue @ 0x1408F0680 (ObNormalizeHandleValue.c)
 *     SepSecurityDescriptorStrictLength @ 0x1408F06B8 (SepSecurityDescriptorStrictLength.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int64 v14; // r8
  __int64 v15; // r9
  signed int AllocatedFullProcessImageName; // edi
  __int16 v17; // ax
  int v18; // edx
  int v19; // edx
  int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  PVOID P; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v28; // [rsp+30h] [rbp-D8h]
  struct _LIST_ENTRY *Flink; // [rsp+38h] [rbp-D0h]
  int Src; // [rsp+48h] [rbp-C0h] BYREF
  int v31; // [rsp+4Ch] [rbp-BCh]
  int v32; // [rsp+50h] [rbp-B8h]
  __int16 v33; // [rsp+58h] [rbp-B0h]
  __int16 v34; // [rsp+5Ah] [rbp-AEh]
  int v35; // [rsp+60h] [rbp-A8h]
  int v36; // [rsp+64h] [rbp-A4h]
  __int64 v37; // [rsp+78h] [rbp-90h]
  int v38; // [rsp+80h] [rbp-88h]
  int v39; // [rsp+84h] [rbp-84h]
  unsigned __int16 *v40; // [rsp+98h] [rbp-70h]
  int v41; // [rsp+A0h] [rbp-68h]
  int v42; // [rsp+A4h] [rbp-64h]
  __int64 v43; // [rsp+A8h] [rbp-60h]
  int v44; // [rsp+C0h] [rbp-48h]
  int v45; // [rsp+C4h] [rbp-44h]
  unsigned __int16 *v46; // [rsp+D8h] [rbp-30h]
  int v47; // [rsp+E0h] [rbp-28h]
  int v48; // [rsp+E4h] [rbp-24h]
  unsigned __int16 *v49; // [rsp+F8h] [rbp-10h]
  int v50; // [rsp+100h] [rbp-8h]
  int v51; // [rsp+104h] [rbp-4h]
  unsigned __int16 *v52; // [rsp+118h] [rbp+10h]
  int v53; // [rsp+120h] [rbp+18h]
  int v54; // [rsp+124h] [rbp+1Ch]
  __int64 v55; // [rsp+128h] [rbp+20h]
  int v56; // [rsp+140h] [rbp+38h]
  int v57; // [rsp+144h] [rbp+3Ch]
  __int64 v58; // [rsp+148h] [rbp+40h]
  __int64 v59; // [rsp+150h] [rbp+48h]
  __int64 v60; // [rsp+158h] [rbp+50h]
  int v61; // [rsp+160h] [rbp+58h]
  int v62; // [rsp+164h] [rbp+5Ch]
  __int64 v63; // [rsp+168h] [rbp+60h]
  __int64 v64; // [rsp+170h] [rbp+68h]
  __int64 v65; // [rsp+178h] [rbp+70h]
  int v66; // [rsp+180h] [rbp+78h]
  int v67; // [rsp+184h] [rbp+7Ch]
  struct _LIST_ENTRY *v68; // [rsp+188h] [rbp+80h]
  int v69; // [rsp+1A0h] [rbp+98h]
  int v70; // [rsp+1A4h] [rbp+9Ch]
  PVOID v71; // [rsp+1B8h] [rbp+B0h]

  P = 0LL;
  v28 = a9;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(
                                    (__int64)CurrentThreadProcess,
                                    (__int64 *)&P,
                                    v14,
                                    v15);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    memset_0(&Src, 0, 0x418uLL);
    if ( (a8 & 8) != 0 )
    {
      Src = 6;
      v17 = 140;
      v31 = 4907;
    }
    else
    {
      if ( (a8 & 0x20) != 0 )
      {
        v31 = 4911;
      }
      else
      {
        v31 = 4913;
        if ( (a8 & 0x40) == 0 )
          v31 = 4670;
      }
      Src = 3;
      v17 = 142;
    }
    v18 = *a2;
    v33 = v17;
    v19 = v18 + 16;
    v34 = 8;
    v20 = *(unsigned __int8 *)(a6 + 1);
    v35 = 4;
    v37 = a6;
    v38 = 1;
    v39 = v19;
    v36 = 4 * v20 + 8;
    v21 = *a1;
    v40 = a2;
    v41 = 5;
    v42 = 8;
    if ( v21 )
      v43 = *(_QWORD *)(v21 + 24);
    else
      v43 = *(_QWORD *)(a1[2] + 24);
    v22 = *a3 + 16;
    v44 = 1;
    v45 = v19;
    v46 = a2;
    v47 = 1;
    v48 = v22;
    v49 = a3;
    if ( a4 )
    {
      v26 = *a4;
      v50 = 2;
      v51 = v26 + 16;
      v52 = a4;
    }
    v53 = 11;
    v54 = 8;
    v55 = ObNormalizeHandleValue(a5);
    v56 = 24;
    v23 = SepSecurityDescriptorStrictLength(a7);
    v59 = 4LL;
    v57 = v23;
    v60 = a7;
    v58 = a8;
    v61 = 24;
    v62 = SepSecurityDescriptorStrictLength(v28);
    v65 = v24;
    v68 = Flink;
    v71 = P;
    v63 = a8;
    v25 = *(unsigned __int16 *)P + 16;
    v64 = 4LL;
    v70 = v25;
    v66 = 11;
    v67 = 8;
    v69 = 2;
    v32 = 11;
    SepAdtLogAuditRecord(&Src);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( AllocatedFullProcessImageName < 0 )
    SepAuditFailed(AllocatedFullProcessImageName);
}
