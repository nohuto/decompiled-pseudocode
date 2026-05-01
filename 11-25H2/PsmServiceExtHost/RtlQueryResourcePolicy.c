/*
 * XREFs of RtlQueryResourcePolicy @ 0x18006FC98
 * Callers:
 *     ?HampSystemGetQuiesceSerializationConfig@@YA?AW4_HAM_QUIESCE_SERIALIZATION@@XZ @ 0x18008FFA4 (-HampSystemGetQuiesceSerializationConfig@@YA-AW4_HAM_QUIESCE_SERIALIZATION@@XZ.c)
 *     RhpCaptureSnapshots @ 0x180091490 (RhpCaptureSnapshots.c)
 * Callees:
 *     RtlGetNtSystemRoot_0 @ 0x180073314 (RtlGetNtSystemRoot_0.c)
 *     RtlpQueryPhysicalMemoryPolicy @ 0x18009D020 (RtlpQueryPhysicalMemoryPolicy.c)
 */

__int64 __fastcall RtlQueryResourcePolicy(int a1, __int64 a2, __int64 a3)
{
  int v5; // ecx
  int v6; // ecx
  __int64 NtSystemRoot_0; // rax
  const wchar_t *v8; // rax

  if ( !a3 )
    return 3221225485LL;
  if ( !a1 )
    return RtlpQueryPhysicalMemoryPolicy(a3);
  v5 = a1 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        NtSystemRoot_0 = RtlGetNtSystemRoot_0();
        return RtlpQueryDiskWriteConstraintPolicy(NtSystemRoot_0, a3);
      }
      else
      {
        return 3221225475LL;
      }
    }
    else
    {
      return RtlpQueryDiskSpeedPolicy(a3);
    }
  }
  else
  {
    if ( (RtlGetSuiteMask() & 0x10000) != 0 )
      v8 = L"C:\\data\\programs\\windowsapps";
    else
      v8 = (const wchar_t *)RtlGetNtSystemRoot_0();
    return RtlpQueryDiskSpacePolicy(v8, a3);
  }
}
