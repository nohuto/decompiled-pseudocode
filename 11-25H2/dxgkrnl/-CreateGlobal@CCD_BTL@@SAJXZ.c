/*
 * XREFs of ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x1402641A4
 * Callers:
 *     DriverEntry @ 0x140433078 (DriverEntry.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ??0CCD_BTL@@IEAA@XZ @ 0x140261EB0 (--0CCD_BTL@@IEAA@XZ.c)
 */

__int64 __fastcall CCD_BTL::CreateGlobal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  CCD_BTL *v5; // rax
  CCD_BTL *v6; // rbx

  if ( CCD_BTL::m_pGlobalBtl )
  {
    WdLogSingleEntry0(1LL);
    result = 3221225473LL;
    WdLogGlobalForLineNumber = 2640;
  }
  else
  {
    v5 = (CCD_BTL *)operator new(0xA0uLL, 0x63644356u, 256LL, a4);
    v6 = v5;
    if ( v5 )
    {
      memset(v5, 0, 0xA0uLL);
      CCD_BTL::CCD_BTL(v6);
      CCD_BTL::m_pGlobalBtl = v6;
      *(_QWORD *)v6 = &CCD_BTL_FULL::`vftable';
      return 0LL;
    }
    else
    {
      CCD_BTL::m_pGlobalBtl = 0LL;
      WdLogSingleEntry1(6LL, 160LL);
      result = 3221225495LL;
      WdLogGlobalForLineNumber = 2651;
    }
  }
  return result;
}
