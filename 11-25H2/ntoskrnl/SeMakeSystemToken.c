/*
 * XREFs of SeMakeSystemToken @ 0x140C29020
 * Callers:
 *     SepInitializationPhase0 @ 0x140C289F4 (SepInitializationPhase0.c)
 * Callees:
 *     RtlpTimeFieldsToTime @ 0x14042E5F8 (RtlpTimeFieldsToTime.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SepCreateToken @ 0x140783CB4 (SepCreateToken.c)
 *     RtlAddProcessTrustLabelAce @ 0x140918E20 (RtlAddProcessTrustLabelAce.c)
 *     RtlCreateAcl @ 0x140968260 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409682F0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x1409A6F20 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409EC1D0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409EC7E0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A061E0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140A19640 (RtlSetGroupSecurityDescriptor.c)
 *     SeSetMandatoryPolicyToken @ 0x140A4769C (SeSetMandatoryPolicyToken.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 SeMakeSystemToken()
{
  PSID v0; // r12
  PSID v1; // rbx
  unsigned int v2; // edx
  int v3; // eax
  unsigned int v4; // r13d
  ULONG v5; // edi
  ACL *Pool2; // rax
  ACL *v7; // r15
  ULONG v9; // edi
  ACL *v10; // rax
  unsigned __int8 *v11; // rsi
  ACL *v12; // rcx
  void *v13; // rax
  void *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // [rsp+28h] [rbp-100h]
  int v18; // [rsp+30h] [rbp-F8h]
  int v19; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v20; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v21; // [rsp+B8h] [rbp-70h] BYREF
  PSID v22; // [rsp+C0h] [rbp-68h] BYREF
  int v23; // [rsp+C8h] [rbp-60h]
  int v24; // [rsp+CCh] [rbp-5Ch]
  _DWORD v25[2]; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v26; // [rsp+D8h] [rbp-50h]
  __int64 v27; // [rsp+E0h] [rbp-48h]
  int v28; // [rsp+E8h] [rbp-40h]
  int v29; // [rsp+ECh] [rbp-3Ch]
  void *v30; // [rsp+F0h] [rbp-38h]
  __int64 v31; // [rsp+F8h] [rbp-30h]
  __m128i si128; // [rsp+100h] [rbp-28h] BYREF
  LUID v33; // [rsp+118h] [rbp-10h] BYREF
  int v34; // [rsp+120h] [rbp-8h]
  LUID v35; // [rsp+124h] [rbp-4h]
  int v36; // [rsp+12Ch] [rbp+4h]
  __int64 v37; // [rsp+130h] [rbp+8h]
  int v38; // [rsp+138h] [rbp+10h]
  LUID v39; // [rsp+13Ch] [rbp+14h]
  int v40; // [rsp+144h] [rbp+1Ch]
  LUID v41; // [rsp+148h] [rbp+20h]
  int v42; // [rsp+150h] [rbp+28h]
  LUID v43; // [rsp+154h] [rbp+2Ch]
  int v44; // [rsp+15Ch] [rbp+34h]
  LUID v45; // [rsp+160h] [rbp+38h]
  int v46; // [rsp+168h] [rbp+40h]
  LUID v47; // [rsp+16Ch] [rbp+44h]
  int v48; // [rsp+174h] [rbp+4Ch]
  LUID v49; // [rsp+178h] [rbp+50h]
  int v50; // [rsp+180h] [rbp+58h]
  LUID v51; // [rsp+184h] [rbp+5Ch]
  int v52; // [rsp+18Ch] [rbp+64h]
  __int64 v53; // [rsp+190h] [rbp+68h]
  int v54; // [rsp+198h] [rbp+70h]
  LUID v55; // [rsp+19Ch] [rbp+74h]
  int v56; // [rsp+1A4h] [rbp+7Ch]
  LUID v57; // [rsp+1A8h] [rbp+80h]
  int v58; // [rsp+1B0h] [rbp+88h]
  __int64 v59; // [rsp+1B4h] [rbp+8Ch]
  int v60; // [rsp+1BCh] [rbp+94h]
  LUID v61; // [rsp+1C0h] [rbp+98h]
  int v62; // [rsp+1C8h] [rbp+A0h]
  LUID v63; // [rsp+1CCh] [rbp+A4h]
  int v64; // [rsp+1D4h] [rbp+ACh]
  LUID v65; // [rsp+1D8h] [rbp+B0h]
  int v66; // [rsp+1E0h] [rbp+B8h]
  LUID v67; // [rsp+1E4h] [rbp+BCh]
  int v68; // [rsp+1ECh] [rbp+C4h]
  LUID v69; // [rsp+1F0h] [rbp+C8h]
  int v70; // [rsp+1F8h] [rbp+D0h]
  LUID v71; // [rsp+1FCh] [rbp+D4h]
  int v72; // [rsp+204h] [rbp+DCh]
  __int64 v73; // [rsp+208h] [rbp+E0h]
  int v74; // [rsp+210h] [rbp+E8h]
  __int64 v75; // [rsp+214h] [rbp+ECh]
  int v76; // [rsp+21Ch] [rbp+F4h]
  __int64 v77; // [rsp+220h] [rbp+F8h]
  int v78; // [rsp+228h] [rbp+100h]
  LUID v79; // [rsp+22Ch] [rbp+104h]
  int v80; // [rsp+234h] [rbp+10Ch]
  __int64 v81; // [rsp+238h] [rbp+110h]
  int v82; // [rsp+240h] [rbp+118h]
  __int64 v83; // [rsp+244h] [rbp+11Ch]
  int v84; // [rsp+24Ch] [rbp+124h]
  __int64 v85; // [rsp+250h] [rbp+128h]
  int v86; // [rsp+258h] [rbp+130h]
  LUID v87; // [rsp+25Ch] [rbp+134h]
  int v88; // [rsp+264h] [rbp+13Ch]
  __int64 v89; // [rsp+268h] [rbp+140h]
  int v90; // [rsp+270h] [rbp+148h]
  LUID v91; // [rsp+274h] [rbp+14Ch]
  int v92; // [rsp+27Ch] [rbp+154h]
  __int64 v93; // [rsp+280h] [rbp+158h]
  int v94; // [rsp+288h] [rbp+160h]
  PSID v95; // [rsp+298h] [rbp+170h] BYREF
  int v96; // [rsp+2A0h] [rbp+178h]
  PSID v97; // [rsp+2A8h] [rbp+180h]
  int v98; // [rsp+2B0h] [rbp+188h]
  __int64 v99; // [rsp+2B8h] [rbp+190h]
  int v100; // [rsp+2C0h] [rbp+198h]
  __int64 v101; // [rsp+2C8h] [rbp+1A0h]
  int v102; // [rsp+2D0h] [rbp+1A8h]

  v19 = 1;
  v20 = 0LL;
  v24 = 0;
  v25[1] = 0;
  v29 = 0;
  v21 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  RtlpTimeFieldsToTime((__int64)&si128, &v21);
  v0 = SeAliasAdminsSid;
  v1 = SeLocalSystemSid;
  v98 = 7;
  v100 = 7;
  v101 = SeSystemMandatorySid;
  v22 = SeLocalSystemSid;
  v23 = 0;
  v95 = SeAliasAdminsSid;
  v97 = SeWorldSid;
  v99 = SeAuthenticatedUsersSid;
  v96 = 14;
  v102 = 96;
  v2 = ((4 * *(unsigned __int8 *)(SeAuthenticatedUsersSid + 1) + 11) & 0xFFFFFFFC)
     + ((4 * *(unsigned __int8 *)(SeSystemMandatorySid + 1) + 11) & 0xFFFFFFFC)
     + ((4 * *((unsigned __int8 *)SeAliasAdminsSid + 1) + 11) & 0xFFFFFFFC);
  v3 = *((unsigned __int8 *)SeWorldSid + 1);
  v34 = 3;
  v36 = 0;
  v38 = 0;
  v40 = 3;
  v33 = SeTcbPrivilege;
  v4 = v2 + ((4 * v3 + 11) & 0xFFFFFFFC) + 16;
  v35 = SeCreateTokenPrivilege;
  v37 = SeTakeOwnershipPrivilege;
  v39 = SeCreatePagefilePrivilege;
  v41 = SeLockMemoryPrivilege;
  v43 = SeAssignPrimaryTokenPrivilege;
  v45 = SeIncreaseQuotaPrivilege;
  v47 = SeIncreaseBasePriorityPrivilege;
  v49 = SeCreatePermanentPrivilege;
  v51 = SeDebugPrivilege;
  v53 = SeAuditPrivilege;
  v55 = SeSecurityPrivilege;
  v42 = 3;
  v44 = 0;
  v46 = 0;
  v48 = 3;
  v50 = 3;
  v52 = 3;
  v54 = 3;
  v57 = SeSystemEnvironmentPrivilege;
  v59 = SeChangeNotifyPrivilege;
  v61 = SeBackupPrivilege;
  v63 = SeRestorePrivilege;
  v65 = SeShutdownPrivilege;
  v67 = SeLoadDriverPrivilege;
  v69 = SeProfileSingleProcessPrivilege;
  v71 = SeSystemtimePrivilege;
  v73 = SeUndockPrivilege;
  v75 = SeManageVolumePrivilege;
  v77 = SeImpersonatePrivilege;
  v79 = SeCreateGlobalPrivilege;
  v81 = SeTrustedCredManAccessPrivilege;
  v83 = SeRelabelPrivilege;
  v85 = SeIncreaseWorkingSetPrivilege;
  v87 = SeTimeZonePrivilege;
  v89 = SeCreateSymbolicLinkPrivilege;
  v91 = SeSystemProfilePrivilege;
  v60 = 3;
  v70 = 3;
  v78 = 3;
  v80 = 3;
  v86 = 3;
  v88 = 3;
  v90 = 3;
  v92 = 3;
  v94 = 3;
  v93 = SeDelegateSessionUserImpersonatePrivilege;
  v56 = 0;
  v58 = 0;
  v62 = 0;
  v64 = 0;
  v66 = 0;
  v68 = 0;
  v72 = 0;
  v74 = 0;
  v76 = 0;
  v82 = 0;
  v84 = 0;
  v5 = 4 * *((unsigned __int8 *)SeLocalSystemSid + 1) + 24;
  Pool2 = (ACL *)ExAllocatePool2(0x100uLL, v5, 0x63416553uLL);
  v7 = Pool2;
  if ( !Pool2 )
    return 0LL;
  RtlCreateAcl(Pool2, v5, 2u);
  v9 = 4 * *(unsigned __int8 *)(SeProcTrustWinTcbSid + 1) + 24;
  v10 = (ACL *)ExAllocatePool2(0x100uLL, v9, 0x63416553uLL);
  v11 = (unsigned __int8 *)v10;
  if ( !v10 )
  {
    v12 = v7;
LABEL_5:
    ExFreePoolWithTag(v12, 0);
    return 0LL;
  }
  RtlCreateAcl(v10, v9, 2u);
  RtlAddAccessAllowedAce(v7, 2u, 0xF01FFu, SeLocalSystemSid);
  RtlAddProcessTrustLabelAce(v11, 2u, 0, (unsigned __int8 *)SeProcTrustWinTcbSid, 20, 131096);
  v13 = (void *)ExAllocatePool2(0x100uLL, 0x28uLL, 0x64536553uLL);
  v14 = v13;
  if ( !v13 )
  {
    ExFreePoolWithTag(v7, 0);
    v12 = (ACL *)v11;
    goto LABEL_5;
  }
  RtlCreateSecurityDescriptor(v13, 1u);
  RtlSetDaclSecurityDescriptor(v14, 1u, v7, 0);
  RtlSetSaclSecurityDescriptor((__int64)v14, 1, (__int64)v11, 0);
  RtlSetOwnerSecurityDescriptor(v14, SeAliasAdminsSid, 0);
  RtlSetGroupSecurityDescriptor(v14, SeAliasAdminsSid, 0);
  v25[0] = 48;
  v26 = 0LL;
  v28 = 0;
  v27 = 0LL;
  v31 = 0LL;
  v30 = v14;
  SepCreateToken(
    (HANDLE *)&v20,
    v15,
    v16,
    (__int64)v25,
    v17,
    v18,
    (__int64)&SeSystemAuthenticationId,
    &v21,
    &v22,
    4u,
    (__int64)&v95,
    v4,
    0x1Fu,
    (__int64)&v33,
    v0,
    v1,
    SeSystemDefaultDacl);
  SeSetMandatoryPolicyToken(v20, &v19);
  ExFreePoolWithTag(v7, 0);
  ExFreePoolWithTag(v11, 0);
  ExFreePoolWithTag(v14, 0);
  return v20;
}
