/*
 * XREFs of ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x140094030
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x140093270 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140022C10 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x1400354BC (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x140035C20 (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline @ 0x140094360 (Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x140094408 (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     ?StopVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x14018A170 (-StopVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?StartVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x14028320C (-StartVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1404300C8 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 */

void __fastcall BLTQUEUE::UpdateDisplayModeInfoWorker(BLTQUEUE *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  LARGE_INTEGER v4; // rax
  __int64 v5; // rcx
  LONGLONG v6; // rdx
  __int64 v7; // rcx
  LARGE_INTEGER v8; // rax
  int v9; // r9d
  unsigned int v10; // edx
  __int64 v11; // rdx
  int v12; // r9d
  unsigned int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _BYTE v17[8]; // [rsp+30h] [rbp-50h] BYREF
  DXGPUSHLOCK *v18; // [rsp+38h] [rbp-48h]
  int v19; // [rsp+40h] [rbp-40h]
  _BYTE v20[56]; // [rsp+48h] [rbp-38h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp+10h] BYREF

  if ( (unsigned int)((__int64 (*)(void))Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline)() )
  {
    KeWaitForSingleObject((char *)this + 600, Executive, 0, 0, 0LL);
    *((_QWORD *)this + 48) = *((_QWORD *)this + 86);
    KeReleaseMutex((PRKMUTEX)((char *)this + 600), 0);
  }
  else
  {
    *((_QWORD *)this + 48) = *((_QWORD *)this + 86);
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17, (struct _KTHREAD **)this + 53, 0);
  DXGPUSHLOCK::AcquireExclusive(v18);
  v19 = 2;
  if ( (unsigned int)((__int64 (*)(void))Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline)()
    && (unsigned int)Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline(v3, v2) )
  {
    DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v20, (KSPIN_LOCK *)this + 57, 1);
    PerformanceFrequency.QuadPart = 0LL;
    v4 = KeQueryPerformanceCounter(&PerformanceFrequency);
    v5 = *((unsigned int *)this + 96);
    *((LARGE_INTEGER *)this + 61) = v4;
    *((_QWORD *)this + 62) = PerformanceFrequency.QuadPart * *((unsigned int *)this + 97) / v5;
    DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v20);
  }
  else
  {
    PerformanceFrequency.QuadPart = 0LL;
    v8 = KeQueryPerformanceCounter(&PerformanceFrequency);
    v7 = *((unsigned int *)this + 96);
    *((LARGE_INTEGER *)this + 61) = v8;
    v6 = PerformanceFrequency.QuadPart * *((unsigned int *)this + 97) % v7;
    *((_QWORD *)this + 62) = PerformanceFrequency.QuadPart * *((unsigned int *)this + 97) / v7;
  }
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline(v7, v6) )
  {
    KeWaitForSingleObject((char *)this + 600, Executive, 0, 0, 0LL);
    v9 = *((_DWORD *)this + 174);
    v10 = 40 * v9 / 0x3E8u;
    *((_DWORD *)this + 126) = v10;
    *((_DWORD *)this + 127) = v9 + v10;
    *((_DWORD *)this + 128) = v9 + v10 + 5 * v9 / 0x3E8u;
    KeReleaseMutex((PRKMUTEX)((char *)this + 600), 0);
  }
  else
  {
    v12 = *((_DWORD *)this + 174);
    v13 = 40 * v12 / 0x3E8u;
    *((_DWORD *)this + 126) = v13;
    *((_DWORD *)this + 127) = v12 + v13;
    v11 = v12 + v13 + 5 * v12 / 0x3E8u;
    *((_DWORD *)this + 128) = v11;
  }
  if ( *(_QWORD *)this )
  {
    v11 = 4024LL * *((unsigned int *)this + 64);
    *((_DWORD *)this + 65) = *(_DWORD *)(v11 + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 88LL) + 128LL) + 1072);
  }
  if ( (*((_DWORD *)this + 268) & 2) != 0 && *((_DWORD *)this + 34) != 1 )
  {
    LOBYTE(v11) = 1;
    BLTQUEUE::StopVSync(this, v11, 4LL);
    LOBYTE(v14) = 1;
    BLTQUEUE::StartVSync(this, v14, 4LL);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17);
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline(v16, v15) )
  {
    KeWaitForSingleObject((char *)this + 600, Executive, 0, 0, 0LL);
    *((_DWORD *)this + 169) &= ~4u;
    KeReleaseMutex((PRKMUTEX)((char *)this + 600), 0);
  }
  else
  {
    *((_BYTE *)this + 658) = 0;
  }
  BLTQUEUE::FinishCommand(this, 0);
}
