/*
 * XREFs of NtUserSetDisplayConfig @ 0x1C014A730
 * Callers:
 *     <none>
 * Callees:
 *     LogDiagSDC @ 0x1C0012030 (LogDiagSDC.c)
 *     xxxUserSetDisplayConfig @ 0x1C0012540 (xxxUserSetDisplayConfig.c)
 *     _QdcSdcTranslateStatusDefault @ 0x1C001EDBC (_QdcSdcTranslateStatusDefault.c)
 *     UserIsWddmConnectedSession @ 0x1C001EFF0 (UserIsWddmConnectedSession.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     CheckAccessEx @ 0x1C0091E70 (CheckAccessEx.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     DrvIsDisplayStateCurrent @ 0x1C0167580 (DrvIsDisplayStateCurrent.c)
 */

__int64 __fastcall NtUserSetDisplayConfig(
        unsigned int a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        __int64 a5)
{
  __int64 v7; // r12
  __int64 v8; // r14
  signed int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct tagTHREADINFO *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 (__fastcall *v17)(_QWORD, _QWORD, _QWORD); // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v19; // rax
  char v20; // al
  __int64 *v21; // rsi
  unsigned int v22; // esi
  unsigned int v23; // r15d
  __int64 v24; // rax
  ULONG64 v25; // rdx
  int v26; // eax
  unsigned int v27; // r14d
  __int64 v28; // rsi
  unsigned int v29; // esi
  unsigned int v30; // eax
  __int64 QuotaZInit; // rax
  int v32; // eax
  int v33; // eax
  __int64 v36; // [rsp+68h] [rbp-130h]
  unsigned int v37; // [rsp+84h] [rbp-114h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v38; // [rsp+88h] [rbp-110h]
  __int64 v39; // [rsp+B8h] [rbp-E0h] BYREF
  int v40; // [rsp+C0h] [rbp-D8h]
  unsigned int v41[2]; // [rsp+C8h] [rbp-D0h] BYREF
  __int64 v42; // [rsp+D0h] [rbp-C8h]
  __int64 v43; // [rsp+E0h] [rbp-B8h]
  __int64 v44; // [rsp+E8h] [rbp-B0h]
  __int128 v45; // [rsp+F0h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+100h] [rbp-98h]
  _QWORD v47[10]; // [rsp+110h] [rbp-88h] BYREF

  v7 = a1;
  v44 = a5;
  memset(v47, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v47[1]);
  v47[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v47[3]) = 29;
  LOBYTE(v47[6]) = -1;
  v41[0] = 0x2000;
  v41[1] = -1;
  v38 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v37 = 0;
  v39 = 0LL;
  v40 = 0;
  v43 = MEMORY[0xFFFFF78000000320];
  v8 = v43 * KeQueryTimeIncrement();
  v36 = v8;
  v9 = -1073741811;
  LOBYTE(v10) = 1;
  v14 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(v10, v11, v12, v13);
  gptiCurrent = v14;
  if ( v14 )
  {
    *((_DWORD *)v14 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
    if ( CurrentProcessWin32Process )
    {
      v15 = -*(_QWORD *)CurrentProcessWin32Process;
      v19 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v19 )
      {
        if ( (*(_DWORD *)(v19 + 12) & 0x8000) != 0 )
        {
          v15 = (__int64)gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v20 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v20 = 0;
          }
          if ( v20 )
          {
            while ( 1 )
            {
              v21 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v21[2] = 0LL;
              if ( !*(_DWORD *)(*v21 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              HMUnlockObject(*v21);
            }
          }
        }
      }
    }
  }
  if ( gbVideoInitialized )
  {
    v25 = (ULONG64)gptiCurrent + 424;
    if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)v25 + 768LL);
      v26 = *(_DWORD *)(v15 + 24) & 0x10;
    }
    else
    {
      v26 = 0;
    }
    if ( v26 || !CheckAccessEx((int *)(*(_QWORD *)v25 + 896LL), v41, 0LL) )
    {
      v9 = -1073741790;
      v22 = -2147483647;
      v23 = a3;
      v24 = v8;
    }
    else
    {
      if ( (unsigned int)v7 > 0x400 )
      {
        v22 = -2147483646;
        goto LABEL_17;
      }
      v42 = 0LL;
      v27 = 0;
      if ( !(_DWORD)v7 )
        goto LABEL_53;
      v28 = 216 * v7;
      if ( 216 * v7 )
      {
        if ( ((PsGetCurrentProcessWow64Process(v15, v25, v16) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
          ExRaiseDatatypeMisalignment();
        v25 = MmUserProbeAddress;
        if ( v28 + a2 > MmUserProbeAddress || v28 + a2 < a2 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      v29 = 0;
      v30 = 0;
      v15 = a2;
      while ( v30 < (unsigned int)v7 )
      {
        if ( *(__int64 *)v15 < 0 )
          ++v29;
        ++v30;
        v15 += 216LL;
      }
      if ( v29 )
      {
        QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                       (NSInstrumentation::CLeakTrackingAllocator *)v15,
                       v25,
                       216LL * v29,
                       0x63447355u);
        v38 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)QuotaZInit;
        if ( !QuotaZInit )
          ExRaiseStatus(-1073741801);
        v17 = qword_1C0295450;
        if ( qword_1C0295450 )
          qword_1C0295450(QuotaZInit, &v45, Win32FreePool);
      }
      v16 = (__int64)v38;
      v42 = (__int64)v38;
      v25 = 0LL;
      while ( (unsigned int)v25 < (unsigned int)v7 )
      {
        if ( *(__int64 *)a2 < 0 )
        {
          if ( v27 >= v29 )
          {
            v22 = -2147483645;
            v23 = a3;
            v24 = v36;
            goto LABEL_73;
          }
          *(_OWORD *)v16 = *(_OWORD *)a2;
          *(_OWORD *)(v16 + 16) = *(_OWORD *)(a2 + 16);
          *(_OWORD *)(v16 + 32) = *(_OWORD *)(a2 + 32);
          *(_OWORD *)(v16 + 48) = *(_OWORD *)(a2 + 48);
          *(_OWORD *)(v16 + 64) = *(_OWORD *)(a2 + 64);
          *(_OWORD *)(v16 + 80) = *(_OWORD *)(a2 + 80);
          *(_OWORD *)(v16 + 96) = *(_OWORD *)(a2 + 96);
          v15 = v16 + 128;
          *(_OWORD *)(v16 + 112) = *(_OWORD *)(a2 + 112);
          *(_OWORD *)(v16 + 128) = *(_OWORD *)(a2 + 128);
          *(_OWORD *)(v16 + 144) = *(_OWORD *)(a2 + 144);
          *(_OWORD *)(v16 + 160) = *(_OWORD *)(a2 + 160);
          *(_OWORD *)(v16 + 176) = *(_OWORD *)(a2 + 176);
          *(_OWORD *)(v16 + 192) = *(_OWORD *)(a2 + 192);
          *(_QWORD *)(v16 + 208) = *(_QWORD *)(a2 + 208);
          if ( *(__int64 *)v16 >= 0 )
          {
            v9 = -1073741790;
            v22 = -2147483644;
            v23 = a3;
            v24 = v36;
            goto LABEL_73;
          }
          ++v27;
          v16 += 216LL;
          v42 = v16;
        }
        v25 = (unsigned int)(v25 + 1);
        a2 += 216LL;
      }
      if ( v27 == v29 )
      {
LABEL_53:
        v37 = v27;
        if ( a4 )
        {
          if ( ((PsGetCurrentProcessWow64Process(v15, v25, v16) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( a4 + 12 > MmUserProbeAddress || a4 + 12 < a4 )
            *(_BYTE *)MmUserProbeAddress = 0;
          v39 = *(_QWORD *)a4;
          v40 = *(_DWORD *)(a4 + 8);
        }
        if ( HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
        {
          v22 = -2147483643;
          goto LABEL_16;
        }
        if ( !(unsigned int)UserIsWddmConnectedSession() )
        {
          v9 = -1073741790;
          v22 = -2147483642;
          goto LABEL_17;
        }
        if ( a4 && !(unsigned int)DrvIsDisplayStateCurrent(1LL, &v39) )
        {
          v9 = -1071774921;
          v22 = -2147483641;
          v23 = a3;
          v24 = v36;
          goto LABEL_74;
        }
        v22 = 18;
        v23 = a3;
        v32 = xxxUserSetDisplayConfig(v27, v38, a3, 0, 0LL, 1, v44, 0LL, 0LL, (__int64)v47, 0LL);
        v9 = v32;
        if ( v32 == -2147483643 )
        {
          v9 = -1073741789;
        }
        else if ( v32 != -1073741789 && (a3 & 0x10000) == 0 )
        {
          if ( v32 == -1071774970 )
            v9 = -2147023286;
          else
            v9 = QdcSdcTranslateStatusDefault(v32);
        }
        v24 = v36;
      }
      else
      {
        v22 = -2147483645;
        v23 = a3;
        v24 = v36;
      }
    }
LABEL_73:
    if ( v22 == 18 )
      goto LABEL_78;
    goto LABEL_74;
  }
  v22 = 0x80000000;
LABEL_16:
  v9 = -1073741823;
LABEL_17:
  v23 = a3;
  v24 = v36;
LABEL_74:
  LogDiagSDC(v37, (__int64)v38, v23, v9, 0, v22, v24, 0, 0LL);
LABEL_78:
  if ( v9 < 0 )
  {
    if ( a4 && !(unsigned int)DrvIsDisplayStateCurrent(0LL, &v39) )
      v9 = -1071774921;
  }
  else
  {
    if ( qword_1C0296060 )
      v33 = qword_1C0296060();
    else
      v33 = -1073741637;
    if ( v33 >= 0 && qword_1C0296068 )
      qword_1C0296068();
  }
  if ( v38 && qword_1C0295558 )
    qword_1C0295558(&v45);
  UserSessionSwitchLeaveCrit(v15, v25, v16, (__int64)v17);
  return (unsigned int)v9;
}
