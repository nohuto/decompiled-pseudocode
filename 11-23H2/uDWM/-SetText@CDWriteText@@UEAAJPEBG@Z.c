/*
 * XREFs of ?SetText@CDWriteText@@UEAAJPEBG@Z @ 0x180031530
 * Callers:
 *     <none>
 * Callees:
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x18001AF1C (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180032300 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWriteText::SetText(CDWriteText *this, char *a2)
{
  char *v2; // r11
  __int64 v4; // rbx
  char **v5; // rdi
  __int64 v6; // rax
  char *v7; // rcx
  __int64 v8; // r8

  v2 = a2;
  if ( a2 )
  {
    v4 = -1LL;
    v5 = (char **)((char *)this + 24);
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)&a2[2 * v6] );
    v7 = (char *)this + 24;
    v8 = (__int64)v5[2];
    if ( (unsigned __int64)v5[3] >= 8 )
      v7 = *v5;
    if ( v8 != v6 || (unsigned int)std::_WChar_traits<unsigned short>::compare(v7, a2, v8) )
    {
      do
        ++v4;
      while ( *(_WORD *)&v2[2 * v4] );
      std::wstring::assign(v5);
      (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this - 34) + 24LL))((char *)this - 272, 4096LL);
    }
  }
  return 0LL;
}
