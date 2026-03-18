/*
 * XREFs of ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x18017F278
 * Callers:
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18017DD60 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 * Callees:
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x18017E444 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 *     ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x18017E8B8 (-IsSimpleGeometry@CPathData@@QEBA_NXZ.c)
 *     ?SetPoints@?$CBezierFlattener@MVCMilPoint2F@@@@QEAAXAEBVCMilPoint2F@@000@Z @ 0x18017FF10 (-SetPoints@-$CBezierFlattener@MVCMilPoint2F@@@@QEAAXAEBVCMilPoint2F@@000@Z.c)
 *     ?Flatten@?$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z @ 0x180180140 (-Flatten@-$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z.c)
 *     ?GetFirstTangent@?$CBezierFlattener@MVCMilPoint2F@@@@QEBAJAEAVCMilPoint2F@@@Z @ 0x180180358 (-GetFirstTangent@-$CBezierFlattener@MVCMilPoint2F@@@@QEBAJAEAVCMilPoint2F@@@Z.c)
 *     ?SumPointDistances@CPathLengthOperation@@AEBAMI@Z @ 0x1802151D4 (-SumPointDistances@CPathLengthOperation@@AEBAMI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     _hypot_0 @ 0x1802DF584 (_hypot_0.c)
 */

float __fastcall CPathLengthOperation::GetLength(CPathLengthOperation *this, const struct CPathData *a2)
{
  float v4; // xmm9_4
  _BYTE *v6; // rbx
  float v7; // xmm11_4
  _BYTE *v8; // rdi
  float v9; // xmm12_4
  float v10; // xmm7_4
  float v11; // xmm8_4
  float v12; // xmm10_4
  int v13; // xmm1_4
  int v14; // xmm0_4
  int v15; // xmm1_4
  __int64 v16; // rcx
  int v17; // ecx
  int v18; // r8d
  char v19; // si
  int v20; // r8d
  int v21; // xmm0_4
  int v22; // xmm1_4
  double v23; // xmm0_8
  _DWORD v24[2]; // [rsp+48h] [rbp-59h] BYREF
  _DWORD v25[2]; // [rsp+50h] [rbp-51h] BYREF
  _BYTE *v26; // [rsp+58h] [rbp-49h] BYREF
  __int128 v27; // [rsp+60h] [rbp-41h] BYREF
  void *retaddr; // [rsp+100h] [rbp+5Fh]
  unsigned int v29; // [rsp+110h] [rbp+6Fh] BYREF
  int v30; // [rsp+118h] [rbp+77h] BYREF
  int v31; // [rsp+11Ch] [rbp+7Bh]
  int v32; // [rsp+120h] [rbp+7Fh] BYREF
  int v33; // [rsp+124h] [rbp+83h]

  v4 = *((float *)a2 + 12);
  if ( v4 == 0.0 && CPathData::IsSimpleGeometry(a2) )
  {
    v6 = (_BYTE *)*((_QWORD *)a2 + 2);
    v7 = 0.0;
    v8 = (_BYTE *)*((_QWORD *)a2 + 3);
    v9 = 0.0;
    v26 = v6;
    v10 = 0.0;
    v11 = 0.0;
    while ( v6 != v8 )
    {
      v12 = 0.0;
      if ( *v6 )
      {
        switch ( *v6 )
        {
          case 1:
            if ( v6[2] )
              v12 = hypot_0((float)(v7 - v10), (float)(v9 - v11));
            break;
          case 2:
            v23 = hypot_0((float)(v10 - *((float *)v6 + 2)), (float)(v11 - *((float *)v6 + 3)));
            v10 = *((float *)v6 + 2);
            v11 = *((float *)v6 + 3);
            v12 = v23;
            break;
          case 5:
            v13 = *((_DWORD *)v6 + 4);
            v30 = *((_DWORD *)v6 + 6);
            v31 = *((_DWORD *)v6 + 7);
            v33 = *((_DWORD *)v6 + 5);
            v14 = *((_DWORD *)v6 + 3);
            v32 = v13;
            v15 = *((_DWORD *)v6 + 2);
            v24[1] = v14;
            v24[0] = v15;
            *(float *)v25 = v10;
            *(float *)&v25[1] = v11;
            CBezierFlattener<float,CMilPoint2F>::SetPoints(
              (_DWORD)this,
              (unsigned int)v25,
              (unsigned int)v24,
              (unsigned int)&v32,
              (__int64)&v30);
            if ( (int)CBezierFlattener<float,CMilPoint2F>::GetFirstTangent(v16, &v27) >= 0 )
            {
              v29 = 0;
              *((float *)this + 23) = v10;
              *((float *)this + 24) = v11;
              v19 = CBezierFlattener<float,CMilPoint2F>::Flatten(v17, (int)this + 100, v18, 0, 15, (__int64)&v29, 1);
              v12 = CPathLengthOperation::SumPointDistances(this, v29) + 0.0;
              while ( v19 )
              {
                v21 = *((_DWORD *)this + 53);
                v22 = *((_DWORD *)this + 54);
                v29 = 0;
                *((_DWORD *)this + 23) = v21;
                *((_DWORD *)this + 24) = v22;
                v19 = CBezierFlattener<float,CMilPoint2F>::Flatten(
                        (_DWORD)this,
                        (int)this + 100,
                        v20,
                        0,
                        15,
                        (__int64)&v29,
                        1);
                v12 = v12 + CPathLengthOperation::SumPointDistances(this, v29);
              }
            }
            v10 = *((float *)v6 + 6);
            v11 = *((float *)v6 + 7);
            break;
          default:
            ModuleFailFastForHRESULT(-2147418113, retaddr);
        }
      }
      else
      {
        v7 = *((float *)v6 + 2);
        v9 = *((float *)v6 + 3);
        v10 = v7;
        v11 = v9;
      }
      *((float *)v6 + 1) = v12;
      v4 = v4 + v12;
      Path::SegmentCollection::const_iterator::operator++(&v26);
      v6 = v26;
    }
    *((float *)a2 + 12) = v4;
  }
  return v4;
}
