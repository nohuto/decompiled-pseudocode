/*
 * XREFs of ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x140216248
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x14041AC88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x140016478 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x140021E58 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400322F0 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x14004CC40 (McTemplateK0pxq_EtwWriteTransfer.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x14004FCB0 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x14005008C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x14006BD3C (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x140201844 (-VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 *     ?VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x1402028EC (-VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 *     ?SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z @ 0x140218204 (-SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z.c)
 *     ?SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z @ 0x1402182E4 (-SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DxgkpSendTestVmBusCommand(
        struct DXGADAPTER *a1,
        struct _D3DKMT_DRT_VMBUS_COMMAND *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rsi
  _BYTE *Pool2; // r15
  struct DXG_VMBUS_CHANNEL_BASE *v8; // r13
  __int64 v9; // rax
  const wchar_t *v10; // r9
  int v11; // ecx
  int v12; // ecx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  const wchar_t *v15; // r9
  size_t v16; // r8
  char *v17; // rdx
  unsigned int v18; // eax
  _BYTE *v19; // rbx
  unsigned int v20; // edx
  DXGGLOBAL *v21; // rax
  DXGSESSIONDATA *v22; // rbx
  unsigned int v23; // eax
  unsigned int v24; // eax
  int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  struct _KPROCESS *v28; // rbx
  struct DXGPROCESS *v29; // rax
  struct DXGPROCESS *v30; // r13
  DXGGLOBAL *v31; // rax
  DXGSESSIONDATA *v32; // rbx
  unsigned int v33; // eax
  unsigned int v34; // eax
  DXGGLOBAL *v35; // rax
  DXGSESSIONDATA *v36; // rbx
  unsigned int v37; // eax
  unsigned int v38; // eax
  int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // eax
  struct _KPROCESS *v42; // rbx
  struct DXGPROCESS *v43; // rax
  struct DXGPROCESS *v44; // r13
  DXGGLOBAL *v45; // rax
  DXGSESSIONDATA *v46; // rbx
  unsigned int v47; // eax
  unsigned int v48; // eax
  const EVENT_DESCRIPTOR *v49; // rdx
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // r8
  const EVENT_DESCRIPTOR *v54; // rdx
  PVOID v55; // rbx
  int v56; // ecx
  int v57; // ecx
  int v58; // ecx
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rbx
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v62; // eax
  int v63; // eax
  unsigned int v64; // eax
  unsigned int v65; // eax
  struct _KPROCESS *v66; // rbx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  struct DXGPROCESS *v68; // r13
  DXGGLOBAL *v69; // rax
  DXGSESSIONDATA *v70; // rbx
  unsigned int v71; // eax
  unsigned int v72; // eax
  DXGGLOBAL *v73; // rax
  DXGSESSIONDATA *v74; // rbx
  unsigned int v75; // eax
  unsigned int v76; // eax
  int v77; // eax
  unsigned int v78; // eax
  unsigned int v79; // eax
  struct _KPROCESS *v80; // rbx
  struct DXGPROCESS *v81; // rax
  struct DXGPROCESS *v82; // r13
  DXGGLOBAL *v83; // rax
  DXGSESSIONDATA *v84; // rbx
  unsigned int v85; // eax
  unsigned int v86; // eax
  void *v87; // rcx
  NTSTATUS v88; // eax
  const EVENT_DESCRIPTOR *v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  const EVENT_DESCRIPTOR *v92; // rdx
  size_t v93; // rcx
  char *v94; // r9
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-420h]
  char v97; // [rsp+50h] [rbp-3F8h]
  unsigned int v98; // [rsp+54h] [rbp-3F4h] BYREF
  void *Src; // [rsp+58h] [rbp-3F0h]
  _BYTE *v100; // [rsp+60h] [rbp-3E8h]
  PVOID Object; // [rsp+68h] [rbp-3E0h] BYREF
  PVOID v102; // [rsp+70h] [rbp-3D8h] BYREF
  PVOID v103; // [rsp+78h] [rbp-3D0h] BYREF
  PVOID v104; // [rsp+80h] [rbp-3C8h] BYREF
  PVOID v105; // [rsp+88h] [rbp-3C0h] BYREF
  _BYTE v106[16]; // [rsp+90h] [rbp-3B8h] BYREF
  _BYTE v107[16]; // [rsp+A0h] [rbp-3A8h] BYREF
  _BYTE v108[16]; // [rsp+B0h] [rbp-398h] BYREF
  _BYTE v109[16]; // [rsp+C0h] [rbp-388h] BYREF
  _BYTE v110[16]; // [rsp+D0h] [rbp-378h] BYREF
  _BYTE v111[16]; // [rsp+E0h] [rbp-368h] BYREF
  _BYTE v112[16]; // [rsp+F0h] [rbp-358h] BYREF
  _BYTE v113[16]; // [rsp+100h] [rbp-348h] BYREF
  void *v114[2]; // [rsp+110h] [rbp-338h] BYREF
  unsigned int v115; // [rsp+120h] [rbp-328h]
  struct _KAPC_STATE ApcState; // [rsp+230h] [rbp-218h] BYREF
  char v117; // [rsp+260h] [rbp-1E8h]
  struct _KAPC_STATE v118; // [rsp+268h] [rbp-1E0h] BYREF
  char v119; // [rsp+298h] [rbp-1B0h]
  struct _KAPC_STATE v120; // [rsp+2A0h] [rbp-1A8h] BYREF
  char v121; // [rsp+2D0h] [rbp-178h]
  struct _KAPC_STATE v122; // [rsp+2D8h] [rbp-170h] BYREF
  char v123; // [rsp+308h] [rbp-140h]
  _BYTE v124[128]; // [rsp+310h] [rbp-138h] BYREF
  _BYTE v125[128]; // [rsp+390h] [rbp-B8h] BYREF

  LODWORD(v6) = 0;
  Pool2 = 0LL;
  v100 = 0LL;
  Src = 0LL;
  v98 = 0;
  v8 = 0LL;
  LOBYTE(a3) = 0;
  v97 = 0;
  *(_OWORD *)v114 = 0LL;
  v115 = 0;
  if ( !a2 )
  {
    WdLogSingleEntry0(2LL);
    v9 = 16123LL;
    v10 = L"NULL vmbus command";
LABEL_3:
    WdLogGlobalForLineNumber = v9;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v10, v9, 0LL, 0LL, 0LL, 0LL);
    LODWORD(v6) = -1073741811;
LABEL_181:
    WdLogSingleEntry1(4LL, (int)v6);
    WdLogGlobalForLineNumber = 16487;
    goto LABEL_182;
  }
  v11 = *((_DWORD *)a2 + 3);
  if ( !v11 )
  {
    v8 = (struct DXG_VMBUS_CHANNEL_BASE *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 206);
    if ( !v8 )
    {
      WdLogSingleEntry0(2LL);
      v9 = 16135LL;
      goto LABEL_14;
    }
LABEL_15:
    LOBYTE(a3) = 1;
    v97 = 1;
    goto LABEL_16;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( !a1 )
    {
      WdLogSingleEntry0(2LL);
      v9 = 16145LL;
      v10 = L"Adapter is expected";
      goto LABEL_3;
    }
    v8 = (struct DXGADAPTER *)((char *)a1 + 4664);
    if ( a1 == (struct DXGADAPTER *)-4664LL )
    {
      WdLogSingleEntry0(2LL);
      v9 = 16153LL;
LABEL_14:
      v10 = L"Invalid VM bus channel";
      goto LABEL_3;
    }
    goto LABEL_15;
  }
  if ( (unsigned int)(v12 - 1) >= 2 )
  {
    WdLogSingleEntry0(2LL);
    v9 = 16165LL;
    v10 = L"Invalid channel type";
    goto LABEL_3;
  }
LABEL_16:
  v13 = *((_QWORD *)a2 + 3);
  if ( !v13 )
    goto LABEL_34;
  if ( !*((_QWORD *)a2 + 2) )
  {
    WdLogSingleEntry0(2LL);
    v9 = 16179LL;
    v10 = L"Invalid input buffer";
    goto LABEL_3;
  }
  if ( (_BYTE)a3 )
  {
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v114, v8, *((_DWORD *)a2 + 6), 0LL, 0LL, 0LL);
    if ( !v114[0] )
      goto LABEL_182;
    if ( a1 )
      *((_QWORD *)v114[1] + 1) = *(_QWORD *)((char *)a1 + 4772);
    Pool2 = v114[0];
  }
  else
  {
    if ( v13 > 0x80 )
    {
      Pool2 = (_BYTE *)ExAllocatePool2(64LL, v13, 1265072196LL, a4);
      v100 = Pool2;
      if ( !Pool2 )
      {
        WdLogSingleEntry0(6LL);
        v14 = 16207LL;
        v15 = L"Failed to allocate pInputBuffer";
        goto LABEL_29;
      }
      goto LABEL_30;
    }
    Pool2 = v124;
  }
  v100 = Pool2;
LABEL_30:
  v16 = *((_QWORD *)a2 + 3);
  v17 = (char *)*((_QWORD *)a2 + 2);
  if ( &v17[v16] < v17 || (unsigned __int64)&v17[v16] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(Pool2, v17, v16);
LABEL_34:
  if ( !*((_QWORD *)a2 + 5) || !*((_QWORD *)a2 + 4) )
  {
    v19 = Src;
    goto LABEL_41;
  }
  v18 = (*((_DWORD *)a2 + 10) + 7) & 0xFFFFFFF8;
  v98 = v18;
  if ( v18 > 0x80 )
  {
    v19 = (_BYTE *)ExAllocatePool2(64LL, v18, 1265072196LL, a4);
    Src = v19;
    if ( v19 )
      goto LABEL_41;
    WdLogSingleEntry0(6LL);
    v14 = 16240LL;
    v15 = L"Failed to allocate pOutputBuffer";
LABEL_29:
    WdLogGlobalForLineNumber = v14;
    DxgkLogInternalTriageEvent(0LL, 262145, 0xFFFFFFFFLL, v15, v14, 0LL, 0LL, 0LL, 0LL);
    LODWORD(v6) = -1073741801;
    goto LABEL_181;
  }
  v19 = v125;
  Src = v125;
LABEL_41:
  if ( v19 || *((_QWORD *)a2 + 5) )
  {
    v55 = 0LL;
    v56 = *((_DWORD *)a2 + 3);
    if ( v56 )
    {
      v57 = v56 - 1;
      if ( v57 )
      {
        v58 = v57 - 1;
        if ( v58 )
        {
          if ( v58 != 1 )
          {
            WdLogSingleEntry0(2LL);
            v9 = 16443LL;
            goto LABEL_47;
          }
          v103 = 0LL;
          Global = DXGGLOBAL::GetGlobal();
          SessionData = DXGGLOBAL::GetSessionData(Global);
          if ( !SessionData )
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId();
            LODWORD(v6) = -1073741790;
            WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741790LL);
            WdLogGlobalForLineNumber = 16428;
            v62 = PsGetCurrentProcessSessionId();
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
              v62,
              -1073741790LL,
              0LL,
              0LL,
              0LL);
          }
          if ( (int)v6 >= 0 )
          {
            v63 = DXGSESSIONDATA::ReferenceDwmProcess(SessionData, (struct _EPROCESS **)&v103);
            v6 = v63;
            if ( v63 < 0 )
            {
              v64 = PsGetCurrentProcessSessionId();
              WdLogSingleEntry2(2LL, v64, v6);
              WdLogGlobalForLineNumber = 16428;
              v65 = PsGetCurrentProcessSessionId();
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
                v65,
                v6,
                0LL,
                0LL,
                0LL);
            }
            if ( (int)v6 >= 0 )
            {
              DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v108);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v108);
              v66 = (struct _KPROCESS *)v103;
              ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(v103);
              v68 = ProcessDxgProcess;
              if ( ProcessDxgProcess && (*((_DWORD *)ProcessDxgProcess + 102) & 0x800) == 0 )
              {
                DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v112, ProcessDxgProcess);
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v112);
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v108);
                v121 = 0;
                CPROCESSATTACHHELPER::Attach(&v120, v66);
                KeEnterCriticalRegion();
                if ( *((_DWORD *)v68 + 122) && (*((_DWORD *)v68 + 102) & 4) != 0 )
                {
                  v69 = DXGGLOBAL::GetGlobal();
                  v70 = DXGGLOBAL::GetSessionData(v69);
                  if ( !v70 )
                  {
                    LODWORD(v6) = -1073741811;
                    v71 = PsGetCurrentProcessSessionId();
                    WdLogSingleEntry2(2LL, v71, -1073741811LL);
                    WdLogGlobalForLineNumber = 16428;
                    v72 = PsGetCurrentProcessSessionId();
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      0xFFFFFFFFLL,
                      L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
                      v72,
                      -1073741811LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( (int)v6 >= 0 )
                    LODWORD(v6) = DXGSESSIONDATA::VailSendRemoteObjectTestCommand(
                                    v70,
                                    Pool2,
                                    *((unsigned int *)a2 + 6),
                                    Src,
                                    &v98,
                                    1);
                }
                KeLeaveCriticalRegion();
                CPROCESSATTACHHELPER::Detach(&v120);
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v112);
              }
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v108);
            }
          }
          if ( v103 )
          {
            ObfDereferenceObject(v103);
            v103 = 0LL;
          }
        }
        else
        {
          v104 = 0LL;
          v73 = DXGGLOBAL::GetGlobal();
          v74 = DXGGLOBAL::GetSessionData(v73);
          if ( !v74 )
          {
            v75 = PsGetCurrentProcessSessionId();
            LODWORD(v6) = -1073741790;
            WdLogSingleEntry2(2LL, v75, -1073741790LL);
            WdLogGlobalForLineNumber = 16412;
            v76 = PsGetCurrentProcessSessionId();
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
              v76,
              -1073741790LL,
              0LL,
              0LL,
              0LL);
          }
          if ( (int)v6 >= 0 )
          {
            v77 = DXGSESSIONDATA::ReferenceDwmProcess(v74, (struct _EPROCESS **)&v104);
            v6 = v77;
            if ( v77 < 0 )
            {
              v78 = PsGetCurrentProcessSessionId();
              WdLogSingleEntry2(2LL, v78, v6);
              WdLogGlobalForLineNumber = 16412;
              v79 = PsGetCurrentProcessSessionId();
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
                v79,
                v6,
                0LL,
                0LL,
                0LL);
            }
            if ( (int)v6 >= 0 )
            {
              DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v109);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v109);
              v80 = (struct _KPROCESS *)v104;
              v81 = (struct DXGPROCESS *)PsGetProcessDxgProcess(v104);
              v82 = v81;
              if ( v81 && (*((_DWORD *)v81 + 102) & 0x800) == 0 )
              {
                DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v113, v81);
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v113);
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v109);
                v123 = 0;
                CPROCESSATTACHHELPER::Attach(&v122, v80);
                KeEnterCriticalRegion();
                if ( *((_DWORD *)v82 + 122) && (*((_DWORD *)v82 + 102) & 4) != 0 )
                {
                  v83 = DXGGLOBAL::GetGlobal();
                  v84 = DXGGLOBAL::GetSessionData(v83);
                  if ( !v84 )
                  {
                    LODWORD(v6) = -1073741811;
                    v85 = PsGetCurrentProcessSessionId();
                    WdLogSingleEntry2(2LL, v85, -1073741811LL);
                    WdLogGlobalForLineNumber = 16412;
                    v86 = PsGetCurrentProcessSessionId();
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      0xFFFFFFFFLL,
                      L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
                      v86,
                      -1073741811LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( (int)v6 >= 0 )
                    LODWORD(v6) = DXGSESSIONDATA::VailSendCompositionObjectTestCommand(
                                    v84,
                                    Pool2,
                                    *((unsigned int *)a2 + 6),
                                    Src,
                                    &v98,
                                    1);
                }
                KeLeaveCriticalRegion();
                CPROCESSATTACHHELPER::Detach(&v122);
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v113);
              }
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v109);
            }
          }
          if ( v104 )
          {
            ObfDereferenceObject(v104);
            v104 = 0LL;
          }
        }
        goto LABEL_167;
      }
    }
    if ( !v97 )
    {
      WdLogSingleEntry0(1LL);
      v50 = 16342LL;
      goto LABEL_94;
    }
    if ( *((_QWORD *)a2 + 3) == 56LL && *((_DWORD *)Pool2 + 4) == 1016 )
    {
      v87 = (void *)*((_QWORD *)Pool2 + 5);
      if ( v87 )
      {
        v105 = 0LL;
        v88 = ObReferenceObjectByHandle(v87, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &v105, 0LL);
        v55 = v105;
        LODWORD(v6) = v88;
        if ( v88 < 0 )
          goto LABEL_167;
        *((_QWORD *)Pool2 + 5) = v105;
      }
    }
    if ( bTracingEnabled )
    {
      if ( *((_DWORD *)a2 + 3) )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
        {
          v89 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandBegin;
          goto LABEL_156;
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
      {
        v89 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalBegin;
LABEL_156:
        LODWORD(HandleInformation) = 0;
        McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v89, a3, 0LL, 0LL, HandleInformation);
      }
    }
    LODWORD(v6) = DXG_VMBUS_CHANNEL_BASE::SendVmBusMessage(v8, v114[1], v115, Src, &v98);
    if ( (int)v6 < 0 && v55 )
      ObfDereferenceObject(v55);
    if ( !bTracingEnabled )
      goto LABEL_167;
    if ( *((_DWORD *)a2 + 3) )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
      {
        v92 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandEnd;
        goto LABEL_166;
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    {
      v92 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalEnd;
LABEL_166:
      LODWORD(HandleInformation) = 0;
      McTemplateK0pxqt_EtwWriteTransfer(v90, v92, v91, 0LL, 0LL, HandleInformation, v6);
    }
LABEL_167:
    v19 = Src;
    if ( !Src && v98 )
    {
      WdLogSingleEntry1((unsigned int)((_DWORD)Src + 3), v98);
      WdLogGlobalForLineNumber = 16451;
    }
    goto LABEL_170;
  }
  v20 = *((_DWORD *)a2 + 3);
  if ( v20 >= 2 )
  {
    if ( v20 == 2 )
    {
      v102 = 0LL;
      v35 = DXGGLOBAL::GetGlobal();
      v36 = DXGGLOBAL::GetSessionData(v35);
      if ( !v36 )
      {
        v37 = PsGetCurrentProcessSessionId();
        LODWORD(v6) = -1073741790;
        WdLogSingleEntry2(2LL, v37, -1073741790LL);
        WdLogGlobalForLineNumber = 16290;
        v38 = PsGetCurrentProcessSessionId();
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
          v38,
          -1073741790LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (int)v6 >= 0 )
      {
        v39 = DXGSESSIONDATA::ReferenceDwmProcess(v36, (struct _EPROCESS **)&v102);
        v6 = v39;
        if ( v39 < 0 )
        {
          v40 = PsGetCurrentProcessSessionId();
          WdLogSingleEntry2(2LL, v40, v6);
          WdLogGlobalForLineNumber = 16290;
          v41 = PsGetCurrentProcessSessionId();
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
            v41,
            v6,
            0LL,
            0LL,
            0LL);
        }
        if ( (int)v6 >= 0 )
        {
          DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v107);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v107);
          v42 = (struct _KPROCESS *)v102;
          v43 = (struct DXGPROCESS *)PsGetProcessDxgProcess(v102);
          v44 = v43;
          if ( v43 && (*((_DWORD *)v43 + 102) & 0x800) == 0 )
          {
            DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v111, v43);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v111);
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v107);
            v119 = 0;
            CPROCESSATTACHHELPER::Attach(&v118, v42);
            KeEnterCriticalRegion();
            if ( *((_DWORD *)v44 + 122) && (*((_DWORD *)v44 + 102) & 4) != 0 )
            {
              v45 = DXGGLOBAL::GetGlobal();
              v46 = DXGGLOBAL::GetSessionData(v45);
              if ( !v46 )
              {
                LODWORD(v6) = -1073741811;
                v47 = PsGetCurrentProcessSessionId();
                WdLogSingleEntry2(2LL, v47, -1073741811LL);
                WdLogGlobalForLineNumber = 16290;
                v48 = PsGetCurrentProcessSessionId();
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  0xFFFFFFFFLL,
                  L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
                  v48,
                  -1073741811LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( (int)v6 >= 0 )
                LODWORD(v6) = DXGSESSIONDATA::VailSendCompositionObjectTestCommand(
                                v46,
                                Pool2,
                                *((unsigned int *)a2 + 6),
                                0LL,
                                0LL,
                                0);
            }
            KeLeaveCriticalRegion();
            CPROCESSATTACHHELPER::Detach(&v118);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v111);
          }
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v107);
        }
      }
      if ( v102 )
      {
        ObfDereferenceObject(v102);
        v102 = 0LL;
      }
    }
    else
    {
      if ( v20 != 3 )
      {
        WdLogSingleEntry0(2LL);
        v9 = 16321LL;
LABEL_47:
        v10 = L"Invalid channel type for transmit.";
        goto LABEL_3;
      }
      Object = 0LL;
      v21 = DXGGLOBAL::GetGlobal();
      v22 = DXGGLOBAL::GetSessionData(v21);
      if ( !v22 )
      {
        v23 = PsGetCurrentProcessSessionId();
        LODWORD(v6) = -1073741790;
        WdLogSingleEntry2(2LL, v23, -1073741790LL);
        WdLogGlobalForLineNumber = 16306;
        v24 = PsGetCurrentProcessSessionId();
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
          v24,
          -1073741790LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (int)v6 >= 0 )
      {
        v25 = DXGSESSIONDATA::ReferenceDwmProcess(v22, (struct _EPROCESS **)&Object);
        v6 = v25;
        if ( v25 < 0 )
        {
          v26 = PsGetCurrentProcessSessionId();
          WdLogSingleEntry2(2LL, v26, v6);
          WdLogGlobalForLineNumber = 16306;
          v27 = PsGetCurrentProcessSessionId();
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
            v27,
            v6,
            0LL,
            0LL,
            0LL);
        }
        if ( (int)v6 >= 0 )
        {
          DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v106);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v106);
          v28 = (struct _KPROCESS *)Object;
          v29 = (struct DXGPROCESS *)PsGetProcessDxgProcess(Object);
          v30 = v29;
          if ( v29 && (*((_DWORD *)v29 + 102) & 0x800) == 0 )
          {
            DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v110, v29);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v110);
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v106);
            v117 = 0;
            CPROCESSATTACHHELPER::Attach(&ApcState, v28);
            KeEnterCriticalRegion();
            if ( *((_DWORD *)v30 + 122) && (*((_DWORD *)v30 + 102) & 4) != 0 )
            {
              v31 = DXGGLOBAL::GetGlobal();
              v32 = DXGGLOBAL::GetSessionData(v31);
              if ( !v32 )
              {
                LODWORD(v6) = -1073741811;
                v33 = PsGetCurrentProcessSessionId();
                WdLogSingleEntry2(2LL, v33, -1073741811LL);
                WdLogGlobalForLineNumber = 16306;
                v34 = PsGetCurrentProcessSessionId();
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  0xFFFFFFFFLL,
                  L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
                  v34,
                  -1073741811LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( (int)v6 >= 0 )
                LODWORD(v6) = DXGSESSIONDATA::VailSendRemoteObjectTestCommand(
                                v32,
                                Pool2,
                                *((unsigned int *)a2 + 6),
                                0LL,
                                0LL,
                                0);
            }
            KeLeaveCriticalRegion();
            CPROCESSATTACHHELPER::Detach(&ApcState);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v110);
          }
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v106);
        }
      }
      if ( Object )
      {
        ObfDereferenceObject(Object);
        Object = 0LL;
      }
    }
    v19 = Src;
    goto LABEL_170;
  }
  if ( bTracingEnabled )
  {
    if ( v20 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
        goto LABEL_92;
      v49 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandHostToVmAsync;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
        goto LABEL_92;
      v49 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalAsync;
    }
    LODWORD(HandleInformation) = 0;
    McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v49, a3, 0LL, 0LL, HandleInformation);
  }
LABEL_92:
  if ( !v97 )
  {
    WdLogSingleEntry0(1LL);
    v50 = 16271LL;
LABEL_94:
    WdLogGlobalForLineNumber = v50;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"FALSE", v50, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_182;
  }
  v51 = DXG_VMBUS_CHANNEL_BASE::SendVmBusMessageAsync(v8, v114[1], v115);
  LODWORD(v6) = v51;
  if ( bTracingEnabled )
  {
    if ( *((_DWORD *)a2 + 3) )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
      {
        v54 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandEnd;
        goto LABEL_101;
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    {
      v54 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalEnd;
LABEL_101:
      LODWORD(HandleInformation) = 0;
      McTemplateK0pxqt_EtwWriteTransfer(v52, v54, v53, 0LL, 0LL, HandleInformation, v51);
    }
  }
LABEL_170:
  if ( (int)v6 < 0 )
    goto LABEL_181;
  v93 = *((_QWORD *)a2 + 5);
  if ( v98 < v93 )
  {
    WdLogSingleEntry2(4LL, *((_QWORD *)a2 + 5), v98);
    WdLogGlobalForLineNumber = 16462;
    LODWORD(v6) = -1073741823;
    goto LABEL_181;
  }
  if ( v19 )
  {
    v94 = (char *)*((_QWORD *)a2 + 4);
    if ( v94 )
    {
      if ( v93 )
      {
        if ( (unsigned __int64)&v94[v93] > MmUserProbeAddress || &v94[v93] <= v94 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v94, v19, v93);
      }
    }
  }
LABEL_182:
  if ( Pool2 && Pool2 != v124 && Pool2 != v114[0] )
    ExFreePoolWithTag(Pool2, 0);
  if ( Src && Src != v125 )
    ExFreePoolWithTag(Src, 0);
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v114);
  return (unsigned int)v6;
}
