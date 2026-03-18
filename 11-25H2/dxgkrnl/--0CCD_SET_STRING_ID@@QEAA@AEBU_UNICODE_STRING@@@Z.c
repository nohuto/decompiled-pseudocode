/*
 * XREFs of ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x14036C45C
 * Callers:
 *     ?SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z @ 0x140369558 (-SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     _CcdRetrieveSetIdFromRegistry @ 0x14036C068 (_CcdRetrieveSetIdFromRegistry.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x14036C2F8 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x14036D0C0 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x14036C59C (-_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

CCD_SET_STRING_ID *__fastcall CCD_SET_STRING_ID::CCD_SET_STRING_ID(
        CCD_SET_STRING_ID *this,
        const struct _UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // edi
  unsigned __int16 Length; // cx
  unsigned __int16 v8; // r14
  void *v9; // rax
  void *v10; // rbp
  unsigned int v11; // r8d
  __int64 v12; // rdx

  v4 = 0;
  *(_DWORD *)this = 0;
  *(_OWORD *)((char *)this + 8) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_WORD *)this + 16) = 0;
  *(_OWORD *)((char *)this + 40) = 0LL;
  Length = a2->Length;
  v8 = a2->Length >> 1;
  if ( v8 > *((_WORD *)this + 5) )
  {
    v9 = (void *)operator new[](v8, 0x63644356u, 256LL, a4);
    v10 = v9;
    if ( !v9 )
    {
      WdLogSingleEntry1(6LL, v8);
      WdLogGlobalForLineNumber = 1863;
      v4 = -1073741801;
      goto LABEL_7;
    }
    memmove(v9, *((const void **)this + 2), *((unsigned __int16 *)this + 4));
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 2));
    *((_QWORD *)this + 2) = v10;
    *((_WORD *)this + 5) = v8;
    Length = a2->Length;
  }
  v11 = 0;
  if ( (Length & 0xFFFE) != 0 )
  {
    do
    {
      v12 = v11++;
      *(_BYTE *)(v12 + *((_QWORD *)this + 2)) = a2->Buffer[v12];
      Length = a2->Length;
    }
    while ( v11 < a2->Length >> 1 );
  }
  *((_WORD *)this + 4) = Length >> 1;
LABEL_7:
  *(_DWORD *)this = v4;
  if ( *((_WORD *)this + 4) > 0x4000u )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1246;
  }
  CCD_SET_STRING_ID::_ParseMonitorDescriptors(this);
  return this;
}
