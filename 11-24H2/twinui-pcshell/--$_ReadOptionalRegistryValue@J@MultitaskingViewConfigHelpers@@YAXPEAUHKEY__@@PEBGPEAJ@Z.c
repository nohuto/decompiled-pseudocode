/*
 * XREFs of ??$_ReadOptionalRegistryValue@J@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAJ@Z @ 0x1804B99B4
 * Callers:
 *     ??$_ReadOptionalRegistryValueWithPrefix@J@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBG1PEAJ@Z @ 0x1804B9AA0 (--$_ReadOptionalRegistryValueWithPrefix@J@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBG1PEA.c)
 *     ?_ReadFrameMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUFrameMetrics@@@Z @ 0x1804BA59C (-_ReadFrameMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUFrameMetrics@@@Z.c)
 *     ?_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z @ 0x1804BA748 (-_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z.c)
 *     ?_ReadNewVirtualDesktopButtonMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopNewButtonMetrics@@@Z @ 0x1804BA838 (-_ReadNewVirtualDesktopButtonMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDe.c)
 *     ?_ReadThumbnailSizeMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUThumbnailSizeMetrics@@@Z @ 0x1804BAA40 (-_ReadThumbnailSizeMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUThumbnailSizeMetric.c)
 *     ?_ReadVirtualDesktopMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopMetrics@@@Z @ 0x1804BAB94 (-_ReadVirtualDesktopMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopMetr.c)
 * Callees:
 *     ?_ReadRegistryValue@MultitaskingViewConfigHelpers@@YAJPEAUHKEY__@@PEBGPEAK@Z @ 0x1804BA9EC (-_ReadRegistryValue@MultitaskingViewConfigHelpers@@YAJPEAUHKEY__@@PEBGPEAK@Z.c)
 */

int __fastcall MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<long>(
        MultitaskingViewConfigHelpers *a1,
        HKEY a2,
        int *a3,
        unsigned int *a4)
{
  int result; // eax
  int v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0;
  result = MultitaskingViewConfigHelpers::_ReadRegistryValue(a1, a2, (const unsigned __int16 *)&v6, a4);
  if ( result >= 0 )
  {
    result = v6;
    *a3 = v6;
  }
  return result;
}
