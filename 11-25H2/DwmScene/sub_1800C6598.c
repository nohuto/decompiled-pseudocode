/*
 * XREFs of sub_1800C6598 @ 0x1800C6598
 * Callers:
 *     sub_1800C6C50 @ 0x1800C6C50 (sub_1800C6C50.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_18001CC4C @ 0x18001CC4C (sub_18001CC4C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C6598(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v6; // esi
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // ecx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r15
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // ecx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  __int128 v28; // [rsp+30h] [rbp-30h] BYREF
  __m128i si128; // [rsp+40h] [rbp-20h]

  v28 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18018C3B0);
  LOBYTE(v28) = 0;
  v6 = 0;
  if ( (a2 & 1) != 0 )
  {
    v7 = *(_DWORD *)&asc_18018B110[4 * (HIDWORD(a2) & 7) + 4 * ((a2 & 0x10000) != 0 ? 18LL : 12LL)];
    v6 = 1;
    *(_QWORD *)a3 = "POSITION";
    *(_DWORD *)(a3 + 8) = 0;
    *(_DWORD *)(a3 + 12) = v7;
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 24) = 0LL;
    sub_18001CC4C((__int64)&v28, "Position ", 9uLL);
  }
  if ( (a2 & 2) != 0 )
  {
    v8 = *(_DWORD *)&asc_18018B110[4 * ((a2 >> 35) & 7) + 4 * ((a2 & 0x20000) != 0 ? 18LL : 12LL)];
    v9 = v6++;
    v9 *= 32LL;
    *(_QWORD *)(v9 + a3) = "VERTEX_LAYOUT_SLOT_NORMAL";
    *(_DWORD *)(v9 + a3 + 8) = 0;
    *(_DWORD *)(v9 + a3 + 12) = v8;
    *(_QWORD *)(v9 + a3 + 16) = 1LL;
    *(_QWORD *)(v9 + a3 + 24) = 0LL;
    sub_18001CC4C((__int64)&v28, "Normal ", 7uLL);
  }
  if ( (a2 & 4) != 0 )
  {
    v10 = *(_DWORD *)&asc_18018B110[4 * ((a2 >> 41) & 7) + 4 * ((a2 & 0x80000) != 0 ? 18LL : 12LL)];
    v11 = v6++;
    v11 *= 32LL;
    *(_QWORD *)(v11 + a3) = "VERTEX_LAYOUT_SLOT_TANGENT";
    *(_DWORD *)(v11 + a3 + 8) = 0;
    *(_DWORD *)(v11 + a3 + 12) = v10;
    *(_QWORD *)(v11 + a3 + 16) = 2LL;
    *(_QWORD *)(v11 + a3 + 24) = 0LL;
    sub_18001CC4C((__int64)&v28, "Tangent ", 8uLL);
  }
  if ( (a2 & 8) != 0 )
  {
    v12 = *(_DWORD *)&asc_18018B110[4 * ((a2 >> 44) & 7) + 48];
    v13 = v6++;
    v13 *= 32LL;
    *(_QWORD *)(v13 + a3) = "VERTEX_LAYOUT_SLOT_BINORMAL";
    *(_DWORD *)(v13 + a3 + 8) = 0;
    *(_DWORD *)(v13 + a3 + 12) = v12;
    *(_QWORD *)(v13 + a3 + 16) = 3LL;
    *(_QWORD *)(v13 + a3 + 24) = 0LL;
    sub_18001CC4C((__int64)&v28, "Bitangent ", 0xAuLL);
  }
  if ( (a2 & 0x10) != 0 )
  {
    v14 = *(_DWORD *)&asc_18018B110[4 * ((a2 >> 38) & 7) + 4 * ((a2 & 0x40000) != 0 ? 18LL : 12LL)];
    v15 = v6++;
    v15 *= 32LL;
    *(_QWORD *)(v15 + a3) = "VERTEX_LAYOUT_SLOT_COLOR";
    *(_DWORD *)(v15 + a3 + 8) = 0;
    *(_DWORD *)(v15 + a3 + 12) = v14;
    *(_QWORD *)(v15 + a3 + 16) = 4LL;
    *(_QWORD *)(v15 + a3 + 24) = 0LL;
    sub_18001CC4C((__int64)&v28, "Colour ", 7uLL);
  }
  v16 = a2 & 0x100000;
  if ( (a2 & 0x20) != 0 )
  {
    v17 = *(_DWORD *)&asc_18018B110[4 * ((unsigned int)v16 != 0LL ? 18LL : 6LL) + 4 * ((a2 >> 47) & 7)];
    v18 = v6++;
    v18 *= 32LL;
    *(_QWORD *)(v18 + a3) = "VERTEX_LAYOUT_SLOT_TEXCOORD";
    *(_DWORD *)(v18 + a3 + 8) = 0;
    *(_DWORD *)(v18 + a3 + 12) = v17;
    *(_QWORD *)(v18 + a3 + 16) = 5LL;
    *(_QWORD *)(v18 + a3 + 24) = 0LL;
    sub_18001CC4C((__int64)&v28, "UV0 ", 4uLL);
  }
  if ( (a2 & 0x40) != 0 )
  {
    v19 = *(_DWORD *)&asc_18018B110[4 * (v16 != 0 ? 18LL : 6LL) + 4 * ((a2 >> 50) & 7)];
    v20 = v6++;
    v20 *= 32LL;
    *(_QWORD *)(v20 + a3) = "VERTEX_LAYOUT_SLOT_TEXCOORD";
    *(_DWORD *)(v20 + a3 + 8) = 1;
    *(_DWORD *)(v20 + a3 + 12) = v19;
    *(_QWORD *)(v20 + a3 + 16) = 6LL;
    *(_QWORD *)(v20 + a3 + 24) = 0LL;
    sub_18001CC4C((__int64)&v28, "UV1 ", 4uLL);
  }
  if ( (a2 & 0x80u) != 0LL )
  {
    v21 = v6++;
    v21 *= 32LL;
    *(_QWORD *)(v21 + a3) = "VERTEX_LAYOUT_SLOT_TEXCOORD";
    *(_DWORD *)(v21 + a3 + 8) = 2;
    *(_DWORD *)(v21 + a3 + 12) = 16;
    *(_QWORD *)(v21 + a3 + 16) = 7LL;
    *(_QWORD *)(v21 + a3 + 24) = 0LL;
    sub_18001CC4C((__int64)&v28, "UV2 ", 4uLL);
  }
  if ( (a2 & 0x100) != 0 )
  {
    v22 = v6++;
    v22 *= 32LL;
    *(_QWORD *)(v22 + a3) = "VERTEX_LAYOUT_SLOT_TEXCOORD";
    *(_DWORD *)(v22 + a3 + 8) = 3;
    *(_DWORD *)(v22 + a3 + 12) = 16;
    *(_QWORD *)(v22 + a3 + 16) = 8LL;
    *(_QWORD *)(v22 + a3 + 24) = 0LL;
    sub_18001CC4C((__int64)&v28, "UV3 ", 4uLL);
  }
  if ( (a2 & 0x200) != 0 )
  {
    v23 = *(_DWORD *)&asc_18018B110[4 * ((a2 >> 53) & 7) + 72];
    v24 = v6++;
    v24 *= 32LL;
    *(_QWORD *)(v24 + a3) = "VERTEX_LAYOUT_SLOT_BLENDWEIGHT";
    *(_DWORD *)(v24 + a3 + 8) = 0;
    *(_DWORD *)(v24 + a3 + 12) = v23;
    *(_QWORD *)(v24 + a3 + 16) = 9LL;
    *(_QWORD *)(v24 + a3 + 24) = 0LL;
    sub_18001CC4C((__int64)&v28, "JointWeights ", 0xDuLL);
  }
  if ( (a2 & 0x400) != 0 )
  {
    v25 = *(_DWORD *)&asc_18018B110[4 * (HIBYTE(a2) & 7) + 72];
    v26 = v6++;
    v26 *= 32LL;
    *(_QWORD *)(v26 + a3) = "VERTEX_LAYOUT_SLOT_BLENDINDICES";
    *(_DWORD *)(v26 + a3 + 8) = 0;
    *(_DWORD *)(v26 + a3 + 12) = v25;
    *(_QWORD *)(v26 + a3 + 16) = 10LL;
    *(_QWORD *)(v26 + a3 + 24) = 0LL;
    sub_18001CC4C((__int64)&v28, "JointIndices ", 0xDuLL);
  }
  *(_DWORD *)a1 = v6;
  *(_OWORD *)(a1 + 8) = v28;
  *(__m128i *)(a1 + 24) = si128;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18018C3B0);
  LOBYTE(v28) = 0;
  sub_180011A5C((__int64)&v28);
  return a1;
}
