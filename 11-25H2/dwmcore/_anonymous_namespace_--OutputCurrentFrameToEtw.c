/*
 * XREFs of _anonymous_namespace_::OutputCurrentFrameToEtw @ 0x180031410
 * Callers:
 *     ?FrameEnded@CTelemetryFrames@@SAX_N0_K@Z @ 0x1800312A0 (-FrameEnded@CTelemetryFrames@@SAX_N0_K@Z.c)
 * Callees:
 *     _anonymous_namespace_::_unnamed_type__etwEndFrameSnapshot_::UpdateSnapshot @ 0x180032000 (_anonymous_namespace_--_unnamed_type__etwEndFrameSnapshot_--UpdateSnapshot.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
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
  _BYTE v21[16]; // [rsp+A0h] [rbp-138h] BYREF
  int *v22; // [rsp+B0h] [rbp-128h]
  __int64 v23; // [rsp+B8h] [rbp-120h]
  int *v24; // [rsp+C0h] [rbp-118h]
  __int64 v25; // [rsp+C8h] [rbp-110h]
  int *v26; // [rsp+D0h] [rbp-108h]
  __int64 v27; // [rsp+D8h] [rbp-100h]
  _QWORD v28[28]; // [rsp+E0h] [rbp-F8h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v9 = dword_1804067A0 - xmmword_180406EE0;
    v8 = dword_18040679C - HIDWORD(xmmword_180406ED0);
    v10 = dword_180406798 - DWORD2(xmmword_180406ED0);
    v20 = dword_180406794 - DWORD1(xmmword_180406ED0);
    v19 = dword_180406790 - xmmword_180406ED0;
    v18 = dword_18040678C - HIDWORD(xmmword_180406EC0);
    v17 = dword_180406788 - DWORD2(xmmword_180406EC0);
    v16 = dword_1804068AC - DWORD1(xmmword_180406EC0);
    v15 = dword_1804068B8 - xmmword_180406EC0;
    v14 = dword_1804068A0 - HIDWORD(xmmword_180406EB0);
    v13 = dword_1804068DC - DWORD2(xmmword_180406EB0);
    v12 = dword_1804068D8 - DWORD1(xmmword_180406EB0);
    v11 = dword_1804068D4 - xmmword_180406EB0;
    v28[2] = &v11;
    v28[4] = &v12;
    v28[6] = &v13;
    v28[8] = &v14;
    v28[10] = &v15;
    v28[12] = &v16;
    v28[14] = &v17;
    v28[16] = &v18;
    v28[18] = &v19;
    v28[20] = &v20;
    v28[22] = &v10;
    v28[24] = &v8;
    v28[26] = &v9;
    v28[3] = 4LL;
    v28[5] = 4LL;
    v28[7] = 4LL;
    v28[9] = 4LL;
    v28[11] = 4LL;
    v28[13] = 4LL;
    v28[15] = 4LL;
    v28[17] = 4LL;
    v28[19] = 4LL;
    v28[21] = 4LL;
    v28[23] = 4LL;
    v28[25] = 4LL;
    v28[27] = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &ENDFRAME_DRAWLIST_BATCH_STATS,
      a3,
      14LL,
      v28);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v8 = dword_180406890 - DWORD2(xmmword_180406EE0);
      v9 = dword_18040688C - DWORD1(xmmword_180406EE0);
      v22 = &v9;
      v24 = &v8;
      v23 = 4LL;
      v25 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &ENDFRAME_PRIMITIVE_GROUP_STATS,
        v3,
        3LL,
        v21);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v10 = dword_18040689C - DWORD1(xmmword_180406EF0);
        v8 = dword_180406898 - xmmword_180406EF0;
        v9 = dword_180406894 - HIDWORD(xmmword_180406EE0);
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
          4LL,
          v21);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          v8 = dword_1804068B4 - HIDWORD(xmmword_180406EF0);
          v9 = dword_1804068B0 - DWORD2(xmmword_180406EF0);
          v22 = &v9;
          v24 = &v8;
          v23 = 4LL;
          v25 = 4LL;
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &ENDFRAME_HW_DRAWLIST_CACHE_STATS,
            v5,
            3LL,
            v21);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          {
            v8 = dword_1804068C0 - HIDWORD(qword_180406F00);
            v9 = dword_1804068BC - qword_180406F00;
            v22 = &v9;
            v24 = &v8;
            v23 = 4LL;
            v25 = 4LL;
            McGenEventWrite_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &ENDFRAME_WARP_DRAWLIST_CACHE_STATS,
              v6,
              3LL,
              v21);
          }
        }
      }
    }
    return anonymous_namespace_::_unnamed_type__etwEndFrameSnapshot_::UpdateSnapshot(&xmmword_180406EB0);
  }
  return result;
}
