/*
 * XREFs of sub_180086554 @ 0x180086554
 * Callers:
 *     sub_180085B04 @ 0x180085B04 (sub_180085B04.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memcmp @ 0x18000CD55 (memcmp.c)
 *     _CxxThrowException @ 0x18000CD61 (_CxxThrowException.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18001D480 @ 0x18001D480 (sub_18001D480.c)
 *     sub_18001D4D8 @ 0x18001D4D8 (sub_18001D4D8.c)
 *     sub_18001D58C @ 0x18001D58C (sub_18001D58C.c)
 *     sub_18001E730 @ 0x18001E730 (sub_18001E730.c)
 *     sub_180038A58 @ 0x180038A58 (sub_180038A58.c)
 *     sub_18004D7E4 @ 0x18004D7E4 (sub_18004D7E4.c)
 *     sub_180084CA0 @ 0x180084CA0 (sub_180084CA0.c)
 *     sub_180084E20 @ 0x180084E20 (sub_180084E20.c)
 *     sub_180084F18 @ 0x180084F18 (sub_180084F18.c)
 *     sub_180084FC8 @ 0x180084FC8 (sub_180084FC8.c)
 *     sub_180086C5C @ 0x180086C5C (sub_180086C5C.c)
 *     sub_180086E30 @ 0x180086E30 (sub_180086E30.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180086554(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r12d
  __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  char v8; // r15
  char v9; // r13
  __int64 v10; // rax
  __int64 v11; // r8
  char *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int8 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  const void *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // rbx
  char *v31; // r12
  __int64 v32; // rax
  char v33; // al
  __int64 v34; // rax
  __int64 v35; // r15
  _QWORD *v36; // rax
  __int64 v37; // r8
  _QWORD *v38; // r14
  __int64 *v39; // rbx
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  int *v43; // rcx
  int v44; // xmm1_4
  int v45; // xmm0_4
  char v47; // [rsp+30h] [rbp-D0h]
  char v48; // [rsp+31h] [rbp-CFh]
  char v49[2]; // [rsp+32h] [rbp-CEh] BYREF
  _BYTE v50[4]; // [rsp+34h] [rbp-CCh] BYREF
  int v51; // [rsp+38h] [rbp-C8h]
  __int64 v52; // [rsp+40h] [rbp-C0h]
  _QWORD *v53; // [rsp+48h] [rbp-B8h]
  _QWORD *v54; // [rsp+50h] [rbp-B0h]
  __int128 v55; // [rsp+58h] [rbp-A8h] BYREF
  char *v56; // [rsp+68h] [rbp-98h]
  _QWORD *v57; // [rsp+70h] [rbp-90h]
  __int64 v58; // [rsp+78h] [rbp-88h]
  _QWORD v59[4]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v60; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v61; // [rsp+B0h] [rbp-50h]
  __int64 v62; // [rsp+B8h] [rbp-48h]
  _QWORD v63[4]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v64[4]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v65[4]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v66[4]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+140h] [rbp+40h] BYREF

  v53 = (_QWORD *)a3;
  v58 = a2;
  v5 = 0LL;
  v6 = 0LL;
  v52 = 0LL;
  v7 = 0LL;
  LOBYTE(v3) = 0;
  v51 = v3;
  v48 = 0;
  v8 = 0;
  v47 = 0;
  v9 = 0;
  *(_DWORD *)(a3 + 32) = 0;
  v55 = 0LL;
  v56 = 0LL;
  std::string::string(v64, "<size>");
  std::string::string(v66, "<data>");
  std::string::string(v65, "</data>");
  v60 = 0LL;
  v61 = 0LL;
  v62 = 15LL;
  LOBYTE(v60) = 0;
  v10 = sub_18004D7E4(a2, (__int64)&v60);
  if ( !(unsigned __int8)std::ios_base::operator bool(v10 + *(int *)(*(_QWORD *)v10 + 4LL)) )
  {
LABEL_44:
    v38 = v53;
    goto LABEL_45;
  }
  v12 = (char *)*((_QWORD *)&v55 + 1);
  do
  {
    if ( v61 )
    {
      if ( v9 )
        goto LABEL_30;
      v13 = sub_1800137F8((__int64)&v60);
      if ( *(_BYTE *)(v14 + v13 - 1) == 13 )
        sub_18001E730((__int64)&v60, v14 - 1);
      v15 = (unsigned __int8 *)sub_1800137F8((__int64)&v60);
      v19 = sub_180084F18(v15, v16, v17, v18, 2LL);
      sub_18001D4D8((__int64)&v60, v20, v19);
      v21 = (const void *)sub_1800137F8((__int64)&v60);
      if ( v61 == 5 )
      {
        v3 = (unsigned __int8)v3;
        if ( !memcmp(v21, "<LUT>", 5uLL) )
          v3 = 1;
        v51 = v3;
      }
      if ( (_BYTE)v3 )
      {
        v57 = v63;
        v22 = sub_180016F54((__int64)v63, (__int64)v64);
        v23 = sub_180016F54((__int64)v59, (__int64)&v60);
        if ( (unsigned __int8)sub_180086C5C(v23, v22) )
        {
          sub_18001D58C((__int64)&v60, pExceptionObject, v64[2] + 1LL, 0xFFFFFFFFFFFFFFFFuLL);
          v52 = (int)sub_180086E30(pExceptionObject, v24, 10LL);
          v7 = v52 * v52 * v52;
          v48 = 1;
          sub_180011A5C((__int64)pExceptionObject);
        }
      }
      if ( v48
        && (v54 = v59,
            v25 = sub_180016F54((__int64)v59, (__int64)v66),
            v26 = sub_180016F54((__int64)v63, (__int64)&v60),
            (unsigned __int8)sub_180086C5C(v26, v25)) )
      {
        v8 = 1;
        v47 = 1;
      }
      else if ( v8 )
      {
        v54 = v59;
        v27 = sub_180016F54((__int64)v59, (__int64)v65);
        v28 = sub_180016F54((__int64)v63, (__int64)&v60);
        if ( (unsigned __int8)sub_180086C5C(v28, v27) )
        {
          v9 = 1;
        }
        else
        {
          v29 = v61 >> 1;
          v30 = 0LL;
          if ( v61 >> 1 )
          {
            v31 = v56;
            do
            {
              v32 = sub_1800137F8((__int64)&v60);
              v50[0] = *(_BYTE *)(v32 + 2 * v30);
              v50[1] = *(_BYTE *)(v32 + 2 * v30 + 1);
              v50[2] = 0;
              v33 = o_strtoul(v50, 0LL, 16LL);
              v49[0] = v33;
              if ( v12 == v31 )
              {
                sub_180084CA0(&v55, v12, v49);
                v12 = (char *)*((_QWORD *)&v55 + 1);
                v31 = v56;
              }
              else
              {
                *v12++ = v33;
                *((_QWORD *)&v55 + 1) = v12;
              }
              ++v30;
            }
            while ( v30 < v29 );
            LOBYTE(v3) = v51;
          }
          v8 = v47;
        }
      }
    }
    v34 = sub_18004D7E4(v58, (__int64)&v60);
  }
  while ( (unsigned __int8)std::ios_base::operator bool(v34 + *(int *)(*(_QWORD *)v34 + 4LL)) );
  if ( !v9 )
  {
    v6 = v52;
    goto LABEL_44;
  }
LABEL_30:
  v35 = v55;
  if ( &v12[-(_QWORD)v55] != (char *)(12 * v7) )
  {
    std::string::string(v63, "ColorTransform::ImportFormat_IridasLook() -- unexpected data layout in LOOK file");
    v36 = std::string::string(
            v59,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\colortransform.cpp");
    sub_180038A58(pExceptionObject, (__int64)v36, v37, (__int64)v63, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v38 = v53;
  v39 = v53 + 1;
  v40 = (__int64)(v53[2] - v53[1]) >> 4;
  if ( v7 < v40 )
  {
    v41 = *v39 + 16 * v7;
LABEL_38:
    v39[1] = v41;
    goto LABEL_39;
  }
  if ( v7 > v40 )
  {
    if ( v7 <= (__int64)(v53[3] - v53[1]) >> 4 )
    {
      v41 = sub_180084FC8(v53[2], v7 - v40, (__int64)(v53 + 1));
      goto LABEL_38;
    }
    sub_180084E20((__int64)(v53 + 1), v7, v11);
  }
LABEL_39:
  if ( v7 )
  {
    v42 = *v39;
    v43 = (int *)(v35 + 4);
    do
    {
      v44 = v43[1];
      v45 = *v43;
      *(_DWORD *)(v42 + v5) = *(v43 - 1);
      *(_DWORD *)(v42 + v5 + 4) = v45;
      *(_DWORD *)(v42 + v5 + 8) = v44;
      *(_DWORD *)(v42 + v5 + 12) = 1065353216;
      v43 += 3;
      v5 += 16LL;
      --v7;
    }
    while ( v7 );
  }
  v6 = v52;
LABEL_45:
  *v38 = v6;
  sub_180011A5C((__int64)&v60);
  sub_180011A5C((__int64)v65);
  sub_180011A5C((__int64)v66);
  sub_180011A5C((__int64)v64);
  return sub_18001D480((__int64)&v55);
}
