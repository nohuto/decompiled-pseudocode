/*
 * XREFs of ?Add@?$CSimpleArray@PEAU_GUID@@V?$CSimpleArrayEqualHelper@PEAU_GUID@@@ATL@@@ATL@@QEAAHAEBQEAU_GUID@@@Z @ 0x1800A0658
 * Callers:
 *     ?GetEffectsList@CCompositeSystemEffect@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x18005B8E0 (-GetEffectsList@CCompositeSystemEffect@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleArray<_GUID *,ATL::CSimpleArrayEqualHelper<_GUID *>>::Add(__int64 a1, _QWORD *a2)
{
  int *v2; // rsi
  int v4; // edi
  unsigned int v6; // edi
  bool v7; // sf
  __int64 v8; // rax
  _DWORD *v9; // rax
  _QWORD *v11; // r8

  v2 = (int *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 != *(_DWORD *)(a1 + 12) )
  {
    v9 = (_DWORD *)(a1 + 8);
    goto LABEL_10;
  }
  if ( *(_DWORD *)(a1 + 12) )
  {
    v7 = (v4 & 0x40000000) != 0;
    v6 = 2 * v4;
    if ( v7 )
      return 0LL;
  }
  else
  {
    v6 = 1;
  }
  if ( v6 > 0xFFFFFFFuLL )
    return 0LL;
  v8 = _o__recalloc(*(_QWORD *)a1, v6, 8LL);
  if ( !v8 )
    return 0LL;
  *(_QWORD *)a1 = v8;
  v9 = (_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 12) = v6;
LABEL_10:
  v11 = (_QWORD *)(*(_QWORD *)a1 + 8LL * *v2);
  if ( v11 )
    *v11 = *a2;
  ++*v9;
  return 1LL;
}
