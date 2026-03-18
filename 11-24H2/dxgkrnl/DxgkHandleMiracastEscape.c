/*
 * XREFs of DxgkHandleMiracastEscape @ 0x1404028D8
 * Callers:
 *     DxgkEscape @ 0x140419AB0 (DxgkEscape.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A8E8 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140041998 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x1400419DC (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastGetDeviceContextFromLuid @ 0x14007EC3C (DpiMiracastGetDeviceContextFromLuid.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x14007F8A0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x14007FAF0 (DpiMiracastStopMiracastSessionSync.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DpiMiracastDdiMiracastIoControl @ 0x14024B464 (DpiMiracastDdiMiracastIoControl.c)
 *     DpiMiracastHandleStartSessionDone @ 0x14024BAD8 (DpiMiracastHandleStartSessionDone.c)
 *     DpiMiracastHandleStopSessionDone @ 0x14024BF5C (DpiMiracastHandleStopSessionDone.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402C78D0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402CA36C (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031DEEC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall DxgkHandleMiracastEscape(unsigned int a1, _QWORD *a2)
{
  int v3; // r14d
  __int64 v4; // r13
  _DWORD *Pool2; // r15
  char v6; // r12
  __int64 v8; // rcx
  __int64 *DeviceContextFromLuid; // rsi
  __int64 v10; // r8
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // eax
  struct _KEVENT *v20; // r9
  void *v21; // rcx
  NTSTATUS v22; // eax
  unsigned int v23; // eax
  char v24; // [rsp+40h] [rbp-B8h]
  char v25; // [rsp+42h] [rbp-B6h]
  char v26; // [rsp+43h] [rbp-B5h]
  int v27; // [rsp+44h] [rbp-B4h]
  void *Src; // [rsp+48h] [rbp-B0h]
  PVOID Object[4]; // [rsp+60h] [rbp-98h] BYREF
  _OWORD v30[4]; // [rsp+80h] [rbp-78h] BYREF

  Object[2] = a2;
  v3 = 0;
  v4 = 0LL;
  Pool2 = 0LL;
  Src = 0LL;
  v6 = 0;
  v24 = 0;
  v26 = 0;
  v25 = 0;
  if ( a1 < 0x38 )
  {
    WdLogSingleEntry1(2LL, -1073741789LL);
    WdLogGlobalForLineNumber = 4183;
    return 3221225507LL;
  }
  *((_DWORD *)a2 + 12) = 0;
  DeviceContextFromLuid = DpiMiracastGetDeviceContextFromLuid(*a2, 0);
  Object[1] = DeviceContextFromLuid;
  if ( !DeviceContextFromLuid )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 4212;
    return 3221225485LL;
  }
  if ( PsGetCurrentProcess(v8) == DeviceContextFromLuid[13] )
  {
    v11 = *((_DWORD *)a2 + 4);
    if ( !v11 || (Pool2 = (_DWORD *)ExAllocatePool2(257LL, v11, 1953656900LL)) != 0LL )
    {
      v12 = *((_DWORD *)a2 + 8);
      if ( !v12 || (Src = (void *)ExAllocatePool2(257LL, v12, 1953656900LL)) != 0LL )
      {
        if ( *((_DWORD *)a2 + 4) )
          memmove(Pool2, (const void *)a2[3], *((unsigned int *)a2 + 4));
        v13 = *((_DWORD *)a2 + 8);
        if ( v13 )
          ProbeForWrite((volatile void *)a2[5], v13, 1u);
        if ( (a2[1] & 6) != 0 )
        {
          AcquireMiniportListMutex();
          v6 = 1;
          v14 = DeviceContextFromLuid[54];
          if ( !v14 )
          {
            v3 = -1073741275;
            WdLogSingleEntry1(2LL, -1073741275LL);
            WdLogGlobalForLineNumber = 4332;
            goto LABEL_58;
          }
          v4 = *(_QWORD *)(v14 + 64);
          KeEnterCriticalRegion();
          if ( *(_BYTE *)(v4 + 484) )
            DpiCheckForOutstandingD3Requests(v4);
          ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
          v24 = 1;
          v15 = *(_DWORD *)(v4 + 236);
          if ( v15 != 2 && (*(_DWORD *)(v4 + 240) != 2 || ((v15 - 3) & 0xFFFFFFFC) != 0 || v15 == 4) )
          {
            v3 = -1073741130;
            WdLogSingleEntry1(2LL, -1073741130LL);
            WdLogGlobalForLineNumber = 4366;
            goto LABEL_58;
          }
          if ( (a2[1] & 4) != 0 )
          {
            v16 = DpiAcquireCoreSyncAccessSafe(DeviceContextFromLuid[54], *((_BYTE *)a2 + 12));
            v3 = v16;
            if ( v16 < 0 )
            {
              WdLogSingleEntry1(2LL, v16);
              WdLogGlobalForLineNumber = 4390;
              goto LABEL_58;
            }
            v26 = 1;
          }
        }
        if ( (a2[1] & 1) != 0 )
        {
          ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromLuid + 4);
          DeviceContextFromLuid[11] = (__int64)KeGetCurrentThread();
          v25 = 1;
        }
        v17 = *((_DWORD *)a2 + 2);
        switch ( v17 )
        {
          case 4:
            v3 = DpiMiracastDdiMiracastIoControl(
                   v4,
                   DeviceContextFromLuid[56],
                   *((unsigned int *)a2 + 4),
                   (__int64)Pool2,
                   *((_DWORD *)a2 + 8),
                   (__int64)Src,
                   (_DWORD *)a2 + 12);
            break;
          case 8:
            if ( *((_DWORD *)a2 + 4) >= 0x350u )
            {
              DpiMiracastHandleStartSessionDone((char *)DeviceContextFromLuid, (__int64)Pool2, v10);
            }
            else
            {
              v3 = -1073741811;
              WdLogSingleEntry2(2LL, 8LL, -1073741811LL);
              WdLogGlobalForLineNumber = 4442;
            }
            break;
          case 16:
            if ( *((_DWORD *)a2 + 4) >= 0x350u )
            {
              DpiMiracastHandleStopSessionDone((char *)DeviceContextFromLuid, (__int64)Pool2, v10);
            }
            else
            {
              v3 = -1073741811;
              WdLogSingleEntry2(2LL, 16LL, -1073741811LL);
              WdLogGlobalForLineNumber = 4468;
            }
            break;
          case 24:
            v20 = 0LL;
            if ( *((_DWORD *)a2 + 4) >= 0x18u )
            {
              v21 = (void *)*((_QWORD *)Pool2 + 1);
              if ( v21 )
              {
                Object[0] = 0LL;
                v22 = ObReferenceObjectByHandle(v21, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, Object, 0LL);
                v20 = (struct _KEVENT *)Object[0];
                v3 = v22;
                if ( v22 < 0 )
                {
                  WdLogSingleEntry1(2LL, v22);
                  WdLogGlobalForLineNumber = 4530;
                  v20 = 0LL;
                }
              }
              DpiMiracastStopMiracastSessionSync((char *)DeviceContextFromLuid, 0, 0LL, v20, Pool2[4], *Pool2);
            }
            else
            {
              v3 = -1073741811;
              WdLogSingleEntry1(2LL, -1073741811LL);
              WdLogGlobalForLineNumber = 4497;
            }
            break;
          case 32:
            memset(v30, 0, sizeof(v30));
            *((_BYTE *)DeviceContextFromLuid + 591) = 1;
            if ( *((_DWORD *)a2 + 4) >= 0x404u )
            {
              *((_BYTE *)Pool2 + 1023) = 0;
              v27 = 0;
              LOBYTE(v18) = 1;
              if ( (unsigned __int8)WdIsDebuggerPresent(v18) )
              {
                DbgPrintEx(0x65u, 0, (PCSTR)Pool2);
                __debugbreak();
                v27 = 1;
              }
              v19 = Pool2[256];
              v30[0] = 0x4000000006uLL;
              memset(&v30[1], 0, 28);
              LODWORD(v30[3]) = 74;
              *(_QWORD *)((char *)&v30[3] + 4) = __PAIR64__(v27, v19);
              HIDWORD(v30[3]) = 0;
              DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v30, 0x200000000LL);
            }
            else
            {
              v3 = -1073741811;
              WdLogSingleEntry1(2LL, -1073741811LL);
              WdLogGlobalForLineNumber = 4578;
            }
            break;
          default:
            v3 = -1073741637;
            WdLogSingleEntry1(2LL, -1073741637LL);
            WdLogGlobalForLineNumber = 4629;
            break;
        }
        v24 = v6;
        goto LABEL_58;
      }
      v3 = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 4270;
    }
    else
    {
      v3 = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 4252;
    }
  }
  else
  {
    v3 = -1073741790;
    WdLogSingleEntry1(2LL, -1073741790LL);
    WdLogGlobalForLineNumber = 4231;
  }
LABEL_58:
  if ( v3 >= 0 )
  {
    v23 = *((_DWORD *)a2 + 12);
    if ( *((_DWORD *)a2 + 8) >= v23 )
    {
      if ( v23 )
        memmove((void *)a2[5], Src, *((unsigned int *)a2 + 12));
    }
    else
    {
      v3 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 4652;
    }
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( v25 )
  {
    DeviceContextFromLuid[11] = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(DeviceContextFromLuid + 4);
  }
  if ( v26 )
    DpiReleaseCoreSyncAccessSafe(DeviceContextFromLuid[54], *((_BYTE *)a2 + 12));
  if ( v24 )
  {
    if ( *(_BYTE *)(v4 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
    KeLeaveCriticalRegion();
  }
  if ( v6 )
    ReleaseMiniportListMutex();
  DpiMiracastReleaseMiracastDeviceContext((int *)DeviceContextFromLuid, (unsigned int)DeviceContextFromLuid);
  return (unsigned int)v3;
}
