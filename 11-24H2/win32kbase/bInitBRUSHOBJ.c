/*
 * XREFs of bInitBRUSHOBJ @ 0x1402E409C
 * Callers:
 *     InitializeGre @ 0x1402E6D50 (InitializeGre.c)
 * Callees:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x14000D300 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x14000D550 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     GreCreatePatternBrushInternal @ 0x14000DD70 (GreCreatePatternBrushInternal.c)
 *     GreDeleteObject @ 0x140010390 (GreDeleteObject.c)
 *     HmgModifyHandleType @ 0x140016130 (HmgModifyHandleType.c)
 *     HmgSetOwner @ 0x14002DC20 (HmgSetOwner.c)
 *     HmgShareLockCheck @ 0x14002F820 (HmgShareLockCheck.c)
 *     GreCreateBitmap @ 0x140039290 (GreCreateBitmap.c)
 *     GreSetBrushOwner @ 0x1400857A0 (GreSetBrushOwner.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x14010BC10 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     HmgMarkUndeletable @ 0x14010BC90 (HmgMarkUndeletable.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x14013C700 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     bInitBrush @ 0x1402E4824 (bInitBrush.c)
 */

__int64 __fastcall bInitBRUSHOBJ(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  int v3; // edi
  __int64 v4; // rcx
  int v5; // edi
  __int64 v6; // rcx
  int v7; // edi
  __int64 v8; // rcx
  int v9; // edi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 *v18; // rdx
  HBITMAP Bitmap; // rax
  HRGN v20; // rdi
  __int64 PatternBrushInternal; // rax
  __int64 v22; // rax
  __int64 *v23; // rdx
  __int64 *v24[6]; // [rsp+30h] [rbp-40h] BYREF
  int v25; // [rsp+60h] [rbp-10h]

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( !(unsigned int)bInitBrush(0, 0) )
    return 0LL;
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v24, 0, 7u, 0, 0);
  W32GetSessionState(v2);
  if ( v24[0] )
  {
    v25 = 1;
    *((_DWORD *)v24[0] + 10) |= 0x40200u;
    HmgSetOwner(*v24[0], 0, 16);
    HmgMarkUndeletable(*v24[0], 16);
    bSetStockObject(*v24[0], 4, 0);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v24);
  if ( !v3 )
    return 0LL;
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v24, 8421504, 7u, 0, 0);
  W32GetSessionState(v4);
  if ( v24[0] )
  {
    v25 = 1;
    *((_DWORD *)v24[0] + 10) |= 0x40200u;
    HmgSetOwner(*v24[0], 0, 16);
    HmgMarkUndeletable(*v24[0], 16);
    *((_DWORD *)v24[0] + 10) |= 4u;
    bSetStockObject(*v24[0], 2, 0);
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v24);
  if ( !v5 )
    return 0LL;
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v24, 4210752, 7u, 0, 0);
  W32GetSessionState(v6);
  if ( v24[0] )
  {
    v25 = 1;
    *((_DWORD *)v24[0] + 10) |= 0x40200u;
    HmgSetOwner(*v24[0], 0, 16);
    HmgMarkUndeletable(*v24[0], 16);
    *((_DWORD *)v24[0] + 10) |= 4u;
    bSetStockObject(*v24[0], 3, 0);
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v24);
  if ( !v7 )
    return 0LL;
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v24, 12632256, 7u, 0, 0);
  W32GetSessionState(v8);
  if ( v24[0] )
  {
    v25 = 1;
    *((_DWORD *)v24[0] + 10) |= 0x40200u;
    HmgSetOwner(*v24[0], 0, 16);
    HmgMarkUndeletable(*v24[0], 16);
    *((_DWORD *)v24[0] + 10) |= 4u;
    bSetStockObject(*v24[0], 1, 0);
    v9 = 1;
  }
  else
  {
    v9 = 0;
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v24);
  if ( !v9 || !(unsigned int)bInitBrush(5, 0) )
    return 0LL;
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v24, 0, 0xCu, 1, 0);
  if ( !v24[0] )
    goto LABEL_16;
  v25 = 1;
  *((_DWORD *)v24[0] + 10) |= 0x40200u;
  HmgSetOwner(*v24[0], 0, 16);
  HmgMarkUndeletable(*v24[0], 16);
  *((_DWORD *)v24[0] + 10) |= 0xC00u;
  *((_DWORD *)v24[0] + 44) = 5;
  *((_DWORD *)v24[0] + 42) = 1;
  HmgModifyHandleType(*v24[0] | 0x300000, v11);
  bSetStockObject(*v24[0], 8, 0);
  *(__int64 **)(v1 + 88) = v24[0];
  BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v24);
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v24, 0, 7u, 1, 0);
  if ( !v24[0] )
    goto LABEL_16;
  v25 = 1;
  *((_DWORD *)v24[0] + 10) |= 0x40200u;
  HmgSetOwner(*v24[0], 0, 16);
  HmgMarkUndeletable(*v24[0], 16);
  *((_DWORD *)v24[0] + 10) |= 0xC00u;
  *((_DWORD *)v24[0] + 44) = 0;
  *((_DWORD *)v24[0] + 42) = 0;
  *((_DWORD *)v24[0] + 43) = 0;
  *((_BYTE *)v24[0] + 184) = 0;
  *((_BYTE *)v24[0] + 185) = 0;
  v24[0][19] = 0LL;
  HmgModifyHandleType(*v24[0] | 0x300000, v12);
  bSetStockObject(*v24[0], 7, 0);
  v13 = *v24[0];
  *(__int64 **)(v1 + 648) = v24[0];
  *(_QWORD *)(v1 + 312) = v13;
  BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v24);
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v24, 0xFFFFFF, 7u, 1, 0);
  if ( !v24[0] )
    goto LABEL_16;
  v25 = 1;
  *((_DWORD *)v24[0] + 10) |= 0x40200u;
  HmgSetOwner(*v24[0], 0, 16);
  HmgMarkUndeletable(*v24[0], 16);
  *((_DWORD *)v24[0] + 10) |= 0xC00u;
  *((_DWORD *)v24[0] + 44) = 0;
  *((_DWORD *)v24[0] + 42) = 0;
  *((_DWORD *)v24[0] + 43) = 0;
  *((_BYTE *)v24[0] + 184) = 0;
  *((_BYTE *)v24[0] + 185) = 0;
  v24[0][19] = 0LL;
  HmgModifyHandleType(*v24[0] | 0x300000, v14);
  bSetStockObject(*v24[0], 6, 0);
  BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v24);
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v24, 0, 7u, 1, 0);
  if ( !v24[0] )
    goto LABEL_16;
  v25 = 1;
  *((_DWORD *)v24[0] + 10) |= 0x40200u;
  HmgSetOwner(*v24[0], 0, 16);
  HmgMarkUndeletable(*v24[0], 16);
  *((_DWORD *)v24[0] + 10) |= 0xC00u;
  *((_DWORD *)v24[0] + 44) = 0;
  *((_DWORD *)v24[0] + 42) = 0;
  *((_DWORD *)v24[0] + 43) = 0;
  *((_BYTE *)v24[0] + 184) = 0;
  *((_BYTE *)v24[0] + 185) = 0;
  v24[0][19] = 0LL;
  HmgModifyHandleType(*v24[0] | 0x300000, v15);
  bSetStockObject(*v24[0], 19, 0);
  v16 = *v24[0];
  *(__int64 **)(v1 + 120) = v24[0];
  *(_QWORD *)(v1 + 112) = v16;
  BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v24);
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v24, 0, 9u, 0, 0);
  if ( !v24[0] )
    goto LABEL_16;
  v25 = 1;
  *((_DWORD *)v24[0] + 10) |= 0x40200u;
  HmgSetOwner(*v24[0], 0, 16);
  HmgMarkUndeletable(*v24[0], 16);
  v17 = *v24[0];
  *(__int64 **)(v1 + 64) = v24[0];
  *(_QWORD *)(v1 + 40) = v17;
  BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v24);
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v24, 0xFFFFFF, 0xBu, 0, 0);
  if ( !v24[0] )
    goto LABEL_16;
  v25 = 1;
  *((_DWORD *)v24[0] + 10) |= 0x40200u;
  HmgSetOwner(*v24[0], 0, 16);
  HmgMarkUndeletable(*v24[0], 16);
  v18 = v24[0];
  *(_QWORD *)(v1 + 48) = *v24[0];
  *(_QWORD *)(v1 + 80) = v18;
  BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v24);
  Bitmap = (HBITMAP)GreCreateBitmap(8LL, 8, 1u, 1u, (__int64)&unk_1402648E8);
  v20 = (HRGN)Bitmap;
  if ( !Bitmap )
    return 0LL;
  PatternBrushInternal = GreCreatePatternBrushInternal(Bitmap, 0, 0);
  *(_QWORD *)(v1 + 56) = PatternBrushInternal;
  if ( !PatternBrushInternal )
    return 0LL;
  GreDeleteObject(v20);
  GreSetBrushOwner(*(HBRUSH *)(v1 + 56), 0);
  v22 = HmgShareLockCheck(*(_QWORD *)(v1 + 56), 16);
  if ( !v22 )
    return 0LL;
  *(_DWORD *)(v22 + 40) |= 0x200u;
  HmgMarkUndeletable(*(_QWORD *)(v1 + 56), 16);
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v24, 0xFFFFFF, 7u, 0, 0);
  if ( !v24[0] )
  {
LABEL_16:
    BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v24);
    return 0LL;
  }
  v25 = 1;
  BRUSHMEMOBJ::vGlobal(v24);
  bSetStockObject(*v24[0], 18, 0);
  v23 = v24[0];
  *(_QWORD *)(v1 + 96) = *v24[0];
  *(_QWORD *)(v1 + 104) = v23;
  BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v24);
  return 1LL;
}
