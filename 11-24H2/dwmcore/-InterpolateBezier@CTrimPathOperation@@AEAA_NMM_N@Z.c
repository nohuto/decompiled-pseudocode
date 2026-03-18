/*
 * XREFs of ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x18017FC44
 * Callers:
 *     ?InterpolateSegment@CTrimPathOperation@@AEAAPEAUSegment@Path@@AEBU23@MMPEAUD2D_POINT_2F@@@Z @ 0x18017E91C (-InterpolateSegment@CTrimPathOperation@@AEAAPEAUSegment@Path@@AEBU23@MMPEAUD2D_POINT_2F@@@Z.c)
 * Callees:
 *     ?SetPoints@?$CBezierFlattener@MVCMilPoint2F@@@@QEAAXAEBVCMilPoint2F@@000@Z @ 0x18017FF10 (-SetPoints@-$CBezierFlattener@MVCMilPoint2F@@@@QEAAXAEBVCMilPoint2F@@000@Z.c)
 *     ?Flatten@?$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z @ 0x180180140 (-Flatten@-$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z.c)
 *     ?GetFirstTangent@?$CBezierFlattener@MVCMilPoint2F@@@@QEBAJAEAVCMilPoint2F@@@Z @ 0x180180358 (-GetFirstTangent@-$CBezierFlattener@MVCMilPoint2F@@@@QEBAJAEAVCMilPoint2F@@@Z.c)
 *     ?TrimToEndAt@?$CBezier@MVCMilPoint2F@@@@QEAAXM@Z @ 0x1801805F4 (-TrimToEndAt@-$CBezier@MVCMilPoint2F@@@@QEAAXM@Z.c)
 *     ?TrimToStartAt@?$CBezier@MVCMilPoint2F@@@@QEAAXM@Z @ 0x1801FAA0C (-TrimToStartAt@-$CBezier@MVCMilPoint2F@@@@QEAAXM@Z.c)
 *     ?TrimBetween@?$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z @ 0x180248AE0 (-TrimBetween@-$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z.c)
 *     _hypot_0 @ 0x1802DF584 (_hypot_0.c)
 */

char __fastcall CTrimPathOperation::InterpolateBezier(CTrimPathOperation *this, float a2, float a3, char a4)
{
  int v4; // xmm3_4
  int v7; // xmm1_4
  int v8; // xmm0_4
  int v9; // xmm3_4
  float v10; // xmm1_4
  __int64 v11; // rcx
  char v12; // r10
  unsigned int v13; // edi
  __int64 v14; // r14
  __int64 v15; // rax
  __int128 v16; // xmm7
  int v17; // xmm1_4
  unsigned int v18; // esi
  __int128 v19; // xmm6
  bool v20; // zf
  __int64 v21; // r15
  float v22; // xmm1_4
  float v23; // xmm6_4
  char *v24; // rcx
  int v26; // xmm1_4
  _DWORD v27[2]; // [rsp+48h] [rbp-29h] BYREF
  _DWORD v28[2]; // [rsp+50h] [rbp-21h] BYREF
  int v29; // [rsp+58h] [rbp-19h] BYREF
  float v30; // [rsp+5Ch] [rbp-15h]
  unsigned int v31; // [rsp+D8h] [rbp+67h] BYREF
  int v32; // [rsp+DCh] [rbp+6Bh]
  char v33; // [rsp+E8h] [rbp+77h]
  char v34; // [rsp+F0h] [rbp+7Fh]

  v34 = a4;
  v4 = *((_DWORD *)this + 27);
  v31 = *((_DWORD *)this + 26);
  v27[0] = *((_DWORD *)this + 24);
  v7 = *((_DWORD *)this + 23);
  v28[0] = *((_DWORD *)this + 22);
  v8 = *((_DWORD *)this + 9);
  v32 = v4;
  v9 = *((_DWORD *)this + 25);
  v28[1] = v7;
  v10 = *((float *)this + 10);
  v29 = v8;
  v27[1] = v9;
  v30 = v10;
  CBezierFlattener<float,CMilPoint2F>::SetPoints(
    (_DWORD)this + 112,
    (unsigned int)&v29,
    (unsigned int)v28,
    (unsigned int)v27,
    (__int64)&v31);
  v13 = 0;
  v14 = 0LL;
  if ( v12 )
  {
    v13 = 1;
    v30 = a2 * *((float *)this + 21);
  }
  if ( a3 == 1.0 )
  {
    if ( !v12 || COERCE_FLOAT(LODWORD(a2) & _xmm) < 0.0000011920929 )
      return 1;
  }
  else
  {
    v15 = v13++;
    *(&v30 + 2 * v15) = a3 * *((float *)this + 21);
  }
  if ( (int)CBezierFlattener<float,CMilPoint2F>::GetFirstTangent(v11, &v31) >= 0 )
  {
    v16 = 0LL;
    v17 = *((_DWORD *)this + 10);
    *((_DWORD *)this + 51) = *((_DWORD *)this + 9);
    *((_DWORD *)this + 52) = v17;
    for ( *((_DWORD *)this + 83) = 0; ; *((_DWORD *)this + 83) = *((_DWORD *)this + 98) )
    {
      v31 = 0;
      v33 = CBezierFlattener<float,CMilPoint2F>::Flatten(
              (int)this + 112,
              (int)this + 212,
              (int)this + 112,
              (int)this + 336,
              15,
              (__int64)&v31,
              1);
      v18 = 0;
      do
      {
        v19 = v16;
        while ( 1 )
        {
          v20 = v18 == v31;
          if ( v18 >= v31 )
            break;
          v21 = v18 + 1;
          v22 = hypot_0(
                  (float)(*((float *)this + 2 * v21 + 51) - *((float *)this + 2 * v18 + 51)),
                  (float)(*((float *)this + 2 * v21 + 52) - *((float *)this + 2 * v18 + 52)));
          *(float *)&v19 = *(float *)&v19 + v22;
          if ( *(float *)&v19 > *(&v30 + 2 * v14) )
          {
            v20 = v18 == v31;
            v23 = (float)(*(float *)&v19 - *(&v30 + 2 * v14)) / v22;
            *((float *)&v29 + 2 * v14) = (float)((float)(1.0 - (float)(1.0 - v23)) * *((float *)this + v18 + 83))
                                       + (float)((float)(1.0 - v23) * *((float *)this + v21 + 83));
            break;
          }
          v16 = v19;
          ++v18;
        }
        if ( v20 )
          break;
        v14 = (unsigned int)(v14 + 1);
      }
      while ( (_DWORD)v14 != v13 );
      if ( (_DWORD)v14 == v13 )
        break;
      if ( !v33 )
        return 0;
      v26 = *((_DWORD *)this + 82);
      *((_DWORD *)this + 51) = *((_DWORD *)this + 81);
      *((_DWORD *)this + 52) = v26;
    }
    v24 = (char *)this + 112;
    if ( !v34 )
    {
      CBezier<float,CMilPoint2F>::TrimToEndAt(v24);
      return 1;
    }
    if ( v13 == 1 )
    {
      CBezier<float,CMilPoint2F>::TrimToStartAt(v24);
      return 1;
    }
    if ( (unsigned __int8)CBezier<float,CMilPoint2F>::TrimBetween(v24) )
      return 1;
  }
  return 0;
}
