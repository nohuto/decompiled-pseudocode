/*
 * XREFs of sub_180086160 @ 0x180086160
 * Callers:
 *     sub_180085B04 @ 0x180085B04 (sub_180085B04.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18001E730 @ 0x18001E730 (sub_18001E730.c)
 *     sub_18004D7E4 @ 0x18004D7E4 (sub_18004D7E4.c)
 *     sub_18004D880 @ 0x18004D880 (sub_18004D880.c)
 *     sub_18004DDE8 @ 0x18004DDE8 (sub_18004DDE8.c)
 *     sub_180084A9C @ 0x180084A9C (sub_180084A9C.c)
 *     sub_180084E20 @ 0x180084E20 (sub_180084E20.c)
 *     sub_180084FC8 @ 0x180084FC8 (sub_180084FC8.c)
 *     sub_180086C5C @ 0x180086C5C (sub_180086C5C.c)
 */

// Hidden C++ exception states: #wind=8
char __fastcall sub_180086160(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // r12
  char v7; // r15
  __int64 v8; // r14
  __int64 v9; // rax
  _BYTE *v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  _BYTE *v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // r8
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // xmm1_4
  int v29; // xmm2_4
  __int64 v30; // rax
  int v32; // [rsp+20h] [rbp-E0h] BYREF
  int v33; // [rsp+24h] [rbp-DCh] BYREF
  int v34; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v35[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE *v36; // [rsp+40h] [rbp-C0h]
  _BYTE v37[32]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v38[40]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v39[30]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v40; // [rsp+180h] [rbp+80h] BYREF
  __int64 v41; // [rsp+190h] [rbp+90h]
  __int64 v42; // [rsp+198h] [rbp+98h]
  __int128 v43; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v44; // [rsp+1B0h] [rbp+B0h]
  __int64 v45; // [rsp+1B8h] [rbp+B8h]
  _QWORD v46[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v47[4]; // [rsp+1E0h] [rbp+E0h] BYREF
  _QWORD v48[4]; // [rsp+200h] [rbp+100h] BYREF

  v35[0] = 0LL;
  v5 = 0LL;
  *(_DWORD *)(a3 + 32) = 1;
  std::string::string(v48, "LUT_3D_SIZE");
  std::string::string(v47, "DOMAIN_MIN");
  std::string::string(v46, "DOMAIN_MAX");
  v6 = 0LL;
  v7 = 0;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 15LL;
  LOBYTE(v40) = 0;
  v8 = 0LL;
  while ( 1 )
  {
    v9 = sub_18004D7E4(a2, (__int64)&v40);
    if ( !(unsigned __int8)std::ios_base::operator bool(v9 + *(int *)(*(_QWORD *)v9 + 4LL)) )
      break;
    if ( v41 )
    {
      v10 = (_BYTE *)sub_1800137F8((__int64)&v40);
      if ( v11 != 1 || (*v10 != 13 ? (v12 = *v10 < 0xDu ? -1 : 1) : (v12 = 0), v12) )
      {
        v13 = (_BYTE *)sub_1800137F8((__int64)&v40);
        if ( *v13 != 35 )
        {
          v15 = v14 - 1;
          if ( v13[v15] == 13 )
            sub_18001E730((__int64)&v40, v15);
          v35[1] = v37;
          v16 = sub_180016F54((__int64)v37, (__int64)v48);
          v17 = sub_180016F54((__int64)v38, (__int64)&v40);
          if ( (unsigned __int8)sub_180086C5C(v17, v16) )
          {
            sub_18004D880(v39, (__int64)&v40);
            v43 = 0LL;
            v44 = 0LL;
            v45 = 15LL;
            LOBYTE(v43) = 0;
            v18 = sub_180084A9C((__int64)v39, (__int64)&v43);
            std::istream::operator>>(v18, v35);
            v5 = v35[0] * v35[0] * v35[0];
            v19 = (_QWORD *)(a3 + 8);
            v20 = (__int64)(*(_QWORD *)(a3 + 16) - *(_QWORD *)(a3 + 8)) >> 4;
            if ( v5 < v20 )
            {
              v21 = *v19 + 16 * v5;
              goto LABEL_19;
            }
            if ( v5 > v20 )
            {
              if ( v5 <= (__int64)(*(_QWORD *)(a3 + 24) - *(_QWORD *)(a3 + 8)) >> 4 )
              {
                v21 = sub_180084FC8(*(_QWORD *)(a3 + 16), v5 - v20, (__int64)v19);
LABEL_19:
                v19[1] = v21;
              }
              else
              {
                sub_180084E20(a3 + 8, v35[0] * v35[0] * v35[0], (__int64)v19);
              }
            }
            sub_180011A5C((__int64)&v43);
            goto LABEL_26;
          }
          v36 = v38;
          v22 = sub_180016F54((__int64)v38, (__int64)v47);
          v23 = sub_180016F54((__int64)v37, (__int64)&v40);
          sub_180086C5C(v23, v22);
          v36 = v38;
          v24 = sub_180016F54((__int64)v38, (__int64)v46);
          v25 = sub_180016F54((__int64)v37, (__int64)&v40);
          if ( (unsigned __int8)sub_180086C5C(v25, v24) )
          {
            v7 = 1;
          }
          else if ( v7 && v35[0] )
          {
            sub_18004D880(v39, (__int64)&v40);
            v34 = 0;
            v32 = 0;
            v33 = 0;
            v26 = std::istream::operator>>(v39, &v34);
            v27 = std::istream::operator>>(v26, &v32);
            std::istream::operator>>(v27, &v33);
            v28 = v32;
            v29 = v33;
            v30 = *(_QWORD *)(a3 + 8);
            *(_DWORD *)(v8 + v30) = v34;
            *(_DWORD *)(v8 + v30 + 4) = v28;
            *(_DWORD *)(v8 + v30 + 8) = v29;
            *(_DWORD *)(v8 + v30 + 12) = 1065353216;
            ++v6;
            v8 += 16LL;
            if ( v6 == v5 )
            {
              sub_18004DDE8((__int64)v39);
              break;
            }
LABEL_26:
            sub_18004DDE8((__int64)v39);
          }
        }
      }
    }
  }
  *(_QWORD *)a3 = v35[0];
  sub_180011A5C((__int64)&v40);
  sub_180011A5C((__int64)v46);
  sub_180011A5C((__int64)v47);
  return sub_180011A5C((__int64)v48);
}
