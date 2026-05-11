/*
 * XREFs of GetModeFromAttributeList @ 0x14003EFC8
 * Callers:
 *     PinCreate @ 0x1400416B0 (PinCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetModeFromAttributeList(__int64 a1, unsigned __int64 a2, GUID *a3)
{
  char v3; // r9
  unsigned int v4; // ebx
  unsigned __int64 v5; // r10
  __int64 v6; // rdx
  unsigned int i; // r11d
  __int64 v8; // rcx
  unsigned __int64 v9; // rax

  v3 = 0;
  *a3 = AUDIO_SIGNALPROCESSINGMODE_RAW;
  if ( a2 < 8 )
    return 3221225485LL;
  v4 = *(_DWORD *)(a1 + 4);
  v5 = a2 - 8;
  v6 = a1 + 8;
  for ( i = 0; i < v4; ++i )
  {
    if ( v5 < 0x18 )
      return 3221225485LL;
    v8 = *(_QWORD *)(v6 + 8) - *(_QWORD *)&KSATTRIBUTEID_AUDIOSIGNALPROCESSING_MODE.Data1;
    if ( !v8 )
      v8 = *(_QWORD *)(v6 + 16) - *(_QWORD *)KSATTRIBUTEID_AUDIOSIGNALPROCESSING_MODE.Data4;
    if ( !v8 )
    {
      if ( v5 < 0x28 || *(_DWORD *)v6 != 40 )
        return 3221225485LL;
      v3 = 1;
      *a3 = *(GUID *)(v6 + 24);
    }
    v9 = (*(_DWORD *)v6 + 7) & 0xFFFFFFF8;
    if ( v5 < v9 )
      return 3221225485LL;
    v6 += v9;
    v5 -= v9;
  }
  return v3 == 0 ? 0xC0000225 : 0;
}
