/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z @ 0x180051EB8
 * Callers:
 *     ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x180051AFC (-UpdateIcon@CTopLevelWindow@@AEAAJXZ.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x180106A30 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CBitmapSource@@AEAAJXZ @ 0x180051F84 (-Initialize@CBitmapSource@@AEAAJXZ.c)
 *     ?Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z @ 0x180051FBC (-Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSource::Create(HICON a1, struct CBitmapSource **a2)
{
  __int64 v4; // rax
  CBaseObject *v5; // rbx
  int v6; // eax
  unsigned int v7; // esi
  int v8; // r9d
  unsigned int v10; // eax

  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         104LL);
  v5 = (CBaseObject *)v4;
  if ( !v4 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x6Du, 0LL);
    return v7;
  }
  *(_DWORD *)(v4 + 8) = 1;
  *(_QWORD *)v4 = &CBitmapSource::`vftable';
  *(_QWORD *)(v4 + 16) = 0LL;
  *(_DWORD *)(v4 + 80) = 0x80000000;
  *(_DWORD *)(v4 + 88) = 0x80000000;
  *(_DWORD *)(v4 + 84) = 0x80000000;
  *(_DWORD *)(v4 + 92) = 0x80000000;
  *(_QWORD *)(v4 + 96) = 0LL;
  v6 = CBitmapSource::Initialize((CBitmapSource *)v4);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = v6;
    v10 = 111;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v10, 0LL);
    CBaseObject::Release(v5);
    return v7;
  }
  v7 = CBitmapSource::Update(v5, a1);
  v8 = v7;
  if ( (v7 & 0x80000000) != 0 )
  {
    v10 = 113;
    goto LABEL_8;
  }
  *a2 = v5;
  return v7;
}
