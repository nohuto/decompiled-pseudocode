/*
 * XREFs of ?InitializeMeterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@I@Z @ 0x140003680
 * Callers:
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140003144 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x140065A6C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065D4C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPipeInstance::InitializeMeterInterface(
        CPipeInstance *this,
        struct CProcessNode *a2,
        struct IAudioProcessingObject *a3,
        int a4)
{
  int v7; // ebx
  __int64 v9; // [rsp+20h] [rbp-29h] BYREF
  __int64 v10; // [rsp+28h] [rbp-21h] BYREF
  int v11; // [rsp+30h] [rbp-19h] BYREF
  GUID v12; // [rsp+34h] [rbp-15h]
  __int128 v13; // [rsp+44h] [rbp-5h]
  __int128 v14; // [rsp+58h] [rbp+Fh] BYREF
  __int128 v15; // [rsp+68h] [rbp+1Fh]
  int v16; // [rsp+78h] [rbp+2Fh]

  v9 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0;
  v11 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v10 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_2b6a07f7_ea05_428b_a730_afb23c032f5c,
         &v10) >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(*(_QWORD *)a2 + 8LL))(a2, &v9);
    if ( v7 < 0 )
      goto LABEL_13;
    v7 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v9 + 48LL))(v9, &v14);
    if ( v7 < 0
      || (v11 = 36,
          v12 = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba,
          DWORD1(v13) = (int)((float)((float)(*((float *)&v15 + 3) * 10.0) / 1000.0) + 0.5),
          HIDWORD(v13) = a4,
          DWORD2(v13) = 10,
          LODWORD(v13) = v15,
          v7 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, int *))a3->lpVtbl->Initialize)(
                 a3,
                 36LL,
                 &v11),
          v7 < 0) )
    {
LABEL_13:
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 42LL, &WPP_ece7ed133f5c32246e9f73031954d020_Traceguids);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeMeterInterface", 0xD34u, v7);
    }
  }
  else
  {
    v7 = 0;
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v7;
}
