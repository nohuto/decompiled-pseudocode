/*
 * XREFs of ??$reset@VCStreamConnectionImpl@CMonitorManager@@$0A@@?$shared_ptr@VCStreamConnection@@@std@@QEAAXPEAVCStreamConnectionImpl@CMonitorManager@@@Z @ 0x180116E4C
 * Callers:
 *     ?CreateStreamConnection@CMonitorManager@@QEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0PEAUStreamConnectionSettings@@AEAV?$shared_ptr@VCStreamConnection@@@3@@Z @ 0x180117ED8 (-CreateStreamConnection@CMonitorManager@@QEAAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011640 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180015ED0 (--2@YAPEAX_K@Z.c)
 *     ??1?$_Temporary_owner@VCStreamConnectionImpl@CMonitorManager@@@std@@QEAA@XZ @ 0x1801173E0 (--1-$_Temporary_owner@VCStreamConnectionImpl@CMonitorManager@@@std@@QEAA@XZ.c)
 */

void __fastcall std::shared_ptr<CStreamConnection>::reset<CMonitorManager::CStreamConnectionImpl,0>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  std::_Ref_count_base *v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = operator new(0x18uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = a2;
    *((_DWORD *)v4 + 2) = 1;
    *((_DWORD *)v4 + 3) = 1;
    *v4 = &std::_Ref_count<CMonitorManager::CStreamConnectionImpl>::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  v7 = 0LL;
  std::_Temporary_owner<CMonitorManager::CStreamConnectionImpl>::~_Temporary_owner<CMonitorManager::CStreamConnectionImpl>(&v7);
  *a1 = a2;
  v6 = (std::_Ref_count_base *)a1[1];
  a1[1] = v5;
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
}
