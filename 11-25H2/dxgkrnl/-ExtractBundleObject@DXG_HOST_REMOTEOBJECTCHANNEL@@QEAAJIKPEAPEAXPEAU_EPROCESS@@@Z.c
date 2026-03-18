/*
 * XREFs of ?ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1401ED204
 * Callers:
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1401ECF7C (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x14004FCB0 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x14005008C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     DxgkExtractBundleObjectInternal @ 0x1401DD1F4 (DxgkExtractBundleObjectInternal.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x140348180 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1403482BC (-AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

__int64 __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::ExtractBundleObject(
        DXG_HOST_REMOTEOBJECTCHANNEL *this,
        unsigned int a2,
        unsigned int a3,
        void **a4,
        struct _EPROCESS *a5)
{
  __int64 v6; // rbx
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 result; // rax
  struct DXGFASTMUTEX *v11; // rax
  DXGSHAREDVMOBJECT *v12; // rax
  DXGSHAREDVMOBJECT *v13; // rsi
  struct _KPROCESS *v14; // rdx
  __int64 v15; // rcx
  _DWORD *v16; // rdi
  int BundleObjectInternal; // eax
  unsigned int v18; // edi
  _BYTE v19[16]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v20; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v21; // [rsp+70h] [rbp-90h]
  __int128 v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+90h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-68h] BYREF
  char v25; // [rsp+C8h] [rbp-38h]
  _BYTE v26[64]; // [rsp+D0h] [rbp-30h] BYREF

  v6 = a3;
  v8 = a2;
  if ( !a2 || a3 - 1 > 0xF || !a4 )
  {
    WdLogSingleEntry4(3LL, a2, a3, a4, -1073741811LL);
    WdLogGlobalForLineNumber = 573;
    return 3221225485LL;
  }
  v9 = *((_QWORD *)this + 3);
  if ( PsGetCurrentProcess(this) != v9 && (unsigned __int8)PsGetProcessExitProcessCalled(v9) )
  {
    WdLogSingleEntry2(3LL, *((_QWORD *)this + 3), -1073741558LL);
    result = 3221225738LL;
    WdLogGlobalForLineNumber = 585;
    return result;
  }
  v11 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, v11, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  v12 = (DXGSHAREDVMOBJECT *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 72LL))(
                               *((_QWORD *)this + 1),
                               (unsigned int)v8,
                               13LL);
  v13 = v12;
  if ( !v12 || *(_DWORD *)v12 != 16 )
  {
    WdLogSingleEntry1(2LL, v8);
    WdLogGlobalForLineNumber = 598;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid shared object handle: 0x%I64x",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v19);
    return 3221225485LL;
  }
  DXGSHAREDVMOBJECT::AddReference(v12);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v19);
  v14 = (struct _KPROCESS *)*((_QWORD *)this + 3);
  v25 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, v14);
  v23 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( (_DWORD)v6 )
  {
    v15 = v6;
    v16 = v26;
    while ( v15 )
    {
      *v16++ = 0x10000000;
      --v15;
    }
  }
  *(_QWORD *)&v20 = *((_QWORD *)v13 + 2);
  DWORD2(v20) = v6;
  *(_QWORD *)&v21 = v26;
  *((_QWORD *)&v21 + 1) = a4;
  BundleObjectInternal = DxgkExtractBundleObjectInternal(0LL, 0, a5, (ULONG64)&v20);
  v18 = BundleObjectInternal;
  if ( BundleObjectInternal < 0 )
  {
    WdLogSingleEntry1(3LL, BundleObjectInternal);
    WdLogGlobalForLineNumber = 642;
  }
  DXGSHAREDVMOBJECT::ReleaseReference(v13);
  CPROCESSATTACHHELPER::Detach(&ApcState);
  return v18;
}
