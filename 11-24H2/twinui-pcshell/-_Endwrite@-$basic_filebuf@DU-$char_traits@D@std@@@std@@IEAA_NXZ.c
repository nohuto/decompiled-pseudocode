/*
 * XREFs of ?_Endwrite@?$basic_filebuf@DU?$char_traits@D@std@@@std@@IEAA_NXZ @ 0x180615C7C
 * Callers:
 *     ??1?$basic_filebuf@DU?$char_traits@D@std@@@std@@UEAA@XZ @ 0x1806112E0 (--1-$basic_filebuf@DU-$char_traits@D@std@@@std@@UEAA@XZ.c)
 *     ?seekoff@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@_JHH@Z @ 0x180616F30 (-seekoff@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAA-AV-$fpos@U_Mbstatet@@@2@_JHH@Z.c)
 *     ?seekpos@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@V32@H@Z @ 0x180617020 (-seekpos@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAA-AV-$fpos@U_Mbstatet@@@2@V32@H@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall std::filebuf::_Endwrite(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // eax
  __int64 v6; // rdi
  _BYTE *v7; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v8[32]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v9; // [rsp+58h] [rbp-10h] BYREF

  if ( !*(_QWORD *)(a1 + 104) || !*(_BYTE *)(a1 + 113) )
    return 1;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, 0xFFFFFFFFLL) == -1 )
    return 0;
  v2 = *(_QWORD *)(a1 + 104);
  v7 = 0LL;
  v3 = std::codecvt<char,char,_Mbstatet>::unshift(v2, a1 + 116, v8, &v9, &v7);
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 2 )
      {
        *(_BYTE *)(a1 + 113) = 0;
        return 1;
      }
      return 0;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 113) = 0;
  }
  if ( v7 == v8 )
    return *(_BYTE *)(a1 + 113) == 0;
  v6 = v7 - v8;
  if ( v6 == _o_fwrite(v8, 1LL, v7 - v8, *(_QWORD *)(a1 + 128)) )
    return *(_BYTE *)(a1 + 113) == 0;
  return 0;
}
