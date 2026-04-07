/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z @ 0x18000AF00
 * Callers:
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x180008370 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x18000994C (-UpdateIcon@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?Initialize@CBitmapSource@@AEAAJXZ @ 0x18000AFD4 (-Initialize@CBitmapSource@@AEAAJXZ.c)
 *     ?Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z @ 0x18000B034 (-Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z.c)
 *     ??0CBitmapSource@@IEAA@XZ @ 0x180025BC4 (--0CBitmapSource@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CBitmapSource::Create(HICON a1, struct CBitmapSource **a2)
{
  CBitmapSource *v4; // rax
  CBitmapSource *v5; // rax
  CBaseObject *v6; // rsi
  int v7; // edi
  unsigned int v9; // eax

  v4 = (CBitmapSource *)DefaultHeap::AllocClear(0x68uLL);
  if ( !v4 || (v5 = CBitmapSource::CBitmapSource(v4), (v6 = v5) == 0LL) )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x72u, 0LL);
    return (unsigned int)v7;
  }
  v7 = CBitmapSource::Initialize(v5);
  if ( v7 < 0 )
  {
    v9 = 116;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v9, 0LL);
    CBaseObject::Release(v6);
    return (unsigned int)v7;
  }
  v7 = CBitmapSource::Update(v6, a1);
  if ( v7 < 0 )
  {
    v9 = 118;
    goto LABEL_9;
  }
  *a2 = v6;
  return (unsigned int)v7;
}
