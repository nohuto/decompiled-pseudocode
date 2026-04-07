/*
 * XREFs of ?LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ @ 0x18002CA60
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x180009A3C (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 *     ?GetColorPrevalence@CDesktopManager@@QEAAKXZ @ 0x18002C900 (-GetColorPrevalence@CDesktopManager@@QEAAKXZ.c)
 *     ?GetAccentColor@CDesktopManager@@QEAA_N_NPEAK@Z @ 0x18002CB84 (-GetAccentColor@CDesktopManager@@QEAA_N_NPEAK@Z.c)
 *     ?HasAccentColor@CDesktopManager@@QEAA_N_N@Z @ 0x180075C8C (-HasAccentColor@CDesktopManager@@QEAA_N_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDesktopManager::LoadAccentColorSettings(CDesktopManager *this)
{
  char v1; // di
  char v3; // si
  __int64 v4; // rcx
  char v5; // r14
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v10; // eax
  int v11; // [rsp+50h] [rbp+30h] BYREF
  int v12; // [rsp+58h] [rbp+38h] BYREF
  int v13; // [rsp+60h] [rbp+40h] BYREF

  v1 = 0;
  v11 = 0;
  v13 = 0;
  v3 = 0;
  v4 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9);
  v5 = 0;
  v12 = 0;
  (*(void (__fastcall **)(__int64, const wchar_t *, int *))(*(_QWORD *)v4 + 8LL))(v4, L"ColorPrevalence", &v11);
  v6 = v11;
  if ( v11 )
  {
    if ( (*(int (__fastcall **)(_QWORD, const wchar_t *, int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 9)
                                                               + 8LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
           L"AccentColor",
           &v13) >= 0 )
      v3 = v13 != 0;
    v10 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, int *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                       + 9)
                                                                    + 8LL))(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
            L"AccentColorInactive",
            &v12);
    v7 = v12;
    if ( v10 >= 0 && v12 )
      v5 = 1;
    v6 = v11;
  }
  else
  {
    v7 = v12;
  }
  v8 = v13;
  if ( v6 != *((_DWORD *)this + 291)
    || v3 != *((_BYTE *)this + 1161)
    || v13 != *((_DWORD *)this + 292)
    || v5 != *((_BYTE *)this + 1162)
    || v7 != *((_DWORD *)this + 293) )
  {
    v1 = 1;
    *((_DWORD *)this + 291) = v6;
    *((_DWORD *)this + 292) = v8;
    *((_BYTE *)this + 1161) = v3;
    *((_DWORD *)this + 293) = v7;
    *((_BYTE *)this + 1162) = v5;
  }
  *((_BYTE *)this + 1160) = 1;
  return v1;
}
