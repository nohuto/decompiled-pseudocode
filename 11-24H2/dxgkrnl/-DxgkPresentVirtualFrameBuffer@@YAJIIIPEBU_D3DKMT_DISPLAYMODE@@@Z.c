/*
 * XREFs of ?DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1403F4730
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14000CBC0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14000E830 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x14000EB90 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140023750 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14002BC70 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     ?VidSchControlVSyncDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_VIDSCH_VSYNC_REASON_DEVICE@@EI@Z @ 0x1400538FC (-VidSchControlVSyncDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_VIDSCH_VSYNC_REASON_DEVICE@.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1403F49F0 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 */

__int64 __fastcall DxgkPresentVirtualFrameBuffer(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const struct _D3DKMT_DISPLAYMODE *a4)
{
  unsigned int v6; // esi
  struct _KTHREAD **Current; // rax
  __int64 v8; // rcx
  unsigned int v9; // edi
  struct _KTHREAD **v10; // rbx
  __int64 CurrentProcess; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  struct DXGDEVICE **v15; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v17; // rbx
  int v18; // ecx
  __int64 v19; // rbx
  __int64 v20; // r15
  __int64 v21; // r9
  int v22; // eax
  unsigned int v23; // r14d
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  struct DXGCONTEXT *v26; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGHWQUEUE *v27; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v28[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v29[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v30[16]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v31[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v32[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v33[64]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v34[88]; // [rsp+E8h] [rbp-18h] BYREF

  v6 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  v9 = 0;
  v10 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v8);
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 4065;
    v13 = PsGetCurrentProcess(v12);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"0x%I64x Unexpected process 0x%I64x",
      -1073741811LL,
      v13,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v26 = 0LL;
  v27 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v31, v6, Current, &v26, 0, 1);
  v15 = (struct DXGDEVICE **)v26;
  if ( v26 )
  {
    DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v29, a2, v10, &v27, 0, 1);
    Global = DXGGLOBAL::GetGlobal();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, (struct DXGGLOBAL *)((char *)Global + 1600), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
    v17 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 185);
    v18 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 368);
    if ( v17 || v18 != 1 )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 397) != 4 )
      {
        v19 = (__int64)v15[2];
        v20 = *(_QWORD *)(v19 + 1896);
        if ( v20 == *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30, v15[2]);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v32, v19, 1, v21, 0);
          v22 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v32, 0LL);
          v23 = v22;
          if ( v22 < 0 )
          {
            WdLogSingleEntry2(4LL, v22, v19);
            WdLogGlobalForLineNumber = 4115;
            COREACCESS::~COREACCESS((COREACCESS *)v34, v24);
            COREACCESS::~COREACCESS((COREACCESS *)v33, v25);
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v28);
            DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v29);
            v9 = v23;
            goto LABEL_15;
          }
          if ( !*(_BYTE *)(v19 + 1952) )
          {
            VIDSCH_EXPORT::VidSchControlVSyncDevice(
              *(_QWORD *)(*(_QWORD *)(v20 + 3128) + 736LL),
              *(_QWORD *)(v19 + 800),
              3LL,
              1,
              0xFFFFFFFD);
            *(_BYTE *)(v19 + 1952) = 1;
          }
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v32);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
        }
      }
      v9 = PresentCddShadowBuffer((struct DXGCONTEXT *)v15, v27, a3);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v28);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v29);
      goto LABEL_15;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v28);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v29);
    v9 = -1073741823;
  }
LABEL_15:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v31);
  return v9;
}
