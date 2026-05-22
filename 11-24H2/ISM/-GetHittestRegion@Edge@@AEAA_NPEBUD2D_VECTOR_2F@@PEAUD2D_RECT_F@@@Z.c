/*
 * XREFs of ?GetHittestRegion@Edge@@AEAA_NPEBUD2D_VECTOR_2F@@PEAUD2D_RECT_F@@@Z @ 0x1801A9C4C
 * Callers:
 *     ?HitTest@Edge@@QEAA_NKKPEBUD2D_VECTOR_2F@@@Z @ 0x1801A9DCC (-HitTest@Edge@@QEAA_NKKPEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Edge::GetHittestRegion(Edge *this, const struct D2D_VECTOR_2F *a2, struct D2D_RECT_F *a3)
{
  float v3; // xmm1_4
  bool result; // al
  float v5; // xmm2_4
  bool v8; // r8
  char v9; // dl
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm3_4
  struct D2D_RECT_F v13; // [rsp+0h] [rbp-18h]

  v3 = *((float *)this + 19);
  result = 0;
  v5 = *((float *)this + 21);
  v8 = v3 == v5 || *((float *)this + 20) == *((float *)this + 22);
  if ( v3 != v5 || (v9 = 0, *((float *)this + 20) != *((float *)this + 22)) )
    v9 = 1;
  if ( *((_DWORD *)this + 18) != 2 || !v8 || !v9 )
    goto LABEL_24;
  if ( v3 == v5 )
  {
    v10 = *((float *)this + 14);
    if ( v10 > 0.0 )
    {
      v13.left = *((FLOAT *)this + 19);
      v13.right = v3 + a2->x;
LABEL_16:
      v13.top = fminf(*((float *)this + 20), *((float *)this + 22));
      v13.bottom = fmaxf(*((float *)this + 20), *((float *)this + 22));
LABEL_23:
      result = 1;
      *a3 = v13;
      return result;
    }
    if ( v10 < 0.0 )
    {
      v13.right = *((FLOAT *)this + 19);
      v13.left = v3 - a2->x;
      goto LABEL_16;
    }
  }
  else
  {
    v11 = *((float *)this + 20);
    if ( v11 == *((float *)this + 22) )
    {
      v12 = *((float *)this + 15);
      if ( v12 <= 0.0 )
      {
        if ( v12 >= 0.0 )
          goto LABEL_24;
        v13.bottom = *((FLOAT *)this + 20);
        v13.top = v11 - a2->y;
      }
      else
      {
        v13.top = *((FLOAT *)this + 20);
        v13.bottom = v11 + a2->y;
      }
      v13.right = fmaxf(v3, v5);
      v13.left = fminf(v3, v5);
      goto LABEL_23;
    }
  }
LABEL_24:
  *a3 = 0LL;
  return result;
}
