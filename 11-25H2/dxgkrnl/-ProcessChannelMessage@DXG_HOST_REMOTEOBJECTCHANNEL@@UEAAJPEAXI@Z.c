/*
 * XREFs of ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1401ED470
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x140021E58 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1400389E4 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x14003B7FC (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x14003BEC4 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z @ 0x14003EB34 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x14004FCB0 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x14005008C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     Feature_722775354__private_IsEnabledDeviceUsageNoInline @ 0x140077708 (Feature_722775354__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z @ 0x1401ECEE4 (-DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x140348180 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1403482BC (-AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z @ 0x1403FBB80 (-CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z.c)
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
  __int64 v25; // rcx
  unsigned int i; // ebx
  DXGSHAREDVMOBJECT *v27; // rcx
  DXGPROCESS *v28; // [rsp+50h] [rbp-B0h]
  DXGSHAREDVMOBJECT *v29; // [rsp+58h] [rbp-A8h]
  struct DXGPROCESS *v30[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v31[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v32[24]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v33[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-60h]
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-38h] BYREF
  char v36; // [rsp+F8h] [rbp-8h]
  struct _KAPC_STATE v37; // [rsp+100h] [rbp+0h] BYREF
  char v38; // [rsp+130h] [rbp+30h]
  DXGSHAREDVMOBJECT *v39[16]; // [rsp+140h] [rbp+40h] BYREF
  void *v40[16]; // [rsp+1C0h] [rbp+C0h] BYREF
  int v41; // [rsp+240h] [rbp+140h] BYREF
  int BundleObjectCallback; // [rsp+244h] [rbp+144h]
  unsigned int v43[2]; // [rsp+248h] [rbp+148h] BYREF
  _QWORD v44[2]; // [rsp+250h] [rbp+150h] BYREF

  if ( a3 < 0xC )
  {
    v5 = -1073741811;
    WdLogSingleEntry2(3LL, a3, -1073741811LL);
    WdLogGlobalForLineNumber = 36;
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
      WdLogGlobalForLineNumber = 51;
      return v5;
    }
    v12 = *((_QWORD *)this + 3);
    if ( PsGetCurrentProcess(v7) != v12 && (unsigned __int8)PsGetProcessExitProcessCalled(v12) )
    {
      v5 = -1073741558;
      WdLogSingleEntry3(3LL, (int)a2[2], *((_QWORD *)this + 3), -1073741558LL);
      WdLogGlobalForLineNumber = 61;
      return v5;
    }
    v13 = a2[1];
    v41 = 1869901170;
    *(_QWORD *)v43 = 2LL;
    BundleObjectCallback = v13;
    memset(v40, 0, sizeof(v40));
    v14 = a2[4];
    if ( v14 > 0x10 )
    {
      v5 = -1073741811;
      WdLogSingleEntry2(3LL, v14, -1073741811LL);
      WdLogGlobalForLineNumber = 75;
      return v5;
    }
    v15 = a2[5];
    if ( v15 >= 2 )
    {
      v5 = -1073741811;
      WdLogSingleEntry2(3LL, v15, -1073741811LL);
      WdLogGlobalForLineNumber = 82;
      return v5;
    }
    v30[0] = (struct DXGPROCESS *)PsGetProcessDxgProcess(*((_QWORD *)this + 3));
    memset(v39, 0, sizeof(v39));
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v31);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v32, v30[0]);
    v16 = (a2[3] >> 6) & 0xFFFFFF;
    if ( v16 < *((_DWORD *)v30[0] + 74) )
    {
      v17 = *((_QWORD *)v30[0] + 35);
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
              v28 = (DXGPROCESS *)v19;
              if ( (a2[5] & 1) != 0 )
              {
                v21 = 0;
                if ( a2[4] )
                {
                  while ( 1 )
                  {
                    v44[0] = v19;
                    v22 = (a2[v21 + 6] >> 6) & 0xFFFFFF;
                    if ( v22 >= *((_DWORD *)v30[0] + 74) )
                      break;
                    v23 = *((_QWORD *)v30[0] + 35);
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
                        0x40000,
                        0xFFFFFFFFLL,
                        L"Handle type mismatch",
                        318LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                      break;
                    }
                    v29 = *(DXGSHAREDVMOBJECT **)(v23 + 16LL * v22);
                    if ( !v29 )
                      break;
                    if ( (unsigned int)Feature_722775354__private_IsEnabledDeviceUsageNoInline() )
                    {
                      DXGSHAREDVMOBJECT::AddReference(v29);
                      v39[v21] = v29;
                      v19 = (_DWORD *)v44[0];
                    }
                    v40[v21] = (void *)*((_QWORD *)v29 + 1);
                    v25 = v21++;
                    a2[v25 + 6] = *(_DWORD *)v29;
                    if ( v21 >= a2[4] )
                      goto LABEL_30;
                  }
                  WdLogSingleEntry2(3LL, a2[v21 + 6], -1073741811LL);
                  WdLogGlobalForLineNumber = 143;
                  BundleObjectCallback = -1073741811;
                  DXGPROCESS::ReleaseReference(v28);
                  v19 = 0LL;
                }
              }
              goto LABEL_30;
            }
LABEL_29:
            WdLogSingleEntry2(3LL, a2[3], -1073741811LL);
            WdLogGlobalForLineNumber = 111;
            BundleObjectCallback = -1073741811;
LABEL_30:
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v31);
            if ( v19 )
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, (struct DXGFASTMUTEX *const)(v19 + 26), 0);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
              if ( (v19[102] & 0x100) != 0 && v19[10] == 1 )
              {
                v20 = (struct _KPROCESS *)*((_QWORD *)this + 3);
                v38 = 0;
                CPROCESSATTACHHELPER::Attach(&v37, v20);
                CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess(
                  (CEnsureCurrentDxgProcess *)v33,
                  (struct DXGPROCESS *)v19,
                  0);
                if ( v34 )
                {
                  BundleObjectCallback = DXG_HOST_REMOTEOBJECTCHANNEL::CreateBundleObjectCallback(
                                           this,
                                           a2[4],
                                           a2 + 6,
                                           v40,
                                           &v43[1]);
                }
                else
                {
                  WdLogSingleEntry2(3LL, a2[3], -1073741811LL);
                  WdLogGlobalForLineNumber = 176;
                  BundleObjectCallback = -1073741811;
                }
                CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)v33);
                CPROCESSATTACHHELPER::Detach(&v37);
              }
              else
              {
                WdLogSingleEntry2(3LL, a2[3], -1073741811LL);
                WdLogGlobalForLineNumber = 184;
                BundleObjectCallback = -1073741811;
              }
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v30);
            }
            if ( (unsigned int)Feature_722775354__private_IsEnabledDeviceUsageNoInline() )
            {
              for ( i = 0; i < a2[4]; ++i )
              {
                v27 = v39[i];
                if ( v27 )
                {
                  DXGSHAREDVMOBJECT::ReleaseReference(v27);
                  v39[i] = 0LL;
                }
              }
            }
            if ( v19 )
            {
              DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v44);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v44);
              DXGPROCESS::ReleaseReference((DXGPROCESS *)v19);
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v44);
            }
            v11 = &v41;
            goto LABEL_62;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
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
    WdLogGlobalForLineNumber = 251;
    return v5;
  }
  if ( a3 != 16 )
  {
    v5 = -1073741811;
    WdLogSingleEntry3(3LL, v7, a3, -1073741811LL);
    WdLogGlobalForLineNumber = 219;
    return v5;
  }
  v9 = *((_QWORD *)this + 3);
  if ( PsGetCurrentProcess(v7) != v9 && (unsigned __int8)PsGetProcessExitProcessCalled(v9) )
  {
    v5 = -1073741558;
    WdLogSingleEntry3(3LL, (int)a2[2], *((_QWORD *)this + 3), -1073741558LL);
    WdLogGlobalForLineNumber = 229;
    return v5;
  }
  v10 = (struct _KPROCESS *)*((_QWORD *)this + 3);
  v44[1] = 4LL;
  LODWORD(v44[0]) = 1869901170;
  v36 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, v10);
  HIDWORD(v44[0]) = DXG_HOST_REMOTEOBJECTCHANNEL::DestroyBundleObjectCallback(this, a2[3]);
  CPROCESSATTACHHELPER::Detach(&ApcState);
  v11 = (int *)v44;
LABEL_62:
  (*(void (__fastcall **)(_QWORD, int *, __int64))(**((_QWORD **)this + 1) + 24LL))(*((_QWORD *)this + 1), v11, 16LL);
  return 0LL;
}
