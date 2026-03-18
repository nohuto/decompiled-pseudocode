/*
 * XREFs of ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400D5BC0
 * Callers:
 *     VidMmWorkerThreadProc @ 0x1400F23A0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140007FC0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140033DC0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     SendWnfNotificationToVmProcess @ 0x1400441AC (SendWnfNotificationToVmProcess.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 */

void __fastcall VIDMM_GLOBAL::HandleTrimWnf(VIDMM_GLOBAL *this, char a2)
{
  char *v2; // rdi
  unsigned __int64 v3; // r15
  VIDMM_GLOBAL *v4; // r13
  unsigned __int64 v5; // r12
  VIDMM_GLOBAL *v6; // rdi
  __int64 *v7; // r13
  __int64 v8; // r14
  __int64 v9; // rsi
  struct _RTL_BALANCED_NODE *v10; // rax
  _QWORD *i; // r9
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  signed __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  _QWORD **v17; // rcx
  _QWORD *v18; // rax
  _QWORD *j; // rcx
  unsigned __int64 v20; // rcx
  signed __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  struct _RTL_BALANCED_NODE *v24; // rax
  _QWORD *k; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // r8
  signed __int64 v28; // rdx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  _QWORD **v31; // rdx
  _QWORD *v32; // rax
  _QWORD *m; // rdx
  unsigned __int64 v34; // rcx
  signed __int64 v35; // rcx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  signed __int64 v39; // rbx
  char v40; // r14
  __int64 v41; // rcx
  char v42; // si
  bool v43; // zf
  char *v44; // r13
  __int64 v45; // rcx
  char *v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  char v50; // r8
  char *v51; // r14
  struct _KTHREAD **v52; // r13
  int v53; // ebx
  __int64 v54; // rdx
  int v55; // eax
  bool v56; // cc
  unsigned __int64 v57; // r15
  DXGPUSHLOCK *v58; // rsi
  unsigned int v59; // r12d
  unsigned __int64 *v60; // r9
  unsigned __int64 v61; // r8
  __int64 v62; // r11
  __int64 v63; // rsi
  unsigned __int64 v64; // r10
  unsigned __int64 v65; // rcx
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // rax
  struct _KTHREAD *v68; // rsi
  __int64 v69; // rcx
  int v70; // edx
  int v71; // esi
  __int64 v72; // rcx
  int updated; // ebx
  __int64 v74; // rcx
  unsigned __int8 v76; // [rsp+51h] [rbp-AFh]
  __int64 v77; // [rsp+58h] [rbp-A8h]
  void *ProcessHandle; // [rsp+68h] [rbp-98h] BYREF
  __int64 v80; // [rsp+70h] [rbp-90h]
  char *v81; // [rsp+78h] [rbp-88h]
  struct _CLIENT_ID ClientId; // [rsp+80h] [rbp-80h] BYREF
  __int64 v83; // [rsp+90h] [rbp-70h]
  char *v84; // [rsp+98h] [rbp-68h]
  __int64 v85; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v86; // [rsp+A8h] [rbp-58h]
  char v87[8]; // [rsp+B0h] [rbp-50h] BYREF
  DXGPUSHLOCK *v88; // [rsp+B8h] [rbp-48h]
  int v89; // [rsp+C0h] [rbp-40h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v91[20]; // [rsp+F8h] [rbp-8h] BYREF
  int v92; // [rsp+10Ch] [rbp+Ch]

  v2 = (char *)*((_QWORD *)this + 570);
  v3 = -1LL;
  v4 = this;
  v81 = v2;
  v80 = -1LL;
  v5 = -1LL;
  v77 = -1LL;
  ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  if ( *((_DWORD *)v4 + 1736) )
  {
    v6 = v4;
    ProcessHandle = (void *)*((unsigned int *)v4 + 1736);
    v7 = (__int64 *)*((_QWORD *)v4 + 5029);
    v8 = 0LL;
    while ( 1 )
    {
      v9 = *v7;
      if ( (*(_BYTE *)(*v7 + 552) & 1) == 0 )
        break;
      v10 = VIDMM_PARTITION::_PartitionTree;
      for ( i = 0LL; v10; v10 = v10->Children[0] )
        i = v10->Children;
      if ( i )
      {
        while ( 1 )
        {
          v12 = *(_QWORD *)(i[5] + 384LL * *(unsigned int *)(*((_QWORD *)v6 + 3) + 240LL) + 24);
          v13 = *(_QWORD *)(v8 + v12 + 16);
          if ( v13 )
            break;
LABEL_18:
          v17 = (_QWORD **)i[1];
          v18 = i;
          if ( v17 )
          {
            i = (_QWORD *)i[1];
            for ( j = *v17; j; j = (_QWORD *)*j )
              i = j;
          }
          else
          {
            for ( i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL); i; i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL) )
            {
              if ( (_QWORD *)*i == v18 )
                break;
              v18 = i;
            }
          }
          if ( !i )
            goto LABEL_38;
        }
        v14 = 100 - 100LL * *(_QWORD *)(v8 + v12 + 120) / v13;
        if ( v14 <= (unsigned int)dword_140081508 )
        {
          if ( v14 <= (unsigned int)dword_14008150C )
          {
            v15 = (unsigned int)dword_14008151C;
            v16 = (unsigned int)dword_140081518;
LABEL_14:
            if ( v3 >= v15 )
              v3 = v15;
            if ( v5 >= v16 )
              v5 = v16;
            goto LABEL_18;
          }
          v15 = (unsigned int)dword_14008151C
              + (v14 - (unsigned int)dword_14008150C)
              * (unsigned int)(dword_140081518 - dword_14008151C)
              / (unsigned int)(dword_140081508 - dword_14008150C);
        }
        else
        {
          v15 = (unsigned int)dword_140081510;
        }
        v16 = (unsigned int)dword_140081514;
        goto LABEL_14;
      }
LABEL_38:
      if ( (*(_BYTE *)(v9 + 576) & 1) != 0 )
      {
        v24 = VIDMM_PARTITION::_PartitionTree;
        for ( k = 0LL; v24; v24 = v24->Children[0] )
          k = v24->Children;
        if ( k )
        {
          while ( 1 )
          {
            v26 = *(_QWORD *)(k[5] + 384LL * *(unsigned int *)(*((_QWORD *)v6 + 3) + 240LL) + 24);
            v27 = *(_QWORD *)(v8 + v26 + 16);
            if ( v27 )
              break;
LABEL_53:
            v31 = (_QWORD **)k[1];
            v32 = k;
            if ( v31 )
            {
              k = (_QWORD *)k[1];
              for ( m = *v31; m; m = (_QWORD *)*m )
                k = m;
            }
            else
            {
              for ( k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL); k; k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL) )
              {
                if ( (_QWORD *)*k == v32 )
                  break;
                v32 = k;
              }
            }
            if ( !k )
              goto LABEL_73;
          }
          v28 = 100 - 100LL * *(_QWORD *)(v8 + v26 + 120) / v27;
          if ( v28 > (unsigned int)dword_140081508 )
          {
            v29 = (unsigned int)dword_140081510;
            goto LABEL_48;
          }
          if ( v28 > (unsigned int)dword_14008150C )
          {
            v29 = (unsigned int)dword_14008151C
                + (v28 - (unsigned int)dword_14008150C)
                * (unsigned int)(dword_140081518 - dword_14008151C)
                / (unsigned int)(dword_140081508 - dword_14008150C);
LABEL_48:
            v30 = (unsigned int)dword_140081514;
          }
          else
          {
            v29 = (unsigned int)dword_14008151C;
            v30 = (unsigned int)dword_140081518;
          }
          if ( v3 >= v29 )
            v3 = v29;
          if ( v5 >= v30 )
            v5 = v30;
          goto LABEL_53;
        }
        goto LABEL_73;
      }
      v34 = *(_QWORD *)(v9 + 944);
      if ( v34 )
      {
        v35 = 100 - 100LL * *(_QWORD *)(v9 + 1048) / v34;
        if ( v35 > (unsigned int)dword_140081508 )
        {
          v36 = (unsigned int)dword_140081510;
          goto LABEL_68;
        }
        if ( v35 > (unsigned int)dword_14008150C )
        {
          v36 = (unsigned int)dword_14008151C
              + (v35 - (unsigned int)dword_14008150C)
              * (unsigned int)(dword_140081518 - dword_14008151C)
              / (unsigned int)(dword_140081508 - dword_14008150C);
LABEL_68:
          v37 = (unsigned int)dword_140081514;
        }
        else
        {
          v36 = (unsigned int)dword_14008151C;
          v37 = (unsigned int)dword_140081518;
        }
        if ( v3 >= v36 )
          v3 = v36;
        if ( v5 >= v37 )
          v5 = v37;
      }
LABEL_73:
      ++v7;
      v8 += 344LL;
      ProcessHandle = (char *)ProcessHandle - 1;
      if ( !ProcessHandle )
      {
        v2 = v81;
        v4 = this;
        v77 = v5;
        v80 = v3;
        goto LABEL_75;
      }
    }
    v20 = *(_QWORD *)(v9 + 600);
    if ( !v20 )
      goto LABEL_38;
    v21 = 100 - 100LL * *(_QWORD *)(v9 + 704) / v20;
    if ( v21 <= (unsigned int)dword_140081508 )
    {
      if ( v21 <= (unsigned int)dword_14008150C )
      {
        v22 = (unsigned int)dword_14008151C;
        v23 = (unsigned int)dword_140081518;
LABEL_34:
        if ( v3 >= v22 )
          v3 = v22;
        if ( v5 >= v23 )
          v5 = v23;
        goto LABEL_38;
      }
      v22 = (unsigned int)dword_14008151C
          + (v21 - (unsigned int)dword_14008150C)
          * (unsigned int)(dword_140081518 - dword_14008151C)
          / (unsigned int)(dword_140081508 - dword_14008150C);
    }
    else
    {
      v22 = (unsigned int)dword_140081510;
    }
    v23 = (unsigned int)dword_140081514;
    goto LABEL_34;
  }
LABEL_75:
  ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  v38 = *((_QWORD *)v4 + 5564);
  if ( v38 && (__int64)v3 > (__int64)&v2[-v38] )
  {
    v39 = (signed __int64)&v2[-v38 - v3];
    v40 = 0;
  }
  else
  {
    *((_QWORD *)v4 + 5564) = v2;
    v39 = -(__int64)v3;
    v40 = 1;
  }
  v41 = *((_QWORD *)v4 + 5565);
  if ( v41 && (__int64)v5 > (__int64)&v2[-v41] )
  {
    if ( v39 <= (__int64)&v2[-v41 - v5] )
      v39 = (signed __int64)&v2[-v41 - v5];
    v42 = 0;
  }
  else
  {
    *((_QWORD *)v4 + 5565) = v2;
    v42 = 1;
    if ( v39 <= -(__int64)v5 )
      v39 = -(__int64)v5;
  }
  v43 = (VIDMM_GLOBAL *)((char *)v4 + 41080) == 0LL;
  v44 = (char *)v4 + 41080;
  v76 = 0;
  v81 = v44;
  if ( !v43 )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    if ( *((struct _KTHREAD **)v44 + 1) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1575;
      DxgkLogInternalTriageEvent(v45, 262146LL);
    }
  }
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v44);
  if ( v40 )
  {
    v47 = *((_QWORD *)this + 569);
    v46 = (char *)this + 44544;
    if ( *((_QWORD *)this + 5566) == v47 )
    {
      ++*(_DWORD *)v46;
    }
    else
    {
      *(_DWORD *)v46 = 0;
      *((_QWORD *)this + 5566) = v47;
    }
    if ( !v42 )
      goto LABEL_99;
  }
  else
  {
    if ( !v42 )
    {
      LOBYTE(v46) = 0;
      goto LABEL_103;
    }
    v46 = (char *)this + 44544;
  }
  v48 = *((_QWORD *)this + 569);
  if ( *((_QWORD *)this + 5567) == v48 )
  {
    ++*((_DWORD *)this + 11137);
  }
  else
  {
    *((_DWORD *)this + 11137) = 0;
    *((_QWORD *)this + 5567) = v48;
  }
LABEL_99:
  if ( *(_DWORD *)v46 > 1u && *((_DWORD *)this + 11137) > 1u )
  {
    LOBYTE(v46) = 0;
    goto LABEL_118;
  }
  LOBYTE(v46) = 1;
  v76 = 1;
LABEL_103:
  v49 = *(_QWORD *)this;
  if ( v39 > *(_QWORD *)(*(_QWORD *)this + 128LL) )
  {
    *(_QWORD *)(v49 + 128) = v39;
    *(_BYTE *)(v49 + 214) = 5;
  }
  if ( !(_BYTE)v46 )
  {
LABEL_118:
    v50 = a2;
    if ( !a2 )
      goto LABEL_158;
    goto LABEL_107;
  }
  v50 = a2;
LABEL_107:
  v51 = (char *)this + 41128;
  v52 = (struct _KTHREAD **)*((_QWORD *)this + 5141);
  v84 = (char *)this + 41128;
  if ( v52 != (struct _KTHREAD **)((char *)this + 41128) )
  {
    while ( 1 )
    {
      v53 = 0;
      if ( (_BYTE)v46 )
      {
        v54 = *((_QWORD *)v52[2] + 4);
        if ( v54 )
        {
          if ( *(_BYTE *)(v54 + 337) )
          {
            v55 = *(_DWORD *)(v54 + 408);
            if ( (v55 & 2) == 0 )
              break;
          }
          v55 = *(_DWORD *)(v54 + 408);
          if ( (v55 & 1) != 0 )
            break;
        }
      }
LABEL_124:
      v57 = 0LL;
      if ( v50 )
      {
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v87, v52 + 3, 0);
        v58 = v88;
        DXGPUSHLOCK::AcquireShared(v88);
        v59 = 0;
        if ( *((_DWORD *)*(v52 - 3) + 1736) )
        {
          do
          {
            v60 = (unsigned __int64 *)&v85;
            v61 = 0LL;
            v62 = 2LL;
            v83 = (__int64)*(v52 - 1) + 304 * (unsigned __int16)v59 + 80;
            v63 = v83 - (_QWORD)&v85;
            do
            {
              v64 = v61;
              v65 = *(unsigned __int64 *)((char *)v60 + v63 - 48);
              v66 = *(unsigned __int64 *)((char *)v60 + v63);
              *v60 = v65;
              if ( v66 <= v65 )
              {
                *v60 = v65 - v66;
              }
              else
              {
                v61 = v66 - v65;
                if ( v64 > v66 - v65 )
                  v61 = v64;
              }
              ++v60;
              --v62;
            }
            while ( v62 );
            if ( !v61 )
            {
              v67 = *(_QWORD *)(v83 + 16);
              if ( v67 > v86 + v85 )
                v61 = v67 - (v86 + v85);
            }
            if ( v57 <= v61 )
              v57 = v61;
            ++v59;
          }
          while ( v59 < *((_DWORD *)*(v52 - 3) + 1736) );
          v58 = v88;
          v51 = v84;
        }
        v89 = 0;
        _InterlockedDecrement((volatile signed __int32 *)v58 + 4);
        ExReleasePushLockSharedEx(v88, 0LL);
        KeLeaveCriticalRegion();
        v5 = v77;
        if ( v57 )
          v53 |= 4u;
      }
      if ( !v53 )
        goto LABEL_156;
      v68 = v52[2];
      if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v46) + 24) = *(_QWORD *)v68;
        WdLogGlobalForLineNumber = 23440;
      }
      memset(v91, 0, sizeof(v91));
      v92 = 0;
      *(_QWORD *)v91 = *(_QWORD *)(*((_QWORD *)this + 3) + 412LL);
      v69 = *((_QWORD *)v68 + 4);
      *(_QWORD *)&v91[8] = v57;
      *(_DWORD *)&v91[16] = v53;
      ProcessHandle = 0LL;
      v70 = *(_DWORD *)(v69 + 408);
      if ( (v70 & 0x100) != 0 )
      {
        v71 = SendWnfNotificationToVmProcess(v69);
      }
      else
      {
        ClientId = 0LL;
        if ( (v70 & 1) != 0 )
          ClientId.UniqueProcess = (HANDLE)*((_QWORD *)g_pVidMmSystemProcess + 1);
        else
          ClientId.UniqueProcess = (HANDLE)*((_QWORD *)v68 + 1);
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v71 = ZwOpenProcess(&ProcessHandle, 0x2000000u, &ObjectAttributes, &ClientId);
        if ( v71 < 0 )
        {
          WdLogSingleEntry1(1LL, ClientId.UniqueProcess);
          WdLogGlobalForLineNumber = 23523;
          DxgkLogInternalTriageEvent(v72, 0x40000LL);
LABEL_155:
          WdLogSingleEntry1(1LL, v71);
          WdLogGlobalForLineNumber = 23457;
          DxgkLogInternalTriageEvent(v74, 0x40000LL);
          goto LABEL_156;
        }
        updated = ZwUpdateWnfStateData(&WNF_DX_VIDMM_TRIM_NOTIFICATION, v91, 24LL, 0LL, ProcessHandle, 0, 0);
        ZwClose(ProcessHandle);
        v71 = 0;
        if ( updated != -1073741431 )
          v71 = updated;
      }
      if ( v71 < 0 )
        goto LABEL_155;
LABEL_156:
      v52 = (struct _KTHREAD **)*v52;
      v3 = v80;
      v46 = (char *)v76;
      v50 = a2;
      if ( v52 == (struct _KTHREAD **)v51 )
        goto LABEL_157;
    }
    if ( (v55 & 4) != 0 || (*(_DWORD *)(v54 + 416) & 1) != 0 )
    {
      v46 = (char *)v52[21];
      if ( v46 )
      {
        v56 = (__int64)v5 <= v2 - v46;
LABEL_122:
        if ( !v56 )
          goto LABEL_124;
      }
    }
    else
    {
      v46 = (char *)v52[21];
      if ( v46 )
      {
        v56 = (__int64)v3 <= v2 - v46;
        goto LABEL_122;
      }
    }
    v53 = 1;
    v52[21] = (struct _KTHREAD *)v2;
    goto LABEL_124;
  }
LABEL_157:
  v44 = v81;
LABEL_158:
  _InterlockedDecrement((volatile signed __int32 *)v44 + 4);
  ExReleasePushLockSharedEx(v44, 0LL);
  KeLeaveCriticalRegion();
}
