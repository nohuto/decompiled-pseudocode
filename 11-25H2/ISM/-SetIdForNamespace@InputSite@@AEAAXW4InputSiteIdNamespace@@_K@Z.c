/*
 * XREFs of ?SetIdForNamespace@InputSite@@AEAAXW4InputSiteIdNamespace@@_K@Z @ 0x180052764
 * Callers:
 *     ?SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z @ 0x180052110 (-SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@UInputSiteId@@@?$vector@UInputSiteId@@V?$allocator@UInputSiteId@@@std@@@std@@AEAAPEAUInputSiteId@@QEAU2@$$QEAU2@@Z @ 0x1800527EC (--$_Emplace_reallocate@UInputSiteId@@@-$vector@UInputSiteId@@V-$allocator@UInputSiteId@@@std@@@s.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

__int64 __fastcall InputSite::SetIdForNamespace(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // r9
  __int64 i; // rcx
  __int64 result; // rax
  _OWORD *v7; // rdx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v4 = a1 + 16;
  for ( i = *(_QWORD *)(a1 + 16); i != v3 && *(_DWORD *)i != a2; i += 16LL )
    ;
  if ( i == v3 )
  {
    result = 0LL;
    *(_QWORD *)&v8 = a2;
    v7 = *(_OWORD **)(v4 + 8);
    *((_QWORD *)&v8 + 1) = a3;
    if ( v7 == *(_OWORD **)(v4 + 16) )
    {
      return std::vector<InputSiteId>::_Emplace_reallocate<InputSiteId>(v4, v7, &v8);
    }
    else
    {
      *v7 = v8;
      *(_QWORD *)(v4 + 8) += 16LL;
    }
  }
  else
  {
    *(_QWORD *)(i + 8) = a3;
  }
  return result;
}
