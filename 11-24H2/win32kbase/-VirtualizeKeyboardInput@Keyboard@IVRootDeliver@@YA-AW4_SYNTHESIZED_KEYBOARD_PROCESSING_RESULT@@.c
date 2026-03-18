/*
 * XREFs of ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x14004FA04
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1401053D0 (NtMITSynthesizeKeyboardInput.c)
 * Callees:
 *     IsKeyboardIVEnabled @ 0x14004FB3C (IsKeyboardIVEnabled.c)
 *     isRootPartition @ 0x14004FB7C (isRootPartition.c)
 *     IsKeyStateCached @ 0x1400B7420 (IsKeyStateCached.c)
 *     VKFromVSC @ 0x1401157C0 (VKFromVSC.c)
 *     ?BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z @ 0x14021A304 (-BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z.c)
 *     ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x14021A5B8 (-SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x14021B14C (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

__int64 __fastcall IVRootDeliver::Keyboard::VirtualizeKeyboardInput(
        char a1,
        IVRootDeliver::Keyboard::Detail *a2,
        __int64 *a3,
        const struct _KEYBOARD_INPUT_DATA *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  void *v14; // r9
  __int16 v15; // ax
  unsigned __int8 v16; // si
  char v17; // al
  __int64 v18; // xmm0_8
  int v19; // r9d
  __int128 v20; // [rsp+20h] [rbp-28h] BYREF
  __int128 v21; // [rsp+30h] [rbp-18h]

  v8 = 0;
  if ( !(unsigned __int8)IsKeyboardIVEnabled() )
    return 1LL;
  if ( !(unsigned __int8)isRootPartition() )
    return 1LL;
  UserSessionState = W32GetUserSessionState(v9);
  if ( !CIVChannel::ContainerConnected(*(_DWORD *)(*(_QWORD *)(UserSessionState + 12928) + 1272LL)) )
    return 1LL;
  if ( (*(_WORD *)a2 || *((_WORD *)a2 + 1))
    && (a1 & 2) != 0
    && (unsigned int)IVRootDeliver::Keyboard::Detail::SendKeyboardInput(a2, (struct _UNICODE_STRING *)a3, a4, v14) )
  {
    return 0LL;
  }
  if ( (a1 & 1) == 0 )
    return 1LL;
  v15 = *((_WORD *)a3 + 2);
  if ( (v15 & 0x40) != 0 )
  {
    v16 = *((_BYTE *)a3 + 2);
  }
  else
  {
    if ( (v15 & 2) != 0 )
    {
      LOBYTE(v12) = -32;
    }
    else
    {
      v12 = 0LL;
      if ( (v15 & 4) != 0 )
        v12 = 225LL;
    }
    v17 = *((_BYTE *)a3 + 2) & 0x7F;
    v21 = 0LL;
    v20 = 0LL;
    LOBYTE(v20) = v17;
    v18 = *a3;
    DWORD2(v21) = *((_DWORD *)a3 + 2);
    *(_QWORD *)&v21 = v18;
    v16 = VKFromVSC(&v20, v12);
  }
  LOBYTE(v13) = v16;
  if ( !(unsigned __int8)IsKeyStateCached(v13) )
    return 1LL;
  LOBYTE(v8) = (unsigned int)IVRootDeliver::Keyboard::Detail::BroadcastAsyncKeyState(
                               a2,
                               (const struct CONTAINER_ID *)v16,
                               *((_WORD *)a3 + 2) & 1,
                               v19) == 0;
  return v8;
}
