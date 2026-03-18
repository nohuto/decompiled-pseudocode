/*
 * XREFs of ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x14034086C
 * Callers:
 *     ?SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z @ 0x14033E3F8 (-SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     _CcdRetrieveSetIdFromRegistry @ 0x140340478 (_CcdRetrieveSetIdFromRegistry.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x140340708 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x140341394 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1403409AC (-_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

CCD_SET_STRING_ID *__fastcall CCD_SET_STRING_ID::CCD_SET_STRING_ID(
        CCD_SET_STRING_ID *this,
        const struct _UNICODE_STRING *a2)
{
  int v2; // edi
  unsigned __int16 Length; // cx
  unsigned __int16 v6; // r14
  void *v7; // rax
  void *v8; // rbp
  unsigned int v9; // r8d
  __int64 v10; // rdx

  v2 = 0;
  *(_DWORD *)this = 0;
  *(_OWORD *)((char *)this + 8) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_WORD *)this + 16) = 0;
  *(_OWORD *)((char *)this + 40) = 0LL;
  Length = a2->Length;
  v6 = a2->Length >> 1;
  if ( v6 > *((_WORD *)this + 5) )
  {
    v7 = (void *)operator new[](v6, 0x63644356u, 256LL);
    v8 = v7;
    if ( !v7 )
    {
      WdLogSingleEntry1(6LL, v6);
      WdLogGlobalForLineNumber = 1863;
      v2 = -1073741801;
      goto LABEL_7;
    }
    memmove(v7, *((const void **)this + 2), *((unsigned __int16 *)this + 4));
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 2));
    *((_QWORD *)this + 2) = v8;
    *((_WORD *)this + 5) = v6;
    Length = a2->Length;
  }
  v9 = 0;
  if ( (Length & 0xFFFE) != 0 )
  {
    do
    {
      v10 = v9++;
      *(_BYTE *)(v10 + *((_QWORD *)this + 2)) = a2->Buffer[v10];
      Length = a2->Length;
    }
    while ( v9 < a2->Length >> 1 );
  }
  *((_WORD *)this + 4) = Length >> 1;
LABEL_7:
  *(_DWORD *)this = v2;
  if ( *((_WORD *)this + 4) > 0x4000u )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1246;
  }
  CCD_SET_STRING_ID::_ParseMonitorDescriptors(this);
  return this;
}
