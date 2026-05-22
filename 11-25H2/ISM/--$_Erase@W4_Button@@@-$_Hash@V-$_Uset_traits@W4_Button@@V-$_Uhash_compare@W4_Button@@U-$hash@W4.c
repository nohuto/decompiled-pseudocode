/*
 * XREFs of ??$_Erase@W4_Button@@@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@AEAA_KAEBW4_Button@@@Z @ 0x18006186C
 * Callers:
 *     ?OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z @ 0x1800D737C (-OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Erase<enum _Button>(
        _QWORD *a1,
        _DWORD *a2)
{
  __int64 v4; // r8
  unsigned __int64 i; // r9
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // r8

  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v6 = *((unsigned __int8 *)a2 + i);
    v4 = 0x100000001B3LL * (v6 ^ v4);
  }
  v7 = (_QWORD *)a1[1];
  v8 = v4 & a1[6];
  v9 = a1[3];
  v10 = 2 * v8;
  v11 = *(_QWORD **)(v9 + 8 * v10 + 8);
  if ( v11 == v7 )
  {
LABEL_7:
    v11 = 0LL;
  }
  else
  {
    while ( *a2 != *((_DWORD *)v11 + 4) )
    {
      if ( v11 == *(_QWORD **)(v9 + 8 * v10) )
        goto LABEL_7;
      v11 = (_QWORD *)v11[1];
    }
  }
  if ( !v11 )
    return 0LL;
  if ( *(_QWORD **)(v9 + 8 * v10 + 8) == v11 )
  {
    if ( *(_QWORD **)(v9 + 8 * v10) == v11 )
      *(_QWORD *)(v9 + 8 * v10) = v7;
    else
      v7 = (_QWORD *)v11[1];
    *(_QWORD *)(v9 + 8 * v10 + 8) = v7;
  }
  else if ( *(_QWORD **)(v9 + 8 * v10) == v11 )
  {
    *(_QWORD *)(v9 + 8 * v10) = *v11;
  }
  v12 = *v11;
  --a1[2];
  *(_QWORD *)v11[1] = v12;
  *(_QWORD *)(v12 + 8) = v11[1];
  operator delete(v11, (const struct std::nothrow_t *)0x18);
  return 1LL;
}
