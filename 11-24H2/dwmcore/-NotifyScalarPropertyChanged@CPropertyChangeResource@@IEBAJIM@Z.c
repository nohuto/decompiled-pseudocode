/*
 * XREFs of ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z @ 0x1801CD420
 * Callers:
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x180182CC0 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 *     ?SetRotationAngle@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801CD37C (-SetRotationAngle@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyScalarPropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        float a3)
{
  __int64 v3; // rax
  int v7; // eax
  __int64 v8; // r10
  __int64 v9; // rcx
  unsigned int v10; // edx
  int v11; // eax
  int v12; // ebx
  _QWORD v13[2]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *((_QWORD *)this + 7);
  if ( !v3 )
    return 0LL;
  if ( !*(_DWORD *)(v3 + 108) )
    return 0LL;
  if ( !*((_DWORD *)this + 18) )
    return 0LL;
  v7 = *((_DWORD *)this + 19);
  if ( !_bittest(&v7, a2) )
    return 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6392LL) + 72LL))(
         *(_QWORD *)(*((_QWORD *)this + 3) + 6392LL),
         11LL);
  if ( !v8 )
    return 0LL;
  v9 = *((_QWORD *)this + 7);
  if ( v9 )
    v10 = *(_DWORD *)(v9 + 108);
  else
    v10 = 0;
  v13[0] = v10;
  v13[1] = *((unsigned int *)this + 18);
  v11 = CoreUICallSend(v8, v13, 2LL, 11LL, 0, &unk_18032BF6A, a2, a3, v10);
  v12 = 0;
  if ( v11 != -2018375675 )
    v12 = v11;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0xC8u, 0LL);
  return (unsigned int)v12;
}
