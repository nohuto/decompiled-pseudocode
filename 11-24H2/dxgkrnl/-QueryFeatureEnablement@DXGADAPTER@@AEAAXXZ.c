/*
 * XREFs of ?QueryFeatureEnablement@DXGADAPTER@@AEAAXXZ @ 0x140193F14
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018FAF8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?IsFeatureEnabled@DXGADAPTER@@QEAA?AU_DXGK_ISFEATUREENABLED_RESULT@@W4_DXGK_FEATURE_ID@@@Z @ 0x140193068 (-IsFeatureEnabled@DXGADAPTER@@QEAA-AU_DXGK_ISFEATUREENABLED_RESULT@@W4_DXGK_FEATURE_ID@@@Z.c)
 */

void __fastcall DXGADAPTER::QueryFeatureEnablement(DXGADAPTER *this)
{
  unsigned __int16 v2; // cx
  unsigned int v3; // eax
  __int16 v4; // cx
  unsigned int v5; // eax
  _DWORD *v6; // rcx
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)this + 1257) = *((_WORD *)DXGADAPTER::IsFeatureEnabled((__int64)this, &v9, 0) + 1) & 1 | *((_DWORD *)this + 1257) & 0xFFFFFFFE;
  *((_DWORD *)this + 1257) = *((_DWORD *)this + 1257) & 0xFFFFFFFD | (2
                                                                    * (*((_WORD *)DXGADAPTER::IsFeatureEnabled(
                                                                                    (__int64)this,
                                                                                    &v9,
                                                                                    1u)
                                                                       + 1) & 1));
  *((_DWORD *)this + 1257) = *((_DWORD *)this + 1257) & 0xFFFFFFFB | (4
                                                                    * (*((_WORD *)DXGADAPTER::IsFeatureEnabled(
                                                                                    (__int64)this,
                                                                                    &v9,
                                                                                    2u)
                                                                       + 1) & 1));
  *((_DWORD *)this + 1257) = *((_DWORD *)this + 1257) & 0xFFFFFFF7 | (8
                                                                    * (*((_WORD *)DXGADAPTER::IsFeatureEnabled(
                                                                                    (__int64)this,
                                                                                    &v9,
                                                                                    3u)
                                                                       + 1) & 1));
  *((_DWORD *)this + 1257) = *((_DWORD *)this + 1257) & 0xFFFFFFEF | (16
                                                                    * (*((_WORD *)DXGADAPTER::IsFeatureEnabled(
                                                                                    (__int64)this,
                                                                                    &v9,
                                                                                    4u)
                                                                       + 1) & 1));
  *((_DWORD *)this + 1257) = *((_DWORD *)this + 1257) & 0xFFFFFFDF | (32
                                                                    * (*((_WORD *)DXGADAPTER::IsFeatureEnabled(
                                                                                    (__int64)this,
                                                                                    &v9,
                                                                                    0x20u)
                                                                       + 1) & 1));
  v2 = *((_WORD *)DXGADAPTER::IsFeatureEnabled((__int64)this, &v9, 0x25u) + 1) & 1;
  v3 = *((_DWORD *)this + 1257) & 0xFFFFFFBF;
  *((_DWORD *)this + 1257) = v3 | (v2 << 6);
  if ( (v3 & 1) != 0 )
  {
    v4 = *((_WORD *)DXGADAPTER::IsFeatureEnabled((__int64)this, &v9, 0x29u) + 1);
    v5 = *((_DWORD *)this + 1257) & 0xFFFFFF7F;
    *((_DWORD *)this + 1257) = v5 | ((v4 & 1) << 7);
    if ( (v5 & 1) != 0 )
    {
      v6 = (_DWORD *)*((_QWORD *)this + 376);
      if ( (*v6 & 0x20000) == 0 )
      {
        *v6 |= 0x20000u;
        **((_DWORD **)this + 376) = **((_DWORD **)this + 376) & 0xFFFE7FFF | 0x10000;
      }
    }
  }
  if ( (*((_DWORD *)this + 1257) & 2) != 0 )
  {
    v7 = (_DWORD *)*((_QWORD *)this + 376);
    if ( (*v7 & 0x100000) == 0 )
    {
      *v7 |= 0x100000u;
      **((_DWORD **)this + 376) = **((_DWORD **)this + 376) & 0xFFF3FFFF | 0x80000;
    }
  }
  if ( (*((_DWORD *)this + 1257) & 0x10) != 0 )
  {
    v8 = (_DWORD *)*((_QWORD *)this + 376);
    if ( (*v8 & 0x8000000) == 0 )
    {
      *v8 |= 0x8000000u;
      **((_DWORD **)this + 376) = **((_DWORD **)this + 376) & 0xF9FFFFFF | 0x4000000;
    }
  }
}
