/*
 * XREFs of ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180034E38
 * Callers:
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000B560 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180011B50 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x180013EE0 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?GetValueAt@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEBAAEAPEAIH@Z @ 0x18001968C (-GetValueAt@-$CSimpleMap@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAIV-$CS.c)
 *     ?HasDuckedStream@CProcess@@QEAAHXZ @ 0x1800327C0 (-HasDuckedStream@CProcess@@QEAAHXZ.c)
 *     ??A?$CSimpleArray@PEAUHINSTANCE__@@V?$CSimpleArrayEqualHelper@PEAUHINSTANCE__@@@ATL@@@ATL@@QEAAAEAPEAUHINSTANCE__@@H@Z @ 0x1800475F8 (--A-$CSimpleArray@PEAUHINSTANCE__@@V-$CSimpleArrayEqualHelper@PEAUHINSTANCE__@@@ATL@@@ATL@@QEAAA.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::_AtlRaiseException()
{
  RaiseException(0xC000008C, 1u, 0, 0LL);
}
