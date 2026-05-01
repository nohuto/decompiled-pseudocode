/*
 * XREFs of CrmLogActivityUpdate @ 0x18002E5A0
 * Callers:
 *     CrmActivityUpdate @ 0x18002E120 (CrmActivityUpdate.c)
 *     CrmGlobalsRegistrationRundownHelper @ 0x18002FB4C (CrmGlobalsRegistrationRundownHelper.c)
 * Callees:
 *     CrmPolicyTableEntryGet @ 0x18002E830 (CrmPolicyTableEntryGet.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800557F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall CrmLogActivityUpdate(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        __int64 a14,
        __int64 a15)
{
  __int64 result; // rax
  int v20; // edx
  bool v21; // [rsp+30h] [rbp-D0h] BYREF
  bool v22; // [rsp+31h] [rbp-CFh] BYREF
  bool v23; // [rsp+32h] [rbp-CEh] BYREF
  unsigned int v24; // [rsp+34h] [rbp-CCh] BYREF
  int v25; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+3Ch] [rbp-C4h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+44h] [rbp-BCh] BYREF
  int v29; // [rsp+48h] [rbp-B8h] BYREF
  int v30; // [rsp+4Ch] [rbp-B4h] BYREF
  int v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+68h] [rbp-98h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v37[32]; // [rsp+80h] [rbp-80h] BYREF
  UUID *v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  __int64 *v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  int *v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  __int64 *v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D8h] [rbp-28h]
  int *v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  int *v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]
  int *v50; // [rsp+100h] [rbp+0h]
  __int64 v51; // [rsp+108h] [rbp+8h]
  bool *v52; // [rsp+110h] [rbp+10h]
  __int64 v53; // [rsp+118h] [rbp+18h]
  bool *v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+128h] [rbp+28h]
  int *v56; // [rsp+130h] [rbp+30h]
  __int64 v57; // [rsp+138h] [rbp+38h]
  int *v58; // [rsp+140h] [rbp+40h]
  __int64 v59; // [rsp+148h] [rbp+48h]
  int *v60; // [rsp+150h] [rbp+50h]
  __int64 v61; // [rsp+158h] [rbp+58h]
  int *v62; // [rsp+160h] [rbp+60h]
  __int64 v63; // [rsp+168h] [rbp+68h]
  int *v64; // [rsp+170h] [rbp+70h]
  __int64 v65; // [rsp+178h] [rbp+78h]
  bool *v66; // [rsp+180h] [rbp+80h]
  __int64 v67; // [rsp+188h] [rbp+88h]
  __int64 *v68; // [rsp+190h] [rbp+90h]
  __int64 v69; // [rsp+198h] [rbp+98h]
  __int64 *v70; // [rsp+1A0h] [rbp+A0h]
  __int64 v71; // [rsp+1A8h] [rbp+A8h]

  result = CrmPolicyTableEntryGet(a2);
  v20 = *(_DWORD *)(result + 4);
  if ( (unsigned int)dword_1800E72E8 > 5 && (qword_1800E72F8 & 4) != 0 )
  {
    result = qword_1800E7300 & 4;
    if ( result == qword_1800E7300 )
    {
      v38 = &Uuid;
      v40 = &v33;
      v21 = a7 != 0;
      v42 = (int *)&v24;
      v44 = &v34;
      v22 = a8 != 0;
      v46 = &v25;
      v23 = a13 != 0;
      v26 = a5;
      v48 = &v26;
      v27 = a6;
      v50 = &v27;
      v52 = &v21;
      v54 = &v22;
      v56 = &v28;
      v29 = a9;
      v58 = &v29;
      v30 = a10;
      v60 = &v30;
      v31 = a11;
      v62 = &v31;
      v32 = a12;
      v64 = &v32;
      v66 = &v23;
      v35 = a14;
      v68 = &v35;
      v36 = a15;
      v70 = &v36;
      v39 = 16LL;
      v33 = a1;
      v41 = 8LL;
      v24 = a2;
      v43 = 4LL;
      v34 = a3;
      v45 = 8LL;
      v25 = a4;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      v53 = 1LL;
      v55 = 1LL;
      v28 = v20;
      v57 = 4LL;
      v59 = 4LL;
      v61 = 4LL;
      v63 = 4LL;
      v65 = 4LL;
      v67 = 1LL;
      v69 = 8LL;
      v71 = 8LL;
      return tlgWriteTransfer_EventWriteTransfer(&dword_1800E72E8, &unk_1800D1AAA, 0LL, 0LL, 19, v37);
    }
  }
  return result;
}
