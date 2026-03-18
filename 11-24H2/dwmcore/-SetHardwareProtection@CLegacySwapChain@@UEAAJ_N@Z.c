/*
 * XREFs of ?SetHardwareProtection@CLegacySwapChain@@UEAAJ_N@Z @ 0x1802C9EF0
 * Callers:
 *     ?SetHardwareProtection@CConversionSwapChain@@UEAAJ_N@Z @ 0x1802CB8C0 (-SetHardwareProtection@CConversionSwapChain@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySwapChain::SetHardwareProtection(CLegacySwapChain *this, unsigned __int8 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // r9d
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v4 = *((_QWORD *)this + 33);
  v5 = 0;
  if ( !v4 )
  {
    v5 = -2003304307;
    v7 = -2003304307;
    v9 = 97;
    goto LABEL_10;
  }
  if ( *((_BYTE *)this + 100) != a2 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 208LL))(v4, a2);
    v5 = v6;
    if ( v6 < 0 )
    {
      v9 = 83;
    }
    else
    {
      *((_BYTE *)this + 100) = a2;
      v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 3) + 64LL))((char *)this - 24);
      v5 = v6;
      if ( v6 >= 0 )
      {
        *((_DWORD *)this + 120) = (*(__int64 (__fastcall **)(CLegacySwapChain *))(*(_QWORD *)this + 88LL))(this);
        return v5;
      }
      v9 = 88;
    }
    v7 = v6;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, v9, 0LL);
  }
  return v5;
}
