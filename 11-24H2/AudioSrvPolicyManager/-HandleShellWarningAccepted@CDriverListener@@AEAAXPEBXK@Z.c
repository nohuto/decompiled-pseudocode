/*
 * XREFs of ?HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z @ 0x1800418EC
 * Callers:
 *     ?s_ShellWnfCallback@CDriverListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180041B00 (-s_ShellWnfCallback@CDriverListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001778C (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     WPP_SF_d @ 0x18002B464 (WPP_SF_d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CDriverListener::HandleShellWarningAccepted(CDriverListener *this, _DWORD *a2, int a3)
{
  int v4; // eax
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, GUID *, __int64); // rsi
  __int64 v9; // rcx
  __int64 *v10; // [rsp+20h] [rbp-50h]
  __int64 v11; // [rsp+40h] [rbp-30h] BYREF
  __int64 v12; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v13[20]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v14; // [rsp+64h] [rbp-Ch]
  int v15; // [rsp+6Ch] [rbp-4h]
  int v16; // [rsp+90h] [rbp+20h] BYREF
  int v17; // [rsp+A8h] [rbp+38h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  memset(v13, 0, sizeof(v13));
  v4 = 0;
  v14 = 0LL;
  v15 = 0;
  v16 = 0;
  if ( *((_DWORD *)this + 124) == 1 )
  {
    *((_DWORD *)this + 124) = 0;
    if ( a3 == 4 )
    {
      if ( a2 )
      {
        LOBYTE(v4) = *a2 == 1;
        v17 = v4;
        v5 = *(_QWORD *)g_DeviceEnumerator;
        v12 = 0LL;
        v6 = (*(__int64 (__fastcall **)(LPVOID, char *, __int64 *))(v5 + 40))(
               g_DeviceEnumerator,
               (char *)this + 12,
               &v12);
        if ( v6 < 0 )
          goto LABEL_11;
        v7 = v12;
        v8 = *(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v12 + 24LL);
        v9 = v11;
        v11 = 0LL;
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        v10 = &v11;
        v6 = v8(v7, &GUID_28f54685_06fd_11d2_b27a_00a0c9223196, 1LL);
        if ( v6 < 0
          || (v15 = 0,
              *(GUID *)v13 = GUID_45ffaaa0_6e1b_11d0_bcf2_444553540000,
              *(_DWORD *)&v13[16] = 57,
              LODWORD(v14) = 2,
              HIDWORD(v14) = *((unsigned __int16 *)this + 246),
              LODWORD(v10) = 4,
              v6 = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64, int *, __int64 *, int *))(*(_QWORD *)v11 + 24LL))(
                     v11,
                     v13,
                     32LL,
                     &v17,
                     v10,
                     &v16),
              v6 < 0) )
        {
LABEL_11:
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
          {
            WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_640341ffe704312f5290c3b127ee24a4_Traceguids, v6);
          }
        }
      }
    }
  }
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v11);
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v12);
}
