/*
 * XREFs of ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x180007AD4
 * Callers:
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x1800074A8 (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?Initialize@CStoryboard@@MEAAJXZ @ 0x180007A30 (-Initialize@CStoryboard@@MEAAJXZ.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x1800143DC (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x1800149FC (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18001512C (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 * Callees:
 *     McTemplateU0qd_EtwEventWriteTransfer @ 0x180007B88 (McTemplateU0qd_EtwEventWriteTransfer.c)
 *     ?reset@?$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18001FF9C (-reset@-$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CStoryboard::_LogStoryboardEvent(CStoryboard *this, __int64 a2)
{
  int v3; // edx
  __int128 v4; // xmm0
  __int64 v5; // rcx
  _QWORD *v6; // rsi
  __int64 v7; // rdi
  void (__fastcall *v8)(__int64, __int128 *, _QWORD, _QWORD, _BYTE *, _QWORD, int); // rbx
  int v9; // eax
  __int128 v10; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B0h]
  int v12; // [rsp+58h] [rbp-A8h]
  __int128 v13; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+70h] [rbp-90h]
  int v15; // [rsp+78h] [rbp-88h]
  _BYTE v16[128]; // [rsp+80h] [rbp-80h] BYREF

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qd_EtwEventWriteTransfer(this, a2, *((unsigned int *)this + 6), *((unsigned int *)this + 7));
  if ( *((_DWORD *)this + 7) != -1 )
  {
    v3 = *((_DWORD *)this + 6);
    if ( (unsigned int)(v3 - 3) <= 1 )
    {
      v4 = *((_OWORD *)this + 2);
      v5 = *((_QWORD *)this + 4);
      v13 = 0LL;
      v10 = v4;
      if ( !v5 )
        v5 = *((_QWORD *)&v10 + 1) - *((_QWORD *)&v13 + 1);
      if ( v5 )
      {
        v6 = (_QWORD *)((char *)this + 80);
        if ( v3 == 3 )
        {
          wil::com_ptr_t<IDCompositionAnimationStats,wil::err_returncode_policy>::reset((char *)this + 80);
          if ( (int)DCompositionCreateAnimationStats((char *)this + 80) >= 0 )
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v6 + 24LL))(*v6, 0LL);
        }
        else if ( *v6 )
        {
          GetAnimationScenarioNameFromGUID((char *)this + 32, v16, 64LL);
          if ( (*(int (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*v6 + 88LL))(*v6, &v13) >= 0 )
          {
            v7 = *v6;
            v8 = *(void (__fastcall **)(__int64, __int128 *, _QWORD, _QWORD, _BYTE *, _QWORD, int))(*(_QWORD *)*v6
                                                                                                  + 216LL);
            v9 = (*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 32LL))(this);
            v10 = v13;
            v11 = v14;
            v12 = v15;
            v8(v7, &v10, 0LL, 0LL, v16, 0LL, v9);
          }
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v6 + 40LL))(*v6, 0LL);
          wil::com_ptr_t<IDCompositionAnimationStats,wil::err_returncode_policy>::reset((char *)this + 80);
        }
      }
    }
  }
}
