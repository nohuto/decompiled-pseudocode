/*
 * XREFs of ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x14036D0C0
 * Callers:
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x140266014 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 *     _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x140367E50 (_anonymous_namespace_--_UpdateConnectedSetCallback.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x14036D944 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x140379894 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _CCD_TOPOLOGY::GetModalitySetId_::_2_::_AUTO_USING_PM_MapIndex2373::_AUTO_USING_PM_MapIndex2373 @ 0x140261B6C (_CCD_TOPOLOGY--GetModalitySetId_--_2_--_AUTO_USING_PM_MapIndex2373--_AUTO_USING_PM_MapIndex2373.c)
 *     _CCD_TOPOLOGY::GetModalitySetId_::_2_::_AUTO_USING_PM_MapIndex2373::__AUTO_USING_PM_MapIndex2373 @ 0x140261BB8 (_CCD_TOPOLOGY--GetModalitySetId_--_2_--_AUTO_USING_PM_MapIndex2373--__AUTO_USING_PM_MapIndex2373.c)
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1402CE04C (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1402CE078 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x14036C45C (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x14036C93C (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x14036D2EC (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 */

const struct CCD_SET_STRING_ID *__fastcall CCD_TOPOLOGY::GetModalitySetId(CCD_TOPOLOGY *this)
{
  unsigned __int16 v1; // bx
  __int64 v3; // r9
  WCHAR *v4; // rbp
  unsigned __int16 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r9
  CCD_SET_STRING_ID *v8; // rax
  __int64 v9; // r9
  __int64 v10; // rax
  __int16 v11; // cx
  __int64 v12; // r8
  unsigned int i; // edx
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // ax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // kr00_8
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned int j; // r8d
  __int64 v23; // rdx
  unsigned __int16 v24; // ax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-68h] BYREF
  __int64 v26[2]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v27[64]; // [rsp+40h] [rbp-48h] BYREF

  v1 = 0;
  if ( *(int *)this < 0 || !*((_WORD *)this + 4) )
  {
    CCD_TOPOLOGY::ClearModalitySetId((void **)this);
    v4 = (WCHAR *)operator new[](0x8002uLL, 0x63644356u, 256LL, v3);
    if ( v4 )
    {
      CCD_TOPOLOGY::GetModalitySetId_::_2_::_AUTO_USING_PM_MapIndex2373::_AUTO_USING_PM_MapIndex2373(
        (__int64)v26,
        *((_QWORD *)this + 8));
      if ( (int)CCD_TOPOLOGY::_QueryTopologySetIdStr(this, v4, v5) >= 0 )
      {
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, v4);
        v8 = CCD_SET_STRING_ID::CCD_SET_STRING_ID((CCD_SET_STRING_ID *)v27, &DestinationString, v6, v7);
        CCD_SET_STRING_ID::operator=(this, (__int64)v8);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v27);
        if ( *(int *)this >= 0 && *((_WORD *)this + 4) )
        {
          v10 = *((_QWORD *)this + 8);
          if ( v10 )
            v11 = *(_WORD *)(v10 + 20);
          else
            v11 = 0;
          if ( v11 != *((_WORD *)this + 16) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2395;
          }
          v12 = *((_QWORD *)this + 8);
          for ( i = 0; ; ++i )
          {
            v14 = v12 ? *(_WORD *)(v12 + 20) : 0;
            if ( i >= v14 || *(_DWORD *)(296LL * i + v12 + 320) != i )
              break;
          }
          if ( v12 )
            v15 = *(_WORD *)(v12 + 20);
          else
            v15 = 0;
          if ( i >= v15 )
            goto LABEL_33;
          if ( v12 )
            v16 = *(_WORD *)(v12 + 20);
          else
            v16 = 0;
          v18 = v16;
          v17 = 2LL * v16;
          if ( !is_mul_ok(v18, 2uLL) )
            v17 = -1LL;
          v19 = operator new[](v17, 0x63644356u, 256LL, v9);
          *((_QWORD *)this + 7) = v19;
          if ( v19 )
          {
            for ( j = 0; ; ++j )
            {
              v23 = *((_QWORD *)this + 8);
              if ( v23 )
              {
                v24 = *(_WORD *)(v23 + 20);
              }
              else
              {
                v23 = 0LL;
                v24 = 0;
              }
              if ( j >= v24 )
                break;
              *(_WORD *)(*((_QWORD *)this + 7) + 2LL * *(unsigned int *)(296LL * j + v23 + 320)) = j;
            }
            goto LABEL_33;
          }
          v20 = *((_QWORD *)this + 8);
          if ( v20 )
            v1 = *(_WORD *)(v20 + 20);
          WdLogSingleEntry3(6LL, this, v20, v1);
          WdLogGlobalForLineNumber = 2420;
        }
        CCD_SET_STRING_ID::_Cleanup(this);
      }
LABEL_33:
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
      CCD_TOPOLOGY::GetModalitySetId_::_2_::_AUTO_USING_PM_MapIndex2373::__AUTO_USING_PM_MapIndex2373(v26);
    }
  }
  return this;
}
