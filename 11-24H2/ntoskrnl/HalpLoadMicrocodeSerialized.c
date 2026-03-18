/*
 * XREFs of HalpLoadMicrocodeSerialized @ 0x140701CD0
 * Callers:
 *     HalpLoadMicrocode @ 0x140701A80 (HalpLoadMicrocode.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     KeSetSystemGroupAffinityThread @ 0x140339650 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14033A250 (KeRevertToUserGroupAffinityThread.c)
 *     HalpMcUpdateMicrocode @ 0x1404D1C2C (HalpMcUpdateMicrocode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void HalpLoadMicrocodeSerialized()
{
  ULONG ActiveProcessorCount; // eax
  char v1; // di
  __int64 v2; // rbx
  __int64 v3; // rsi
  unsigned int v4; // ecx
  __int64 v5; // rcx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v1 = 0;
  if ( ActiveProcessorCount )
  {
    v2 = 0LL;
    v3 = ActiveProcessorCount;
    do
    {
      v4 = *(_DWORD *)((char *)KiGlobalState + v2);
      Affinity.Reserved[1] = 0;
      Affinity.Reserved[2] = 0;
      *(_DWORD *)&Affinity.Group = (unsigned __int16)(v4 >> 6);
      Affinity.Mask = 1LL << (v4 & 0x3F);
      if ( v1 )
      {
        KeSetSystemGroupAffinityThread(&Affinity, 0LL);
      }
      else
      {
        KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
        v1 = 1;
      }
      HalpMcUpdateMicrocode(v5);
      v2 += 4LL;
      --v3;
    }
    while ( v3 );
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  }
}
