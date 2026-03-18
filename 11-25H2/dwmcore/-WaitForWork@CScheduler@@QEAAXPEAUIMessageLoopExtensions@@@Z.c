/*
 * XREFs of ?WaitForWork@CScheduler@@QEAAXPEAUIMessageLoopExtensions@@@Z @ 0x1800FF290
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800E6E20 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800FFE90 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?IsCurrent@CDisplayManager@@QEBA_N_N@Z @ 0x1801E6BE4 (-IsCurrent@CDisplayManager@@QEBA_N_N@Z.c)
 *     McTemplateU0qttttt_EventWriteTransfer @ 0x18022F74C (McTemplateU0qttttt_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??0CRenderThreadWaitTick@@QEAA@PEC_K@Z @ 0x180266C50 (--0CRenderThreadWaitTick@@QEAA@PEC_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScheduler::WaitForWork(CScheduler *this, struct IMessageLoopExtensions *a2)
{
  __int64 v3; // r8
  char *EventW; // rbx
  __int64 v6; // rsi
  __int64 v7; // r8
  HANDLE *v8; // rbx
  int v9; // eax
  unsigned int v10; // eax
  int v11; // eax
  DWORD *v12; // rdi
  bool v13; // r15
  unsigned __int8 v14; // si
  unsigned __int8 v15; // r12
  unsigned __int8 v16; // di
  unsigned __int8 v17; // bl
  CDisplayManager *v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  __int64 RemoteSessionOcclusionEvent; // rax
  signed int LastError; // eax
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+48h] [rbp-B8h] BYREF
  BOOL v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+58h] [rbp-A8h] BYREF
  int v27; // [rsp+60h] [rbp-A0h] BYREF
  int v28; // [rsp+68h] [rbp-98h] BYREF
  ULONGLONG *v29; // [rsp+70h] [rbp-90h] BYREF
  int v30; // [rsp+80h] [rbp-80h] BYREF
  int v31; // [rsp+84h] [rbp-7Ch]
  int v32; // [rsp+88h] [rbp-78h]
  __int64 v33; // [rsp+8Ch] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+A0h] [rbp-60h] BYREF
  int *v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  BOOL *v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  int *v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  int *v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  int *v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+120h] [rbp+20h] BYREF
  void *retaddr; // [rsp+178h] [rbp+78h]

  *((_QWORD *)this + 6) = qword_180406B98;
  v3 = qword_180406BA0;
  if ( (unsigned __int64)(qword_180406BA0 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( qword_180406B88 )
    {
      if ( byte_180406BB2 )
      {
        RemoteSessionOcclusionEvent = DwmGetRemoteSessionOcclusionEvent();
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          &qword_180406BA0,
          RemoteSessionOcclusionEvent);
      }
      else
      {
        EventW = (char *)CreateEventW(0LL, 0, 0, 0LL);
        if ( (unsigned __int64)(EventW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( (*(int (__fastcall **)(CDisplayManager *, char *, char *))(*(_QWORD *)qword_180406B88 + 176LL))(
                 qword_180406B88,
                 EventW,
                 (char *)&qword_180406BA8 + 4) >= 0 )
          {
            wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
              &qword_180406BA0,
              EventW);
            goto LABEL_6;
          }
        }
        else if ( !EventW || EventW == (char *)-1LL )
        {
          goto LABEL_6;
        }
        CloseHandle(EventW);
      }
LABEL_6:
      v3 = qword_180406BA0;
      goto LABEL_7;
    }
    v3 = 0LL;
  }
LABEL_7:
  *((_QWORD *)this + 7) = v3;
  v6 = (unsigned int)(v3 != 0) + 4;
  CRenderThreadWaitTick::CRenderThreadWaitTick((CRenderThreadWaitTick *)&v29, (volatile unsigned __int64 *)a2);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_WFW_Start,
      v7,
      1u,
      &v45);
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    McGenEventWrite_EventWriteTransfer(Microsoft_Windows_Dwm_Compositor_Context, &WaitForWork_Start, v7, 1u, &v46);
  v23 = 0;
  v8 = (HANDLE *)((char *)this + 24);
  while ( 1 )
  {
    v9 = (*(__int64 (__fastcall **)(struct IMessageLoopExtensions *, _QWORD, char *, __int64, _DWORD, int *))(*(_QWORD *)a2 + 32LL))(
           a2,
           (unsigned int)v6,
           (char *)this + 24,
           0xFFFFFFFFLL,
           0,
           &v23);
    if ( v9 >= 0 )
    {
      v10 = v23;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x82u, 0LL);
      v10 = -1;
      v23 = -1;
    }
    if ( v10 < (unsigned int)v6 )
      break;
    v11 = (*(__int64 (__fastcall **)(struct IMessageLoopExtensions *, __int64))(*(_QWORD *)a2 + 24LL))(a2, 3LL);
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x8Fu, 0LL);
  }
  v31 = 258;
  v12 = (DWORD *)&v30;
  v32 = 258;
  v33 = 258LL;
  do
  {
    *v12++ = WaitForSingleObject(*v8++, 0);
    --v6;
  }
  while ( v6 );
  v13 = !v23 || !v30;
  v14 = v23 == 1 || !v31;
  v15 = v23 == 2 || !v32;
  v16 = v23 == 3 || !(_DWORD)v33;
  v17 = v23 == 4 || !HIDWORD(v33);
  if ( !CancelWaitableTimer(*((HANDLE *)this + 1)) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    ModuleFailFastForHRESULT(LastError, retaddr);
  }
  *((_DWORD *)this + 4) = -1;
  if ( v16 )
    CDisplayManager::IsCurrent(v18, 1);
  if ( v17 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_DXGI_OCCLUSION_EVENT,
        v19,
        1u,
        &v47);
    *(_BYTE *)(*((_QWORD *)g_pComposition + 77) + 754LL) = 1;
  }
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    McTemplateU0qttttt_EventWriteTransfer(v16, v15, v23, v13, v14, v15, v16, v17);
  v20 = dword_180406E68;
  if ( v13 )
  {
    v20 = dword_180406E68 | 8;
    dword_180406E68 |= 8u;
  }
  if ( v13 & 2 | (2 * v14) & 2 )
  {
    v20 |= 0x10u;
    dword_180406E68 = v20;
  }
  if ( v13 & 4 | ((unsigned __int8)(2 * v14) | (unsigned __int8)(4 * v15)) & 4 )
  {
    v20 |= 2u;
    dword_180406E68 = v20;
  }
  if ( ((v13 | (unsigned __int8)((8 * v17) | (2 * v14) | (4 * v15))) & 8) != 0 )
    dword_180406E68 = v20 | 4;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
  {
    v27 = v15;
    v26 = v14;
    v25 = v13;
    v24 = v23;
    v35 = &v24;
    v37 = &v25;
    v39 = &v26;
    v41 = &v27;
    v43 = &v28;
    v28 = v17;
    v36 = 4LL;
    v38 = 4LL;
    v40 = 4LL;
    v42 = 4LL;
    v44 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_WFW_Stop,
      v19,
      6u,
      &v34);
  }
  *v29 = GetTickCount64();
}
