/*
 * XREFs of ?GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ @ 0x180032480
 * Callers:
 *     ?ApplicationGoodFaithPLMExemptionExpired@CApplicationManager@@QEAAJPEAVCApplication@@@Z @ 0x180036710 (-ApplicationGoodFaithPLMExemptionExpired@CApplicationManager@@QEAAJPEAVCApplication@@@Z.c)
 * Callees:
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18000C910 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18000D520 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     WPP_SF_S @ 0x18002F290 (WPP_SF_S.c)
 *     ?CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ @ 0x1800319F8 (-CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ.c)
 */

__int64 __fastcall CApplication::GoodFaithPLMExemptionExpired(CApplication *this)
{
  CApplicationManager *v2; // rcx

  if ( *((_DWORD *)this + 155) == 2 )
  {
    *((_DWORD *)this + 155) = 0;
    *((_DWORD *)this + 156) = 0;
    *((_DWORD *)this + 157) = 0;
    *((_DWORD *)this + 158) = 0;
    *((_DWORD *)this + 159) = 0;
    *((_DWORD *)this + 160) = 0;
    *((_DWORD *)this + 161) = 1;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x15u,
      &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids,
      *((const wchar_t **)this + 3));
  }
  if ( (unsigned int)CApplication::Category((__int64)this) != 1 )
  {
    if ( !*((_DWORD *)this + 52) && *((_DWORD *)this + 155) != 1 )
    {
      *((_DWORD *)this + 157) = 0;
      *((_DWORD *)this + 159) = 0;
      *((_DWORD *)this + 155) = 1;
      *((_DWORD *)this + 156) = 1;
      *((_DWORD *)this + 158) = 1;
      *((_DWORD *)this + 160) = 1;
      *((_DWORD *)this + 161) = 1;
    }
    v2 = g_ApplicationManager;
    *((_DWORD *)this + 108) = 0;
    CApplicationManager::ApplyPBMPolicy(v2, this, 0xD1u, 0);
    CApplication::CleanupGoodFaithExemptionTimer((const wchar_t **)this);
  }
  return 0LL;
}
