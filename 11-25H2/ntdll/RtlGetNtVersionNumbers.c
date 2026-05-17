/*
 * XREFs of RtlGetNtVersionNumbers @ 0x180111A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetNtVersionNumbers(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  struct _PEB *v3; // r9
  __int64 result; // rax

  v3 = NtCurrentPeb();
  if ( a1 )
  {
    result = v3->OSMajorVersion;
    *a1 = result;
  }
  if ( a2 )
  {
    result = v3->OSMinorVersion;
    *a2 = result;
  }
  if ( a3 )
  {
    result = v3->OSBuildNumber | 0xF0000000;
    *a3 = result;
  }
  return result;
}
