/*
 * XREFs of ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x14003ACD8
 * Callers:
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x1400295C0 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x14003AB70 (-OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140050BB0 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 * Callees:
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     WPP_SF_DDD @ 0x1400747A8 (WPP_SF_DDD.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSystemAudioDeviceSharedBase::SetGraphState(unsigned __int64 a1, int a2)
{
  __int64 v4; // r8
  int v5; // edi
  int v6; // eax
  __int64 (*v7)(void); // rax
  __int64 v9; // rdx
  __int128 v10; // [rsp+30h] [rbp-38h]
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]
  __int64 v13; // [rsp+58h] [rbp-10h]

  v10 = *(_OWORD *)(a1 + 104);
  v11 = v10;
  EtwEventActivityIdControl(4LL, &v11);
  v5 = -2147418113;
  switch ( a2 )
  {
    case 0:
      v7 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 184) + 80LL);
LABEL_7:
      v6 = v7();
      goto LABEL_8;
    case 1:
      v7 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 184) + 88LL);
      goto LABEL_7;
    case 2:
      v7 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 184) + 96LL);
      goto LABEL_7;
    case 3:
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 184) + 72LL))(
             *(_QWORD *)(a1 + 184),
             (a1 + 152) & ((unsigned __int128)-(__int128)a1 >> 64));
LABEL_8:
      v5 = v6;
      break;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0 )
  {
    v9 = ((v5 >> 31) & 0xFFFFFFFE) + 4;
    if ( *((unsigned __int8 *)WPP_GLOBAL_Control + 25) >= (int)v9 )
      WPP_SF_DDD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        v9,
        v4,
        *(unsigned int *)(a1 + 192),
        a2,
        v5,
        v10,
        *((_QWORD *)&v10 + 1),
        v11,
        *((_QWORD *)&v11 + 1),
        v12,
        v13);
  }
  if ( v5 < 0 )
    a2 = *(_DWORD *)(a1 + 192);
  *(_DWORD *)(a1 + 192) = a2;
  EtwEventActivityIdControl(4LL, &v11);
  return (unsigned int)v5;
}
