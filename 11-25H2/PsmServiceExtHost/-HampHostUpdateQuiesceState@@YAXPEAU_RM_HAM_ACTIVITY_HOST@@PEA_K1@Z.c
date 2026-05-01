/*
 * XREFs of ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180036E80
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x180084C9C (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 * Callees:
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180007734 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002B000 (-RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002B0A8 (-RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x18002C79C (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x180037460 (-HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     ?HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z @ 0x180037B24 (-HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z.c)
 *     ?ResourceTimerSet@ModernResourceEnforcer@@QEAAJPEAX_KK@Z @ 0x180068468 (-ResourceTimerSet@ModernResourceEnforcer@@QEAAJPEAX_KK@Z.c)
 *     ?HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@K@Z @ 0x18006A30C (-HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_REAS.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall HampHostUpdateQuiesceState(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v4; // r15
  struct _RM_ACTIVITY_HOST *v7; // rbx
  void **v8; // r12
  int IsDebugEnabled; // eax
  unsigned int v10; // r13d
  struct _RM_ACTIVITY_HOST *v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  unsigned __int8 v14; // si
  unsigned __int64 v15; // rax
  unsigned int v16; // r13d
  int v17; // r14d
  struct _RM_ACTIVITY_HOST *v18; // r13
  unsigned int v19; // r14d
  unsigned __int64 v20; // rdx
  struct _RM_ACTIVITY_HOST *v21; // rax
  unsigned __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 **v25; // rsi
  unsigned __int64 **v26; // rbx
  char v27; // al
  const wchar_t *v28; // rdi
  __int64 v29; // rax
  int v30; // eax
  char v31; // [rsp+40h] [rbp-C0h] BYREF
  char v32; // [rsp+41h] [rbp-BFh] BYREF
  unsigned int v33; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int64 v34; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v35; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v36; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v38; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v39; // [rsp+70h] [rbp-90h]
  struct _RM_ACTIVITY_HOST *v40; // [rsp+78h] [rbp-88h]
  struct _RM_ACTIVITY_HOST *v41; // [rsp+80h] [rbp-80h] BYREF
  ModernResourceEnforcer *v42; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 *v43; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 *v44; // [rsp+98h] [rbp-68h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+A0h] [rbp-60h] BYREF
  void *v46; // [rsp+B0h] [rbp-50h]
  unsigned int v47; // [rsp+B8h] [rbp-48h]
  __int64 v48; // [rsp+C0h] [rbp-40h]
  struct _RM_ACTIVITY_HOST *v49; // [rsp+C8h] [rbp-38h]
  __int64 v50; // [rsp+D0h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+E0h] [rbp-20h] BYREF
  void *v52; // [rsp+F0h] [rbp-10h]
  int v53; // [rsp+F8h] [rbp-8h]
  int v54; // [rsp+FCh] [rbp-4h]
  const wchar_t *v55; // [rsp+100h] [rbp+0h]
  int v56; // [rsp+108h] [rbp+8h]
  int v57; // [rsp+10Ch] [rbp+Ch]
  __int64 *v58; // [rsp+110h] [rbp+10h]
  __int64 v59; // [rsp+118h] [rbp+18h]
  char *v60; // [rsp+120h] [rbp+20h]
  __int64 v61; // [rsp+128h] [rbp+28h]
  struct _RM_ACTIVITY_HOST **v62; // [rsp+130h] [rbp+30h]
  __int64 v63; // [rsp+138h] [rbp+38h]
  ModernResourceEnforcer **v64; // [rsp+140h] [rbp+40h]
  __int64 v65; // [rsp+148h] [rbp+48h]
  char *v66; // [rsp+150h] [rbp+50h]
  __int64 v67; // [rsp+158h] [rbp+58h]
  unsigned __int64 **v68; // [rsp+160h] [rbp+60h]
  __int64 v69; // [rsp+168h] [rbp+68h]
  unsigned __int64 **v70; // [rsp+170h] [rbp+70h]
  __int64 v71; // [rsp+178h] [rbp+78h]

  v44 = a3;
  v43 = a2;
  v36 = 0;
  v35 = 0;
  v4 = 0LL;
  v33 = 0;
  v39 = 0LL;
  v7 = (struct _RM_ACTIVITY_HOST *)(((unsigned __int64)a1 - 64) & -(__int64)(a1 != 0LL));
  v41 = v7;
  v38 = 0LL;
  RmReleaseEnforcementLocks(v7);
  v8 = (void **)((char *)a1 + 808);
  if ( *a2 )
    v34 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 200LL))(*v8);
  else
    v34 = 0LL;
  HampUtilQueryQuiesceTimeouts(&v36, &v35);
  IsDebugEnabled = HampHostQueryIsDebugEnabled(a1, &v33);
  v10 = v33;
  if ( IsDebugEnabled < 0 )
    v10 = 0;
  v33 = v10;
  RmAcquireEnforcementLocks(v7);
  v11 = (struct _RM_ACTIVITY_HOST *)*a2;
  v12 = *((_QWORD *)a1 + 83);
  v13 = *((_QWORD *)&v38 + 1);
  v14 = v38;
  v15 = v12 >> 29;
  LOBYTE(v15) = (v12 >> 29) & 7;
  *(_QWORD *)&EventDescriptor.Id = *a3;
  v37 = v15;
  v16 = v10 & 1;
  v48 = (unsigned int)v12 >> 29;
  v40 = v11;
  v49 = v11;
  v50 = *(_QWORD *)&EventDescriptor.Id;
  do
  {
    v17 = v16 | (2 * ((v12 >> 46) & 1));
    v18 = v41;
    v19 = (v12 >> 41) & 1 | (2 * ((v12 >> 42) & 1 | (2 * v17)));
    v47 = v19;
    RmReleaseEnforcementLocks(v41);
    (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 192LL))(*v8, 1LL);
    if ( (v19 & 4) != 0 || (v19 & 2) != 0 )
    {
      v21 = v40;
      v20 = (unsigned __int64)v40;
    }
    else
    {
      v20 = v34;
      v21 = v40;
    }
    v22 = (unsigned __int64)v21 + *(_QWORD *)&EventDescriptor.Id - v20;
    if ( v22 >= v35 )
      v22 = v35;
    if ( v19 >= 8 )
    {
      v39 = v22;
      v38 = 5uLL;
      v14 = 5;
      v13 = 0LL;
      v4 = v22;
      goto LABEL_21;
    }
    switch ( (unsigned __int8)v37 )
    {
      case 1u:
        v13 = v35 - v22;
        if ( (v19 & 1) == 0 )
          v13 = v20;
        v14 = ((v19 & 1) != 0) + 1;
        if ( v13 )
          goto LABEL_17;
        break;
      case 2u:
        if ( (v19 & 1) != 0 )
        {
          v14 = 2;
          v13 = v20;
        }
        else
        {
          v13 = v36;
          v14 = 1;
          if ( v36 >= v20 )
            v13 = v20;
        }
        if ( !v13 )
        {
          v14 = 3;
          v13 = 1000LL;
        }
        goto LABEL_17;
      case 3u:
        v13 = v20;
        v14 = 4 - (v20 != 0);
        goto LABEL_17;
      case 4u:
        v13 = 0LL;
        break;
      default:
        goto LABEL_18;
    }
    v14 = 4;
LABEL_17:
    v39 = v22;
    *(_QWORD *)&v38 = v14;
    v4 = v22;
    *((_QWORD *)&v38 + 1) = v13;
LABEL_18:
    if ( v13 )
    {
      v23 = *((_QWORD *)a1 - 2);
      v46 = *v8;
      v42 = *(ModernResourceEnforcer **)(v23 + 40);
      if ( (*((int (__fastcall **)(void *, unsigned __int64, _QWORD))v42 + 23))(v46, v13, 0LL) < 0 )
        ModernResourceEnforcer::ResourceTimerSet(v42, v46, v13, 1u);
    }
LABEL_21:
    HampHostQueryIsDebugEnabled(a1, &v33);
    RmAcquireEnforcementLocks(v18);
    v12 = *((_QWORD *)a1 + 83);
    v16 = v33 & 1;
    LODWORD(v46) = (v12 >> 41) & 1 | (2 * ((v12 >> 42) & 1 | (2 * (v16 | (2 * ((v12 >> 46) & 1))))));
  }
  while ( v19 != (_DWORD)v46 );
  if ( v14 == 3 )
  {
    HampHostRevokeQuiesceExtension(a1, 6LL);
  }
  else if ( v14 == 4 && (v12 & 0xE0000000) != 0x80000000 )
  {
    LODWORD(v34) = 0;
    HampHostQueueTerminateEx((__int64)a1, (v12 >> 44) & 1 | 2, 0xE00u, 0LL, 3, 0, 0LL, (unsigned int *)&v34);
  }
  v24 = v14;
  v25 = (unsigned __int64 **)v43;
  *((_QWORD *)a1 + 83) = (v24 << 29) ^ (*((_QWORD *)a1 + 83) ^ (v24 << 29)) & 0xFFFFFFFF1FFFFFFFuLL;
  *v25 = (unsigned __int64 *)v13;
  v26 = (unsigned __int64 **)v44;
  *v44 = v4;
  *((_DWORD *)a1 + 172) = *(_DWORD *)v25;
  *((_DWORD *)a1 + 171) = CempQueryUnbiasedInterruptTimeMs64();
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 8) != 0 && (qword_1800E72C8 & 8) == qword_1800E72C8 )
  {
    v44 = *v26;
    v43 = *v25;
    v27 = ((unsigned __int64)*((unsigned int *)a1 + 166) >> 29) & 7;
    v71 = 8LL;
    v31 = v27;
    v42 = *(ModernResourceEnforcer **)&EventDescriptor.Id;
    v41 = v40;
    v32 = v37;
    v37 = *((_QWORD *)a1 - 4);
    v70 = &v44;
    v68 = &v43;
    v66 = &v31;
    v64 = &v42;
    v62 = &v41;
    v60 = &v32;
    v58 = (__int64 *)&v37;
    v69 = 8LL;
    v67 = 1LL;
    v65 = 8LL;
    v63 = 8LL;
    v61 = 1LL;
    v59 = 8LL;
    v28 = (const wchar_t *)((char *)a1 + 24);
    if ( v28 )
    {
      v29 = -1LL;
      do
        ++v29;
      while ( v28[v29] );
      v30 = 2 * v29 + 2;
    }
    else
    {
      v28 = &word_1800C10AC;
      v30 = 2;
    }
    v56 = v30;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800E72B8;
    EventDescriptor.Keyword = 8LL;
    v55 = v28;
    v57 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E72B8;
    v52 = &unk_1800D2E2D;
    v54 = 1;
    UserData.Reserved = 2;
    v53 = 163;
    LODWORD(v34) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
  }
}
