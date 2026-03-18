/*
 * XREFs of ?PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA?AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POWER_STATE@@@Z @ 0x140005854
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x140003DBC (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x140076040 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x140005AE0 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_LL @ 0x1400A69E8 (WPP_IFR_SF_LL.c)
 *     __security_check_cookie @ 0x1400AC710 (__security_check_cookie.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolicyGetDeviceDeepestDeviceWakeState(FxPkgPnp *this, unsigned int SystemState)
{
  unsigned int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rdx
  unsigned int id; // ebx
  __int64 v8; // rax
  const _GUID *v9; // [rsp+20h] [rbp-48h]
  unsigned int v10[4]; // [rsp+40h] [rbp-28h]
  unsigned int v11; // [rsp+50h] [rbp-18h]
  unsigned int v12; // [rsp+54h] [rbp-14h]

  if ( !this->m_WakeFromShutdownOptIn )
  {
    if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, SystemState, 0xBu) )
    {
      if ( (int)v4 - 1 > v2 - 7 )
      {
        id = 1;
      }
      else
      {
        _mm_lfence();
        v5 = *(unsigned __int8 *)(v4 + v3 + 1035);
        v11 = v2 - 7;
        v12 = v2 - 7;
        *(__m128i *)v10 = _mm_load_si128((const __m128i *)&_xmm);
        if ( (unsigned __int8)v5 >= 6u )
          id = 0;
        else
          id = v10[v5];
      }
    }
    else
    {
      v8 = *(unsigned __int8 *)(v3 + 1036);
      v11 = v2 - 7;
      v12 = v2 - 7;
      *(__m128i *)v10 = _mm_load_si128((const __m128i *)&_xmm);
      if ( (unsigned __int8)v8 >= 6u )
      {
        id = 0;
LABEL_14:
        WPP_IFR_SF_LL(
          *(_FX_DRIVER_GLOBALS **)(v3 + 16),
          *(_BYTE *)(v3 + 1041),
          v2,
          v3,
          v9,
          *(unsigned __int8 *)(v3 + 1041),
          id);
        return id;
      }
      id = v10[v8];
    }
    if ( id && *(_BYTE *)(v3 + 1041) )
      return id;
    goto LABEL_14;
  }
  return 4LL;
}
