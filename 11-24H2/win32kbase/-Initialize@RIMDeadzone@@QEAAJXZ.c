/*
 * XREFs of ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x140124F6C
 * Callers:
 *     RIMInitializeDeadzone @ 0x140124D60 (RIMInitializeDeadzone.c)
 * Callees:
 *     ApiSetGetUserHandedness @ 0x140125320 (ApiSetGetUserHandedness.c)
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x140125418 (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x140125508 (-_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ.c)
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x14019CF00 (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 */

__int64 __fastcall RIMDeadzone::Initialize(RIMDeadzone *this)
{
  int UserHandedness; // eax
  int v3; // edi

  *((_DWORD *)this + 2) = 1;
  UserHandedness = ApiSetGetUserHandedness();
  ++*((_DWORD *)this + 1);
  v3 = UserHandedness;
  if ( UserHandedness != *(_DWORD *)this )
    RIMDeadzone::_ClearDeadzoneAreas(this);
  *((_DWORD *)this + 10) = 1;
  if ( v3 == 1 )
    return RIMDeadzone::_InitializeRightHandedDeadzone(this);
  else
    return RIMDeadzone::_InitializeLeftHandedDeadzone(this);
}
