/*
 * XREFs of ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1401CB914
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140416310 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000A520 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002BEF0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DD50 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002FE40 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?CallDxgkSignalEventCbAtDispatch@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z @ 0x14006F96C (-CallDxgkSignalEventCbAtDispatch@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_DrtTestSignalEventCbSyncFix__private_IsEnabledDeviceUsageNoInline @ 0x14006FAB8 (Feature_Servicing_GraphicsKernel_DrtTestSignalEventCbSyncFix__private_IsEnabledDeviceUsageNoInli.c)
 *     DxgkSignalEventCB @ 0x14007BCC0 (DxgkSignalEventCB.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PEAVDXGPAGINGQUEUE@@PEAE_N4@Z @ 0x140183008 (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PE.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018468C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1401F453C (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x14022AC64 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DrtTestSignalEventCb(struct ADAPTER_RENDER **a1, struct _D3DKMT_DRT_ESCAPE_HEAD *a2)
{
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v5; // r15
  __int64 v6; // rdi
  struct DXGGLOBAL *Global; // rax
  unsigned int v8; // ebx
  unsigned int v9; // eax
  __int64 v10; // rdx
  int v11; // ecx
  unsigned __int8 v12; // r8
  __int64 v13; // rax
  const wchar_t *v14; // r9
  unsigned int v15; // ebx
  unsigned int v16; // edi
  unsigned int HostProcess; // eax
  int v18; // eax
  void *v19; // rax
  int DxgAdapterSyncObject; // eax
  struct _KTHREAD **v21; // rcx
  _QWORD *v22; // rcx
  int v24; // eax
  _BYTE v25[16]; // [rsp+50h] [rbp-30h] BYREF
  _DXGKARGCB_SIGNALEVENT v26; // [rsp+60h] [rbp-20h] BYREF
  struct DXGADAPTERSYNCOBJECT *v27; // [rsp+B8h] [rbp+38h] BYREF

  if ( *((_DWORD *)a2 + 1) >= 0x20u )
  {
    *(_QWORD *)&v26.0 = 0LL;
    v27 = 0LL;
    Current = DXGPROCESS::GetCurrent();
    v5 = Current;
    if ( a1 )
    {
      if ( Current )
      {
        v6 = 0LL;
        Global = DXGGLOBAL::GetGlobal();
        DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v25, Global, 0);
        if ( !*((_BYTE *)a2 + 25) )
          goto LABEL_20;
        if ( (unsigned int)Feature_Servicing_GraphicsKernel_DrtTestSignalEventCbSyncFix__private_IsEnabledDeviceUsageNoInline() )
          DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v25);
        v8 = *((_DWORD *)a2 + 4);
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v5 + 248));
        v9 = (v8 >> 6) & 0xFFFFFF;
        if ( v9 < *((_DWORD *)v5 + 74) )
        {
          v10 = *((_QWORD *)v5 + 35);
          if ( ((v8 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0x60)
            && (*(_DWORD *)(v10 + 16LL * v9 + 8) & 0x2000) == 0 )
          {
            v11 = *(_DWORD *)(v10 + 16LL * v9 + 8) & 0x1F;
            if ( v11 )
            {
              if ( v11 == 8 )
              {
                v6 = *(_QWORD *)(v10 + 16LL * v9);
                goto LABEL_14;
              }
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
            }
          }
        }
        v6 = 0LL;
LABEL_14:
        _InterlockedDecrement((volatile signed __int32 *)v5 + 66);
        ExReleasePushLockSharedEx((char *)v5 + 248, 0LL);
        KeLeaveCriticalRegion();
        if ( !v6 )
        {
          WdLogSingleEntry1(2LL, *((_QWORD *)a2 + 2));
          v13 = *((_QWORD *)a2 + 2);
          v14 = L"Invalid sync object handle: 0x%I64x";
          WdLogGlobalForLineNumber = 100;
LABEL_16:
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v14, v13, 0LL, 0LL, 0LL, 0LL);
LABEL_31:
          LODWORD(v6) = -1073741811;
          goto LABEL_32;
        }
        if ( !*((_BYTE *)a1 + 209) )
        {
LABEL_24:
          v19 = (void *)*((_QWORD *)v5 + 8);
          v26.hDxgkProcess = v19;
          if ( *((_BYTE *)a2 + 25) )
          {
            v26.Flags |= 1u;
            DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v6 + 32));
            DxgAdapterSyncObject = DXGSYNCOBJECT::GetDxgAdapterSyncObject(
                                     (DXGSYNCOBJECT *)v6,
                                     a1[391],
                                     &v27,
                                     0LL,
                                     0LL,
                                     0,
                                     0);
            v21 = (struct _KTHREAD **)(v6 + 32);
            LODWORD(v6) = DxgAdapterSyncObject;
            DXGFASTMUTEX::Release(v21);
            if ( (int)v6 < 0 )
            {
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 137;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Failed to get adapter sync object",
                137LL,
                0LL,
                0LL,
                0LL,
                0LL);
LABEL_32:
              DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v25);
              return (unsigned int)v6;
            }
            v22 = (_QWORD *)*((_QWORD *)v27 + 5);
            v26.hEvent = v22;
            if ( !v22 || !v22[1] )
            {
              WdLogSingleEntry0(2LL);
              v13 = 144LL;
              v14 = L"Invalid CpuEvent object";
              WdLogGlobalForLineNumber = 144;
              goto LABEL_16;
            }
          }
          else
          {
            if ( !v19 )
              goto LABEL_31;
            v26.hEvent = (HANDLE)*((_QWORD *)a2 + 2);
          }
          if ( *((_BYTE *)a2 + 24) )
            v24 = CallDxgkSignalEventCbAtDispatch(&v26);
          else
            v24 = DxgkSignalEventCB(&v26);
          LODWORD(v6) = v24;
          goto LABEL_32;
        }
        *((_QWORD *)a2 + 2) = DXGSYNCOBJECT::GetHostHandle((DXGSYNCOBJECT *)v6, *((_DWORD *)a2 + 4), v12);
LABEL_20:
        if ( *((_BYTE *)a1 + 209) )
        {
          v15 = *((_DWORD *)a2 + 1);
          v16 = *((_DWORD *)a1 + 1188);
          HostProcess = DXGPROCESS::GetHostProcess(v5);
          v18 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                  (DXG_GUEST_VIRTUALGPU_VMBUS *)(a1 + 583),
                  HostProcess,
                  v16,
                  0,
                  0,
                  D3DKMT_ESCAPE_DRT_TEST,
                  0,
                  v15,
                  (unsigned __int8 *)a2);
          v6 = v18;
          if ( v18 < 0 )
          {
            WdLogSingleEntry1(2LL, v18);
            WdLogGlobalForLineNumber = 122;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Paravirtualized escape failed: 0x%I64x",
              v6,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          goto LABEL_32;
        }
        goto LABEL_24;
      }
    }
  }
  return 3221225485LL;
}
