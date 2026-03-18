/*
 * XREFs of ?QueryFeatureEnablement@DXGADAPTER@@AEAAXXZ @ 0x140191BC4
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018D7A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?IsFeatureEnabled@DXGADAPTER@@QEAA?AU_DXGK_ISFEATUREENABLED_RESULT@@W4_DXGK_FEATURE_ID@@@Z @ 0x140190D18 (-IsFeatureEnabled@DXGADAPTER@@QEAA-AU_DXGK_ISFEATUREENABLED_RESULT@@W4_DXGK_FEATURE_ID@@@Z.c)
 */

void __fastcall DXGADAPTER::QueryFeatureEnablement(DXGADAPTER *this)
{
  unsigned __int16 v2; // cx
  unsigned int v3; // eax
  _DWORD *v4; // rcx
  _DWORD *v5; // rcx
  _DWORD *v6; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)this + 1257) = *((_WORD *)DXGADAPTER::IsFeatureEnabled((__int64)this, &v7, 0) + 1) & 1 | *((_DWORD *)this + 1257) & 0xFFFFFFFE;
  *((_DWORD *)this + 1257) = *((_DWORD *)this + 1257) & 0xFFFFFFFD | (2
                                                                    * (*((_WORD *)DXGADAPTER::IsFeatureEnabled(
                                                                                    (__int64)this,
                                                                                    &v7,
                                                                                    1u)
                                                                       + 1) & 1));
  *((_DWORD *)this + 1257) = *((_DWORD *)this + 1257) & 0xFFFFFFFB | (4
                                                                    * (*((_WORD *)DXGADAPTER::IsFeatureEnabled(
                                                                                    (__int64)this,
                                                                                    &v7,
                                                                                    2u)
                                                                       + 1) & 1));
  *((_DWORD *)this + 1257) = *((_DWORD *)this + 1257) & 0xFFFFFFF7 | (8
                                                                    * (*((_WORD *)DXGADAPTER::IsFeatureEnabled(
                                                                                    (__int64)this,
                                                                                    &v7,
                                                                                    3u)
                                                                       + 1) & 1));
  *((_DWORD *)this + 1257) = *((_DWORD *)this + 1257) & 0xFFFFFFEF | (16
                                                                    * (*((_WORD *)DXGADAPTER::IsFeatureEnabled(
                                                                                    (__int64)this,
                                                                                    &v7,
                                                                                    4u)
                                                                       + 1) & 1));
  *((_DWORD *)this + 1257) = *((_DWORD *)this + 1257) & 0xFFFFFFDF | (32
                                                                    * (*((_WORD *)DXGADAPTER::IsFeatureEnabled(
                                                                                    (__int64)this,
                                                                                    &v7,
                                                                                    0x20u)
                                                                       + 1) & 1));
  v2 = *((_WORD *)DXGADAPTER::IsFeatureEnabled((__int64)this, &v7, 0x25u) + 1) & 1;
  v3 = *((_DWORD *)this + 1257) & 0xFFFFFFBF;
  *((_DWORD *)this + 1257) = v3 | (v2 << 6);
  if ( (v3 & 1) != 0 )
  {
    v4 = (_DWORD *)*((_QWORD *)this + 376);
    if ( (*v4 & 0x20000) == 0 )
    {
      *v4 |= 0x20000u;
      **((_DWORD **)this + 376) = **((_DWORD **)this + 376) & 0xFFFE7FFF | 0x10000;
    }
  }
  if ( (*((_DWORD *)this + 1257) & 2) != 0 )
  {
    v5 = (_DWORD *)*((_QWORD *)this + 376);
    if ( (*v5 & 0x100000) == 0 )
    {
      *v5 |= 0x100000u;
      **((_DWORD **)this + 376) = **((_DWORD **)this + 376) & 0xFFF3FFFF | 0x80000;
    }
  }
  if ( (*((_DWORD *)this + 1257) & 0x10) != 0 )
  {
    v6 = (_DWORD *)*((_QWORD *)this + 376);
    if ( (*v6 & 0x8000000) == 0 )
    {
      *v6 |= 0x8000000u;
      **((_DWORD **)this + 376) = **((_DWORD **)this + 376) & 0xF9FFFFFF | 0x4000000;
    }
  }
}
