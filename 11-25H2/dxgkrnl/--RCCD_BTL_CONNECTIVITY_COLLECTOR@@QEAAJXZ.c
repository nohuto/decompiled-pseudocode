/*
 * XREFs of ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x14036C2F8
 * Callers:
 *     ?RetrieveConnectivitySetId@CCD_BTL@@UEAAJPEAVCCD_SET_STRING_ID@@@Z @ 0x14036C2D0 (-RetrieveConnectivitySetId@CCD_BTL@@UEAAJPEAVCCD_SET_STRING_ID@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x140295218 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1402CE078 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x14036C45C (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x14036C93C (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CCD_BTL_CONNECTIVITY_COLLECTOR::operator()(_DWORD **a1)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // r9
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  struct DXGGLOBAL *Global; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // edi
  __int64 result; // rax
  _BYTE v14[64]; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0LL;
  do
  {
    v2 += 2048LL;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a1[2]);
    if ( v2 >= 0x4000 )
      return 3221225473LL;
    v4 = 2 * (v2 >> 1);
    if ( !is_mul_ok(v2 >> 1, 2uLL) )
      v4 = -1LL;
    v5 = operator new[](v4, 0x63644356u, 256LL, v3);
    a1[2] = (_DWORD *)v5;
    if ( !v5 )
    {
      WdLogSingleEntry2(6LL, v2, a1);
      result = 3221225495LL;
      WdLogGlobalForLineNumber = 1022;
      return result;
    }
    *((_WORD *)a1 + 5) = v2;
    *((_WORD *)a1 + 4) = 0;
    Global = DXGGLOBAL::GetGlobal();
    v7 = DXGGLOBAL::IterateAdaptersWithCallback(
           (__int64)Global,
           (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_0_1_,
           (__int64)a1,
           4);
    v12 = v7;
  }
  while ( v7 == -1073741789 );
  if ( v7 >= 0 )
  {
    if ( *((_WORD *)a1 + 4) )
    {
      CCD_SET_STRING_ID::CCD_SET_STRING_ID((CCD_SET_STRING_ID *)v14, (const struct _UNICODE_STRING *)(a1 + 1));
      CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)*a1);
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v14);
      v12 = **a1;
    }
    else
    {
      v12 = -1073741823;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v10, v11) + 24) = a1;
      WdLogGlobalForLineNumber = 1046;
    }
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a1[2]);
  result = v12;
  a1[2] = 0LL;
  return result;
}
