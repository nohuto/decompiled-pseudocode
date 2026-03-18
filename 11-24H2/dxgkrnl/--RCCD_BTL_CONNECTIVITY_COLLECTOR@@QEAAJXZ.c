/*
 * XREFs of ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x140340708
 * Callers:
 *     ?RetrieveConnectivitySetId@CCD_BTL@@UEAAJPEAVCCD_SET_STRING_ID@@@Z @ 0x1403406E0 (-RetrieveConnectivitySetId@CCD_BTL@@UEAAJPEAVCCD_SET_STRING_ID@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14029AE64 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x14031B404 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x14034086C (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x140340D4C (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CCD_BTL_CONNECTIVITY_COLLECTOR::operator()(_DWORD **a1)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rax
  __int64 v4; // rax
  struct DXGGLOBAL *Global; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edi
  __int64 result; // rax
  _BYTE v13[64]; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0LL;
  do
  {
    v2 += 2048LL;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a1[2]);
    if ( v2 >= 0x4000 )
      return 3221225473LL;
    v3 = 2 * (v2 >> 1);
    if ( !is_mul_ok(v2 >> 1, 2uLL) )
      v3 = -1LL;
    v4 = operator new[](v3, 0x63644356u, 256LL);
    a1[2] = (_DWORD *)v4;
    if ( !v4 )
    {
      WdLogSingleEntry2(6LL, v2, a1);
      result = 3221225495LL;
      WdLogGlobalForLineNumber = 1022;
      return result;
    }
    *((_WORD *)a1 + 5) = v2;
    *((_WORD *)a1 + 4) = 0;
    Global = DXGGLOBAL::GetGlobal();
    v6 = DXGGLOBAL::IterateAdaptersWithCallback(
           (__int64)Global,
           (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_0_1_,
           (__int64)a1,
           4);
    v11 = v6;
  }
  while ( v6 == -1073741789 );
  if ( v6 >= 0 )
  {
    if ( *((_WORD *)a1 + 4) )
    {
      CCD_SET_STRING_ID::CCD_SET_STRING_ID((CCD_SET_STRING_ID *)v13, (const struct _UNICODE_STRING *)(a1 + 1));
      CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)*a1);
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v13);
      v11 = **a1;
    }
    else
    {
      v11 = -1073741823;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7, v9, v10) + 24) = a1;
      WdLogGlobalForLineNumber = 1046;
    }
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a1[2]);
  result = v11;
  a1[2] = 0LL;
  return result;
}
