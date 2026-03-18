/*
 * XREFs of ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400D1800
 * Callers:
 *     VidMmWorkerThreadProc @ 0x1400EE3E0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140007FC0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     SendWnfNotificationToVmProcess @ 0x140042E0C (SendWnfNotificationToVmProcess.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 */

void __fastcall VIDMM_GLOBAL::HandleTrimWnf(VIDMM_GLOBAL *this, char a2)
{
  __int64 v2; // rdi
  VIDMM_GLOBAL *v3; // r13
  unsigned __int64 v4; // r15
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
  _DWORD *v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  char v50; // r8
  __int64 *v51; // r14
  unsigned __int64 v52; // r13
  int v53; // ebx
  __int64 v54; // rdx
  int v55; // eax
  bool v56; // cc
  __int64 *v57; // rsi
  __int64 v58; // rcx
  unsigned int v59; // edi
  unsigned __int64 *v60; // r9
  unsigned __int64 v61; // r8
  __int64 v62; // r11
  __int64 v63; // rsi
  unsigned __int64 v64; // r10
  unsigned __int64 v65; // rcx
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // rax
  __int64 v68; // rsi
  __int64 v69; // rcx
  int v70; // edx
  int v71; // esi
  __int64 v72; // rcx
  int updated; // ebx
  __int64 v74; // rcx
  unsigned __int8 v76; // [rsp+51h] [rbp-AFh]
  __int64 v78; // [rsp+60h] [rbp-A0h]
  __int64 *v79; // [rsp+60h] [rbp-A0h]
  __int64 v80; // [rsp+68h] [rbp-98h]
  __int64 v81; // [rsp+70h] [rbp-90h]
  void *ProcessHandle; // [rsp+78h] [rbp-88h] BYREF
  __int64 v83; // [rsp+80h] [rbp-80h]
  struct _CLIENT_ID ClientId; // [rsp+88h] [rbp-78h] BYREF
  __int64 *v85; // [rsp+98h] [rbp-68h]
  char *v86; // [rsp+A0h] [rbp-60h]
  __int64 v87; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v88; // [rsp+B0h] [rbp-50h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v90[20]; // [rsp+E8h] [rbp-18h] BYREF
  int v91; // [rsp+FCh] [rbp-4h]

  v2 = *((_QWORD *)this + 570);
  v3 = this;
  v4 = -1LL;
  v83 = v2;
  v80 = -1LL;
  v5 = -1LL;
  ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  if ( *((_DWORD *)v3 + 1736) )
  {
    v6 = v3;
    v78 = *((unsigned int *)v3 + 1736);
    v7 = (__int64 *)*((_QWORD *)v3 + 5029);
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
        if ( v14 <= (unsigned int)dword_140081528 )
        {
          if ( v14 <= (unsigned int)dword_14008152C )
          {
            v15 = (unsigned int)dword_14008153C;
            v16 = (unsigned int)dword_140081538;
LABEL_14:
            if ( v4 >= v15 )
              v4 = v15;
            if ( v5 >= v16 )
              v5 = v16;
            goto LABEL_18;
          }
          v15 = (unsigned int)dword_14008153C
              + (v14 - (unsigned int)dword_14008152C)
              * (unsigned int)(dword_140081538 - dword_14008153C)
              / (unsigned int)(dword_140081528 - dword_14008152C);
        }
        else
        {
          v15 = (unsigned int)dword_140081530;
        }
        v16 = (unsigned int)dword_140081534;
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
          if ( v28 > (unsigned int)dword_140081528 )
          {
            v29 = (unsigned int)dword_140081530;
            goto LABEL_48;
          }
          if ( v28 > (unsigned int)dword_14008152C )
          {
            v29 = (unsigned int)dword_14008153C
                + (v28 - (unsigned int)dword_14008152C)
                * (unsigned int)(dword_140081538 - dword_14008153C)
                / (unsigned int)(dword_140081528 - dword_14008152C);
LABEL_48:
            v30 = (unsigned int)dword_140081534;
          }
          else
          {
            v29 = (unsigned int)dword_14008153C;
            v30 = (unsigned int)dword_140081538;
          }
          if ( v4 >= v29 )
            v4 = v29;
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
        if ( v35 > (unsigned int)dword_140081528 )
        {
          v36 = (unsigned int)dword_140081530;
          goto LABEL_68;
        }
        if ( v35 > (unsigned int)dword_14008152C )
        {
          v36 = (unsigned int)dword_14008153C
              + (v35 - (unsigned int)dword_14008152C)
              * (unsigned int)(dword_140081538 - dword_14008153C)
              / (unsigned int)(dword_140081528 - dword_14008152C);
LABEL_68:
          v37 = (unsigned int)dword_140081534;
        }
        else
        {
          v36 = (unsigned int)dword_14008153C;
          v37 = (unsigned int)dword_140081538;
        }
        if ( v4 >= v36 )
          v4 = v36;
        if ( v5 >= v37 )
          v5 = v37;
      }
LABEL_73:
      ++v7;
      v8 += 344LL;
      if ( !--v78 )
      {
        v2 = v83;
        v3 = this;
        v80 = v4;
        goto LABEL_75;
      }
    }
    v20 = *(_QWORD *)(v9 + 600);
    if ( !v20 )
      goto LABEL_38;
    v21 = 100 - 100LL * *(_QWORD *)(v9 + 704) / v20;
    if ( v21 <= (unsigned int)dword_140081528 )
    {
      if ( v21 <= (unsigned int)dword_14008152C )
      {
        v22 = (unsigned int)dword_14008153C;
        v23 = (unsigned int)dword_140081538;
LABEL_34:
        if ( v4 >= v22 )
          v4 = v22;
        if ( v5 >= v23 )
          v5 = v23;
        goto LABEL_38;
      }
      v22 = (unsigned int)dword_14008153C
          + (v21 - (unsigned int)dword_14008152C)
          * (unsigned int)(dword_140081538 - dword_14008153C)
          / (unsigned int)(dword_140081528 - dword_14008152C);
    }
    else
    {
      v22 = (unsigned int)dword_140081530;
    }
    v23 = (unsigned int)dword_140081534;
    goto LABEL_34;
  }
LABEL_75:
  ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  v38 = *((_QWORD *)v3 + 5564);
  if ( v38 && (__int64)v4 > v2 - v38 )
  {
    v39 = v2 - v38 - v4;
    v40 = 0;
  }
  else
  {
    *((_QWORD *)v3 + 5564) = v2;
    v39 = -(__int64)v4;
    v40 = 1;
  }
  v41 = *((_QWORD *)v3 + 5565);
  if ( v41 && (__int64)v5 > v2 - v41 )
  {
    if ( v39 <= (__int64)(v2 - v41 - v5) )
      v39 = v2 - v41 - v5;
    v42 = 0;
  }
  else
  {
    *((_QWORD *)v3 + 5565) = v2;
    v42 = 1;
    if ( v39 <= -(__int64)v5 )
      v39 = -(__int64)v5;
  }
  v43 = (VIDMM_GLOBAL *)((char *)v3 + 41080) == 0LL;
  v44 = (char *)v3 + 41080;
  v76 = 0;
  v86 = v44;
  if ( !v43 && *((struct _KTHREAD **)v44 + 1) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(v45, 262146LL);
  }
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v44);
  if ( v40 )
  {
    v47 = *((_QWORD *)this + 569);
    v46 = (_DWORD *)((char *)this + 44544);
    if ( *((_QWORD *)this + 5566) == v47 )
    {
      ++*v46;
    }
    else
    {
      *v46 = 0;
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
    v46 = (_DWORD *)((char *)this + 44544);
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
  if ( *v46 > 1u && *((_DWORD *)this + 11137) > 1u )
  {
    LOBYTE(v46) = 0;
    goto LABEL_119;
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
LABEL_119:
    v50 = a2;
    if ( !a2 )
      goto LABEL_164;
    goto LABEL_107;
  }
  v50 = a2;
LABEL_107:
  v51 = (__int64 *)*((_QWORD *)this + 5141);
  v79 = v51;
  if ( v51 != (__int64 *)((char *)this + 41128) )
  {
    v52 = 0LL;
    while ( 1 )
    {
      v53 = 0;
      if ( (_BYTE)v46 )
      {
        v54 = *(_QWORD *)(v51[2] + 32);
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
LABEL_125:
      if ( v50 )
      {
        v57 = v51 + 3;
        v85 = v51 + 3;
        if ( v51 != (__int64 *)-24LL && (struct _KTHREAD *)v51[4] == KeGetCurrentThread() )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1512;
          DxgkLogInternalTriageEvent(v58, 262146LL);
        }
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v51 + 3));
        v52 = 0LL;
        if ( *(_DWORD *)(*(v51 - 3) + 6944) )
        {
          v59 = 0;
          do
          {
            v60 = (unsigned __int64 *)&v87;
            v61 = 0LL;
            v62 = 2LL;
            v81 = 304LL * (unsigned __int16)v59 + *(v79 - 1) + 8 + 72;
            v63 = v81 - (_QWORD)&v87;
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
              v67 = *(_QWORD *)(v81 + 16);
              if ( v67 > v88 + v87 )
                v61 = v67 - (v88 + v87);
            }
            if ( v52 <= v61 )
              v52 = v61;
            ++v59;
          }
          while ( v59 < *(_DWORD *)(*(v79 - 3) + 6944) );
          v2 = v83;
          v4 = v80;
          v51 = v79;
          v57 = v85;
        }
        _InterlockedDecrement((volatile signed __int32 *)v57 + 4);
        ExReleasePushLockSharedEx(v57, 0LL);
        KeLeaveCriticalRegion();
        if ( v52 )
          v53 |= 4u;
      }
      if ( !v53 )
      {
        v52 = 0LL;
        goto LABEL_162;
      }
      v68 = v51[2];
      if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v46) + 24) = *(_QWORD *)v68;
        WdLogGlobalForLineNumber = 23824;
      }
      memset(v90, 0, sizeof(v90));
      v91 = 0;
      *(_QWORD *)v90 = *(_QWORD *)(*((_QWORD *)this + 3) + 412LL);
      v69 = *(_QWORD *)(v68 + 32);
      *(_QWORD *)&v90[8] = v52;
      v52 = 0LL;
      *(_DWORD *)&v90[16] = v53;
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
          ClientId.UniqueProcess = *(HANDLE *)(v68 + 8);
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v71 = ZwOpenProcess(&ProcessHandle, 0x2000000u, &ObjectAttributes, &ClientId);
        if ( v71 < 0 )
        {
          WdLogSingleEntry1(1LL, ClientId.UniqueProcess);
          WdLogGlobalForLineNumber = 23907;
          DxgkLogInternalTriageEvent(v72, 0x40000LL);
LABEL_160:
          WdLogSingleEntry1(1LL, v71);
          WdLogGlobalForLineNumber = 23841;
          DxgkLogInternalTriageEvent(v74, 0x40000LL);
          goto LABEL_162;
        }
        updated = ZwUpdateWnfStateData(&WNF_DX_VIDMM_TRIM_NOTIFICATION, v90, 24LL, 0LL, ProcessHandle, 0, 0);
        ZwClose(ProcessHandle);
        v71 = 0;
        if ( updated != -1073741431 )
          v71 = updated;
      }
      if ( v71 < 0 )
        goto LABEL_160;
LABEL_162:
      v51 = (__int64 *)*v51;
      v46 = (_DWORD *)v76;
      v50 = a2;
      v79 = v51;
      if ( v51 == (__int64 *)((char *)this + 41128) )
      {
        v44 = v86;
        goto LABEL_164;
      }
    }
    if ( (v55 & 4) != 0 || (*(_DWORD *)(v54 + 416) & 1) != 0 )
    {
      v46 = (_DWORD *)v51[21];
      if ( v46 )
      {
        v56 = (__int64)v5 <= v2 - (__int64)v46;
LABEL_123:
        if ( !v56 )
          goto LABEL_125;
      }
    }
    else
    {
      v46 = (_DWORD *)v51[21];
      if ( v46 )
      {
        v56 = (__int64)v4 <= v2 - (__int64)v46;
        goto LABEL_123;
      }
    }
    v53 = 1;
    v51[21] = v2;
    goto LABEL_125;
  }
LABEL_164:
  _InterlockedDecrement((volatile signed __int32 *)v44 + 4);
  ExReleasePushLockSharedEx(v44, 0LL);
  KeLeaveCriticalRegion();
}
