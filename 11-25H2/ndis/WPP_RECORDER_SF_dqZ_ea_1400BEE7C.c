/*
 * XREFs of WPP_RECORDER_SF_dqZ @ 0x1400BEE7C
 * Callers:
 *     ?ndisMUpdateNameOnPMWakePacket@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x140078610 (-ndisMUpdateNameOnPMWakePacket@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_dqZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        unsigned __int16 *a8)
{
  __int64 v9; // rcx
  const wchar_t *v10; // rdx
  const wchar_t *v11; // rax
  int v13; // [rsp+20h] [rbp-68h]

  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    goto LABEL_11;
  if ( !a8 )
  {
    v9 = 8LL;
    goto LABEL_7;
  }
  v9 = *a8;
  if ( !*a8 )
  {
LABEL_7:
    v10 = L"NULL";
    goto LABEL_8;
  }
  v10 = (const wchar_t *)*((_QWORD *)a8 + 1);
LABEL_8:
  v11 = a8;
  if ( !a8 )
    v11 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
    0x80u,
    &a6,
    4LL,
    &a7,
    8LL,
    v11,
    2LL,
    v10,
    v9,
    0LL);
LABEL_11:
  LOWORD(v13) = 128;
  return WppAutoLogTrace(a1, 3LL, 14LL, &WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids, v13, &a6, 4LL, &a7);
}
