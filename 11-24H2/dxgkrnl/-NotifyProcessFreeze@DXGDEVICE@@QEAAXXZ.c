/*
 * XREFs of ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1403BAAD8
 * Callers:
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1403999CC (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14000CBC0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x14000EE70 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x14002A350 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002F1A0 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034334 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x140047454 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ?VidMmSuspendResumeDevice@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@_N1@Z @ 0x140054440 (-VidMmSuspendResumeDevice@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@_N1@Z.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x14005D708 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?TrimAllDmaPoolsToMinimum@DXGDEVICE@@QEAAXXZ @ 0x1401BBCA4 (-TrimAllDmaPoolsToMinimum@DXGDEVICE@@QEAAXXZ.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x140376424 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1403B2418 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1403D2690 (-FlushPagingQueues@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::NotifyProcessFreeze(DXGDEVICE *this)
{
  DXGADAPTER *v2; // rcx
  bool v3; // si
  __int64 v4; // rax
  int *i; // rbx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // ebx
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  DXGDEVICE *v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+38h] [rbp-C8h]
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v15[8]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h]
  char v17; // [rsp+58h] [rbp-A8h]
  _BYTE v18[32]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v19[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v20[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v21[64]; // [rsp+C8h] [rbp-38h] BYREF
  DXGDEVICE *v22; // [rsp+108h] [rbp+8h]
  char v23; // [rsp+110h] [rbp+10h]

  v2 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL);
  if ( !*((_BYTE *)v2 + 209) )
  {
    v13 = 0;
    v12 = this;
    if ( DXGADAPTER::IsDxgmms2(v2) )
    {
      v3 = (unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v12) != 0;
    }
    else
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v12);
      v3 = 1;
    }
    v4 = *((_QWORD *)this + 2);
    v17 = 0;
    v16 = *(_QWORD *)(v4 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
    COREACCESS::COREACCESS((COREACCESS *)v20, *(struct DXGADAPTER *const *)(*((_QWORD *)this + 2) + 16LL));
    COREACCESS::COREACCESS((COREACCESS *)v21, *(struct DXGADAPTER *const *)(*((_QWORD *)this + 2) + 16LL));
    v22 = this;
    v23 = 0;
    if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v19, 0LL) < 0 )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v19);
    }
    else
    {
      DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v18, (struct _KTHREAD **)this + 50);
      for ( i = (int *)*((_QWORD *)this + 62); i != (int *)((char *)this + 496) && i; i = *(int **)i )
      {
        DXGADAPTER::NotifyContextCreation(
          *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL),
          (struct DXGCONTEXT *)i,
          0,
          i[95]);
        *((_BYTE *)i + 429) = 1;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18);
      if ( v3 )
      {
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v6 + 216) + 64LL) + 4232LL));
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)v19);
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
        {
          if ( *((_QWORD *)this + 241) )
          {
            v7 = *((_DWORD *)this + 480);
            Timeout.QuadPart = -5000000LL;
            do
            {
              v8 = v7;
              KeWaitForSingleObject(*((PVOID *)this + 241), Executive, 0, 0, &Timeout);
              v7 = *((_DWORD *)this + 480);
            }
            while ( v8 != v7 );
          }
          DXGDEVICE::FlushPagingQueues(this);
          LOBYTE(v9) = 1;
          VIDMM_EXPORT::VidMmSuspendResumeDevice(
            *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
            *((struct VIDMM_DEVICE **)this + 99),
            v9,
            1);
          DpiEnableD3Requests(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 216LL));
        }
        else
        {
          DXGDEVICE::FlushScheduler(this, 1, 0xFFFFFFFD, 0);
          DXGDEVICE::FlushDeferredDestruction(this, 0LL, 0, 0);
          DXGDEVICE::TrimAllDmaPoolsToMinimum(this);
        }
      }
      else
      {
        WdLogSingleEntry1(3LL, this);
        WdLogGlobalForLineNumber = 8120;
      }
      COREACCESS::~COREACCESS((COREACCESS *)v21, v10);
      COREACCESS::~COREACCESS((COREACCESS *)v20, v11);
    }
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v12);
  }
}
