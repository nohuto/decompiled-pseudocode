/*
 * XREFs of _anonymous_namespace_::OutputCurrentFrameToEtw @ 0x1800F2F80
 * Callers:
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x1800F2E10 (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     _anonymous_namespace_::_unnamed_type__etwEndFrameSnapshot_::UpdateSnapshot @ 0x1800F39C0 (_anonymous_namespace_--_unnamed_type__etwEndFrameSnapshot_--UpdateSnapshot.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall anonymous_namespace_::OutputCurrentFrameToEtw(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp-1A8h] BYREF
  int v9; // [rsp+38h] [rbp-1A0h] BYREF
  int v10; // [rsp+40h] [rbp-198h] BYREF
  int v11; // [rsp+48h] [rbp-190h] BYREF
  int v12; // [rsp+50h] [rbp-188h] BYREF
  int v13; // [rsp+58h] [rbp-180h] BYREF
  int v14; // [rsp+60h] [rbp-178h] BYREF
  int v15; // [rsp+68h] [rbp-170h] BYREF
  int v16; // [rsp+70h] [rbp-168h] BYREF
  int v17; // [rsp+78h] [rbp-160h] BYREF
  int v18; // [rsp+80h] [rbp-158h] BYREF
  int v19; // [rsp+88h] [rbp-150h] BYREF
  int v20; // [rsp+90h] [rbp-148h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+A0h] [rbp-138h] BYREF
  int *v22; // [rsp+B0h] [rbp-128h]
  __int64 v23; // [rsp+B8h] [rbp-120h]
  int *v24; // [rsp+C0h] [rbp-118h]
  __int64 v25; // [rsp+C8h] [rbp-110h]
  int *v26; // [rsp+D0h] [rbp-108h]
  __int64 v27; // [rsp+D8h] [rbp-100h]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+E0h] [rbp-F8h] BYREF
  int *v29; // [rsp+F0h] [rbp-E8h]
  __int64 v30; // [rsp+F8h] [rbp-E0h]
  int *v31; // [rsp+100h] [rbp-D8h]
  __int64 v32; // [rsp+108h] [rbp-D0h]
  int *v33; // [rsp+110h] [rbp-C8h]
  __int64 v34; // [rsp+118h] [rbp-C0h]
  int *v35; // [rsp+120h] [rbp-B8h]
  __int64 v36; // [rsp+128h] [rbp-B0h]
  int *v37; // [rsp+130h] [rbp-A8h]
  __int64 v38; // [rsp+138h] [rbp-A0h]
  int *v39; // [rsp+140h] [rbp-98h]
  __int64 v40; // [rsp+148h] [rbp-90h]
  int *v41; // [rsp+150h] [rbp-88h]
  __int64 v42; // [rsp+158h] [rbp-80h]
  int *v43; // [rsp+160h] [rbp-78h]
  __int64 v44; // [rsp+168h] [rbp-70h]
  int *v45; // [rsp+170h] [rbp-68h]
  __int64 v46; // [rsp+178h] [rbp-60h]
  int *v47; // [rsp+180h] [rbp-58h]
  __int64 v48; // [rsp+188h] [rbp-50h]
  int *v49; // [rsp+190h] [rbp-48h]
  __int64 v50; // [rsp+198h] [rbp-40h]
  int *v51; // [rsp+1A0h] [rbp-38h]
  __int64 v52; // [rsp+1A8h] [rbp-30h]
  int *v53; // [rsp+1B0h] [rbp-28h]
  __int64 v54; // [rsp+1B8h] [rbp-20h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v9 = dword_1803FA740 - xmmword_1803FAED0;
    v8 = dword_1803FA73C - HIDWORD(xmmword_1803FAEC0);
    v10 = dword_1803FA738 - DWORD2(xmmword_1803FAEC0);
    v20 = dword_1803FA734 - DWORD1(xmmword_1803FAEC0);
    v19 = dword_1803FA730 - xmmword_1803FAEC0;
    v18 = dword_1803FA72C - HIDWORD(xmmword_1803FAEB0);
    v17 = dword_1803FA728 - DWORD2(xmmword_1803FAEB0);
    v16 = dword_1803FA84C - DWORD1(xmmword_1803FAEB0);
    v15 = dword_1803FA858 - xmmword_1803FAEB0;
    v14 = dword_1803FA840 - HIDWORD(xmmword_1803FAEA0);
    v13 = dword_1803FA87C - DWORD2(xmmword_1803FAEA0);
    v12 = dword_1803FA878 - DWORD1(xmmword_1803FAEA0);
    v11 = dword_1803FA874 - xmmword_1803FAEA0;
    v29 = &v11;
    v31 = &v12;
    v33 = &v13;
    v35 = &v14;
    v37 = &v15;
    v39 = &v16;
    v41 = &v17;
    v43 = &v18;
    v45 = &v19;
    v47 = &v20;
    v49 = &v10;
    v51 = &v8;
    v53 = &v9;
    v30 = 4LL;
    v32 = 4LL;
    v34 = 4LL;
    v36 = 4LL;
    v38 = 4LL;
    v40 = 4LL;
    v42 = 4LL;
    v44 = 4LL;
    v46 = 4LL;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 4LL;
    v54 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &ENDFRAME_DRAWLIST_BATCH_STATS,
      a3,
      0xEu,
      &v28);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v8 = dword_1803FA830 - DWORD2(xmmword_1803FAED0);
      v9 = dword_1803FA82C - DWORD1(xmmword_1803FAED0);
      v22 = &v9;
      v24 = &v8;
      v23 = 4LL;
      v25 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &ENDFRAME_PRIMITIVE_GROUP_STATS,
        v3,
        3u,
        &v21);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v10 = dword_1803FA83C - DWORD1(xmmword_1803FAEE0);
        v8 = dword_1803FA838 - xmmword_1803FAEE0;
        v9 = dword_1803FA834 - HIDWORD(xmmword_1803FAED0);
        v22 = &v9;
        v24 = &v8;
        v26 = &v10;
        v23 = 4LL;
        v25 = 4LL;
        v27 = 4LL;
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &ENDFRAME_TESSELLATED_PRIMITIVES_STATS,
          v4,
          4u,
          &v21);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          v8 = dword_1803FA854 - HIDWORD(xmmword_1803FAEE0);
          v9 = dword_1803FA850 - DWORD2(xmmword_1803FAEE0);
          v22 = &v9;
          v24 = &v8;
          v23 = 4LL;
          v25 = 4LL;
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &ENDFRAME_HW_DRAWLIST_CACHE_STATS,
            v5,
            3u,
            &v21);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          {
            v8 = dword_1803FA860 - HIDWORD(qword_1803FAEF0);
            v9 = dword_1803FA85C - qword_1803FAEF0;
            v22 = &v9;
            v24 = &v8;
            v23 = 4LL;
            v25 = 4LL;
            McGenEventWrite_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &ENDFRAME_WARP_DRAWLIST_CACHE_STATS,
              v6,
              3u,
              &v21);
          }
        }
      }
    }
    return anonymous_namespace_::_unnamed_type__etwEndFrameSnapshot_::UpdateSnapshot(&xmmword_1803FAEA0);
  }
  return result;
}
