/*
 * XREFs of RtlBootStatusItemInfo @ 0x18013C2A4
 * Callers:
 *     RtlCheckBootStatusIntegrity @ 0x18013C2E0 (RtlCheckBootStatusIntegrity.c)
 *     RtlpGetSetBootStatusData @ 0x18013CAF8 (RtlpGetSetBootStatusData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlBootStatusItemInfo(int a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a1 < 0 || (unsigned __int64)a1 >= 0x13 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *a2 = RtlpBootStatusFields[2 * a1];
    *a3 = RtlpBootStatusFields[2 * a1 + 1];
  }
  return v3;
}
