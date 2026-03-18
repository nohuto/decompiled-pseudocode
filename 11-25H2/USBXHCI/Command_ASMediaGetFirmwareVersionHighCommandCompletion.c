/*
 * XREFs of Command_ASMediaGetFirmwareVersionHighCommandCompletion @ 0x14003CEB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 */

LONG __fastcall Command_ASMediaGetFirmwareVersionHighCommandCompletion(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rsi
  int v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+38h] [rbp-10h]

  v1 = *(__int64 **)(a1 + 48);
  v2 = *v1;
  if ( *((_BYTE *)v1 + 43) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = (unsigned __int8)*((_DWORD *)v1 + 10);
      v5 = *((unsigned __int8 *)v1 + 41);
      v4 = *((unsigned __int8 *)v1 + 42);
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v2 + 16),
        4u,
        7u,
        0x17u,
        (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
        v4,
        v5,
        v6);
    }
    *(_QWORD *)(*(_QWORD *)(v2 + 8) + 728LL) |= ((unsigned __int8)*((_DWORD *)v1 + 10) | ((unsigned __int64)*(unsigned __int16 *)((char *)v1 + 41) << 8)) << 24;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(v2 + 8) + 728LL) = -1LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v2 + 16),
        3,
        7,
        24,
        (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
        *((_BYTE *)v1 + 43));
  }
  return KeSetEvent((PRKEVENT)(v1 + 13), 0, 0);
}
