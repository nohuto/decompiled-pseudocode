/*
 * XREFs of ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x140006FE4
 * Callers:
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x14000E994 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 *     ?RemovePipeInternal@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_K@Z @ 0x14002F53C (-RemovePipeInternal@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_K@Z.c)
 * Callees:
 *     ?RemoveRenderConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x1400071DC (-RemoveRenderConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073E4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBDU_GUID@@@Z @ 0x1400074C0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBDU_GUID@@@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000764C (--1CPerfTracker@@QEAA@XZ.c)
 *     ?RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x14003D5EC (-RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x14006C314 (WPP_SF_q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CPipeInstance::DeactivateAPOsAndRemoveConnections(struct IAudioProcessor **this)
{
  struct IAudioProcessor *v2; // rcx
  struct IAudioProcessor *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  struct _GUID v7; // xmm6
  const struct _tlgProvider_t *v8; // rax
  struct IAudioProcessor *v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  CConnectionInstance *v12; // rcx
  unsigned __int64 v13; // r8
  struct IAudioProcessor *v14; // rdx
  unsigned __int64 v15[2]; // [rsp+20h] [rbp-138h] BYREF
  struct _GUID v16; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v17[240]; // [rsp+40h] [rbp-118h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 38LL, &WPP_ece7ed133f5c32246e9f73031954d020_Traceguids, this);
  }
  if ( *((_DWORD *)this + 29) )
  {
    v2 = this[19];
    if ( v2 )
    {
      v15[0] = 0LL;
      if ( (*(int (__fastcall **)(struct IAudioProcessor *, unsigned __int64 *))(*(_QWORD *)v2 + 32LL))(v2, v15) >= 0 )
      {
        v3 = this[3];
        while ( v3 )
        {
          v4 = *((_QWORD *)v3 + 2);
          v3 = (struct IAudioProcessor *)*((_QWORD *)v3 + 1);
          if ( *(_DWORD *)(v4 + 40) == 2 )
          {
            v5 = *(_QWORD *)(v4 + 32);
            v6 = *(_QWORD *)(v5 + 40);
            v15[1] = v6;
            if ( v6 )
              (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 8LL))(v6);
            v7 = *(struct _GUID *)(v5 + 8);
            v8 = AudioDgTelemetryProvider::Provider();
            v16 = v7;
            CPerfTracker::CPerfTracker((CPerfTracker *)v17, v8, "DeactivateApo", &v16);
            (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, unsigned __int64))(*(_QWORD *)this[19]
                                                                                                 + 64LL))(
              this[19],
              v15[0],
              v6);
            CPerfTracker::~CPerfTracker((CPerfTracker *)v17);
            if ( v6 )
              (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 16LL))(v6);
          }
        }
        v9 = this[8];
        while ( v9 )
        {
          v10 = (_QWORD *)*((_QWORD *)v9 + 2);
          v9 = *(struct IAudioProcessor **)v9;
          v11 = (_QWORD *)*v10;
          while ( v11 )
          {
            v12 = (CConnectionInstance *)v11[2];
            v11 = (_QWORD *)*v11;
            v13 = v15[0];
            v14 = this[19];
            if ( *((_DWORD *)v12 + 1) )
            {
              *((_DWORD *)v12 + 1) = 0;
              if ( *((_DWORD *)v12 + 4) )
              {
                if ( *((_DWORD *)v12 + 4) == 1 )
                  CConnectionInstance::RemoveCaptureConnection(v12, v14, v13);
              }
              else
              {
                CConnectionInstance::RemoveRenderConnection(v12, v14, v13);
              }
            }
          }
        }
        if ( (*(int (__fastcall **)(struct IAudioProcessor *, unsigned __int64))(*(_QWORD *)this[19] + 40LL))(
               this[19],
               v15[0]) >= 0 )
          *((_DWORD *)this + 29) = 0;
      }
    }
  }
}
