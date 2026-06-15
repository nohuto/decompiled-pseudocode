/*
 * XREFs of FillHrtfDesiredFormat @ 0x180138DC0
 * Callers:
 *     GetSupportedFormat @ 0x180138F60 (GetSupportedFormat.c)
 *     ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180139A10 (-IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FillHrtfDesiredFormat(unsigned int a1, unsigned __int16 a2, __int16 a3, int a4, __int64 a5)
{
  unsigned int v5; // ecx
  __int64 result; // rax

  *(_WORD *)a5 = -2;
  *(_WORD *)(a5 + 16) = 22;
  *(_DWORD *)(a5 + 4) = a4;
  *(_WORD *)(a5 + 14) = a2;
  *(_WORD *)(a5 + 18) = a3;
  *(_DWORD *)(a5 + 20) = a1;
  *(GUID *)(a5 + 24) = GUID_00000001_0000_0010_8000_00aa00389b71;
  v5 = (16843009
      * ((((a1 - ((a1 >> 1) & 0x55555555)) & 0x33333333)
        + (((a1 - ((a1 >> 1) & 0x55555555)) >> 2) & 0x33333333)
        + ((((a1 - ((a1 >> 1) & 0x55555555)) & 0x33333333) + (((a1 - ((a1 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 24;
  *(_WORD *)(a5 + 2) = v5;
  LOWORD(v5) = v5 * (a2 >> 3);
  *(_WORD *)(a5 + 12) = v5;
  result = a4 * (unsigned int)(unsigned __int16)v5;
  *(_DWORD *)(a5 + 8) = result;
  return result;
}
