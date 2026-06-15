/*
 * XREFs of ?OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z @ 0x180069110
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x180069214 (-ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ.c)
 *     ?HardwareInitiatedChange@VolumeHardwareLogger@@QEAAXXZ @ 0x180080988 (-HardwareInitiatedChange@VolumeHardwareLogger@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x1800C480C (WPP_SF_q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVolumeHardware::OnNotify(CVolumeHardware *this, unsigned int a2, const struct _GUID *a3)
{
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 40LL, &WPP_39683fa90ec33421f15b53210ac19d77_Traceguids, this);
  }
  v6 = *(_QWORD *)&a3->Data1 - *((_QWORD *)this + 33);
  if ( *(_QWORD *)&a3->Data1 == *((_QWORD *)this + 33) )
    v6 = *(_QWORD *)a3->Data4 - *((_QWORD *)this + 34);
  if ( !v6 )
    return 0LL;
  CVolumeHardware::ReadChannelLevelsFromHardware(this);
  if ( !a2 )
  {
    v10 = EVENTCONTEXT_HARDWARE_INITIATED - *(_QWORD *)&a3->Data1;
    if ( EVENTCONTEXT_HARDWARE_INITIATED == *(_QWORD *)&a3->Data1 )
      v10 = 0x2ADE9700B0F38CBDLL - *(_QWORD *)a3->Data4;
    if ( !v10 )
      VolumeHardwareLogger::HardwareInitiatedChange((CVolumeHardware *)((char *)this + 288));
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 24LL))(
         *((_QWORD *)this + 16),
         a2,
         a3);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x630,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
