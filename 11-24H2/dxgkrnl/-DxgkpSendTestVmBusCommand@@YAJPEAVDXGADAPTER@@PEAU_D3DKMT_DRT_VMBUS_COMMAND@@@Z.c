/*
 * XREFs of ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x14021C828
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140416310 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x140013278 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x140015E68 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140031B9C (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x14004C6F0 (McTemplateK0pxq_EtwWriteTransfer.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x14004F730 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x14004FB0C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x14006BA58 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x140207F54 (-VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 *     ?VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x140208FFC (-VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 *     ?SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z @ 0x14021E790 (-SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z.c)
 *     ?SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z @ 0x14021E870 (-SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DxgkpSendTestVmBusCommand(struct DXGADAPTER *a1, struct _D3DKMT_DRT_VMBUS_COMMAND *a2, __int64 a3)
{
  __int64 v5; // rsi
  _BYTE *Pool2; // r15
  struct DXG_VMBUS_CHANNEL_BASE *v7; // r13
  __int64 v8; // rax
  const wchar_t *v9; // r9
  int v10; // ecx
  int v11; // ecx
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  const wchar_t *v14; // r9
  size_t v15; // r8
  char *v16; // rdx
  unsigned int v17; // eax
  _BYTE *v18; // rbx
  unsigned int v19; // edx
  DXGGLOBAL *v20; // rax
  DXGSESSIONDATA *v21; // rbx
  unsigned int v22; // eax
  unsigned int v23; // eax
  int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  struct _KPROCESS *v27; // rbx
  struct DXGPROCESS *v28; // rax
  struct DXGPROCESS *v29; // r13
  DXGGLOBAL *v30; // rax
  DXGSESSIONDATA *v31; // rbx
  unsigned int v32; // eax
  unsigned int v33; // eax
  DXGGLOBAL *v34; // rax
  DXGSESSIONDATA *v35; // rbx
  unsigned int v36; // eax
  unsigned int v37; // eax
  int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // eax
  struct _KPROCESS *v41; // rbx
  struct DXGPROCESS *v42; // rax
  struct DXGPROCESS *v43; // r13
  DXGGLOBAL *v44; // rax
  DXGSESSIONDATA *v45; // rbx
  unsigned int v46; // eax
  unsigned int v47; // eax
  const EVENT_DESCRIPTOR *v48; // rdx
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // r8
  const EVENT_DESCRIPTOR *v53; // rdx
  PVOID v54; // rbx
  int v55; // ecx
  int v56; // ecx
  int v57; // ecx
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rbx
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v61; // eax
  int v62; // eax
  unsigned int v63; // eax
  unsigned int v64; // eax
  struct _KPROCESS *v65; // rbx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  struct DXGPROCESS *v67; // r13
  DXGGLOBAL *v68; // rax
  DXGSESSIONDATA *v69; // rbx
  unsigned int v70; // eax
  unsigned int v71; // eax
  DXGGLOBAL *v72; // rax
  DXGSESSIONDATA *v73; // rbx
  unsigned int v74; // eax
  unsigned int v75; // eax
  int v76; // eax
  unsigned int v77; // eax
  unsigned int v78; // eax
  struct _KPROCESS *v79; // rbx
  struct DXGPROCESS *v80; // rax
  struct DXGPROCESS *v81; // r13
  DXGGLOBAL *v82; // rax
  DXGSESSIONDATA *v83; // rbx
  unsigned int v84; // eax
  unsigned int v85; // eax
  void *v86; // rcx
  NTSTATUS v87; // eax
  const EVENT_DESCRIPTOR *v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  const EVENT_DESCRIPTOR *v91; // rdx
  size_t v92; // rcx
  char *v93; // r9
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-420h]
  char v96; // [rsp+50h] [rbp-3F8h]
  unsigned int v97; // [rsp+54h] [rbp-3F4h] BYREF
  void *Src; // [rsp+58h] [rbp-3F0h]
  _BYTE *v99; // [rsp+60h] [rbp-3E8h]
  PVOID Object; // [rsp+68h] [rbp-3E0h] BYREF
  PVOID v101; // [rsp+70h] [rbp-3D8h] BYREF
  PVOID v102; // [rsp+78h] [rbp-3D0h] BYREF
  PVOID v103; // [rsp+80h] [rbp-3C8h] BYREF
  PVOID v104; // [rsp+88h] [rbp-3C0h] BYREF
  _BYTE v105[16]; // [rsp+90h] [rbp-3B8h] BYREF
  _BYTE v106[16]; // [rsp+A0h] [rbp-3A8h] BYREF
  _BYTE v107[16]; // [rsp+B0h] [rbp-398h] BYREF
  _BYTE v108[16]; // [rsp+C0h] [rbp-388h] BYREF
  _BYTE v109[16]; // [rsp+D0h] [rbp-378h] BYREF
  _BYTE v110[16]; // [rsp+E0h] [rbp-368h] BYREF
  _BYTE v111[16]; // [rsp+F0h] [rbp-358h] BYREF
  _BYTE v112[16]; // [rsp+100h] [rbp-348h] BYREF
  void *v113[2]; // [rsp+110h] [rbp-338h] BYREF
  unsigned int v114; // [rsp+120h] [rbp-328h]
  struct _KAPC_STATE ApcState; // [rsp+230h] [rbp-218h] BYREF
  char v116; // [rsp+260h] [rbp-1E8h]
  struct _KAPC_STATE v117; // [rsp+268h] [rbp-1E0h] BYREF
  char v118; // [rsp+298h] [rbp-1B0h]
  struct _KAPC_STATE v119; // [rsp+2A0h] [rbp-1A8h] BYREF
  char v120; // [rsp+2D0h] [rbp-178h]
  struct _KAPC_STATE v121; // [rsp+2D8h] [rbp-170h] BYREF
  char v122; // [rsp+308h] [rbp-140h]
  _BYTE v123[128]; // [rsp+310h] [rbp-138h] BYREF
  _BYTE v124[128]; // [rsp+390h] [rbp-B8h] BYREF

  LODWORD(v5) = 0;
  Pool2 = 0LL;
  v99 = 0LL;
  Src = 0LL;
  v97 = 0;
  v7 = 0LL;
  LOBYTE(a3) = 0;
  v96 = 0;
  *(_OWORD *)v113 = 0LL;
  v114 = 0;
  if ( !a2 )
  {
    WdLogSingleEntry0(2LL);
    v8 = 16311LL;
    v9 = L"NULL vmbus command";
LABEL_3:
    WdLogGlobalForLineNumber = v8;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v9, v8, 0LL, 0LL, 0LL, 0LL);
    LODWORD(v5) = -1073741811;
LABEL_181:
    WdLogSingleEntry1(4LL, (int)v5);
    WdLogGlobalForLineNumber = 16675;
    goto LABEL_182;
  }
  v10 = *((_DWORD *)a2 + 3);
  if ( !v10 )
  {
    v7 = (struct DXG_VMBUS_CHANNEL_BASE *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 210);
    if ( !v7 )
    {
      WdLogSingleEntry0(2LL);
      v8 = 16323LL;
      goto LABEL_14;
    }
LABEL_15:
    LOBYTE(a3) = 1;
    v96 = 1;
    goto LABEL_16;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( !a1 )
    {
      WdLogSingleEntry0(2LL);
      v8 = 16333LL;
      v9 = L"Adapter is expected";
      goto LABEL_3;
    }
    v7 = (struct DXGADAPTER *)((char *)a1 + 4664);
    if ( a1 == (struct DXGADAPTER *)-4664LL )
    {
      WdLogSingleEntry0(2LL);
      v8 = 16341LL;
LABEL_14:
      v9 = L"Invalid VM bus channel";
      goto LABEL_3;
    }
    goto LABEL_15;
  }
  if ( (unsigned int)(v11 - 1) >= 2 )
  {
    WdLogSingleEntry0(2LL);
    v8 = 16353LL;
    v9 = L"Invalid channel type";
    goto LABEL_3;
  }
LABEL_16:
  v12 = *((_QWORD *)a2 + 3);
  if ( !v12 )
    goto LABEL_34;
  if ( !*((_QWORD *)a2 + 2) )
  {
    WdLogSingleEntry0(2LL);
    v8 = 16367LL;
    v9 = L"Invalid input buffer";
    goto LABEL_3;
  }
  if ( (_BYTE)a3 )
  {
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v113, v7, *((_DWORD *)a2 + 6), 0LL, 0LL, 0LL);
    if ( !v113[0] )
      goto LABEL_182;
    if ( a1 )
      *((_QWORD *)v113[1] + 1) = *(_QWORD *)((char *)a1 + 4772);
    Pool2 = v113[0];
  }
  else
  {
    if ( v12 > 0x80 )
    {
      Pool2 = (_BYTE *)ExAllocatePool2(64LL, v12, 1265072196LL);
      v99 = Pool2;
      if ( !Pool2 )
      {
        WdLogSingleEntry0(6LL);
        v13 = 16395LL;
        v14 = L"Failed to allocate pInputBuffer";
        goto LABEL_29;
      }
      goto LABEL_30;
    }
    Pool2 = v123;
  }
  v99 = Pool2;
LABEL_30:
  v15 = *((_QWORD *)a2 + 3);
  v16 = (char *)*((_QWORD *)a2 + 2);
  if ( &v16[v15] < v16 || (unsigned __int64)&v16[v15] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(Pool2, v16, v15);
LABEL_34:
  if ( !*((_QWORD *)a2 + 5) || !*((_QWORD *)a2 + 4) )
  {
    v18 = Src;
    goto LABEL_41;
  }
  v17 = (*((_DWORD *)a2 + 10) + 7) & 0xFFFFFFF8;
  v97 = v17;
  if ( v17 > 0x80 )
  {
    v18 = (_BYTE *)ExAllocatePool2(64LL, v17, 1265072196LL);
    Src = v18;
    if ( v18 )
      goto LABEL_41;
    WdLogSingleEntry0(6LL);
    v13 = 16428LL;
    v14 = L"Failed to allocate pOutputBuffer";
LABEL_29:
    WdLogGlobalForLineNumber = v13;
    DxgkLogInternalTriageEvent(0LL, 262145LL, 0xFFFFFFFFLL, v14, v13, 0LL, 0LL, 0LL, 0LL);
    LODWORD(v5) = -1073741801;
    goto LABEL_181;
  }
  v18 = v124;
  Src = v124;
LABEL_41:
  if ( v18 || *((_QWORD *)a2 + 5) )
  {
    v54 = 0LL;
    v55 = *((_DWORD *)a2 + 3);
    if ( v55 )
    {
      v56 = v55 - 1;
      if ( v56 )
      {
        v57 = v56 - 1;
        if ( v57 )
        {
          if ( v57 != 1 )
          {
            WdLogSingleEntry0(2LL);
            v8 = 16631LL;
            goto LABEL_47;
          }
          v102 = 0LL;
          Global = DXGGLOBAL::GetGlobal();
          SessionData = DXGGLOBAL::GetSessionData(Global);
          if ( !SessionData )
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId();
            LODWORD(v5) = -1073741790;
            WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741790LL);
            WdLogGlobalForLineNumber = 16616;
            v61 = PsGetCurrentProcessSessionId();
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
              v61,
              -1073741790LL,
              0LL,
              0LL,
              0LL);
          }
          if ( (int)v5 >= 0 )
          {
            v62 = DXGSESSIONDATA::ReferenceDwmProcess(SessionData, (struct _EPROCESS **)&v102);
            v5 = v62;
            if ( v62 < 0 )
            {
              v63 = PsGetCurrentProcessSessionId();
              WdLogSingleEntry2(2LL, v63, v5);
              WdLogGlobalForLineNumber = 16616;
              v64 = PsGetCurrentProcessSessionId();
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
                v64,
                v5,
                0LL,
                0LL,
                0LL);
            }
            if ( (int)v5 >= 0 )
            {
              DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v107);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v107);
              v65 = (struct _KPROCESS *)v102;
              ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(v102);
              v67 = ProcessDxgProcess;
              if ( ProcessDxgProcess && (*((_DWORD *)ProcessDxgProcess + 102) & 0x800) == 0 )
              {
                DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v111, ProcessDxgProcess);
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v111);
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v107);
                v120 = 0;
                CPROCESSATTACHHELPER::Attach(&v119, v65);
                KeEnterCriticalRegion();
                if ( *((_DWORD *)v67 + 122) && (*((_DWORD *)v67 + 102) & 4) != 0 )
                {
                  v68 = DXGGLOBAL::GetGlobal();
                  v69 = DXGGLOBAL::GetSessionData(v68);
                  if ( !v69 )
                  {
                    LODWORD(v5) = -1073741811;
                    v70 = PsGetCurrentProcessSessionId();
                    WdLogSingleEntry2(2LL, v70, -1073741811LL);
                    WdLogGlobalForLineNumber = 16616;
                    v71 = PsGetCurrentProcessSessionId();
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000LL,
                      0xFFFFFFFFLL,
                      L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
                      v71,
                      -1073741811LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( (int)v5 >= 0 )
                    LODWORD(v5) = DXGSESSIONDATA::VailSendRemoteObjectTestCommand(
                                    v69,
                                    Pool2,
                                    *((unsigned int *)a2 + 6),
                                    Src,
                                    &v97,
                                    1);
                }
                KeLeaveCriticalRegion();
                CPROCESSATTACHHELPER::Detach(&v119);
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
          v103 = 0LL;
          v72 = DXGGLOBAL::GetGlobal();
          v73 = DXGGLOBAL::GetSessionData(v72);
          if ( !v73 )
          {
            v74 = PsGetCurrentProcessSessionId();
            LODWORD(v5) = -1073741790;
            WdLogSingleEntry2(2LL, v74, -1073741790LL);
            WdLogGlobalForLineNumber = 16600;
            v75 = PsGetCurrentProcessSessionId();
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
              v75,
              -1073741790LL,
              0LL,
              0LL,
              0LL);
          }
          if ( (int)v5 >= 0 )
          {
            v76 = DXGSESSIONDATA::ReferenceDwmProcess(v73, (struct _EPROCESS **)&v103);
            v5 = v76;
            if ( v76 < 0 )
            {
              v77 = PsGetCurrentProcessSessionId();
              WdLogSingleEntry2(2LL, v77, v5);
              WdLogGlobalForLineNumber = 16600;
              v78 = PsGetCurrentProcessSessionId();
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
                v78,
                v5,
                0LL,
                0LL,
                0LL);
            }
            if ( (int)v5 >= 0 )
            {
              DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v108);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v108);
              v79 = (struct _KPROCESS *)v103;
              v80 = (struct DXGPROCESS *)PsGetProcessDxgProcess(v103);
              v81 = v80;
              if ( v80 && (*((_DWORD *)v80 + 102) & 0x800) == 0 )
              {
                DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v112, v80);
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v112);
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v108);
                v122 = 0;
                CPROCESSATTACHHELPER::Attach(&v121, v79);
                KeEnterCriticalRegion();
                if ( *((_DWORD *)v81 + 122) && (*((_DWORD *)v81 + 102) & 4) != 0 )
                {
                  v82 = DXGGLOBAL::GetGlobal();
                  v83 = DXGGLOBAL::GetSessionData(v82);
                  if ( !v83 )
                  {
                    LODWORD(v5) = -1073741811;
                    v84 = PsGetCurrentProcessSessionId();
                    WdLogSingleEntry2(2LL, v84, -1073741811LL);
                    WdLogGlobalForLineNumber = 16600;
                    v85 = PsGetCurrentProcessSessionId();
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000LL,
                      0xFFFFFFFFLL,
                      L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
                      v85,
                      -1073741811LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( (int)v5 >= 0 )
                    LODWORD(v5) = DXGSESSIONDATA::VailSendCompositionObjectTestCommand(
                                    v83,
                                    Pool2,
                                    *((unsigned int *)a2 + 6),
                                    Src,
                                    &v97,
                                    1);
                }
                KeLeaveCriticalRegion();
                CPROCESSATTACHHELPER::Detach(&v121);
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
        goto LABEL_167;
      }
    }
    if ( !v96 )
    {
      WdLogSingleEntry0(1LL);
      v49 = 16530LL;
      goto LABEL_94;
    }
    if ( *((_QWORD *)a2 + 3) == 56LL && *((_DWORD *)Pool2 + 4) == 1016 )
    {
      v86 = (void *)*((_QWORD *)Pool2 + 5);
      if ( v86 )
      {
        v104 = 0LL;
        v87 = ObReferenceObjectByHandle(v86, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &v104, 0LL);
        v54 = v104;
        LODWORD(v5) = v87;
        if ( v87 < 0 )
          goto LABEL_167;
        *((_QWORD *)Pool2 + 5) = v104;
      }
    }
    if ( bTracingEnabled )
    {
      if ( *((_DWORD *)a2 + 3) )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
        {
          v88 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandBegin;
          goto LABEL_156;
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
      {
        v88 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalBegin;
LABEL_156:
        LODWORD(HandleInformation) = 0;
        McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v88, a3, 0LL, 0LL, HandleInformation);
      }
    }
    LODWORD(v5) = DXG_VMBUS_CHANNEL_BASE::SendVmBusMessage(v7, v113[1], v114, Src, &v97);
    if ( (int)v5 < 0 && v54 )
      ObfDereferenceObject(v54);
    if ( !bTracingEnabled )
      goto LABEL_167;
    if ( *((_DWORD *)a2 + 3) )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
      {
        v91 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandEnd;
        goto LABEL_166;
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    {
      v91 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalEnd;
LABEL_166:
      LODWORD(HandleInformation) = 0;
      McTemplateK0pxqt_EtwWriteTransfer(v89, v91, v90, 0LL, 0LL, HandleInformation, v5);
    }
LABEL_167:
    v18 = Src;
    if ( !Src && v97 )
    {
      WdLogSingleEntry1((unsigned int)((_DWORD)Src + 3), v97);
      WdLogGlobalForLineNumber = 16639;
    }
    goto LABEL_170;
  }
  v19 = *((_DWORD *)a2 + 3);
  if ( v19 >= 2 )
  {
    if ( v19 == 2 )
    {
      v101 = 0LL;
      v34 = DXGGLOBAL::GetGlobal();
      v35 = DXGGLOBAL::GetSessionData(v34);
      if ( !v35 )
      {
        v36 = PsGetCurrentProcessSessionId();
        LODWORD(v5) = -1073741790;
        WdLogSingleEntry2(2LL, v36, -1073741790LL);
        WdLogGlobalForLineNumber = 16478;
        v37 = PsGetCurrentProcessSessionId();
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
          v37,
          -1073741790LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (int)v5 >= 0 )
      {
        v38 = DXGSESSIONDATA::ReferenceDwmProcess(v35, (struct _EPROCESS **)&v101);
        v5 = v38;
        if ( v38 < 0 )
        {
          v39 = PsGetCurrentProcessSessionId();
          WdLogSingleEntry2(2LL, v39, v5);
          WdLogGlobalForLineNumber = 16478;
          v40 = PsGetCurrentProcessSessionId();
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
            v40,
            v5,
            0LL,
            0LL,
            0LL);
        }
        if ( (int)v5 >= 0 )
        {
          DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v106);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v106);
          v41 = (struct _KPROCESS *)v101;
          v42 = (struct DXGPROCESS *)PsGetProcessDxgProcess(v101);
          v43 = v42;
          if ( v42 && (*((_DWORD *)v42 + 102) & 0x800) == 0 )
          {
            DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v110, v42);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v110);
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v106);
            v118 = 0;
            CPROCESSATTACHHELPER::Attach(&v117, v41);
            KeEnterCriticalRegion();
            if ( *((_DWORD *)v43 + 122) && (*((_DWORD *)v43 + 102) & 4) != 0 )
            {
              v44 = DXGGLOBAL::GetGlobal();
              v45 = DXGGLOBAL::GetSessionData(v44);
              if ( !v45 )
              {
                LODWORD(v5) = -1073741811;
                v46 = PsGetCurrentProcessSessionId();
                WdLogSingleEntry2(2LL, v46, -1073741811LL);
                WdLogGlobalForLineNumber = 16478;
                v47 = PsGetCurrentProcessSessionId();
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
                  v47,
                  -1073741811LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( (int)v5 >= 0 )
                LODWORD(v5) = DXGSESSIONDATA::VailSendCompositionObjectTestCommand(
                                v45,
                                Pool2,
                                *((unsigned int *)a2 + 6),
                                0LL,
                                0LL,
                                0);
            }
            KeLeaveCriticalRegion();
            CPROCESSATTACHHELPER::Detach(&v117);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v110);
          }
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v106);
        }
      }
      if ( v101 )
      {
        ObfDereferenceObject(v101);
        v101 = 0LL;
      }
    }
    else
    {
      if ( v19 != 3 )
      {
        WdLogSingleEntry0(2LL);
        v8 = 16509LL;
LABEL_47:
        v9 = L"Invalid channel type for transmit.";
        goto LABEL_3;
      }
      Object = 0LL;
      v20 = DXGGLOBAL::GetGlobal();
      v21 = DXGGLOBAL::GetSessionData(v20);
      if ( !v21 )
      {
        v22 = PsGetCurrentProcessSessionId();
        LODWORD(v5) = -1073741790;
        WdLogSingleEntry2(2LL, v22, -1073741790LL);
        WdLogGlobalForLineNumber = 16494;
        v23 = PsGetCurrentProcessSessionId();
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
          v23,
          -1073741790LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (int)v5 >= 0 )
      {
        v24 = DXGSESSIONDATA::ReferenceDwmProcess(v21, (struct _EPROCESS **)&Object);
        v5 = v24;
        if ( v24 < 0 )
        {
          v25 = PsGetCurrentProcessSessionId();
          WdLogSingleEntry2(2LL, v25, v5);
          WdLogGlobalForLineNumber = 16494;
          v26 = PsGetCurrentProcessSessionId();
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed ReferenceDwmProcess for session 0x%I64x, returning 0x%I64x.",
            v26,
            v5,
            0LL,
            0LL,
            0LL);
        }
        if ( (int)v5 >= 0 )
        {
          DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v105);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v105);
          v27 = (struct _KPROCESS *)Object;
          v28 = (struct DXGPROCESS *)PsGetProcessDxgProcess(Object);
          v29 = v28;
          if ( v28 && (*((_DWORD *)v28 + 102) & 0x800) == 0 )
          {
            DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v109, v28);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v109);
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v105);
            v116 = 0;
            CPROCESSATTACHHELPER::Attach(&ApcState, v27);
            KeEnterCriticalRegion();
            if ( *((_DWORD *)v29 + 122) && (*((_DWORD *)v29 + 102) & 4) != 0 )
            {
              v30 = DXGGLOBAL::GetGlobal();
              v31 = DXGGLOBAL::GetSessionData(v30);
              if ( !v31 )
              {
                LODWORD(v5) = -1073741811;
                v32 = PsGetCurrentProcessSessionId();
                WdLogSingleEntry2(2LL, v32, -1073741811LL);
                WdLogGlobalForLineNumber = 16494;
                v33 = PsGetCurrentProcessSessionId();
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
                  v33,
                  -1073741811LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( (int)v5 >= 0 )
                LODWORD(v5) = DXGSESSIONDATA::VailSendRemoteObjectTestCommand(
                                v31,
                                Pool2,
                                *((unsigned int *)a2 + 6),
                                0LL,
                                0LL,
                                0);
            }
            KeLeaveCriticalRegion();
            CPROCESSATTACHHELPER::Detach(&ApcState);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v109);
          }
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v105);
        }
      }
      if ( Object )
      {
        ObfDereferenceObject(Object);
        Object = 0LL;
      }
    }
    v18 = Src;
    goto LABEL_170;
  }
  if ( bTracingEnabled )
  {
    if ( v19 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
        goto LABEL_92;
      v48 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandHostToVmAsync;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
        goto LABEL_92;
      v48 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalAsync;
    }
    LODWORD(HandleInformation) = 0;
    McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v48, a3, 0LL, 0LL, HandleInformation);
  }
LABEL_92:
  if ( !v96 )
  {
    WdLogSingleEntry0(1LL);
    v49 = 16459LL;
LABEL_94:
    WdLogGlobalForLineNumber = v49;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"FALSE", v49, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_182;
  }
  v50 = DXG_VMBUS_CHANNEL_BASE::SendVmBusMessageAsync(v7, v113[1], v114);
  LODWORD(v5) = v50;
  if ( bTracingEnabled )
  {
    if ( *((_DWORD *)a2 + 3) )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
      {
        v53 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandEnd;
        goto LABEL_101;
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    {
      v53 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalEnd;
LABEL_101:
      LODWORD(HandleInformation) = 0;
      McTemplateK0pxqt_EtwWriteTransfer(v51, v53, v52, 0LL, 0LL, HandleInformation, v50);
    }
  }
LABEL_170:
  if ( (int)v5 < 0 )
    goto LABEL_181;
  v92 = *((_QWORD *)a2 + 5);
  if ( v97 < v92 )
  {
    WdLogSingleEntry2(4LL, *((_QWORD *)a2 + 5), v97);
    WdLogGlobalForLineNumber = 16650;
    LODWORD(v5) = -1073741823;
    goto LABEL_181;
  }
  if ( v18 )
  {
    v93 = (char *)*((_QWORD *)a2 + 4);
    if ( v93 )
    {
      if ( v92 )
      {
        if ( (unsigned __int64)&v93[v92] > MmUserProbeAddress || &v93[v92] <= v93 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v93, v18, v92);
      }
    }
  }
LABEL_182:
  if ( Pool2 && Pool2 != v123 && Pool2 != v113[0] )
    ExFreePoolWithTag(Pool2, 0);
  if ( Src && Src != v124 )
    ExFreePoolWithTag(Src, 0);
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v113);
  return (unsigned int)v5;
}
