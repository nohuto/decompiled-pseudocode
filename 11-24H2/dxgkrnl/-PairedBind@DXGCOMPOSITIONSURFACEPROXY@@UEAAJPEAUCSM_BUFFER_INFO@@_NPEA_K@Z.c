/*
 * XREFs of ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1401B61F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002DAC0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x140034740 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x140036D88 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHAEBUCSM_BUFFER_INFO@@IPEA_K@Z @ 0x140207CDC (-VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHAEBUCSM_BUFFER_INFO@@IPEA_K@Z.c)
 *     ?VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z @ 0x1402081EC (-VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z.c)
 *     ?VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z @ 0x1402086A4 (-VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402951D0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x140296878 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::PairedBind(
        DXGCOMPOSITIONSURFACEPROXY *this,
        struct _LUID *a2,
        unsigned __int8 a3,
        unsigned __int64 *a4)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  DXGADAPTER *v9; // rbx
  struct DXGADAPTER *v11; // rbx
  unsigned int v12; // ebx
  __int64 v13; // rdi
  struct _LUID v14; // rbx
  struct DXGPROCESS *Current; // r15
  DXGGLOBAL *v16; // rax
  DXGSESSIONDATA *SessionData; // r15
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v19; // eax
  __int64 v20; // rax
  unsigned int HighPart; // edx
  unsigned int i; // r8d
  __int64 v23; // rdx
  __int64 v24; // rcx
  void *v25; // rax
  void *v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rax
  unsigned int v33; // edx
  int v34; // eax
  int v35; // eax
  __int64 v36; // rbx
  unsigned __int64 v37; // rax
  __int64 v38; // [rsp+28h] [rbp-D8h]
  __int64 v39; // [rsp+30h] [rbp-D0h]
  _BYTE v41[4]; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v42; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v43; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v44; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v45; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v46[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v47[144]; // [rsp+90h] [rbp-70h] BYREF
  void *v48[32]; // [rsp+120h] [rbp+20h] BYREF

  memset(v48, 0, sizeof(v48));
  v42 = 0;
  v41[1] = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)v41);
  v44 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a2[22], &v44);
  v9 = v8;
  if ( !v8 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1500;
    DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)v41);
    return -1073741811LL;
  }
  v43 = 0LL;
  v45 = 0LL;
  DxgkpGetPairingAdapters(v8, 0, &v43, &v45, 0LL, 0LL, 0);
  DXGADAPTER::ReleaseReference(v9);
  v11 = v43;
  if ( v43 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v47, v43, 0LL);
    v13 = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v47, 0LL);
    DXGADAPTER::ReleaseReference(v11);
    if ( (int)v13 >= 0 )
    {
      v14 = *(struct _LUID *)((char *)v11 + 4764);
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v47);
      Current = DXGPROCESS::GetCurrent();
      if ( !Current )
      {
        v12 = -1073741811;
        WdLogSingleEntry1(2LL, -1073741811LL);
        WdLogGlobalForLineNumber = 1545;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Invalid process context. Returning 0x%I64x",
          -1073741811LL,
          0LL,
          0LL,
          0LL,
          0LL);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
        goto LABEL_32;
      }
      KeEnterCriticalRegion();
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v46, (struct DXGPROCESS *)((char *)Current + 104), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v46);
      if ( *((_DWORD *)Current + 122) && (*((_DWORD *)Current + 102) & 4) != 0 )
      {
        if ( *((_BYTE *)Current + 584) )
        {
          v16 = DXGGLOBAL::GetGlobal();
          SessionData = DXGGLOBAL::GetSessionData(v16);
          if ( SessionData )
          {
            v20 = *((unsigned int *)this + 5);
            if ( (_DWORD)v20 && *((_BYTE *)this + 40) )
            {
              HighPart = a2[20].HighPart;
              for ( i = 0; i < HighPart; v48[v24] = v25 )
              {
                v23 = 4LL * i;
                v24 = i++;
                v25 = (void *)a2[v23 + 21];
                a2[v23 + 21] = 0LL;
                a2[v23 + 22] = v14;
                HighPart = a2[20].HighPart;
              }
              v26 = (void *)a2[147];
              a2[147] = 0LL;
              v48[HighPart] = v26;
              v27 = DXGSESSIONDATA::VailSendCreateBundleObjectByPointer(SessionData, HighPart + 1, v48, &v42);
              LODWORD(v13) = v27;
              if ( v27 >= 0 )
              {
                v32 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v28, v30, v31);
                v32[3] = *((unsigned int *)this + 5);
                v32[4] = this;
                v32[5] = a3;
                v32[6] = a2[1];
                v33 = *((_DWORD *)this + 5);
                WdLogGlobalForLineNumber = 1584;
                v34 = DXGSESSIONDATA::VailSendBindCompositionSurface(
                        SessionData,
                        v33,
                        a3,
                        (const struct CSM_BUFFER_INFO *)a2,
                        v42,
                        a4);
                LODWORD(v13) = v34;
                if ( v34 < 0 )
                {
                  WdLogSingleEntry5(3LL, *((unsigned int *)this + 5), this, a3, *(_QWORD *)&a2[1], v34);
                  WdLogGlobalForLineNumber = 1594;
                }
              }
              else
              {
                WdLogSingleEntry2(3LL, v27, this);
                WdLogGlobalForLineNumber = 1575;
              }
              if ( v42 )
              {
                v35 = DXGSESSIONDATA::VailSendDestroyBundleObject(SessionData, v42);
                if ( v35 < 0 )
                {
                  v36 = v35;
                  WdLogSingleEntry2(2LL, v35, this);
                  WdLogGlobalForLineNumber = 1609;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000LL,
                    0xFFFFFFFFLL,
                    L"Failed SendDestroyBundleObject Returning 0x%I64x",
                    v36,
                    (__int64)this,
                    0LL,
                    0LL,
                    0LL);
                }
              }
              if ( (int)v13 >= 0 )
              {
                *((_BYTE *)this + 41) = 1;
                v37 = *a4;
                ++*((_DWORD *)this + 14);
                *((_QWORD *)this + 6) = v37;
              }
            }
            else
            {
              LODWORD(v13) = -1073741823;
              WdLogSingleEntry4(2LL, -1073741823LL, v20, *((unsigned __int8 *)this + 40), this);
              v39 = *((unsigned __int8 *)this + 40);
              v38 = *((unsigned int *)this + 5);
              WdLogGlobalForLineNumber = 1626;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"PairedBind is called without promote Returning  0x%I64x",
                -1073741823LL,
                v38,
                v39,
                (__int64)this,
                0LL);
            }
          }
          else
          {
            LODWORD(v13) = -1073741811;
            CurrentProcessSessionId = PsGetCurrentProcessSessionId();
            WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
            WdLogGlobalForLineNumber = 1545;
            v19 = PsGetCurrentProcessSessionId();
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
              v19,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
          }
        }
        else
        {
          LODWORD(v13) = -2147483611;
          WdLogSingleEntry1(3LL, -2147483611LL);
          WdLogGlobalForLineNumber = 1545;
        }
      }
      KeLeaveCriticalRegion();
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v46);
      if ( (int)v13 < 0 )
      {
        WdLogSingleEntry2(3LL, (int)v13, this);
        WdLogGlobalForLineNumber = 1636;
      }
    }
    else
    {
      WdLogSingleEntry2(3LL, v11, v13);
      WdLogGlobalForLineNumber = 1535;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
    v12 = v13;
    goto LABEL_32;
  }
  WdLogSingleEntry0(3LL);
  WdLogGlobalForLineNumber = 1521;
  v12 = -1073741811;
LABEL_32:
  DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)v41);
  return v12;
}
