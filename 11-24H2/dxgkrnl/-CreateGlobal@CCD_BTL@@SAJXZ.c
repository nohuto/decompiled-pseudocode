/*
 * XREFs of ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x14026B0A4
 * Callers:
 *     DriverEntry @ 0x140435078 (DriverEntry.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ??0CCD_BTL@@IEAA@XZ @ 0x140268DB0 (--0CCD_BTL@@IEAA@XZ.c)
 */

__int64 CCD_BTL::CreateGlobal(void)
{
  __int64 result; // rax
  CCD_BTL *v1; // rax
  CCD_BTL *v2; // rbx

  if ( CCD_BTL::m_pGlobalBtl )
  {
    WdLogSingleEntry0(1LL);
    result = 3221225473LL;
    WdLogGlobalForLineNumber = 2640;
  }
  else
  {
    v1 = (CCD_BTL *)operator new(0xA0uLL, 0x63644356u, 256LL);
    v2 = v1;
    if ( v1 )
    {
      memset(v1, 0, 0xA0uLL);
      CCD_BTL::CCD_BTL(v2);
      CCD_BTL::m_pGlobalBtl = v2;
      *(_QWORD *)v2 = &CCD_BTL_FULL::`vftable';
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
