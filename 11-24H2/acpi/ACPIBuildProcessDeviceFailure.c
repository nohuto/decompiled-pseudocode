/*
 * XREFs of ACPIBuildProcessDeviceFailure @ 0x140058D60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_LLqss @ 0x140020ABC (WPP_RECORDER_SF_LLqss.c)
 *     ACPIBuildProcessGenericComplete @ 0x14002AC50 (ACPIBuildProcessGenericComplete.c)
 */

__int64 __fastcall ACPIBuildProcessDeviceFailure(_QWORD *Entry)
{
  __int64 v1; // rbx
  int v3; // r10d
  char v4; // al
  const char *v5; // rcx
  const char *v6; // r8
  __int64 v7; // rdx
  int v9; // [rsp+20h] [rbp-38h]

  v1 = Entry[5];
  v3 = *((_DWORD *)Entry + 12);
  v4 = 0;
  v5 = byte_1400753E8;
  v6 = byte_1400753E8;
  if ( v1 )
  {
    v7 = *(_QWORD *)(v1 + 8);
    v4 = v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v5 = *(const char **)(v1 + 608);
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = *(const char **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      (__int64)v6,
      0x1Au,
      v9,
      *((_DWORD *)Entry + 8),
      v3,
      v4,
      v5,
      v6);
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x2000000000000uLL);
  return ACPIBuildProcessGenericComplete(Entry);
}
