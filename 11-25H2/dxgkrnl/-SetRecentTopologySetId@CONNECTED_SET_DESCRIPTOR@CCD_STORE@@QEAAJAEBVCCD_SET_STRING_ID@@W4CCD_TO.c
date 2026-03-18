/*
 * XREFs of ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1403E34F8
 * Callers:
 *     _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x140367E50 (_anonymous_namespace_--_UpdateConnectedSetCallback.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@_N@Z @ 0x140369794 (-_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_T.c)
 *     ?_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_UNICODE_STRING@@@Z @ 0x140369A8C (-_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x14036C93C (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     _CcdWriteStrValueToRegistry @ 0x1403E36F4 (_CcdWriteStrValueToRegistry.c)
 */

__int64 __fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::SetRecentTopologySetId(__int64 a1, __int64 a2, signed int a3)
{
  __int64 v3; // rdi
  int v6; // eax
  void *v7; // rcx
  int v8; // eax
  __int64 v9; // r9
  unsigned int v10; // ebp
  __int64 result; // rax
  __int64 v12; // rax
  CCD_SET_STRING_ID *v13; // rcx
  int v14; // eax
  CCD_SET_STRING_ID *TopologySetIdByClass; // rax
  struct _UNICODE_STRING v16; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+40h] [rbp-28h] BYREF

  v3 = a3;
  if ( (unsigned int)a3 <= 8 && (v6 = 278, _bittest(&v6, a3)) )
  {
    v7 = *(void **)(a1 + 96);
    v16.Buffer = L"Recent";
    *(_QWORD *)&v16.Length = 917516LL;
    v8 = CcdWriteStrValueToRegistry(v7, &v16, (PCANSI_STRING)(a2 + 8));
    v10 = v8;
    if ( v8 >= 0 )
    {
      if ( !*(_QWORD *)(a1 + 88) )
      {
        v12 = operator new(0x38uLL, 0x63644356u, 256LL, v9);
        if ( v12 )
        {
          *(_DWORD *)v12 = 0;
          *(_OWORD *)(v12 + 8) = 0LL;
          *(_QWORD *)(v12 + 24) = 0LL;
          *(_WORD *)(v12 + 32) = 0;
          *(_OWORD *)(v12 + 40) = 0LL;
          *(_QWORD *)(a1 + 88) = v12;
        }
        else
        {
          *(_QWORD *)(a1 + 88) = 0LL;
          WdLogSingleEntry4(6LL, 56LL, 15LL, a1, *(_QWORD *)(a1 + 96));
          WdLogGlobalForLineNumber = 1041;
        }
      }
      v13 = *(CCD_SET_STRING_ID **)(a1 + 88);
      if ( v13 )
        CCD_SET_STRING_ID::operator=(v13, a2);
      ValueName = 0LL;
      CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetValueNameByTopologyClass(v3, (__int64)&ValueName);
      v14 = CcdWriteStrValueToRegistry(*(HANDLE *)(a1 + 96), &ValueName, (PCANSI_STRING)(a2 + 8));
      v10 = v14;
      if ( v14 >= 0 )
      {
        TopologySetIdByClass = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(
                                                      a1,
                                                      v3,
                                                      1);
        if ( TopologySetIdByClass )
          CCD_SET_STRING_ID::operator=(TopologySetIdByClass, a2);
      }
      else
      {
        WdLogSingleEntry5(2LL, v14, a2, v3, a1, *(_QWORD *)(a1 + 96));
        WdLogGlobalForLineNumber = 886;
      }
    }
    else
    {
      WdLogSingleEntry5(2LL, v8, a2, v3, a1, *(_QWORD *)(a1 + 96));
      WdLogGlobalForLineNumber = 856;
    }
    return v10;
  }
  else
  {
    WdLogSingleEntry4(1LL, a2, a3, a1, *(_QWORD *)(a1 + 96));
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 833;
  }
  return result;
}
