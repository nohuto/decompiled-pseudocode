/*
 * XREFs of memmove_0 @ 0x18004B3D8
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x1800032E0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x18000C620 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18000C8A8 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ??$_Emplace_reallocate@AEAK@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAKAEAK@Z @ 0x180012B70 (--$_Emplace_reallocate@AEAK@-$vector@KV-$allocator@K@std@@@std@@AEAAPEAKQEAKAEAK@Z.c)
 *     ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAKAEBK@Z @ 0x180015710 (--$_Emplace_reallocate@AEBK@-$vector@KV-$allocator@K@std@@@std@@AEAAPEAKQEAKAEBK@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180015CA0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001B714 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x18001DA28 (-memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 *     memmove_s @ 0x180027088 (memmove_s.c)
 *     ??$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@?$vector@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@V?$allocator@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@@std@@@std@@AEAAPEAPEAUIMixedRealitySpatialAudioFormatPolicyChange@@QEAPEAU2@AEBQEAU2@@Z @ 0x1800327FC (--$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@-$vector@PEAUIMixedR.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x180042698 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
