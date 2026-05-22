/*
 * XREFs of ?_Tidy@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAXXZ @ 0x18006A22C
 * Callers:
 *     ??1?$_Tidy_guard@V?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@@std@@QEAA@XZ @ 0x180178E6C (--1-$_Tidy_guard@V-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2@@std@@@std@@QEAA@XZ.c)
 *     ??1ViewMenuChordedKeyHandler@@MEAA@XZ @ 0x18017DD7C (--1ViewMenuChordedKeyHandler@@MEAA@XZ.c)
 *     _dynamic_atexit_destructor_for__c_taskSwitcherLaunchSequence__ @ 0x1801DA1B0 (_dynamic_atexit_destructor_for__c_taskSwitcherLaunchSequence__.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::vector<std::pair<unsigned short,bool>>::_Tidy(__int64 a1)
{
  char *v2; // rcx
  const struct std::nothrow_t *v3; // rdx
  char *v4; // r8
  char *v5; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    v3 = (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL);
    if ( (unsigned __int64)v3 >= 0x1000 )
    {
      v4 = (char *)*((_QWORD *)v2 - 1);
      v3 = (const struct std::nothrow_t *)((char *)v3 + 39);
      v5 = (char *)(v2 - v4);
      if ( (unsigned __int64)(v5 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v5, v3);
        __debugbreak();
        JUMPOUT(0x18006A294LL);
      }
      v2 = v4;
    }
    operator delete(v2, v3);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
