/*
 * XREFs of ?GetProcessingModes@@YAJPEAUIPropertyStore@@U_tagpropertykey@@PEAIPEAPEAU_GUID@@@Z @ 0x180061530
 * Callers:
 *     ?ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigurationSettings@@@Z @ 0x180145224 (-ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigura.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique_cotaskmem_nothrow@$$BY0A@U_GUID@@@wil@@YA?AV?$unique_ptr@$$BY0A@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@_K@Z @ 0x180061644 (--$make_unique_cotaskmem_nothrow@$$BY0A@U_GUID@@@wil@@YA-AV-$unique_ptr@$$BY0A@U_GUID@@U-$functi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetProcessingModes(
        struct IPropertyStore *a1,
        struct _tagpropertykey *a2,
        unsigned int *a3,
        struct _GUID **a4)
{
  struct _GUID *v6; // rbx
  __int64 i; // rsi
  HRESULT v8; // eax
  unsigned int v9; // edi
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+30h] [rbp-38h]
  LPVOID pv[6]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a4 = 0LL;
  *a3 = 0;
  *(_OWORD *)pvar = 0LL;
  v12 = 0LL;
  if ( ((int (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, PROPVARIANT *))a1->lpVtbl->GetValue)(
         a1,
         a2,
         pvar) >= 0
    && LOWORD(pvar[0]) == 4127
    && LODWORD(pvar[1]) )
  {
    wil::make_unique_cotaskmem_nothrow<_GUID [0]>(pv, LODWORD(pvar[1]));
    v6 = (struct _GUID *)pv[0];
    if ( pv[0] )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= LODWORD(pvar[1]) )
        {
          *a3 = (unsigned int)pvar[1];
          *a4 = v6;
          goto LABEL_10;
        }
        v8 = CLSIDFromString(*(LPCOLESTR *)(v12 + 8 * i), &v6[(unsigned int)i]);
        v9 = v8;
        if ( v8 < 0 )
          break;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x125,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
        (const char *)(unsigned int)v8);
      CoTaskMemFree(v6);
    }
    else
    {
      v9 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x121,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
        (const char *)0x8007000ELL);
    }
  }
  else
  {
LABEL_10:
    v9 = 0;
  }
  PropVariantClear(pvar);
  return v9;
}
