/*
 * XREFs of ?ParseSimpleAttribute@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z @ 0x180164F68
 * Callers:
 *     ?ParseResourceGroup@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@HPEAGKPEAK2@Z @ 0x180164D4C (-ParseResourceGroup@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@HPEAGKPEAK2@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800433B0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?LogError@@YAXPEBGZZ @ 0x1800EE200 (-LogError@@YAXPEBGZZ.c)
 *     ?IsElement@CConstraintModelXMLParser@@AEAA_NPEAUIXmlReader@@PEBG@Z @ 0x180163860 (-IsElement@CConstraintModelXMLParser@@AEAA_NPEAUIXmlReader@@PEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConstraintModelXMLParser::ParseSimpleAttribute(
        CConstraintModelXMLParser *this,
        struct IXmlReader *a2,
        char *a3,
        char *a4,
        unsigned int a5)
{
  unsigned int v8; // ebx
  unsigned __int16 *v10; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+44h] [rbp+Ch]

  v12 = HIDWORD(this);
  v10 = 0LL;
  v11 = 0;
  if ( CConstraintModelXMLParser::IsElement(this, a2, a3) )
  {
    ((void (__fastcall *)(struct IXmlReader *, unsigned __int16 **, unsigned int *))a2->lpVtbl->GetValue)(
      a2,
      &v10,
      &v11);
    if ( v11 <= a5 )
    {
      return (unsigned int)StringCchCopyW(a4, a5, (char *)v10);
    }
    else
    {
      v8 = -2147024809;
      LogError((size_t *)L"Length of entry %d longer than expected length %d", v11, a5);
    }
  }
  else
  {
    v8 = -2147024809;
    LogError((size_t *)L"Did not find attribute %s", a3);
  }
  return v8;
}
