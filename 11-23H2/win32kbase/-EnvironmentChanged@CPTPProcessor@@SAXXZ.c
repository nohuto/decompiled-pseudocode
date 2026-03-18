/*
 * XREFs of ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x1C006ED20
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x1C006EA60 (UpdateTPCurrentActiveState.c)
 *     RIMSetExtendedPointerDeviceProperty @ 0x1C0199910 (RIMSetExtendedPointerDeviceProperty.c)
 * Callees:
 *     ??9?$SGDHIDgpHidInput@PEAVCHidInput@@@@QEBA_NAEBQEAVCHidInput@@@Z @ 0x1C006ED7C (--9-$SGDHIDgpHidInput@PEAVCHidInput@@@@QEBA_NAEBQEAVCHidInput@@@Z.c)
 *     ?EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z @ 0x1C006EDB0 (-EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z.c)
 */

void __fastcall CPTPProcessor::EnvironmentChanged(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  if ( (unsigned __int8)SGDHIDgpHidInput<CHidInput *>::operator!=(a1, &v10) )
  {
    if ( *(_BYTE *)(SGDGetUserSessionState(v2, v1, v3, v4) + 3256) )
    {
      v9 = SGDGetUserSessionState(v6, v5, v7, v8);
      CBaseInput::EnumDevices(
        *(CBaseInput **)(v9 + 16840),
        0LL,
        lambda_8102d3965b5d38067ca2d55e8bb485aa_::_lambda_invoker_cdecl_);
    }
  }
}
