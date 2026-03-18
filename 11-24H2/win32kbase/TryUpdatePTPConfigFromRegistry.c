/*
 * XREFs of TryUpdatePTPConfigFromRegistry @ 0x140141C74
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x140166620 (_GetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     GetDWORDSettingValuesEx @ 0x1400A8BE0 (GetDWORDSettingValuesEx.c)
 *     IsValidMouseSensitivity @ 0x14013CF10 (IsValidMouseSensitivity.c)
 */

__int64 __fastcall TryUpdatePTPConfigFromRegistry(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rsi
  __int64 v3; // rcx
  _DWORD *v4; // rdi
  __int64 UserSessionState; // rax
  _DWORD *v6; // rbx
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax

  result = W32GetUserSessionState(a1);
  v2 = result;
  if ( !*(_DWORD *)(result + 17952) )
  {
    result = GetDWORDSettingValuesEx(0LL, *(_QWORD *)(result + 17960), 0x10u, 1);
    if ( (_DWORD)result )
    {
      v4 = *(_DWORD **)(v2 + 17960);
      UserSessionState = W32GetUserSessionState(v3);
      v6 = (_DWORD *)UserSessionState;
      if ( v4[55] )
        *(_DWORD *)(UserSessionState + 16784) |= 0x200u;
      v7 = v4[3];
      if ( v7 <= 4 )
        v6[4197] = v7;
      if ( IsValidMouseSensitivity((unsigned int)v4[7]) )
        v6[4198] = v4[7];
      v8 = v4[11];
      if ( v8 <= 0x64 )
        v6[4199] = v8;
      v9 = v4[15];
      if ( v9 <= 0x64 )
        v6[4200] = v9;
      v10 = v4[59];
      if ( v10 <= 0x64 )
        v6[4201] = v10;
      result = (unsigned int)v4[63];
      if ( (unsigned int)result <= 0x64 )
        v6[4202] = result;
      if ( v4[43] )
        v6[4196] |= 0x40u;
      if ( !v4[19] )
        v6[4196] &= ~1u;
      if ( !v4[39] )
        v6[4196] &= ~0x20u;
      if ( !v4[31] )
        v6[4196] &= ~8u;
      if ( !v4[27] )
        v6[4196] &= ~4u;
      if ( !v4[35] )
        v6[4196] &= ~0x10u;
      if ( !v4[47] )
        v6[4196] &= ~0x80u;
      if ( !v4[51] )
        v6[4196] &= ~0x100u;
      if ( !v4[23] )
        v6[4196] &= ~2u;
      *(_DWORD *)(v2 + 17952) = 1;
    }
  }
  return result;
}
