/*
 * XREFs of ?AddRef@CActionCenterExperienceManager@@UEAAKXZ @ 0x1801B8740
 * Callers:
 *     ?AddRef@CActionCenterExperienceManager@@W7EAAKXZ @ 0x18036CA10 (-AddRef@CActionCenterExperienceManager@@W7EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WBA@EAAKXZ @ 0x18036CA20 (-AddRef@CActionCenterExperienceManager@@WBA@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WBI@EAAKXZ @ 0x18036CA30 (-AddRef@CActionCenterExperienceManager@@WBI@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WCA@EAAKXZ @ 0x18036CA40 (-AddRef@CActionCenterExperienceManager@@WCA@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WCI@EAAKXZ @ 0x18036CA50 (-AddRef@CActionCenterExperienceManager@@WCI@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WDA@EAAKXZ @ 0x18036CA60 (-AddRef@CActionCenterExperienceManager@@WDA@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WDI@EAAKXZ @ 0x18036CA70 (-AddRef@CActionCenterExperienceManager@@WDI@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WEA@EAAKXZ @ 0x18036CA80 (-AddRef@CActionCenterExperienceManager@@WEA@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WEI@EAAKXZ @ 0x18036CA90 (-AddRef@CActionCenterExperienceManager@@WEI@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WFA@EAAKXZ @ 0x18036CAA0 (-AddRef@CActionCenterExperienceManager@@WFA@EAAKXZ.c)
 *     ?AddRef@CActionCenterExperienceManager@@WFI@EAAKXZ @ 0x18036CAB0 (-AddRef@CActionCenterExperienceManager@@WFI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CActionCenterExperienceManager::AddRef(CActionCenterExperienceManager *this)
{
  signed __int64 v1; // rdx
  unsigned int v3; // r8d
  signed __int32 v4; // r9d
  unsigned int v5; // ecx
  bool v7; // zf
  signed __int64 v8; // rax

  v1 = *((_QWORD *)this + 13);
  v3 = 0x7FFFFFFF;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return v3;
    v5 = v1 + 1;
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 13, v1 + 1, v1);
    v7 = v1 == v8;
    v1 = v8;
    if ( v7 )
      return v5;
  }
  while ( 1 )
  {
    v4 = *(_DWORD *)(2 * v1 + 0x10);
    if ( v4 == 0x7FFFFFFF )
      break;
    if ( v4 == _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v4 + 1, v4) )
      return (unsigned int)(v4 + 1);
  }
  return v3;
}
