/*
 * XREFs of DxgkHandleMiracastEscape @ 0x14040A148
 * Callers:
 *     DxgkEscape @ 0x14041D630 (DxgkEscape.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A148 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140042008 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004204C (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastGetDeviceContextFromLuid @ 0x14007E5BC (DpiMiracastGetDeviceContextFromLuid.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x14007F220 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x14007F470 (DpiMiracastStopMiracastSessionSync.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DpiMiracastDdiMiracastIoControl @ 0x140244654 (DpiMiracastDdiMiracastIoControl.c)
 *     DpiMiracastHandleStartSessionDone @ 0x140244CC8 (DpiMiracastHandleStartSessionDone.c)
 *     DpiMiracastHandleStopSessionDone @ 0x14024514C (DpiMiracastHandleStopSessionDone.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402BA080 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402BD038 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14037580C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
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
  __int64 v11; // r9
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rax
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // eax
  struct _KEVENT *v21; // r9
  void *v22; // rcx
  NTSTATUS v23; // eax
  unsigned int v24; // eax
  char v25; // [rsp+40h] [rbp-B8h]
  char v26; // [rsp+42h] [rbp-B6h]
  char v27; // [rsp+43h] [rbp-B5h]
  int v28; // [rsp+44h] [rbp-B4h]
  void *Src; // [rsp+48h] [rbp-B0h]
  PVOID Object[4]; // [rsp+60h] [rbp-98h] BYREF
  _OWORD v31[4]; // [rsp+80h] [rbp-78h] BYREF

  Object[2] = a2;
  v3 = 0;
  v4 = 0LL;
  Pool2 = 0LL;
  Src = 0LL;
  v6 = 0;
  v25 = 0;
  v27 = 0;
  v26 = 0;
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
    v12 = *((_DWORD *)a2 + 4);
    if ( !v12 || (Pool2 = (_DWORD *)ExAllocatePool2(257LL, v12, 1953656900LL, v11)) != 0LL )
    {
      v13 = *((_DWORD *)a2 + 8);
      if ( !v13 || (Src = (void *)ExAllocatePool2(257LL, v13, 1953656900LL, v11)) != 0LL )
      {
        if ( *((_DWORD *)a2 + 4) )
          memmove(Pool2, (const void *)a2[3], *((unsigned int *)a2 + 4));
        v14 = *((_DWORD *)a2 + 8);
        if ( v14 )
          ProbeForWrite((volatile void *)a2[5], v14, 1u);
        if ( (a2[1] & 6) != 0 )
        {
          AcquireMiniportListMutex();
          v6 = 1;
          v15 = DeviceContextFromLuid[54];
          if ( !v15 )
          {
            v3 = -1073741275;
            WdLogSingleEntry1(2LL, -1073741275LL);
            WdLogGlobalForLineNumber = 4332;
            goto LABEL_58;
          }
          v4 = *(_QWORD *)(v15 + 64);
          KeEnterCriticalRegion();
          if ( *(_BYTE *)(v4 + 484) )
            DpiCheckForOutstandingD3Requests(v4);
          ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
          v25 = 1;
          v16 = *(_DWORD *)(v4 + 236);
          if ( v16 != 2 && (*(_DWORD *)(v4 + 240) != 2 || ((v16 - 3) & 0xFFFFFFFC) != 0 || v16 == 4) )
          {
            v3 = -1073741130;
            WdLogSingleEntry1(2LL, -1073741130LL);
            WdLogGlobalForLineNumber = 4366;
            goto LABEL_58;
          }
          if ( (a2[1] & 4) != 0 )
          {
            v17 = DpiAcquireCoreSyncAccessSafe(DeviceContextFromLuid[54], *((_BYTE *)a2 + 12));
            v3 = v17;
            if ( v17 < 0 )
            {
              WdLogSingleEntry1(2LL, v17);
              WdLogGlobalForLineNumber = 4390;
              goto LABEL_58;
            }
            v27 = 1;
          }
        }
        if ( (a2[1] & 1) != 0 )
        {
          ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromLuid + 4);
          DeviceContextFromLuid[11] = (__int64)KeGetCurrentThread();
          v26 = 1;
        }
        v18 = *((_DWORD *)a2 + 2);
        switch ( v18 )
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
            v21 = 0LL;
            if ( *((_DWORD *)a2 + 4) >= 0x18u )
            {
              v22 = (void *)*((_QWORD *)Pool2 + 1);
              if ( v22 )
              {
                Object[0] = 0LL;
                v23 = ObReferenceObjectByHandle(v22, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, Object, 0LL);
                v21 = (struct _KEVENT *)Object[0];
                v3 = v23;
                if ( v23 < 0 )
                {
                  WdLogSingleEntry1(2LL, v23);
                  WdLogGlobalForLineNumber = 4530;
                  v21 = 0LL;
                }
              }
              DpiMiracastStopMiracastSessionSync((char *)DeviceContextFromLuid, 0, 0LL, v21, Pool2[4], *Pool2);
            }
            else
            {
              v3 = -1073741811;
              WdLogSingleEntry1(2LL, -1073741811LL);
              WdLogGlobalForLineNumber = 4497;
            }
            break;
          case 32:
            memset(v31, 0, sizeof(v31));
            *((_BYTE *)DeviceContextFromLuid + 591) = 1;
            if ( *((_DWORD *)a2 + 4) >= 0x404u )
            {
              *((_BYTE *)Pool2 + 1023) = 0;
              v28 = 0;
              LOBYTE(v19) = 1;
              if ( (unsigned __int8)WdIsDebuggerPresent(v19) )
              {
                DbgPrintEx(0x65u, 0, (PCSTR)Pool2);
                __debugbreak();
                v28 = 1;
              }
              v20 = Pool2[256];
              v31[0] = 0x4000000006uLL;
              memset(&v31[1], 0, 28);
              LODWORD(v31[3]) = 74;
              *(_QWORD *)((char *)&v31[3] + 4) = __PAIR64__(v28, v20);
              HIDWORD(v31[3]) = 0;
              DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v31, 0x200000000LL);
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
        v25 = v6;
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
    v24 = *((_DWORD *)a2 + 12);
    if ( *((_DWORD *)a2 + 8) >= v24 )
    {
      if ( v24 )
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
  if ( v26 )
  {
    DeviceContextFromLuid[11] = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(DeviceContextFromLuid + 4);
  }
  if ( v27 )
    DpiReleaseCoreSyncAccessSafe(DeviceContextFromLuid[54], *((_BYTE *)a2 + 12));
  if ( v25 )
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
