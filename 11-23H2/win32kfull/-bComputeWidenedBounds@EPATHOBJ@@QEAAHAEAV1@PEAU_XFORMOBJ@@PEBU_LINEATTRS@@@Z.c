/*
 * XREFs of ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z @ 0x1C02F0AB0
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C028530C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C0285E98 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEB.c)
 *     EngStrokeAndFillPath @ 0x1C0288ED0 (EngStrokeAndFillPath.c)
 *     NtGdiFrameRgn @ 0x1C02A8D40 (NtGdiFrameRgn.c)
 *     NtGdiWidenPath @ 0x1C02C1260 (NtGdiWidenPath.c)
 * Callees:
 *     LongLongToLong @ 0x1C001499C (LongLongToLong.c)
 *     bFToL @ 0x1C0078740 (bFToL.c)
 *     Feature_178219323__private_IsEnabledDeviceUsage @ 0x1C0140350 (Feature_178219323__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall EPATHOBJ::bComputeWidenedBounds(
        EPATHOBJ *this,
        struct EPATHOBJ *a2,
        struct _XFORMOBJ *a3,
        const struct _LINEATTRS *a4)
{
  FLOAT_LONG v5; // xmm6_4
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  LONG v16; // edi
  LONG v17; // ebx
  __int64 result; // rax
  float eMiterLimit; // xmm1_4
  LONG v20; // esi
  unsigned int v21; // r8d
  LONG v22; // esi
  int *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rsi
  LONG v26; // r11d
  LONG v27; // r10d
  __int64 v28; // r11
  __int64 v29; // r10
  _DWORD *v30; // r9
  LONG v31; // r8d
  LONG v32; // r10d
  LONG v33; // r11d
  LONG v34; // [rsp+30h] [rbp-30h] BYREF
  LONG v35; // [rsp+34h] [rbp-2Ch] BYREF
  LONG v36; // [rsp+38h] [rbp-28h] BYREF
  LONG v37; // [rsp+40h] [rbp-20h] BYREF
  LONG v38; // [rsp+44h] [rbp-1Ch]
  LONG v39; // [rsp+48h] [rbp-18h]
  int v40; // [rsp+4Ch] [rbp-14h]
  LONG plResult; // [rsp+A8h] [rbp+48h] BYREF

  LODWORD(v5.e) = a4->elWidth;
  Feature_178219323__private_IsEnabledDeviceUsage();
  plResult = 0;
  bFToL(v5.e, &plResult, 6u);
  v37 = plResult;
  v38 = plResult;
  v39 = plResult;
  v40 = -plResult;
  if ( !EXFORMOBJ::bXform((EXFORMOBJ *)a3, (struct _VECTORL *)&v37, (struct _VECTORFX *)&v37, 2uLL, 0) )
    return 0LL;
  v8 = v37;
  v9 = v37;
  plResult = 0;
  v34 = 0;
  if ( v37 < 0 )
    v9 = -v37;
  v10 = v39;
  v11 = v39;
  if ( v39 < 0 )
    v11 = -v39;
  if ( v9 <= v11 )
  {
    if ( v39 < 0 )
      v10 = -v39;
    v8 = v10;
  }
  else if ( v37 < 0 )
  {
    v8 = -v37;
  }
  if ( LongLongToLong(((__int64)v8 >> 1) + 16, &plResult) < 0 )
    return 0LL;
  v12 = v38;
  v13 = v38;
  if ( v38 < 0 )
    v13 = -v38;
  v14 = v40;
  v15 = v40;
  if ( v40 < 0 )
    v15 = -v40;
  if ( v13 <= v15 )
  {
    if ( v40 < 0 )
      v14 = -v40;
    v12 = v14;
  }
  else if ( v38 < 0 )
  {
    v12 = -v38;
  }
  if ( LongLongToLong(((__int64)v12 >> 1) + 16, &v34) < 0 )
    return 0LL;
  if ( a4->iEndCap == 1 )
  {
    if ( LongLongToLong(plResult + (__int64)(plResult >> 1), &plResult) < 0 )
      return 0LL;
    if ( LongLongToLong(v34 + (__int64)(v34 >> 1), &v34) < 0 )
      return 0LL;
    v16 = plResult;
    if ( (unsigned int)(plResult + 0x3FFFFFFF) > 0x7FFFFFFD )
      return 0LL;
    v17 = v34;
    if ( (unsigned int)(v34 + 0x3FFFFFFF) > 0x7FFFFFFD )
      return 0LL;
  }
  else
  {
    v16 = plResult;
    v17 = v34;
  }
  if ( a4->iJoin == 2 )
  {
    eMiterLimit = a4->eMiterLimit;
    v20 = v16;
    if ( !(unsigned int)bFToL((float)v16 * eMiterLimit, &plResult, 6u) )
      return 0LL;
    v16 = plResult;
    if ( plResult < v20 )
      return 0LL;
    v22 = v17;
    if ( !(unsigned int)bFToL((float)v17 * eMiterLimit, &v34, v21) )
      return 0LL;
    v17 = v34;
    if ( v34 < v22 || (unsigned int)(v16 + 0x3FFFFFFF) > 0x7FFFFFFD || (unsigned int)(v34 + 0x3FFFFFFF) > 0x7FFFFFFD )
      return 0LL;
  }
  v23 = (int *)*((_QWORD *)a2 + 1);
  v24 = v23[12];
  v25 = v23[14];
  v26 = v23[13];
  v27 = v23[15];
  plResult = v24;
  v34 = v25;
  v35 = v26;
  v36 = v27;
  if ( (unsigned int)(v24 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  if ( (unsigned int)(v25 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  if ( (unsigned int)(v26 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  if ( (unsigned int)(v27 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  if ( LongLongToLong(v24 - v16, &plResult) < 0 )
    return 0LL;
  if ( LongLongToLong(v16 + v25, &v34) < 0 )
    return 0LL;
  if ( LongLongToLong(v28 - v17, &v35) < 0 )
    return 0LL;
  if ( LongLongToLong(v17 + v29, &v36) < 0 )
    return 0LL;
  if ( (unsigned int)(plResult + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  v31 = v34;
  if ( (unsigned int)(v34 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  v32 = v35;
  if ( (unsigned int)(v35 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  v33 = v36;
  if ( (unsigned int)(v36 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  v30[12] = plResult;
  result = 1LL;
  v30[14] = v31;
  v30[13] = v32;
  v30[15] = v33;
  return result;
}
