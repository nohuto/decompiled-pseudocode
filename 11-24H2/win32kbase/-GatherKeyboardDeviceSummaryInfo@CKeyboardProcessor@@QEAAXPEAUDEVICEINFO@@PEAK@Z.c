/*
 * XREFs of ?GatherKeyboardDeviceSummaryInfo@CKeyboardProcessor@@QEAAXPEAUDEVICEINFO@@PEAK@Z @ 0x1401082D0
 * Callers:
 *     ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z @ 0x14006C4E8 (-ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z.c)
 * Callees:
 *     wcsncmp @ 0x1401A04E4 (wcsncmp.c)
 */

void __fastcall CKeyboardProcessor::GatherKeyboardDeviceSummaryInfo(
        CKeyboardProcessor *this,
        struct DEVICEINFO *a2,
        unsigned int *a3)
{
  const wchar_t *v3; // rcx
  unsigned __int16 v6; // si
  __int64 v7; // xmm0_8
  int v8; // ebx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int128 v13; // [rsp+20h] [rbp-18h]

  v3 = (const wchar_t *)*((_QWORD *)a2 + 25);
  if ( !v3 || wcsncmp(v3, L"\\??\\Root#RDP", 0xCuLL) )
  {
    LOBYTE(v3) = *((_BYTE *)a2 + 440);
    if ( (unsigned __int8)((_BYTE)v3 - 7) <= 1u || (_BYTE)v3 == 4 && *((_BYTE *)a2 + 441) != 0xFF )
    {
      v6 = *(_WORD *)(W32GetUserSessionState(v3) + 12836);
      v13 = *(_OWORD *)((char *)a2 + 440);
      v7 = *((_QWORD *)a2 + 57);
      v8 = *((_DWORD *)a2 + 116);
      UserSessionState = W32GetUserSessionState(v9);
      *(_OWORD *)(UserSessionState + 12832) = v13;
      *(_QWORD *)(UserSessionState + 12848) = v7;
      *(_DWORD *)(UserSessionState + 12856) = v8;
      if ( v6 > *(_WORD *)(W32GetUserSessionState(v11) + 12836) )
        *(_WORD *)(W32GetUserSessionState(v12) + 12836) = v6;
    }
  }
  ++*a3;
}
