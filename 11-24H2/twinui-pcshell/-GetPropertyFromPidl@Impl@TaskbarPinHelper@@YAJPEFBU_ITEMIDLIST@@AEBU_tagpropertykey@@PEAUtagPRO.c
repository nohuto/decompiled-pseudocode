/*
 * XREFs of ?GetPropertyFromPidl@Impl@TaskbarPinHelper@@YAJPEFBU_ITEMIDLIST@@AEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1806903C4
 * Callers:
 *     ?IsPlaceholderPin@TaskbarPinHelper@@YA_NPEFBU_ITEMIDLIST@@@Z @ 0x180692860 (-IsPlaceholderPin@TaskbarPinHelper@@YA_NPEFBU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GetPropertyFromIDList@?$CItemIDFactory@UAPPITEM@@$0FDFAFAEB@@@SAJPEFBU_ITEMIDLIST@@AEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180690324 (-GetPropertyFromIDList@-$CItemIDFactory@UAPPITEM@@$0FDFAFAEB@@@SAJPEFBU_ITEMIDLIST@@AEBU_tagprop.c)
 */

__int64 __fastcall TaskbarPinHelper::Impl::GetPropertyFromPidl(
        TaskbarPinHelper::Impl *this,
        const struct _ITEMIDLIST *a2,
        const struct _tagpropertykey *a3,
        struct tagPROPVARIANT *a4)
{
  int i; // edi
  __int64 v7; // xmm1_8
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h]

  a3->fmtid = 0LL;
  v10 = 0LL;
  *(_QWORD *)&a3->pid = 0LL;
  for ( i = 0; i < 100 && *(_WORD *)this; ++i )
  {
    LOWORD(pvar[0]) = 0;
    if ( (int)CItemIDFactory<APPITEM,1397772353>::GetPropertyFromIDList(
                (unsigned __int16 *)this,
                (__int64)a2,
                (__int64)pvar) >= 0 )
    {
      v7 = v10;
      a3->fmtid = *(GUID *)pvar;
      v10 = 0LL;
      *(_QWORD *)&a3->pid = v7;
      *(_OWORD *)pvar = 0LL;
      PropVariantClear(pvar);
      return 0LL;
    }
    PropVariantClear(pvar);
    this = (TaskbarPinHelper::Impl *)((char *)this + *(unsigned __int16 *)this);
  }
  return 2147647531LL;
}
