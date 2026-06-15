/*
 * XREFs of ?InitializeLimiterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x140003EB4
 * Callers:
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140003144 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x140065A6C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065D4C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPipeInstance::InitializeLimiterInterface(
        CPipeInstance *this,
        struct CProcessNode *a2,
        struct IAudioProcessingObject *a3)
{
  int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-60h] BYREF
  __int64 v9; // [rsp+28h] [rbp-58h] BYREF
  int v10; // [rsp+30h] [rbp-50h] BYREF
  GUID v11; // [rsp+34h] [rbp-4Ch]
  unsigned __int64 v12; // [rsp+44h] [rbp-3Ch]
  BOOL v13; // [rsp+4Ch] [rbp-34h]
  __int128 v14; // [rsp+50h] [rbp-30h] BYREF
  __int128 v15; // [rsp+60h] [rbp-20h]
  int v16; // [rsp+70h] [rbp-10h]

  v9 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v8 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_7df8824c_aec7_4119_9425_e6979172a8ae,
         &v9) >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(*(_QWORD *)a2 + 8LL))(a2, &v8);
    if ( v6 < 0
      || (v6 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v8 + 48LL))(v8, &v14), v6 < 0)
      || (v10 = 32,
          v11 = GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
          v12 = __PAIR64__(HIDWORD(v15), v15),
          v13 = *(_QWORD *)this == 0LL,
          v6 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, int *))a3->lpVtbl->Initialize)(
                 a3,
                 32LL,
                 &v10),
          v6 < 0) )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 48LL, &WPP_ece7ed133f5c32246e9f73031954d020_Traceguids);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeLimiterInterface", 0xEE7u, v6);
    }
  }
  else
  {
    v6 = 0;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v6;
}
