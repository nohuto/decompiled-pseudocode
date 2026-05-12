/*
 * XREFs of RaUnitAsyncError @ 0x140029460
 * Callers:
 *     RaidUnitCompleteRequest @ 0x14001F490 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RaidXrbDeallocateResources @ 0x140011E50 (RaidXrbDeallocateResources.c)
 *     RaidLogRequestComplete @ 0x14001512C (RaidLogRequestComplete.c)
 *     RaidSrbStatusToNtStatus @ 0x14001EF94 (RaidSrbStatusToNtStatus.c)
 *     McTemplateK0dud_EtwWriteTransfer @ 0x140022C5C (McTemplateK0dud_EtwWriteTransfer.c)
 *     StorUnmapSenseInfo @ 0x140025620 (StorUnmapSenseInfo.c)
 *     RaidUnitProcessBusyRequest @ 0x140031200 (RaidUnitProcessBusyRequest.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0zx_EtwWriteTransfer @ 0x140053848 (McTemplateK0zx_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x140055624 (WPP_SF_qqD.c)
 *     RaidAdapterReleaseCryptoKeyResources @ 0x140055F58 (RaidAdapterReleaseCryptoKeyResources.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidReleaseNvmeIceKeyResources @ 0x14006AB70 (RaidReleaseNvmeIceKeyResources.c)
 *     RaidFreezeUnitQueue @ 0x14009D878 (RaidFreezeUnitQueue.c)
 *     WPP_SF_qdq @ 0x1400A3B9C (WPP_SF_qdq.c)
 *     WPP_SF_qqDDD @ 0x1400A3C04 (WPP_SF_qqDDD.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

char __fastcall RaUnitAsyncError(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r12
  _BYTE *v3; // r13
  PIRP v4; // rbx
  char v5; // si
  unsigned __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r15
  _BYTE *v9; // r14
  unsigned int v10; // r11d
  unsigned int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // r8
  int v15; // ecx
  int v16; // ecx
  unsigned __int64 v17; // rcx
  int v18; // ebp
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // r9
  char v23; // si
  int v24; // eax
  _BYTE *v25; // rdi
  unsigned int v26; // ebx
  unsigned int v27; // r11d
  __int64 v28; // rcx
  __int64 v29; // r10
  int v30; // ecx
  int v31; // ecx
  unsigned __int64 v32; // rcx
  _BYTE *v33; // rbx
  unsigned int v34; // r11d
  unsigned int v35; // r10d
  __int64 v36; // rcx
  int v37; // ecx
  int v38; // ecx
  unsigned __int64 v39; // rcx
  int v40; // eax
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  _LARGE_INTEGER ByteOffset; // rbx
  unsigned int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rbx
  unsigned __int8 v46; // di
  unsigned __int8 v47; // si
  unsigned __int8 v48; // r15
  unsigned __int8 v49; // r14
  _BYTE *v50; // r9
  __int64 v51; // r10
  unsigned int v52; // ebp
  unsigned int v53; // r11d
  __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  __int64 v56; // rbx
  __int64 v57; // r8
  int v58; // ecx
  int v59; // ecx
  char v60; // dl
  _BYTE *v61; // rcx
  _BYTE *v62; // rax
  unsigned int v63; // eax
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // rcx
  __int64 v66; // rbp
  _QWORD *v67; // rax
  PIRP v68; // r15
  unsigned __int64 v69; // rax
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  __int64 SecurityQos; // rsi
  __int64 v72; // rbp
  int *v73; // r15
  __int64 v74; // rbx
  int *v75; // r14
  KIRQL CurrentIrql; // al
  KSPIN_LOCK *v77; // rcx
  char v78; // al
  int v79; // r9d
  __int64 v80; // rcx
  __int64 v81; // r8
  _QWORD *v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rdx
  _QWORD *v85; // rax
  char v86; // al
  int v87; // r9d
  __int64 v88; // rcx
  __int64 v89; // r8
  _QWORD *v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rdx
  _QWORD *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r9
  __int64 v97; // rcx
  __int64 v98; // rdx
  __int64 v99; // rax
  __int64 v100; // r14
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v102; // rbx
  unsigned int AccessState; // r9d
  unsigned int v104; // edx
  __int64 v105; // rcx
  unsigned __int64 DesiredAccess; // rax
  __int64 v107; // r8
  LARGE_INTEGER v108; // rax
  LARGE_INTEGER v109; // rdx
  unsigned int LowPart; // ecx
  unsigned __int64 v111; // r8
  char v112; // r9
  __int64 v113; // r9
  unsigned int v114; // r11d
  unsigned int v115; // edx
  __int64 v116; // rcx
  unsigned __int64 v117; // r9
  __int64 v118; // r8
  int v119; // eax
  int AccessState_high; // eax
  int v121; // eax
  unsigned __int64 v122; // r8
  signed __int32 v123; // eax
  signed __int32 v124; // ett
  __int64 v125; // rdi
  __int64 v126; // rbx
  bool v127; // zf
  __int64 v128; // rcx
  __int64 v129; // rdx
  _DWORD *v130; // rax
  void *v131; // rdx
  __int64 v132; // rdx
  char v133; // r15
  unsigned __int8 v134; // r11
  char v135; // bl
  char v136; // r14
  char v137; // bp
  unsigned __int8 *v138; // rdi
  unsigned int v139; // esi
  unsigned int v140; // r10d
  __int64 v141; // rcx
  unsigned __int64 v142; // r8
  __int64 v143; // r9
  int v144; // ecx
  int v145; // ecx
  unsigned __int64 v146; // rcx
  char *v147; // rcx
  char v148; // r8
  char *v149; // rax
  unsigned int v150; // eax
  unsigned __int64 v151; // r8
  __int64 v153; // rbp
  __int64 v154; // rdx
  char v155; // [rsp+60h] [rbp-98h]
  PIRP Irp; // [rsp+70h] [rbp-88h]
  unsigned int v158; // [rsp+78h] [rbp-80h]
  int v159; // [rsp+7Ch] [rbp-7Ch]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-78h] BYREF
  union _LARGE_INTEGER PerformanceFrequency[2]; // [rsp+98h] [rbp-60h] BYREF
  __int128 v162; // [rsp+A8h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a2 + 168);
  v3 = 0LL;
  v4 = *(PIRP *)(a2 + 160);
  v5 = 0;
  v6 = a2;
  *(_QWORD *)&v162 = a2;
  v7 = a1;
  v8 = 0LL;
  v155 = 0;
  v9 = 0LL;
  Irp = v4;
  if ( *(_BYTE *)(v2 + 2) != 40 )
  {
    v9 = (_BYTE *)(v2 + 4);
    v5 = *(_BYTE *)(v2 + 4);
    v159 = *(_DWORD *)(v2 + 12);
    v155 = v5;
    v158 = *(_DWORD *)(v2 + 16);
    goto LABEL_13;
  }
  v8 = v2;
  v159 = *(_DWORD *)(v2 + 24);
  v158 = *(_DWORD *)(v2 + 60);
  if ( !*(_DWORD *)(v2 + 20) )
  {
    v10 = *(_DWORD *)(v2 + 56);
    v11 = 0;
    if ( v10 )
    {
      while ( 1 )
      {
        v12 = *(unsigned int *)(v2 + 4LL * v11 + 120);
        if ( (unsigned int)v12 < 0x80 )
          goto LABEL_11;
        a2 = *(unsigned int *)(v2 + 16);
        if ( (unsigned int)v12 > (unsigned int)a2 )
          goto LABEL_11;
        v13 = v12 + v2;
        v14 = (unsigned int)v12;
        v15 = *(_DWORD *)(v12 + v2) - 64;
        if ( !v15 )
          goto LABEL_9;
        v16 = v15 - 1;
        if ( v16 )
          break;
        v17 = v14 + 56;
LABEL_10:
        if ( v17 <= a2 )
        {
          v5 = *(_BYTE *)(v13 + 8);
          v9 = (_BYTE *)(v13 + 8);
          v155 = v5;
LABEL_12:
          v7 = a1;
          goto LABEL_13;
        }
LABEL_11:
        if ( ++v11 >= v10 )
          goto LABEL_12;
      }
      if ( v16 != 1 )
        goto LABEL_11;
LABEL_9:
      v17 = v14 + 40;
      goto LABEL_10;
    }
  }
LABEL_13:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      56LL,
      &WPP_e6323699744f33baefc587a6e43a33df_Traceguids,
      v7,
      v2,
      *(_BYTE *)(v2 + 3) & 0x3F);
  }
  v18 = *(_BYTE *)(v2 + 3) & 0x3F;
  if ( v18 != 5 && ((v5 - 8) & 0xDF) != 0 && v18 != 37 )
  {
    v20 = a1;
    goto LABEL_86;
  }
  v19 = *(_QWORD *)(v6 + 160);
  v20 = a1;
  if ( !v19
    || !a1
    || (*(_BYTE *)(a1 + 136) & 2) == 0
    || (v21 = *(_QWORD *)(v19 + 184), *(_BYTE *)v21 != 15)
    || ((v22 = *(_QWORD *)(v21 + 8), v23 = *(_BYTE *)(v22 + 2), v23 != 40)
      ? (v24 = *(unsigned __int8 *)(v22 + 2))
      : (v24 = *(_DWORD *)(v22 + 20)),
        v24) )
  {
LABEL_71:
    if ( v18 == 5 || ((v155 - 8) & 0xDF) == 0 )
      ++*(_DWORD *)(v20 + 2280);
    CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
    ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
    if ( *(_BYTE *)(v20 + 3368) && (g_QosFlags & 1) == 0
      || (v43 = *(_DWORD *)(v20 + 1928), ByteOffset.LowPart >= v43) && v43 && (*(_BYTE *)(v2 + 3) & 0x3F) != 0x25 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      {
        WPP_SF_qdq(WPP_GLOBAL_Control->AttachedDevice, 58LL, v7, a1, ByteOffset.LowPart, v2);
      }
      v20 = a1;
      *(_BYTE *)(v2 + 3) = 4;
      if ( v155 == 8 )
        *v9 = 40;
      goto LABEL_86;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0 )
    {
      v153 = a1;
    }
    else
    {
      v153 = a1;
      if ( BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_qdq(WPP_GLOBAL_Control->AttachedDevice, 57LL, v7, a1, ByteOffset.LowPart, v2);
    }
    v154 = v162;
    CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = ByteOffset.QuadPart + 1;
    RaidUnitProcessBusyRequest(v153, v154, v9);
    return 0;
  }
  if ( v23 != 40 )
  {
    v33 = (_BYTE *)(v22 + 72);
    goto LABEL_62;
  }
  v25 = 0LL;
  if ( *(_DWORD *)(v22 + 20) )
    goto LABEL_49;
  v26 = *(_DWORD *)(v22 + 56);
  v27 = 0;
  if ( !v26 )
    goto LABEL_49;
  while ( 1 )
  {
    v28 = *(unsigned int *)(v22 + 4LL * v27 + 120);
    if ( (unsigned int)v28 < 0x80 )
      goto LABEL_45;
    a2 = *(unsigned int *)(v22 + 16);
    if ( (unsigned int)v28 >= (unsigned int)a2 )
      goto LABEL_45;
    v29 = v28 + v22;
    v7 = (unsigned int)v28;
    v30 = *(_DWORD *)(v28 + v22);
    if ( v30 == 64 )
      break;
    v31 = v30 - 65;
    if ( !v31 )
    {
      v32 = v7 + 56;
      goto LABEL_44;
    }
    if ( v31 == 1 && v7 + 40 <= a2 )
    {
      if ( *(_DWORD *)(v29 + 12) )
        v25 = (_BYTE *)(v29 + 32);
      goto LABEL_49;
    }
LABEL_45:
    if ( ++v27 >= v26 )
      goto LABEL_49;
  }
  v32 = v7 + 40;
LABEL_44:
  if ( v32 > a2 )
    goto LABEL_45;
  if ( *(_BYTE *)(v29 + 10) )
    v25 = (_BYTE *)(v29 + 24);
LABEL_49:
  v33 = v25;
  if ( !*(_DWORD *)(v22 + 20) )
  {
    v34 = *(_DWORD *)(v22 + 56);
    v35 = 0;
    if ( v34 )
    {
      while ( 2 )
      {
        v36 = *(unsigned int *)(v22 + 4LL * v35 + 120);
        if ( (unsigned int)v36 >= 0x80 )
        {
          a2 = *(unsigned int *)(v22 + 16);
          if ( (unsigned int)v36 < (unsigned int)a2 )
          {
            v7 = (unsigned int)v36;
            v37 = *(_DWORD *)(v36 + v22);
            if ( v37 == 64 )
              goto LABEL_56;
            v38 = v37 - 65;
            if ( !v38 )
            {
              v39 = v7 + 56;
              goto LABEL_57;
            }
            if ( v38 == 1 )
            {
LABEL_56:
              v39 = v7 + 40;
LABEL_57:
              if ( v39 <= a2 )
                break;
            }
          }
        }
        if ( ++v35 >= v34 )
          break;
        continue;
      }
    }
  }
LABEL_62:
  v20 = a1;
  if ( !v33
    || ((*v33 - 10) & 0x5F) != 0
    || !*(_DWORD *)(a1 + 932)
    || (v23 != 40 ? (v40 = *(_DWORD *)(v22 + 12)) : (v40 = *(_DWORD *)(v22 + 24)),
        (v40 & 0x1000) == 0 || !*(_QWORD *)(a1 + 3440)) )
  {
    v4 = Irp;
    goto LABEL_71;
  }
LABEL_86:
  if ( v8 )
  {
    v44 = *(_QWORD *)(v20 + 24);
    if ( *(_DWORD *)v44 == 1094997074 && (*(_BYTE *)(v44 + 111) & 4) != 0 )
      *(_DWORD *)(v8 + 44) = 0;
  }
  if ( (v159 & 0x100) == 0 && !*(_BYTE *)(v20 + 756) )
  {
    RaidFreezeUnitQueue(v20, a2, v7);
    *(_BYTE *)(v2 + 3) |= 0x40u;
  }
  v45 = v162;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0LL;
  v51 = *(_QWORD *)(v162 + 168);
  if ( *(_BYTE *)(v51 + 2) != 40 )
  {
    v50 = *(_BYTE **)(v51 + 32);
    v46 = *(_BYTE *)(v51 + 11);
    goto LABEL_105;
  }
  if ( !*(_DWORD *)(v51 + 20) )
  {
    v52 = *(_DWORD *)(v51 + 56);
    v53 = 0;
    if ( v52 )
    {
      while ( 2 )
      {
        v54 = *(unsigned int *)(v51 + 4LL * v53 + 120);
        if ( (unsigned int)v54 >= 0x80 )
        {
          v55 = *(unsigned int *)(v51 + 16);
          if ( (unsigned int)v54 < (unsigned int)v55 )
          {
            v56 = v54 + v51;
            v57 = (unsigned int)v54;
            v58 = *(_DWORD *)(v54 + v51);
            if ( v58 == 64 )
            {
              v65 = v57 + 40;
            }
            else
            {
              v59 = v58 - 65;
              if ( v59 )
              {
                if ( v59 == 1 && v57 + 40 <= v55 )
                {
                  v50 = *(_BYTE **)(v56 + 24);
                  goto LABEL_103;
                }
                goto LABEL_119;
              }
              v65 = v57 + 56;
            }
            if ( v65 <= v55 )
            {
              v50 = *(_BYTE **)(v56 + 16);
LABEL_103:
              v46 = *(_BYTE *)(v56 + 9);
LABEL_104:
              v45 = v162;
              break;
            }
          }
        }
LABEL_119:
        if ( ++v53 >= v52 )
          goto LABEL_104;
        continue;
      }
    }
  }
LABEL_105:
  if ( *(char *)(v51 + 3) < 0 && v50 && v46 )
  {
    v60 = 0;
    v61 = &v50[v46];
    v62 = v50 + 8;
    if ( (unsigned __int8)((*v50 & 0x7F) - 114) <= 1u )
    {
      if ( v62 <= v61 )
      {
        v48 = v50[2];
        v47 = v50[1] & 0xF;
        v49 = v50[3];
        goto LABEL_125;
      }
    }
    else if ( v62 <= v61 )
    {
      v47 = v50[2] & 0xF;
      v63 = v46;
      if ( (unsigned int)(unsigned __int8)v50[7] + 8 <= v46 )
        v63 = (unsigned __int8)v50[7] + 8;
      v64 = (unsigned __int64)&v50[v63];
      if ( (unsigned __int64)(v50 + 13) <= v64 )
        v48 = v50[12];
      if ( (unsigned __int64)(v50 + 14) <= v64 )
        v49 = v50[13];
LABEL_125:
      v60 = 1;
    }
    if ( v60 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v66 = a1;
      }
      else
      {
        v66 = a1;
        WPP_SF_qqDDD(WPP_GLOBAL_Control->AttachedDevice, v47, WPP_GLOBAL_Control, a1, v51, v47, v48, v49);
      }
      v67 = &unk_140150000;
      while ( *(_BYTE *)v67 != v47 || *((_BYTE *)v67 + 1) != v48 || *((_BYTE *)v67 + 2) != v49 )
      {
        v67 += 2;
        if ( !v67[1] )
          goto LABEL_139;
      }
      ((void (__fastcall *)(__int64, __int64))v67[1])(v66, v45);
    }
  }
LABEL_139:
  if ( (*(_BYTE *)(v2 + 3) & 0x3F) == 5 || ((v155 - 8) & 0xDF) == 0 )
  {
    v68 = Irp;
    Irp->IoStatus.Status = -1073741661;
  }
  else
  {
    v68 = Irp;
    Irp->IoStatus.Status = RaidSrbStatusToNtStatus(*(_BYTE *)(v2 + 3));
  }
  v69 = v158;
  if ( (*(_BYTE *)(v2 + 3) & 0x3F) != 0x12 )
    v69 = 0LL;
  v68->IoStatus.Information = v69;
  SecurityContext = v68->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
    SecurityQos = (__int64)SecurityContext[4].SecurityQos;
  else
    SecurityQos = (__int64)SecurityContext[2].SecurityQos;
  v72 = *(_QWORD *)(SecurityQos + 224);
  if ( (*(_BYTE *)(SecurityQos + 16) & 2) == 0 )
    goto LABEL_182;
  v73 = *(int **)(v72 + 560);
  v74 = SecurityQos + 48;
  v75 = &v73[16 * *(unsigned int *)(SecurityQos + 84) + 16];
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  v77 = (KSPIN_LOCK *)(v75 + 10);
  if ( CurrentIrql != 2 )
  {
    KeAcquireInStackQueuedSpinLock(v77, &LockHandle);
    v86 = *(_BYTE *)(SecurityQos + 16);
    v87 = *v73;
    if ( (v86 & 2) != 0 )
    {
      *(_BYTE *)(SecurityQos + 16) = v86 & 0xFD;
      v88 = *(_QWORD *)v74;
      v89 = *(_QWORD *)v75;
      if ( *(_QWORD *)(*(_QWORD *)v74 + 8LL) != v74 )
        goto LABEL_187;
      v90 = *(_QWORD **)(SecurityQos + 56);
      if ( *v90 != v74 )
        goto LABEL_187;
      *v90 = v88;
      *(_QWORD *)(v88 + 8) = v90;
      if ( (*(_DWORD *)(SecurityQos + 96) & 1) != 0 )
      {
        v91 = SecurityQos + 64;
        if ( *((_QWORD *)v75 + 4) == SecurityQos + 64 )
          *((_QWORD *)v75 + 4) = *(_QWORD *)v91;
        v92 = *(_QWORD *)v91;
        if ( *(_QWORD *)(*(_QWORD *)v91 + 8LL) != v91 )
          goto LABEL_187;
        v93 = *(_QWORD **)(SecurityQos + 72);
        if ( *v93 != v91 )
          goto LABEL_187;
        *v93 = v92;
        *(_QWORD *)(v92 + 8) = v93;
        *(_DWORD *)(SecurityQos + 96) &= ~1u;
      }
      if ( (v87 & 4) == 0 && v89 == v74 )
      {
        if ( *(int **)v75 == v75 )
          v75[12] = -1;
        else
          v75[12] = *(_DWORD *)(*(_QWORD *)v75 + 32LL);
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_179;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v77, &LockHandle);
  v78 = *(_BYTE *)(SecurityQos + 16);
  v79 = *v73;
  if ( (v78 & 2) == 0 )
    goto LABEL_164;
  *(_BYTE *)(SecurityQos + 16) = v78 & 0xFD;
  v80 = *(_QWORD *)v74;
  v81 = *(_QWORD *)v75;
  if ( *(_QWORD *)(*(_QWORD *)v74 + 8LL) != v74 )
    goto LABEL_187;
  v82 = *(_QWORD **)(SecurityQos + 56);
  if ( *v82 != v74 )
    goto LABEL_187;
  *v82 = v80;
  *(_QWORD *)(v80 + 8) = v82;
  if ( (*(_DWORD *)(SecurityQos + 96) & 1) == 0 )
    goto LABEL_159;
  v83 = SecurityQos + 64;
  if ( *((_QWORD *)v75 + 4) == SecurityQos + 64 )
    *((_QWORD *)v75 + 4) = *(_QWORD *)v83;
  v84 = *(_QWORD *)v83;
  if ( *(_QWORD *)(*(_QWORD *)v83 + 8LL) != v83 || (v85 = *(_QWORD **)(SecurityQos + 72), *v85 != v83) )
LABEL_187:
    __fastfail(3u);
  *v85 = v84;
  *(_QWORD *)(v84 + 8) = v85;
  *(_DWORD *)(SecurityQos + 96) &= ~1u;
LABEL_159:
  if ( (v79 & 4) == 0 && v81 == v74 )
  {
    if ( *(int **)v75 == v75 )
      v75[12] = -1;
    else
      v75[12] = *(_DWORD *)(*(_QWORD *)v75 + 32LL);
  }
LABEL_164:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_179:
  v68 = Irp;
  if ( StorEtwLoggingEnabled )
  {
    v162 = 0LL;
    IoGetActivityIdIrp(Irp, &v162);
    if ( byte_140171462 < 0 )
      McTemplateK0dud_EtwWriteTransfer(v95, v94, (__int64)&v162, v96, 4);
  }
LABEL_182:
  StorUnmapSenseInfo(SecurityQos, *(_QWORD *)(*(_QWORD *)(v72 + 24) + 8LL));
  if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
  {
    v99 = *(_QWORD *)(v72 + 3600);
    if ( v99 && *(_QWORD *)(v99 + 104) )
    {
LABEL_185:
      RaidReleaseNvmeIceKeyResources(v72, SecurityQos);
    }
    else
    {
      v97 = *(_QWORD *)(v72 + 24);
      if ( *(_QWORD *)(v97 + 5616) )
      {
        v98 = SecurityQos;
        goto LABEL_192;
      }
    }
  }
  else
  {
    v97 = *(_QWORD *)(v72 + 24);
    if ( *(_QWORD *)(v97 + 5624) )
    {
      v98 = SecurityQos;
      if ( (*(_BYTE *)(v97 + 112) & 0x10) != 0 )
        goto LABEL_185;
LABEL_192:
      RaidAdapterReleaseCryptoKeyResources(v97, v98);
    }
  }
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
  {
    if ( (*(_BYTE *)(SecurityQos + 16) & 0x40) != 0 )
    {
      v100 = *(_QWORD *)(SecurityQos + 752);
      PerformanceFrequency[0].QuadPart = 1LL;
      if ( v100 )
      {
        if ( UseQPCTime )
          PerformanceCounter = KeQueryPerformanceCounter(PerformanceFrequency);
        else
          PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
        v102 = PerformanceCounter;
        *(_BYTE *)(v100 + 3) = BYTE3(SecurityContext->SecurityQos);
        *(_DWORD *)(v100 + 12) = SecurityContext[1].SecurityQos;
        if ( ((__int64)SecurityContext[1].SecurityQos & 0x40) != 0 )
          *(_DWORD *)(v100 + 16) = HIDWORD(SecurityContext[2].AccessState);
        if ( BYTE3(SecurityContext->SecurityQos) == 48 )
          *(_DWORD *)(v100 + 64) = SecurityContext[1].FullCreateOptions;
        if ( !SecurityContext->FullCreateOptions )
        {
          AccessState = (unsigned int)SecurityContext[2].AccessState;
          v104 = 0;
          if ( AccessState )
          {
            while ( 1 )
            {
              v105 = *((unsigned int *)&SecurityContext[5].SecurityQos + v104);
              if ( (unsigned int)v105 >= 0x80 )
              {
                DesiredAccess = SecurityContext->DesiredAccess;
                if ( (unsigned int)v105 <= (unsigned int)DesiredAccess )
                {
                  v107 = (__int64)SecurityContext + v105;
                  if ( *(_DWORD *)((char *)&SecurityContext->SecurityQos + v105) == 64 && v105 + 40 <= DesiredAccess )
                    break;
                }
              }
              if ( ++v104 >= AccessState )
                goto LABEL_210;
            }
            *(_BYTE *)(v100 + 4) = *(_BYTE *)(v107 + 8);
            *(_QWORD *)(v100 + 32) = *(_QWORD *)(v107 + 16);
            *(_BYTE *)(v100 + 11) = *(_BYTE *)(v107 + 9);
          }
          else
          {
LABEL_210:
            *(_BYTE *)(v100 + 3) = 48;
            *(_DWORD *)(v100 + 64) = -1073741811;
          }
        }
        if ( UseQPCTime )
          v108 = KeQueryPerformanceCounter(0LL);
        else
          v108.QuadPart = KeQueryUnbiasedInterruptTime();
        if ( v108.QuadPart <= 0 || v108.QuadPart >= v102.QuadPart )
          v111 = v108.QuadPart - v102.QuadPart;
        else
          v111 = v108.QuadPart - v102.QuadPart - 1;
        if ( UseQPCTime )
        {
          LowPart = PerformanceFrequency[0].LowPart;
          v112 = 0;
          if ( PerformanceFrequency[0].QuadPart && v111 )
          {
            v113 = v111 / PerformanceFrequency[0].QuadPart;
            v111 = 1000 * (v111 % PerformanceFrequency[0].QuadPart);
            v109.QuadPart = 10000 * (v111 % PerformanceFrequency[0].QuadPart) % PerformanceFrequency[0].QuadPart;
            v112 = 10000 * (v111 % PerformanceFrequency[0].QuadPart) / PerformanceFrequency[0].QuadPart
                 + 16 * (-24 * v113 + v111 / PerformanceFrequency[0].QuadPart);
          }
        }
        else
        {
          v112 = v111;
        }
        if ( (Microsoft_Windows_StorPortEnableBits & 0x40) != 0 )
          McTemplateK0zx_EtwWriteTransfer(
            LowPart,
            v109.LowPart,
            v111,
            (unsigned int)L"Translate STORAGE_REQUEST_BLOCK result",
            v112);
      }
      *(_QWORD *)(*(_QWORD *)(SecurityQos + 752) + 48LL) = *(_QWORD *)(SecurityQos + 176);
      *(_QWORD *)(*(_QWORD *)(SecurityQos + 752) + 24LL) = *(_QWORD *)(SecurityQos + 184);
      *(_QWORD *)(*(_QWORD *)(SecurityQos + 752) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(SecurityQos + 752) + 40LL) = 0LL;
      v68->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId = *(_QWORD *)(SecurityQos + 752);
      *(_BYTE *)(SecurityQos + 16) &= ~0x40u;
      *(_QWORD *)(SecurityQos + 752) = 0LL;
    }
    else
    {
      SecurityContext[4].SecurityQos = 0LL;
      *(_QWORD *)&SecurityContext[2].DesiredAccess = *(_QWORD *)(SecurityQos + 184);
      SecurityContext[4].AccessState = 0LL;
      if ( *(_QWORD *)(SecurityQos + 192) )
      {
        if ( ((__int64)SecurityContext[1].SecurityQos & 0xC0) == 0xC0 )
        {
          v114 = (unsigned int)SecurityContext[2].AccessState;
          v115 = 0;
          if ( v114 )
          {
            while ( 1 )
            {
              v116 = *((unsigned int *)&SecurityContext[5].SecurityQos + v115);
              if ( (unsigned int)v116 >= 0x80 )
              {
                v117 = SecurityContext->DesiredAccess;
                if ( (unsigned int)v116 <= (unsigned int)v117 )
                {
                  v118 = (__int64)SecurityContext + v116;
                  if ( *(_DWORD *)((char *)&SecurityContext->SecurityQos + v116) == 1 && v116 + 24 <= v117 )
                    break;
                }
              }
              if ( ++v115 >= v114 )
                goto LABEL_238;
            }
            if ( v118 )
              *(_QWORD *)(v118 + 16) = *(_QWORD *)(SecurityQos + 192);
          }
        }
      }
LABEL_238:
      v119 = (int)SecurityContext[1].SecurityQos;
      if ( (v119 & 0x2000000) != 0 )
        LODWORD(SecurityContext[1].SecurityQos) = v119 & 0xFDFFFFFF;
    }
  }
  else
  {
    SecurityContext[2].SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)(SecurityQos + 176);
    SecurityContext[1].SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)(SecurityQos + 184);
    AccessState_high = HIDWORD(SecurityContext->AccessState);
    SecurityContext[2].AccessState = 0LL;
    *(_QWORD *)&SecurityContext[1].DesiredAccess = 0LL;
    if ( (AccessState_high & 0x2000000) != 0 )
      HIDWORD(SecurityContext->AccessState) = AccessState_high & 0xFDFFFFFF;
  }
  RaidXrbDeallocateResources(SecurityQos, 1);
  if ( BYTE2(SecurityContext->SecurityQos) == 40 )
    v121 = (int)SecurityContext[1].SecurityQos;
  else
    v121 = HIDWORD(SecurityContext->AccessState);
  if ( (v121 & 0x4000) == 0 )
  {
    v122 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v123 = *(_DWORD *)(v122 + *(_QWORD *)(v72 + 40));
    if ( (v123 & 1) != 0 )
    {
LABEL_249:
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v72 + 1032), 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)(v72 + 520), 0, 0);
    }
    else
    {
      while ( 1 )
      {
        v124 = v123;
        v123 = _InterlockedCompareExchange((volatile signed __int32 *)(v122 + *(_QWORD *)(v72 + 40)), v123 - 2, v123);
        if ( v124 == v123 )
          break;
        if ( (v123 & 1) != 0 )
          goto LABEL_249;
      }
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0 )
  {
    v126 = a1;
    v125 = (__int64)Irp;
  }
  else
  {
    v125 = (__int64)Irp;
    v126 = a1;
    if ( BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        59LL,
        &WPP_e6323699744f33baefc587a6e43a33df_Traceguids,
        a1,
        Irp,
        Irp->IoStatus.Status);
  }
  if ( (qword_140170460 & 0x10) != 0 )
    RaidLogRequestComplete(*(_QWORD *)(v126 + 24), v125, v2);
  v127 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v125 + 141) = -84;
  if ( v127 )
    goto LABEL_316;
  *(_OWORD *)&PerformanceFrequency[0].LowPart = 0LL;
  IoGetActivityIdIrp(v125, PerformanceFrequency);
  v129 = *(_QWORD *)(v125 + 184);
  if ( *(_BYTE *)v129 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_316;
    v131 = &EventNonReadWriteRequestComplete;
    goto LABEL_315;
  }
  if ( *(_BYTE *)v129 != 15 )
  {
    if ( *(_BYTE *)v129 != 27 )
      goto LABEL_316;
    if ( *(_BYTE *)(v129 + 1) == 7 && !*(_DWORD *)(v129 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v130 = *(_DWORD **)(v125 + 56);
        if ( v130 )
          LODWORD(v3) = *v130;
        McTemplateK0pqd_EtwWriteTransfer(
          v128,
          v129,
          (unsigned int)PerformanceFrequency,
          v125,
          (char)v3,
          *(_DWORD *)(v125 + 48));
      }
      goto LABEL_316;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_316;
    v131 = &EventPnpRequestComplete;
LABEL_315:
    McTemplateK0pd_EtwWriteTransfer(v128, v131, PerformanceFrequency, v125, *(_DWORD *)(v125 + 48));
    goto LABEL_316;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_316;
  v132 = *(_QWORD *)(v129 + 8);
  v133 = 0;
  v134 = 0;
  v135 = 0;
  v136 = 0;
  v137 = 0;
  if ( *(_BYTE *)(v132 + 2) == 40 )
  {
    v138 = 0LL;
    if ( *(_DWORD *)(v132 + 20) )
      goto LABEL_316;
    v139 = *(_DWORD *)(v132 + 56);
    v140 = 0;
    if ( !v139 )
      goto LABEL_292;
    while ( 2 )
    {
      v141 = *(unsigned int *)(v132 + 4LL * v140 + 120);
      if ( (unsigned int)v141 >= 0x80 )
      {
        v142 = *(unsigned int *)(v132 + 16);
        if ( (unsigned int)v141 < (unsigned int)v142 )
        {
          v143 = (unsigned int)v141;
          v144 = *(_DWORD *)(v132 + v141) - 64;
          if ( v144 )
          {
            v145 = v144 - 1;
            if ( v145 )
            {
              if ( v145 == 1 && v143 + 40 <= v142 )
              {
                if ( *(_DWORD *)(v132 + v143 + 12) )
                  v138 = (unsigned __int8 *)(v132 + v143 + 32);
                v3 = *(_BYTE **)(v132 + v143 + 24);
                goto LABEL_291;
              }
              goto LABEL_286;
            }
            v146 = v143 + 56;
          }
          else
          {
            v146 = v143 + 40;
          }
          if ( v146 <= v142 )
          {
            if ( *(_BYTE *)(v132 + v143 + 10) )
              v138 = (unsigned __int8 *)(v132 + v143 + 24);
            v3 = *(_BYTE **)(v132 + v143 + 16);
LABEL_291:
            v133 = *(_BYTE *)(v132 + v143 + 8);
            v134 = *(_BYTE *)(v132 + v143 + 9);
LABEL_292:
            if ( v138 )
            {
              LODWORD(v147) = *v138;
              v125 = (__int64)Irp;
              goto LABEL_295;
            }
            goto LABEL_316;
          }
        }
      }
LABEL_286:
      if ( ++v140 >= v139 )
        goto LABEL_292;
      continue;
    }
  }
  LODWORD(v147) = *(unsigned __int8 *)(v132 + 72);
  v3 = *(_BYTE **)(v132 + 32);
  v134 = *(_BYTE *)(v132 + 11);
  v133 = *(_BYTE *)(v132 + 4);
  if ( *(_BYTE *)(v132 + 2) )
    goto LABEL_316;
LABEL_295:
  LOBYTE(v147) = (_BYTE)v147 - 8;
  if ( ((unsigned __int8)v147 & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v132 + 3) == 1 || !v3 || !v134 )
      goto LABEL_311;
    v148 = 0;
    v147 = &v3[v134];
    v149 = v3 + 8;
    if ( (unsigned __int8)((*v3 & 0x7F) - 114) <= 1u )
    {
      if ( v149 <= v147 )
      {
        v136 = v3[2];
        v135 = v3[1] & 0xF;
        v137 = v3[3];
        goto LABEL_309;
      }
    }
    else if ( v149 <= v147 )
    {
      v135 = v3[2] & 0xF;
      v150 = v134;
      if ( (unsigned int)(unsigned __int8)v3[7] + 8 <= v134 )
        v150 = (unsigned __int8)v3[7] + 8;
      v147 = v3 + 13;
      v151 = (unsigned __int64)&v3[v150];
      if ( (unsigned __int64)(v3 + 13) <= v151 )
        v136 = v3[12];
      if ( (unsigned __int64)(v3 + 14) <= v151 )
        v137 = *v147;
LABEL_309:
      v148 = 1;
    }
    if ( !v148 )
    {
LABEL_311:
      v137 = 0;
      v136 = 0;
      v135 = 0;
    }
    McTemplateK0pduuuuup_EtwWriteTransfer(
      (_DWORD)v147,
      v132,
      (unsigned int)PerformanceFrequency,
      v125,
      *(_DWORD *)(v125 + 48),
      *(_BYTE *)(v132 + 3),
      v133,
      v135,
      v136,
      v137,
      v125);
  }
LABEL_316:
  IofCompleteRequest(Irp, 0);
  return 1;
}
