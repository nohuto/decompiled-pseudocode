/*
 * XREFs of ?Create@CPerMonitorDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800B5F08
 * Callers:
 *     ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x1800B62B8 (-GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbn.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPerMonitorDesktopThumbnail::Create(struct CPerMonitorDesktopThumbnail **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  if ( a1 )
  {
    v3 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           80LL);
    if ( v3 )
    {
      *(_QWORD *)(v3 + 24) = 0LL;
      *(_QWORD *)(v3 + 56) = 0LL;
      *(_QWORD *)v3 = &CPerMonitorDesktopThumbnail::`vftable';
      *(_DWORD *)(v3 + 8) = 1;
      *(_QWORD *)(v3 + 72) = 0LL;
      *a1 = (struct CPerMonitorDesktopThumbnail *)v3;
      return 0;
    }
    else
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x6Eu);
      *a1 = 0LL;
    }
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x6Eu);
  }
  return v2;
}
