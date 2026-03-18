/*
 * XREFs of ?RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x18013C4CC
 * Callers:
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x18013C460 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CComposition::RegisterAnimateResource(CComposition *this, struct IAnimationResource *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  unsigned int v4; // ebx
  unsigned int v6; // eax
  int v7; // r9d
  struct IAnimationResource *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v2 = *((_DWORD *)this + 1476);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    v6 = 181;
    v7 = -2147024362;
    goto LABEL_8;
  }
  v4 = 0;
  if ( v3 > *((_DWORD *)this + 1475) )
  {
    v4 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 5880, 8, 1, &v8);
    v7 = v4;
    if ( (v4 & 0x80000000) == 0 )
      return v4;
    v6 = 192;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, v6, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x6EFu, 0LL);
    return v4;
  }
  *(_QWORD *)(*((_QWORD *)this + 735) + 8LL * v2) = a2;
  *((_DWORD *)this + 1476) = v3;
  return v4;
}
