/*
 * XREFs of ?FindSection@SipcPort@@IEAAPEAVSipcSection@@AEBVSipcSectionId@@@Z @ 0x18010ED80
 * Callers:
 *     ?GetPortEvent@AlpcPort@@UEAAJPEAUSipcPortEvent@@@Z @ 0x18006E740 (-GetPortEvent@AlpcPort@@UEAAJPEAUSipcPortEvent@@@Z.c)
 *     ?AddReceivedSection@SipcPort@@IEAAXPEAVSipcSection@@PEAUSipcPortEvent@@@Z @ 0x18010D54C (-AddReceivedSection@SipcPort@@IEAAXPEAVSipcSection@@PEAUSipcPortEvent@@@Z.c)
 *     ?CreateSection@AlpcPort@@UEAAJ_K0PEBXPEAPEAX@Z @ 0x18010E860 (-CreateSection@AlpcPort@@UEAAJ_K0PEBXPEAPEAX@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1801CF190 (memcmp_0.c)
 */

struct SipcSection *__fastcall SipcPort::FindSection(SipcPort *this, const struct SipcSectionId *a2)
{
  char *v2; // rsi
  char *i; // rbx

  v2 = (char *)this + 8;
  for ( i = (char *)*((_QWORD *)this + 1); i != v2; i = *(char **)i )
  {
    if ( !memcmp_0((const void *)(((unsigned __int64)(i - 8) & -(__int64)(i != 0LL)) + 56), a2, 0x20uLL) )
      return (struct SipcSection *)((unsigned __int64)(i - 8) & -(__int64)(i != 0LL));
  }
  return 0LL;
}
