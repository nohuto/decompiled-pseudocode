/*
 * XREFs of ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1402B0C60
 * Callers:
 *     ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1402B0900 (-DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x14029F130 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1402AF2F0 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z @ 0x1402B1160 (-AllocateElements@-$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1402B29CC (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1403260EC (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x14035E2D0 (-GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ.c)
 */

__int64 __fastcall DXGDEVICE::IssueSyncObjectOpForAllContexts(
        DXGDEVICE *this,
        struct DXGPROCESS *a2,
        unsigned int a3,
        unsigned __int64 a4,
        int a5)
{
  __int64 *v5; // r12
  __int64 *v6; // rbx
  DXGDEVICE *v8; // r15
  unsigned int v9; // edi
  unsigned int v10; // edi
  int v11; // r8d
  unsigned int v12; // r14d
  __int64 v13; // rbx
  __int64 *v14; // rdx
  unsigned int v15; // r8d
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  _BYTE *v20; // rcx
  _BYTE *v21; // rax
  __int64 *v23; // r14
  int v24; // eax
  const unsigned int *v25; // r13
  __int64 *v26; // rbx
  unsigned int v27; // r15d
  __int64 *i; // rdi
  __int64 v29; // rcx
  int v30; // eax
  _BYTE *v31; // rcx
  _BYTE *v32; // rax
  unsigned int v33; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGPROCESS *v34; // [rsp+68h] [rbp-98h]
  unsigned int v35[2]; // [rsp+70h] [rbp-90h] BYREF
  DXGDEVICE *v36; // [rsp+78h] [rbp-88h]
  unsigned __int64 v37[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v38; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v39[64]; // [rsp+98h] [rbp-68h] BYREF
  int v40; // [rsp+D8h] [rbp-28h]
  PVOID P; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v42[64]; // [rsp+E8h] [rbp-18h] BYREF
  int v43; // [rsp+128h] [rbp+28h]

  v5 = (__int64 *)((char *)this + 496);
  v6 = (__int64 *)*((_QWORD *)this + 62);
  *(_QWORD *)v35 = (char *)this + 496;
  v8 = this;
  v34 = a2;
  v9 = -1073741823;
  v36 = this;
  v37[0] = a4;
  if ( !a5 )
  {
    while ( v6 != v5 && v6 )
    {
      v17 = *((_DWORD *)v6 + 98);
      v35[0] = a3;
      if ( (v17 & 0x10) != 0 )
      {
        v23 = (__int64 *)v6[50];
        while ( 1 )
        {
          if ( v23 == v6 + 50 || !v23 )
          {
            v8 = v36;
            goto LABEL_19;
          }
          v24 = SubmitWaitForSyncObjectsFromGpu(1u, v35, v37, *((_DWORD *)v23 + 6), a2, 0, 1);
          v9 = v24;
          if ( v24 < 0 )
            break;
          v23 = (__int64 *)*v23;
          a2 = v34;
        }
        v8 = v36;
        WdLogSingleEntry2(4LL, v36, v24);
        WdLogGlobalForLineNumber = 6312;
      }
      else
      {
        v18 = WaitForSynchronizationObjectFromGpu(1u, v35, 0LL, a4, *((_DWORD *)v6 + 6), a2, 0, 1, 0, 0, 1);
        v9 = v18;
        if ( v18 < 0 )
        {
          WdLogSingleEntry2(4LL, v8, v18);
          WdLogGlobalForLineNumber = 6336;
          return v9;
        }
      }
      a2 = v34;
LABEL_19:
      v6 = (__int64 *)*v6;
      a4 = v37[0];
    }
    return v9;
  }
  v33 = a3;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  while ( v6 != v5 && v6 )
  {
    if ( (v6[49] & 0x10) != 0 )
      v12 += DXGCONTEXT::GetRenderHwQueueCount((DXGCONTEXT *)v6);
    else
      ++v10;
    v6 = (__int64 *)*v6;
  }
  if ( v11 )
  {
    v38 = 0LL;
    v40 = 0;
    v25 = (const unsigned int *)PagedPoolZeroedArray<unsigned int,16>::AllocateElements(&v38, v12);
    if ( v25 )
    {
      v26 = (__int64 *)*v5;
      v27 = 0;
      while ( v26 != v5 && v26 )
      {
        if ( (v26[49] & 0x10) != 0 )
        {
          for ( i = (__int64 *)v26[50]; i != v26 + 50 && i; i = (__int64 *)*i )
          {
            if ( v27 >= v12 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 6204;
              DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"i < NumHwQueues", 6204LL, 0LL, 0LL, 0LL, 0LL);
            }
            v29 = v27++;
            v25[v29] = *((_DWORD *)i + 6);
          }
          v5 = *(__int64 **)v35;
        }
        v26 = (__int64 *)*v26;
      }
      if ( v12 != v27 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6213;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NumHwQueues == i", 6213LL, 0LL, 0LL, 0LL, 0LL);
      }
      v30 = SubmitSignalSyncObjectsToHwQueue(1u, &v33, 0, v12, v25, v37, v34, 0, 1);
      v9 = v30;
      if ( v30 < 0 )
      {
        WdLogSingleEntry2(4LL, v36, v30);
        WdLogGlobalForLineNumber = 6231;
      }
      v20 = v38;
      v21 = v39;
      goto LABEL_25;
    }
    v31 = v38;
    v32 = v39;
  }
  else
  {
    P = 0LL;
    v43 = 0;
    v13 = PagedPoolZeroedArray<unsigned int,16>::AllocateElements(&P, v10);
    if ( v13 )
    {
      v14 = (__int64 *)*v5;
      v15 = 0;
      while ( v14 != v5 && v14 )
      {
        v16 = v15++;
        *(_DWORD *)(v13 + 4 * v16) = *((_DWORD *)v14 + 6);
        v14 = (__int64 *)*v14;
      }
      if ( v10 != v15 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6253;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NumContexts == i", 6253LL, 0LL, 0LL, 0LL, 0LL);
      }
      v19 = SignalSynchronizationObjectInternal(1LL, &v33, 0LL, v10, v13, 0LL, v37[0], 0LL, v34, 6);
      v9 = v19;
      if ( v19 < 0 )
      {
        WdLogSingleEntry2(4LL, v8, v19);
        WdLogGlobalForLineNumber = 6279;
      }
      v20 = P;
      v21 = v42;
LABEL_25:
      if ( v20 != v21 && v20 )
        ExFreePoolWithTag(v20, 0);
      return v9;
    }
    v31 = P;
    v32 = v42;
  }
  if ( v31 != v32 && v31 )
    ExFreePoolWithTag(v31, 0);
  return 3221225495LL;
}
