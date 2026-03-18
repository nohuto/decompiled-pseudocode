/*
 * XREFs of NtUserUpdatePerUserSystemParameters @ 0x1C00D5920
 * Callers:
 *     <none>
 * Callees:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00D433C (xxxUpdatePerUserSystemParameters.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall NtUserUpdatePerUserSystemParameters(unsigned int a1)
{
  __int64 updated; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _BYTE v8[8]; // [rsp+20h] [rbp-68h] BYREF
  GUID ActivityId; // [rsp+28h] [rbp-60h] BYREF
  int v10; // [rsp+38h] [rbp-50h]
  char v11; // [rsp+50h] [rbp-38h]
  __int64 v12; // [rsp+60h] [rbp-28h]

  memset_0(v8, 0, 0x48uLL);
  EtwActivityIdControl(3u, &ActivityId);
  v12 = MEMORY[0xFFFFF78000000014];
  v10 = 32;
  v11 = -1;
  EnterCrit(0LL, 0LL);
  updated = (int)xxxUpdatePerUserSystemParameters((Gre::Base *)a1, (__int64)v8);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return updated;
}
