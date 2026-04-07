/*
 * XREFs of ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x180108238
 * Callers:
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180106F0C (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180025408 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowData::SetTitle(CWindowData *this, size_t *a2, int a3)
{
  unsigned __int16 **v3; // rsi
  unsigned __int16 *v5; // r9
  unsigned __int16 *v6; // rbx
  int v7; // edi
  unsigned int v8; // ebx
  HRESULT v9; // eax
  unsigned int v11; // [rsp+20h] [rbp-18h]

  v3 = (unsigned __int16 **)((char *)this + 16);
  v5 = (unsigned __int16 *)*((_QWORD *)this + 2);
  v6 = (unsigned __int16 *)((char *)this + 804);
  v7 = a3 + 1;
  if ( v5 != (unsigned __int16 *)((char *)this + 804) )
  {
    if ( v7 > 26 )
    {
      v9 = (*(__int64 (__fastcall **)(WPF::HeapBase *, unsigned __int16 **, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 24LL))(
             WPF::g_pProcessHeap,
             v3,
             2LL * v7);
      v8 = v9;
      if ( v9 < 0 )
      {
        v11 = 1590;
        goto LABEL_9;
      }
      v5 = *v3;
      if ( !*v3 )
      {
        v8 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x637u);
        return v8;
      }
    }
    else
    {
      (*(void (__fastcall **)(WPF::HeapBase *, unsigned __int16 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v5);
      v5 = v6;
      *v3 = v6;
    }
LABEL_7:
    v9 = StringCchCopyW(v5, v7, a2);
    v8 = v9;
    if ( v9 >= 0 )
      return v8;
    v11 = 1595;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, v11);
    return v8;
  }
  if ( v7 <= 26 )
    goto LABEL_7;
  v5 = (unsigned __int16 *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                             WPF::g_pProcessHeap,
                             2LL * v7);
  *v3 = v5;
  if ( v5 )
    goto LABEL_7;
  v8 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x625u);
  return v8;
}
