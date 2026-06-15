/*
 * XREFs of ?InitializeVolumeInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x1400034F4
 * Callers:
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140003144 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x140065A6C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065D4C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPipeInstance::InitializeVolumeInterface(
        CPipeInstance *this,
        struct CProcessNode *a2,
        struct IAudioProcessingObject *a3)
{
  int v5; // ebx
  __int64 v7; // [rsp+20h] [rbp-60h] BYREF
  __int64 v8; // [rsp+28h] [rbp-58h] BYREF
  int v9; // [rsp+30h] [rbp-50h] BYREF
  GUID v10; // [rsp+34h] [rbp-4Ch]
  unsigned __int64 v11; // [rsp+44h] [rbp-3Ch]
  __int128 v12; // [rsp+50h] [rbp-30h] BYREF
  __int128 v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+70h] [rbp-10h]

  v7 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v8 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
         &v8) >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(*(_QWORD *)a2 + 8LL))(a2, &v7);
    if ( v5 < 0
      || (v5 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v7 + 48LL))(v7, &v12), v5 < 0)
      || (v9 = 28,
          v10 = GUID_06587e71_f043_403a_bf49_cb591ba6e103,
          v11 = __PAIR64__(HIDWORD(v13), v13),
          v5 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, int *))a3->lpVtbl->Initialize)(
                 a3,
                 28LL,
                 &v9),
          v5 < 0) )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_ece7ed133f5c32246e9f73031954d020_Traceguids);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeVolumeInterface", 0xCEBu, v5);
    }
  }
  else
  {
    v5 = 0;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v5;
}
