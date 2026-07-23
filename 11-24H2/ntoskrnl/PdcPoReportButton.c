/*
 * XREFs of PdcPoReportButton @ 0x14075C1A0
 * Callers:
 *     <none>
 * Callees:
 *     PopChangeCapability @ 0x140A61C60 (PopChangeCapability.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PdcPoReportButton(__int64 a1, __int64 a2)
{
  char v2; // bl
  char v3; // di
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+20h] [rbp-8h]

  v2 = a2;
  v3 = a1;
  PopAcquirePolicyLock(a1, a2);
  if ( (v3 & 1) != 0 )
  {
    if ( v2 )
      LOBYTE(v4) = 1;
    else
      v4 = 0LL;
    PopChangeCapability(&PopCapabilities, v4);
  }
  if ( (v3 & 2) != 0 )
  {
    if ( v2 )
      LOBYTE(v4) = 1;
    else
      v4 = 0LL;
    PopChangeCapability(&unk_140F0B661, v4);
  }
  if ( (v3 & 4) != 0 )
  {
    if ( v2 )
      LOBYTE(v4) = 1;
    else
      v4 = 0LL;
    PopChangeCapability(&unk_140F0B662, v4);
  }
  return PopReleasePolicyLock(v5, v4, v6, v7, v9);
}
