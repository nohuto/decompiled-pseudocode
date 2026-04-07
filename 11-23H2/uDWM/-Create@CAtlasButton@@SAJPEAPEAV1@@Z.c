/*
 * XREFs of ?Create@CAtlasButton@@SAJPEAPEAV1@@Z @ 0x180038634
 * Callers:
 *     ?Initialize@CButton@@MEAAJXZ @ 0x180038720 (-Initialize@CButton@@MEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x18005D520 (memset_0.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasButton::Create(struct CAtlasButton **a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  unsigned int v4; // ebx

  if ( a1 )
  {
    v2 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                     WPF::g_pProcessHeap,
                     152LL);
    v3 = v2;
    if ( v2 )
    {
      memset_0(v2, 0, 0x98uLL);
      v3[9] = 0LL;
      v3[11] = 0LL;
      v3[16] = 0LL;
      *((_DWORD *)v3 + 35) = 0;
      *((_DWORD *)v3 + 13) = 0x80000000;
      *((_DWORD *)v3 + 12) = 0x80000000;
      *v3 = &CAtlasButton::`vftable';
      *((_DWORD *)v3 + 2) = 1;
      *((_DWORD *)v3 + 8) = 0x7FFFFFFF;
      *((_DWORD *)v3 + 10) = 0x7FFFFFFF;
      *((_DWORD *)v3 + 9) = 0x7FFFFFFF;
      *((_DWORD *)v3 + 11) = 0x7FFFFFFF;
      *((_DWORD *)v3 + 15) = 0x7FFFFFFF;
      *((_DWORD *)v3 + 14) = 0x7FFFFFFF;
      *((_DWORD *)v3 + 17) = 255;
      *((_DWORD *)v3 + 30) = 22;
      *((_DWORD *)v3 + 34) = 1;
      *((_BYTE *)v3 + 144) = 0;
      *a1 = (struct CAtlasButton *)v3;
      return 0;
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x85u, 0LL);
      *a1 = 0LL;
    }
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x85u, 0LL);
  }
  return v4;
}
