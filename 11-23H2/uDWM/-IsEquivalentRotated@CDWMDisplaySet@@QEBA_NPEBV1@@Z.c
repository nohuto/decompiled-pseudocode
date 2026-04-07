/*
 * XREFs of ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x1800287E4
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180029FFC (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ??1CDWMDisplay@@AEAA@XZ @ 0x180028A48 (--1CDWMDisplay@@AEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180050D7C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?IsRenderTargetEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x18005B094 (-IsRenderTargetEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?GetClonePrimaryDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18005B0E8 (-GetClonePrimaryDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ??0CDWMDisplay@@AEAA@AEBV0@@Z @ 0x1800BF3C0 (--0CDWMDisplay@@AEAA@AEBV0@@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800BF48C (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x1800BF55C (-IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CDWMDisplaySet::IsEquivalentRotated(CDWMDisplaySet *this, const struct CDWMDisplaySet *a2)
{
  char v4; // bl
  CDWMDisplay *v5; // r15
  __int64 v6; // r10
  int v7; // r14d
  int v8; // ecx
  bool v10; // si
  __int128 v11; // xmm6
  const struct CDWMDisplay *v12; // r10
  int v13; // edx
  __m256i v14; // [rsp+20h] [rbp-E8h] BYREF
  __m256i v15; // [rsp+40h] [rbp-C8h] BYREF
  int v16; // [rsp+60h] [rbp-A8h]
  __int128 v17; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v18; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v19[56]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v20; // [rsp+C0h] [rbp-48h]
  int v21; // [rsp+154h] [rbp+4Ch]
  int v22; // [rsp+158h] [rbp+50h]
  int v23; // [rsp+170h] [rbp+68h]

  memset(&v15.m256i_u64[1], 0, 24);
  v4 = 0;
  v16 = 0;
  memset(&v14.m256i_u64[1], 0, 24);
  v15.m256i_i32[0] = 0;
  if ( *((_DWORD *)this + 16) != *((_DWORD *)a2 + 16) )
    goto LABEL_8;
  if ( (int)CDWMDisplaySet::GetClonePrimaryDisplaysNoRef(this, &v15.m256i_u64[1]) < 0 )
    goto LABEL_8;
  if ( (int)CDWMDisplaySet::GetClonePrimaryDisplaysNoRef(a2, &v14.m256i_u64[1]) < 0 )
    goto LABEL_8;
  if ( v16 != 1 )
    goto LABEL_8;
  if ( v15.m256i_i32[0] != 1 )
    goto LABEL_8;
  v5 = *(CDWMDisplay **)v15.m256i_i64[1];
  if ( !CDWMDisplay::IsRenderTargetEquivalentTo(
          *(CDWMDisplay **)v15.m256i_i64[1],
          *(const struct CDWMDisplay **)v14.m256i_i64[1]) )
    goto LABEL_8;
  v7 = *((_DWORD *)v5 + 58);
  v8 = *(_DWORD *)(v6 + 232);
  if ( v7 == v8 )
    goto LABEL_8;
  v18 = *((_OWORD *)this + 1);
  v10 = ((v7 - 2) & 0xFFFFFFFD) == 0;
  if ( ((v8 - 2) & 0xFFFFFFFD) == 0 )
    v10 = ((v7 - 2) & 0xFFFFFFFD) != 0;
  if ( v10 )
  {
    LODWORD(v17) = *((_DWORD *)a2 + 5);
    DWORD1(v17) = *((_DWORD *)a2 + 4);
    DWORD2(v17) = *((_DWORD *)a2 + 7);
    HIDWORD(v17) = *((_DWORD *)a2 + 6);
    v11 = v17;
  }
  else
  {
    v11 = *((_OWORD *)a2 + 1);
    v17 = v11;
  }
  if ( (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(&v18, &v17) )
  {
    CDWMDisplay::CDWMDisplay((CDWMDisplay *)v19, v12);
    v23 = v7;
    if ( v10 )
    {
      v20 = v11;
      v13 = v21;
      v21 = v22;
      v22 = v13;
    }
    if ( CDWMDisplay::IsEquivalentTo(v5, (const struct CDWMDisplay *)v19) )
      v4 = 1;
    CDWMDisplay::~CDWMDisplay((CDWMDisplay *)v19);
    DynArrayImpl<0>::~DynArrayImpl<0>(&v14.m256i_u64[1]);
    DynArrayImpl<0>::~DynArrayImpl<0>(&v15.m256i_u64[1]);
    return v4;
  }
  else
  {
LABEL_8:
    DynArrayImpl<0>::~DynArrayImpl<0>(&v14.m256i_u64[1]);
    DynArrayImpl<0>::~DynArrayImpl<0>(&v15.m256i_u64[1]);
    return 0;
  }
}
