/*
 * XREFs of ?GetProtectedOutputController@CSystemAudioDeviceSharedBase@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x140074430
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x140065A6C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065D4C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetProtectedOutputController(
        CSystemAudioDeviceSharedBase *this,
        unsigned int a2,
        struct IAudioProtectedOutputController **a3)
{
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  int v7; // ebx
  __int64 v9; // [rsp+20h] [rbp-48h] BYREF
  __int128 v10; // [rsp+28h] [rbp-40h]
  __int128 v11; // [rsp+38h] [rbp-30h] BYREF

  v10 = *(_OWORD *)((char *)this + 88);
  v11 = v10;
  EtwEventActivityIdControl(4LL, &v11);
  *a3 = 0LL;
  v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 21);
  v9 = 0LL;
  v7 = (**v6)(v6, &GUID_69a95a38_c637_46a0_9fb2_1c939aebf2e8, &v9);
  if ( v7 < 0
    || (v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IAudioProtectedOutputController **))(*(_QWORD *)v9 + 24LL))(
               v9,
               a2,
               a3),
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9),
        v7 < 0) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x15u,
        (__int64)&WPP_14fbdab4759831348651410bb2c6c307_Traceguids,
        v7);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::GetProtectedOutputController", 403, v7);
  }
  EtwEventActivityIdControl(4LL, &v11);
  return (unsigned int)v7;
}
