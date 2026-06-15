/*
 * XREFs of ?OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z @ 0x180011000
 * Callers:
 *     <none>
 * Callees:
 *     ?TsSessionIdGetUserDuckingPreference@@YAKK@Z @ 0x180011090 (-TsSessionIdGetUserDuckingPreference@@YAKK@Z.c)
 */

void __fastcall CDuckingManager::OnStreamCreatedInTsSession(CDuckingManager *this, unsigned int a2)
{
  unsigned int UserDuckingPreference; // eax
  unsigned int v5; // eax
  float v6; // xmm0_4

  UserDuckingPreference = TsSessionIdGetUserDuckingPreference(a2);
  *((_DWORD *)this + 90) = UserDuckingPreference;
  if ( UserDuckingPreference )
  {
    v5 = UserDuckingPreference - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
        v6 = FLOAT_N6_0;
      else
        v6 = 0.0;
    }
    else
    {
      v6 = FLOAT_N18_0;
    }
  }
  else
  {
    v6 = FLOAT_N96_0;
  }
  *(float *)(*((_QWORD *)this + 48) + 8LL) = v6;
  CWindowsPolicyManager::SetDuckingGainForId(g_PolicyManager, a2, L"Comm", *(float *)(*((_QWORD *)this + 48) + 8LL));
}
