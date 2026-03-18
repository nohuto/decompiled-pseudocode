/*
 * XREFs of ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x140408694
 * Callers:
 *     DxgkEscape @ 0x14041D630 (DxgkEscape.c)
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x140038794 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1401821C4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z @ 0x1401E8678 (-SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x140224378 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x14028A734 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x14030A940 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x14033A568 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 */

__int64 __fastcall DxgEscapeSuspendResumeProcess(
        struct _D3DKMT_ESCAPE *a1,
        unsigned __int8 *a2,
        struct DXGADAPTER *a3,
        void *a4,
        char a5,
        char a6)
{
  unsigned int v10; // ebx
  int v11; // eax
  struct DXGPROCESS *Process; // rax
  DXGPROCESS *v13; // r13
  __int64 v14; // rax
  UINT PrivateDriverDataSize; // edi
  struct _D3DDDI_ESCAPEFLAGS::$DB860278E5E511C34FE0F76D94154466::$9A2C51F7B5B2EC690ABA117774D32C3A Value; // ebx
  enum _D3DKMT_ESCAPETYPE Type; // esi
  int v18; // ebp
  int HostProcess; // eax
  _BYTE v21[8]; // [rsp+50h] [rbp-98h] BYREF
  void *v22; // [rsp+58h] [rbp-90h]
  __int64 v23; // [rsp+60h] [rbp-88h]
  int v24; // [rsp+68h] [rbp-80h]
  __int16 v25; // [rsp+6Ch] [rbp-7Ch]
  char v26; // [rsp+6Eh] [rbp-7Ah]

  v22 = a4;
  v23 = 0LL;
  v24 = 2048;
  v25 = 0;
  v26 = 0;
  v10 = 0;
  if ( a4 )
  {
    v11 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v21, 1);
    v10 = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry2(3LL, a4, v11);
      WdLogGlobalForLineNumber = 459;
      if ( (_BYTE)v25 )
        DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v21);
      return v10;
    }
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v21);
  }
  else
  {
    Process = DXGPROCESS::GetCurrent((__int64)a1);
  }
  v13 = Process;
  KeEnterCriticalRegion();
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)v13 + 216, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v13 + 28) = KeGetCurrentThread();
  v14 = *((_QWORD *)a3 + 391);
  if ( v14 )
  {
    if ( *((_BYTE *)a3 + 209) )
    {
      PrivateDriverDataSize = a1->PrivateDriverDataSize;
      Value = (struct _D3DDDI_ESCAPEFLAGS::$DB860278E5E511C34FE0F76D94154466::$9A2C51F7B5B2EC690ABA117774D32C3A)a1->Flags.Value;
      Type = a1->Type;
      v18 = *((_DWORD *)a3 + 1188);
      HostProcess = DXGPROCESS::GetHostProcess(v13);
      v10 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
              (struct DXGADAPTER *)((char *)a3 + 4664),
              HostProcess,
              v18,
              0,
              0,
              Type,
              (struct _D3DDDI_ESCAPEFLAGS)Value,
              PrivateDriverDataSize,
              a2);
    }
    else if ( *(_QWORD *)(v14 + 744) )
    {
      DXGPROCESS::SuspendResumeEscapeAllDevices((struct _KTHREAD **)v13, a3, a5, a6);
    }
  }
  KeLeaveCriticalRegion();
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v13 + 28) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v13 + 216, 0LL);
  KeLeaveCriticalRegion();
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v21);
  return v10;
}
