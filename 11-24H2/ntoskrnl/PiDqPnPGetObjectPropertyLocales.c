/*
 * XREFs of PiDqPnPGetObjectPropertyLocales @ 0x140980068
 * Callers:
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x14097FDF8 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 * Callees:
 *     _PnpGetGenericStorePropertyLocales @ 0x14097F518 (_PnpGetGenericStorePropertyLocales.c)
 *     _PnpGetObjectPropertyLocales @ 0x140980178 (_PnpGetObjectPropertyLocales.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqPnPGetObjectPropertyLocales(int a1, int a2, __int64 a3, __int64 a4, PVOID *a5)
{
  wchar_t *Pool2; // rax
  int ObjectPropertyLocales; // eax
  unsigned int v11; // ebx
  unsigned int v13[4]; // [rsp+50h] [rbp-28h] BYREF

  v13[0] = 40;
  *a5 = 0LL;
  do
  {
    if ( *a5 )
      ExFreePoolWithTag(*a5, 0x58706E50u);
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, 2LL * v13[0], 0x58706E50u);
    *a5 = Pool2;
    if ( !Pool2 )
    {
      v11 = -1073741670;
      goto LABEL_11;
    }
    if ( a2 )
      ObjectPropertyLocales = PnpGetObjectPropertyLocales(v13[0], a1, a2, a3, a4, (__int64)Pool2, v13[0], (__int64)v13);
    else
      ObjectPropertyLocales = PnpGetGenericStorePropertyLocales(*(__int64 *)&PiPnpRtlCtx, a3, a4, Pool2, v13[0], v13);
    v11 = ObjectPropertyLocales;
  }
  while ( ObjectPropertyLocales == -1073741789 );
  if ( ObjectPropertyLocales >= 0 )
    return v11;
LABEL_11:
  if ( *a5 )
  {
    ExFreePoolWithTag(*a5, 0x58706E50u);
    *a5 = 0LL;
  }
  return v11;
}
