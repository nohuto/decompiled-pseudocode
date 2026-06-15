/*
 * XREFs of ?UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z @ 0x1800375D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x18002DA28 (WPP_SF_.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x180039F88 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 */

_BOOL8 __fastcall CProcess::UseOfResourceAllowed(CProcess *this, int a2, enum ResourceType a3)
{
  BOOL v3; // ebx
  DWORD pcbData[6]; // [rsp+40h] [rbp-18h] BYREF
  int pvData; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  if ( g_PlaybackManager )
  {
    if ( a3 )
    {
      if ( a3 == ResourceTypeTheme )
        LOBYTE(v3) = (unsigned int)CApplicationManager::GetSoundLevel(this, this, 0LL, 0LL, 0LL) != 0;
      if ( v3 && a3 == ResourceTypeStatic )
        goto LABEL_11;
    }
    else if ( ((unsigned int)(a2 - 1) <= 1 || (unsigned int)(a2 - 10) <= 1)
           && (unsigned int)CApplicationManager::GetSoundLevel(this, this, 0LL, 0LL, 0LL) )
    {
LABEL_11:
      v3 = 1;
      if ( !*((_DWORD *)this + 105) && !*((_DWORD *)this + 117) && !*((_DWORD *)this + 118) )
      {
        pvData = 0;
        pcbData[0] = 4;
        if ( RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
               L"AllowClassicOffload",
               0x18u,
               0LL,
               &pvData,
               pcbData)
          || !pvData )
        {
          return 0;
        }
      }
    }
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x24u, &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids);
  }
  return v3;
}
