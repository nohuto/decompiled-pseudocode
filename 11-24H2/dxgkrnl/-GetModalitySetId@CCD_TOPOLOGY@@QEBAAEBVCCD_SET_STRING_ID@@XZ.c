/*
 * XREFs of ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x140341394
 * Callers:
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x14026CF14 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 *     _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x14033C550 (_anonymous_namespace_--_UpdateConnectedSetCallback.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x140341C24 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1403907A8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _CCD_TOPOLOGY::GetModalitySetId_::_2_::_AUTO_USING_PM_MapIndex2373::_AUTO_USING_PM_MapIndex2373 @ 0x140268A6C (_CCD_TOPOLOGY--GetModalitySetId_--_2_--_AUTO_USING_PM_MapIndex2373--_AUTO_USING_PM_MapIndex2373.c)
 *     _CCD_TOPOLOGY::GetModalitySetId_::_2_::_AUTO_USING_PM_MapIndex2373::__AUTO_USING_PM_MapIndex2373 @ 0x140268AB8 (_CCD_TOPOLOGY--GetModalitySetId_--_2_--_AUTO_USING_PM_MapIndex2373--__AUTO_USING_PM_MapIndex2373.c)
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x14031B3D8 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x14031B404 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x14034086C (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x140340D4C (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1403415C0 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 */

const struct CCD_SET_STRING_ID *__fastcall CCD_TOPOLOGY::GetModalitySetId(CCD_TOPOLOGY *this)
{
  unsigned __int16 v1; // bx
  WCHAR *v3; // rbp
  unsigned __int16 v4; // r8
  CCD_SET_STRING_ID *v5; // rax
  __int64 v6; // rax
  __int16 v7; // cx
  __int64 v8; // r8
  unsigned int i; // edx
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // ax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // kr00_8
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned int j; // r8d
  __int64 v19; // rdx
  unsigned __int16 v20; // ax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-68h] BYREF
  __int64 v22[2]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v23[64]; // [rsp+40h] [rbp-48h] BYREF

  v1 = 0;
  if ( *(int *)this < 0 || !*((_WORD *)this + 4) )
  {
    CCD_TOPOLOGY::ClearModalitySetId((void **)this);
    v3 = (WCHAR *)operator new[](0x8002uLL, 0x63644356u, 256LL);
    if ( v3 )
    {
      CCD_TOPOLOGY::GetModalitySetId_::_2_::_AUTO_USING_PM_MapIndex2373::_AUTO_USING_PM_MapIndex2373(
        (__int64)v22,
        *((_QWORD *)this + 8));
      if ( (int)CCD_TOPOLOGY::_QueryTopologySetIdStr(this, v3, v4) >= 0 )
      {
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, v3);
        v5 = CCD_SET_STRING_ID::CCD_SET_STRING_ID((CCD_SET_STRING_ID *)v23, &DestinationString);
        CCD_SET_STRING_ID::operator=(this, (__int64)v5);
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v23);
        if ( *(int *)this >= 0 && *((_WORD *)this + 4) )
        {
          v6 = *((_QWORD *)this + 8);
          if ( v6 )
            v7 = *(_WORD *)(v6 + 20);
          else
            v7 = 0;
          if ( v7 != *((_WORD *)this + 16) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2395;
          }
          v8 = *((_QWORD *)this + 8);
          for ( i = 0; ; ++i )
          {
            v10 = v8 ? *(_WORD *)(v8 + 20) : 0;
            if ( i >= v10 || *(_DWORD *)(296LL * i + v8 + 320) != i )
              break;
          }
          if ( v8 )
            v11 = *(_WORD *)(v8 + 20);
          else
            v11 = 0;
          if ( i >= v11 )
            goto LABEL_33;
          if ( v8 )
            v12 = *(_WORD *)(v8 + 20);
          else
            v12 = 0;
          v14 = v12;
          v13 = 2LL * v12;
          if ( !is_mul_ok(v14, 2uLL) )
            v13 = -1LL;
          v15 = operator new[](v13, 0x63644356u, 256LL);
          *((_QWORD *)this + 7) = v15;
          if ( v15 )
          {
            for ( j = 0; ; ++j )
            {
              v19 = *((_QWORD *)this + 8);
              if ( v19 )
              {
                v20 = *(_WORD *)(v19 + 20);
              }
              else
              {
                v19 = 0LL;
                v20 = 0;
              }
              if ( j >= v20 )
                break;
              *(_WORD *)(*((_QWORD *)this + 7) + 2LL * *(unsigned int *)(296LL * j + v19 + 320)) = j;
            }
            goto LABEL_33;
          }
          v16 = *((_QWORD *)this + 8);
          if ( v16 )
            v1 = *(_WORD *)(v16 + 20);
          WdLogSingleEntry3(6LL, this, v16, v1);
          WdLogGlobalForLineNumber = 2420;
        }
        CCD_SET_STRING_ID::_Cleanup(this);
      }
LABEL_33:
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v3);
      CCD_TOPOLOGY::GetModalitySetId_::_2_::_AUTO_USING_PM_MapIndex2373::__AUTO_USING_PM_MapIndex2373(v22);
    }
  }
  return this;
}
