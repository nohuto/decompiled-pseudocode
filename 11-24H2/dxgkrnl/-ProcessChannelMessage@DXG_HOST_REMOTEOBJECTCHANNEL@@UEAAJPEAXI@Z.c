/*
 * XREFs of ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1401F2E80
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x140015E68 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x140038670 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x140039DBC (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x14003B884 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z @ 0x14003E524 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x14004F730 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x14004FB0C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z @ 0x1401F28F4 (-DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1403E8358 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1403E8498 (-AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z @ 0x1403F5B18 (-CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z.c)
 */

__int64 __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::ProcessChannelMessage(
        DXG_HOST_REMOTEOBJECTCHANNEL *this,
        unsigned int *a2,
        unsigned int a3)
{
  unsigned int v5; // ebx
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rbx
  struct _KPROCESS *v10; // rdx
  int *v11; // rdx
  __int64 v12; // rbx
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // r8
  int v18; // ecx
  _DWORD *v19; // r14
  struct _KPROCESS *v20; // rdx
  unsigned int v21; // r13d
  unsigned int v22; // eax
  __int64 v23; // r9
  int v24; // ecx
  DXGSHAREDVMOBJECT *v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  unsigned int i; // ebx
  DXGSHAREDVMOBJECT *v30; // rcx
  DXGSHAREDVMOBJECT *v31; // [rsp+50h] [rbp-B0h]
  struct DXGPROCESS *v32[2]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v33[16]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v34[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v35[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v36; // [rsp+98h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+C0h] [rbp-40h] BYREF
  char v38; // [rsp+F0h] [rbp-10h]
  struct _KAPC_STATE v39; // [rsp+F8h] [rbp-8h] BYREF
  char v40; // [rsp+128h] [rbp+28h]
  DXGSHAREDVMOBJECT *v41[16]; // [rsp+130h] [rbp+30h] BYREF
  void *v42[16]; // [rsp+1B0h] [rbp+B0h] BYREF
  int v43; // [rsp+230h] [rbp+130h] BYREF
  int BundleObjectCallback; // [rsp+234h] [rbp+134h]
  unsigned int v45[2]; // [rsp+238h] [rbp+138h] BYREF
  _DWORD v46[2]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v47; // [rsp+248h] [rbp+148h]

  if ( a3 < 0xC )
  {
    v5 = -1073741811;
    WdLogSingleEntry2(3LL, a3, -1073741811LL);
    WdLogGlobalForLineNumber = 35;
    return v5;
  }
  v7 = (int)a2[2];
  v8 = a2[2] - 1;
  if ( !v8 )
  {
    if ( a3 != 88 )
    {
      v5 = -1073741811;
      WdLogSingleEntry3(3LL, v7, a3, -1073741811LL);
      WdLogGlobalForLineNumber = 50;
      return v5;
    }
    v12 = *((_QWORD *)this + 3);
    if ( PsGetCurrentProcess(v7) != v12 && (unsigned __int8)PsGetProcessExitProcessCalled(v12) )
    {
      v5 = -1073741558;
      WdLogSingleEntry3(3LL, (int)a2[2], *((_QWORD *)this + 3), -1073741558LL);
      WdLogGlobalForLineNumber = 60;
      return v5;
    }
    v13 = a2[1];
    v43 = 1869901170;
    *(_QWORD *)v45 = 2LL;
    BundleObjectCallback = v13;
    memset(v42, 0, sizeof(v42));
    v14 = a2[4];
    if ( v14 > 0x10 )
    {
      v5 = -1073741811;
      WdLogSingleEntry2(3LL, v14, -1073741811LL);
      WdLogGlobalForLineNumber = 74;
      return v5;
    }
    v15 = a2[5];
    if ( v15 >= 2 )
    {
      v5 = -1073741811;
      WdLogSingleEntry2(3LL, v15, -1073741811LL);
      WdLogGlobalForLineNumber = 81;
      return v5;
    }
    v32[0] = (struct DXGPROCESS *)PsGetProcessDxgProcess(*((_QWORD *)this + 3));
    memset(v41, 0, sizeof(v41));
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v33);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v34, v32[0]);
    v16 = (a2[3] >> 6) & 0xFFFFFF;
    if ( v16 < *((_DWORD *)v32[0] + 74) )
    {
      v17 = *((_QWORD *)v32[0] + 35);
      if ( ((a2[3] >> 25) & 0x60) == (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0x60)
        && (*(_DWORD *)(v17 + 16LL * v16 + 8) & 0x2000) == 0 )
      {
        v18 = *(_DWORD *)(v17 + 16LL * v16 + 8) & 0x1F;
        if ( v18 )
        {
          if ( v18 == 12 )
          {
            v19 = *(_DWORD **)(v17 + 16LL * v16);
            if ( v19 )
            {
              DXGPROCESS::AcquireReference((DXGPROCESS *)v19);
              if ( (a2[5] & 1) != 0 )
              {
                v21 = 0;
                if ( a2[4] )
                {
                  while ( 1 )
                  {
                    v22 = (a2[v21 + 6] >> 6) & 0xFFFFFF;
                    if ( v22 >= *((_DWORD *)v32[0] + 74) )
                      break;
                    v23 = *((_QWORD *)v32[0] + 35);
                    if ( ((a2[v21 + 6] >> 25) & 0x60) != (*(_BYTE *)(v23 + 16LL * v22 + 8) & 0x60) )
                      break;
                    if ( (*(_DWORD *)(v23 + 16LL * v22 + 8) & 0x2000) != 0 )
                      break;
                    v24 = *(_DWORD *)(v23 + 16LL * v22 + 8) & 0x1F;
                    if ( !v24 )
                      break;
                    if ( v24 != 13 )
                    {
                      WdLogSingleEntry0(2LL);
                      WdLogGlobalForLineNumber = 318;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000LL,
                        0xFFFFFFFFLL,
                        L"Handle type mismatch",
                        318LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                      break;
                    }
                    v25 = *(DXGSHAREDVMOBJECT **)(v23 + 16LL * v22);
                    v31 = v25;
                    v26 = v21;
                    if ( !v25 )
                      goto LABEL_48;
                    DXGSHAREDVMOBJECT::AddReference(v25);
                    v42[v21] = (void *)*((_QWORD *)v31 + 1);
                    v27 = *(_DWORD *)v31;
                    v41[v21] = v31;
                    v28 = v21++;
                    a2[v28 + 6] = v27;
                    if ( v21 >= a2[4] )
                      goto LABEL_30;
                  }
                  v26 = v21;
LABEL_48:
                  WdLogSingleEntry2(3LL, a2[v26 + 6], -1073741811LL);
                  WdLogGlobalForLineNumber = 139;
                  BundleObjectCallback = -1073741811;
                  DXGPROCESS::ReleaseReference((DXGPROCESS *)v19);
                  v19 = 0LL;
                }
              }
              goto LABEL_30;
            }
LABEL_29:
            WdLogSingleEntry2(3LL, a2[3], -1073741811LL);
            WdLogGlobalForLineNumber = 110;
            BundleObjectCallback = -1073741811;
LABEL_30:
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v34);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v33);
            if ( v19 )
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v32, (struct DXGFASTMUTEX *const)(v19 + 26), 0);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v32);
              if ( (v19[102] & 0x100) != 0 && v19[10] == 1 )
              {
                v20 = (struct _KPROCESS *)*((_QWORD *)this + 3);
                v40 = 0;
                CPROCESSATTACHHELPER::Attach(&v39, v20);
                CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess(
                  (CEnsureCurrentDxgProcess *)v35,
                  (struct DXGPROCESS *)v19,
                  0);
                if ( v36 )
                {
                  BundleObjectCallback = DXG_HOST_REMOTEOBJECTCHANNEL::CreateBundleObjectCallback(
                                           this,
                                           a2[4],
                                           a2 + 6,
                                           v42,
                                           &v45[1]);
                }
                else
                {
                  WdLogSingleEntry2(3LL, a2[3], -1073741811LL);
                  WdLogGlobalForLineNumber = 172;
                  BundleObjectCallback = -1073741811;
                }
                CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)v35);
                CPROCESSATTACHHELPER::Detach(&v39);
              }
              else
              {
                WdLogSingleEntry2(3LL, a2[3], -1073741811LL);
                WdLogGlobalForLineNumber = 180;
                BundleObjectCallback = -1073741811;
              }
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v32);
            }
            for ( i = 0; i < a2[4]; ++i )
            {
              v30 = v41[i];
              if ( v30 )
              {
                DXGSHAREDVMOBJECT::ReleaseReference(v30);
                v41[i] = 0LL;
              }
            }
            if ( v19 )
            {
              DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v46);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v46);
              DXGPROCESS::ReleaseReference((DXGPROCESS *)v19);
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v46);
            }
            v11 = &v43;
            goto LABEL_60;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v19 = 0LL;
    goto LABEL_29;
  }
  if ( v8 != 2 )
  {
    v5 = -1073741811;
    WdLogSingleEntry2(3LL, v7, -1073741811LL);
    WdLogGlobalForLineNumber = 244;
    return v5;
  }
  if ( a3 != 16 )
  {
    v5 = -1073741811;
    WdLogSingleEntry3(3LL, v7, a3, -1073741811LL);
    WdLogGlobalForLineNumber = 212;
    return v5;
  }
  v9 = *((_QWORD *)this + 3);
  if ( PsGetCurrentProcess(v7) != v9 && (unsigned __int8)PsGetProcessExitProcessCalled(v9) )
  {
    v5 = -1073741558;
    WdLogSingleEntry3(3LL, (int)a2[2], *((_QWORD *)this + 3), -1073741558LL);
    WdLogGlobalForLineNumber = 222;
    return v5;
  }
  v10 = (struct _KPROCESS *)*((_QWORD *)this + 3);
  v47 = 4LL;
  v46[0] = 1869901170;
  v38 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, v10);
  v46[1] = DXG_HOST_REMOTEOBJECTCHANNEL::DestroyBundleObjectCallback(this, a2[3]);
  CPROCESSATTACHHELPER::Detach(&ApcState);
  v11 = v46;
LABEL_60:
  (*(void (__fastcall **)(_QWORD, int *, __int64))(**((_QWORD **)this + 1) + 24LL))(*((_QWORD *)this + 1), v11, 16LL);
  return 0LL;
}
