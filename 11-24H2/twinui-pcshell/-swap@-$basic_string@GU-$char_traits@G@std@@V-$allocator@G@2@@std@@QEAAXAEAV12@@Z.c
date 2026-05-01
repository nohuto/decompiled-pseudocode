/*
 * XREFs of ?swap@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXAEAV12@@Z @ 0x18020FC48
 * Callers:
 *     ??$_Med3_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@00U?$less@X@0@@Z @ 0x180343D2C (--$_Med3_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less@X@2@.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YA?AU?$pair@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@@0@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0U?$less@X@0@@Z @ 0x180343E40 (--$_Partition_by_median_guess_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 *     ?LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x1803A52C0 (-LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall std::wstring::swap(__int128 *a1, __int128 *a2)
{
  __int128 v2; // xmm2
  __int128 v3; // xmm3

  if ( a1 != a2 )
  {
    v2 = *a1;
    v3 = a1[1];
    *a1 = *a2;
    a1[1] = a2[1];
    *a2 = v2;
    a2[1] = v3;
  }
}
