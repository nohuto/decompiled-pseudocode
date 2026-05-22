/*
 * XREFs of ??$_Uninitialized_move@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1800CB77C
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEBGAEA_K@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@AEAPEBGAEA_K@Z @ 0x1800CB57C (--$_Emplace_reallocate@AEAPEBGAEA_K@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 *     ??$_Emplace_reallocate@PEAG@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@$$QEAPEAG@Z @ 0x1800CB684 (--$_Emplace_reallocate@PEAG@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1800CB544 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 */

_OWORD *__fastcall std::_Uninitialized_move<std::wstring *>(_QWORD *a1, _QWORD *a2, _OWORD *a3)
{
  _OWORD *v3; // rbx
  char *v4; // r8
  _QWORD *v5; // rax

  v3 = a3;
  if ( a1 != a2 )
  {
    v4 = (char *)((char *)a3 - (char *)a1);
    v5 = a1 + 3;
    do
    {
      *v3 = 0LL;
      *(_QWORD *)((char *)v5 + (_QWORD)v4 - 8) = 0LL;
      *(_QWORD *)&v4[(_QWORD)v5] = 0LL;
      *v3 = *(_OWORD *)(v5 - 3);
      v3[1] = *(_OWORD *)(v5 - 1);
      *(v5 - 1) = 0LL;
      v3 += 2;
      *v5 = 7LL;
      *((_WORD *)v5 - 12) = 0;
      v5 += 4;
    }
    while ( v5 - 3 != a2 );
  }
  std::_Destroy_range<std::allocator<std::wstring>>((__int64)v3, (__int64)v3);
  return v3;
}
