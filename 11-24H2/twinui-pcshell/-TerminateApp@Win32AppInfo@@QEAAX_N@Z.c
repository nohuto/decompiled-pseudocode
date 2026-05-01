/*
 * XREFs of ?TerminateApp@Win32AppInfo@@QEAAX_N@Z @ 0x1805753AC
 * Callers:
 *     ?TerminateAppOnce@Win32AppStateManager@@AEAA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x1805757CC (-TerminateAppOnce@Win32AppStateManager@@AEAA_NAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 * Callees:
 *     ??$DebugInfo@AEAY0BP@$$CBG@AppUsageTelemetry@@SAXAEAY0BP@$$CBG@Z @ 0x1805735CC (--$DebugInfo@AEAY0BP@$$CBG@AppUsageTelemetry@@SAXAEAY0BP@$$CBG@Z.c)
 *     ?IsProcessActive@Win32ProcessInfo@@QEAA_NXZ @ 0x180575024 (-IsProcessActive@Win32ProcessInfo@@QEAA_NXZ.c)
 *     ?TerminateApp@Win32ProcessInfo@@QEAAX_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180575624 (-TerminateApp@Win32ProcessInfo@@QEAAX_NAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@.c)
 */

void __fastcall Win32AppInfo::TerminateApp(Win32AppInfo *this, char a2)
{
  __int64 *j; // rbx
  const WCHAR *v5; // rcx
  __int64 v6; // rdx
  __int64 **v7; // rax
  __int64 *i; // rax
  __int64 *v9; // rcx

  j = (__int64 *)**((_QWORD **)this + 4);
  while ( !*((_BYTE *)j + 25) )
  {
    if ( Win32ProcessInfo::IsProcessActive((__int64 ***)j[5]) )
    {
      AppUsageTelemetry::DebugInfo<unsigned short const (&)[31]>(v5);
      LOBYTE(v6) = a2;
      Win32ProcessInfo::TerminateApp(j[5], v6, this);
    }
    v7 = (__int64 **)j[2];
    if ( *((_BYTE *)v7 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v9 = *v7;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v9 + 25); v9 = (__int64 *)*v9 )
        j = v9;
    }
  }
}
