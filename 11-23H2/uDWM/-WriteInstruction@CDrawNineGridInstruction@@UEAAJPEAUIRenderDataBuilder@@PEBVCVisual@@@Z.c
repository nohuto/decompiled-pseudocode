/*
 * XREFs of ?WriteInstruction@CDrawNineGridInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x180051CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUMilPointAndSizeL@@PEAUNineGridLayout@@@Z @ 0x180051E20 (-GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUMilPointAndSizeL@@PEAUNineGridLay.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawNineGridInstruction::WriteInstruction(
        struct _MARGINS *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  int v4; // edx
  int v6; // r10d
  unsigned int v7; // esi
  struct _MARGINS v8; // xmm0
  int v9; // eax
  int v10; // edx
  struct _MARGINS *v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // r10
  __int64 v15; // rdx
  float v16; // xmm0_4
  int v17; // eax
  int v18; // xmm1_4
  __int64 (__fastcall *v19)(struct IRenderDataBuilder *, int *, _QWORD); // r9
  int v20; // eax
  struct _MARGINS v21; // [rsp+30h] [rbp-50h] BYREF
  int v22; // [rsp+40h] [rbp-40h] BYREF
  float v23; // [rsp+44h] [rbp-3Ch]
  float v24; // [rsp+48h] [rbp-38h]
  float v25; // [rsp+4Ch] [rbp-34h]
  _DWORD v26[8]; // [rsp+50h] [rbp-30h] BYREF

  v4 = *((_DWORD *)a3 + 33) + this[2].cyBottomHeight;
  v6 = -this[2].cyTopHeight;
  v7 = 0;
  v8 = this[1];
  v9 = *((_DWORD *)a3 + 32) + this[2].cxRightWidth + this[2].cxLeftWidth;
  v22 = -this[2].cxLeftWidth;
  v23 = *(float *)&v6;
  if ( v9 < 0 )
    v9 = 0;
  v10 = v4 - v6;
  v24 = *(float *)&v9;
  v21 = v8;
  if ( v10 < 0 )
    v10 = 0;
  v25 = *(float *)&v10;
  CDrawNineGridInstruction::GetNineGridLayout(&v21, (const struct MilPointAndSizeL *)&v22, (struct NineGridLayout *)v26);
  v11 = this + 3;
  v12 = 0;
  while ( 1 )
  {
    v13 = *(_QWORD *)&v11->cxLeftWidth;
    if ( *(_QWORD *)&v11->cxLeftWidth )
    {
      v15 = v12 / 3;
      v16 = (float)(v26[v12 % 3 + 1] - v26[v12 % 3]);
      v17 = v26[(unsigned int)(v15 + 1) + 4] - v26[v15 + 4];
      *(float *)&v18 = (float)(int)v26[v12 % 3];
      v23 = (float)(int)v26[v15 + 4];
      v22 = v18;
      v24 = v16 + *(float *)&v18;
      v19 = *(__int64 (__fastcall **)(struct IRenderDataBuilder *, int *, _QWORD))(*(_QWORD *)a2 + 56LL);
      v25 = (float)v17 + v23;
      v20 = v19(a2, &v22, *(unsigned int *)(*(_QWORD *)(v13 + 16) + 24LL));
      v7 = v20;
      if ( v20 < 0 )
        break;
    }
    ++v12;
    v11 = (struct _MARGINS *)((char *)v11 + 8);
    if ( v12 >= 9 )
      return v7;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x11Cu, 0LL);
  return v7;
}
