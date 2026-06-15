/*
 * XREFs of ?GetClsidsFromVar@@YAXAEBUtagPROPVARIANT@@AEAV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAG@Z @ 0x14004C8D0
 * Callers:
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x1400469D0 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBU_GUID@@@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAPEAU_GUID@@QEAU2@AEBU2@@Z @ 0x140065BA8 (--$_Emplace_reallocate@AEBU_GUID@@@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAPEAU_GU.c)
 */

__int64 __fastcall GetClsidsFromVar(__int64 a1, __int64 a2, _WORD *a3)
{
  _WORD *v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 i; // rdi
  GUID *v7; // rdx
  const char *v8; // r9
  __int64 result; // rax
  GUID pclsid; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v5 + 8); i = (unsigned int)(i + 1) )
  {
    pclsid = 0LL;
    if ( CLSIDFromString(*(LPCOLESTR *)(*(_QWORD *)(v5 + 16) + 8 * i), &pclsid) >= 0 )
    {
      v7 = *(GUID **)(v4 + 8);
      if ( v7 == *(GUID **)(v4 + 16) )
      {
        try
        {
          std::vector<_GUID>::_Emplace_reallocate<_GUID const &>(v4, v7, &pclsid);
        }
        catch ( ... )
        {
          wil::details::in1diag3::Log_CaughtException(
            retaddr,
            (void *)0xA8,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp",
            v8);
          v5 = a1;
          v3 = a3;
          v4 = a2;
          continue;
        }
      }
      else
      {
        *v7 = pclsid;
        *(_QWORD *)(v4 + 8) += 16LL;
      }
    }
  }
  result = (__int64)(unsigned int)(*(_DWORD *)(v4 + 8) - *(_DWORD *)v4) >> 4;
  *v3 = result;
  return result;
}
