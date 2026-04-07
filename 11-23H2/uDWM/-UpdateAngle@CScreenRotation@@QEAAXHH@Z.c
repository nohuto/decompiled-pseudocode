/*
 * XREFs of ?UpdateAngle@CScreenRotation@@QEAAXHH@Z @ 0x1800D7F88
 * Callers:
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x18010A4E0 (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180055EA8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x18006B960 (-Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?SetCenter@CVisual@@QEAAXNN@Z @ 0x180105508 (-SetCenter@CVisual@@QEAAXNN@Z.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x1801057CC (-SetRotation@CVisual@@QEAAXN@Z.c)
 */

void __fastcall CScreenRotation::UpdateAngle(CScreenRotation *this)
{
  int v2; // ecx
  unsigned int *v3; // rsi
  LONG v4; // ebp
  LONG v5; // ebx
  __m128i v6; // xmm0
  __int64 v7; // rax
  __int64 v8; // rax
  _BYTE v9[20]; // [rsp+20h] [rbp-48h] BYREF
  float v10; // [rsp+34h] [rbp-34h]
  float v11; // [rsp+38h] [rbp-30h]
  struct tagPOINT v12; // [rsp+70h] [rbp+8h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h]

  v2 = 360;
  v3 = (unsigned int *)((char *)this + 340);
  if ( *((_BYTE *)this + 338) )
  {
    v2 = (360 - *((_DWORD *)this + 87)) % 360;
    if ( v2 == -270 )
    {
      v2 = 90;
      goto LABEL_5;
    }
    if ( v2 == 270 )
    {
      v2 = -90;
      goto LABEL_5;
    }
  }
  else
  {
    *((_DWORD *)this + 87) = 720;
    *((_BYTE *)this + 338) = 1;
  }
  if ( abs32(v2) == 360 )
    v2 = 0;
LABEL_5:
  *((_DWORD *)this + 85) = v2;
  v12 = (struct tagPOINT)*((_QWORD *)this + 16);
  v4 = v12.y >> 1;
  v5 = v12.x >> 1;
  CVisual::SetCenter(this, (double)(v12.x >> 1), (double)(v12.y >> 1));
  CVisual::SetRotation(this, (double)(int)*v3);
  v6 = _mm_cvtsi32_si128(*v3);
  v7 = *((_QWORD *)this + 40);
  v10 = 0.0;
  v11 = 0.0;
  v12 = 0LL;
  *(_DWORD *)(v7 + 940) = _mm_cvtepi32_ps(v6).m128_u32[0];
  if ( abs32(*v3) == 180 || !*v3 )
  {
    if ( !*((_BYTE *)this + 338) )
      *((_BYTE *)this + 337) = 1;
  }
  else
  {
    v12.x = v4 - v5;
    v8 = *((_QWORD *)this + 40);
    v12.y = v5 - v4;
    v13 = *(_QWORD *)(v8 + 136);
    v10 = (float)((SHIDWORD(v13) >> 1) - ((int)v13 >> 1));
    v11 = (float)(((int)v13 >> 1) - (SHIDWORD(v13) >> 1));
  }
  CAnimatedTransitionVisual::Translate2D(*((CAnimatedTransitionVisual **)this + 40), (const struct TA_TRANSFORM_2D *)v9);
  CVisual::SetOffset((struct tagPOINT *)this, &v12);
  *((_DWORD *)this + 88) = 360;
}
