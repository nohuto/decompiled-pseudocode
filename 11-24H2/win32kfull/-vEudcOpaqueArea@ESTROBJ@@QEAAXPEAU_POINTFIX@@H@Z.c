/*
 * XREFs of ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x14018C3F4
 * Callers:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x140059DF0 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKA.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 */

void __fastcall ESTROBJ::vEudcOpaqueArea(ESTROBJ *this, struct _POINTFIX *a2, int a3)
{
  __int64 v3; // r9
  int v5; // r11d
  int v6; // r12d
  int v7; // r8d
  int v8; // r13d
  int v9; // esi
  int v10; // ebp
  int v11; // r14d
  int v12; // r15d
  __int64 v14; // rdx
  __int64 v15; // rax
  _DWORD *v16; // rdx
  _DWORD *v17; // rax
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // r9d
  int v21; // ecx
  int v22; // r8d
  __m128i v23; // xmm0
  int v24; // r8d
  int v25; // r9d
  int v26; // r8d
  int v27; // eax
  int v28; // edx
  int v29; // eax
  int v30; // r10d
  int v31; // r9d
  __int128 v32; // [rsp+20h] [rbp-48h] BYREF
  int v33; // [rsp+70h] [rbp+8h]
  __int64 v35; // [rsp+88h] [rbp+20h]

  v3 = *((_QWORD *)this + 7);
  v5 = a3;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v33 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( *(_DWORD *)(*(_QWORD *)v3 + 848LL) + 4 > 0 )
  {
    v14 = -16LL;
    v35 = -16LL;
    while ( 1 )
    {
      if ( v7 )
      {
        switch ( v7 )
        {
          case 1:
            if ( *((_DWORD *)this + 62) )
            {
              v16 = *(_DWORD **)v3;
              v17 = *(_DWORD **)(*(_QWORD *)v3 + 728LL);
              goto LABEL_22;
            }
            break;
          case 2:
            if ( *((_DWORD *)this + 63) )
            {
              v16 = *(_DWORD **)v3;
              v17 = *(_DWORD **)(*(_QWORD *)v3 + 736LL);
              goto LABEL_22;
            }
            break;
          case 3:
            if ( *((_DWORD *)this + 64) )
            {
              v16 = *(_DWORD **)v3;
              v17 = *(_DWORD **)(*(_QWORD *)v3 + 744LL);
LABEL_22:
              if ( v17 )
              {
                v19 = v16[78] - v17[78];
                v20 = v17[77] - v16[77];
                if ( v20 + v19 )
                {
                  v21 = 0;
                  if ( v19 >= 0 )
                    v21 = v16[78] - v17[78];
                  v22 = 0;
                  if ( v20 >= 0 )
                    v22 = v17[77] - v16[77];
                  if ( v22 || v21 )
                  {
                    if ( v21 > v8 )
                    {
                      v8 = v21;
                      v11 = v17[82] - v16[82];
                      v12 = v17[83] - v16[83];
                    }
                    if ( v22 > v6 )
                    {
                      v6 = v22;
                      v9 = v17[80] - v16[80];
                      v10 = v17[81] - v16[81];
                    }
                  }
                }
              }
            }
            break;
          default:
            v15 = *((_QWORD *)this + 33);
            if ( v15 )
            {
              if ( *(_DWORD *)(v15 + v14) )
              {
                v16 = *(_DWORD **)v3;
                v18 = *(_QWORD *)(*(_QWORD *)v3 + 752LL);
                if ( v18 )
                {
                  v17 = *(_DWORD **)(v18 + 8LL * (unsigned int)(v7 - 4));
                  goto LABEL_22;
                }
              }
            }
            break;
        }
      }
      *(_QWORD *)&v32 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v32);
      v7 = v33 + 1;
      v3 = *((_QWORD *)this + 7);
      v14 = v35 + 4;
      v33 = v7;
      v35 += 4LL;
      if ( v7 >= *(_DWORD *)(*(_QWORD *)v3 + 848LL) + 4 )
      {
        v5 = a3;
        break;
      }
    }
  }
  if ( v6 || v8 )
  {
    v23 = *(__m128i *)((char *)this + 12);
    v24 = v9;
    v25 = v10;
    if ( v9 >= v11 )
      v24 = v11;
    v32 = *(_OWORD *)((char *)this + 12);
    v26 = _mm_cvtsi128_si32(v23) + (v24 >> 4);
    v27 = v9;
    if ( v9 <= v11 )
      v27 = v11;
    v28 = ((v27 + 15) >> 4) + v23.m128i_i32[2];
    v29 = v10;
    if ( v10 >= v12 )
      v29 = v12;
    v30 = (v29 >> 4) + v23.m128i_i32[1];
    if ( v10 <= v12 )
      v25 = v12;
    v31 = HIDWORD(v32) + ((v25 + 15) >> 4);
    if ( v30 < *((_DWORD *)this + 4) )
      *((_DWORD *)this + 4) = v30;
    if ( v31 > *((_DWORD *)this + 6) )
      *((_DWORD *)this + 6) = v31;
    if ( v26 < *((_DWORD *)this + 3) )
      *((_DWORD *)this + 3) = v26;
    if ( v28 > *((_DWORD *)this + 5) )
      *((_DWORD *)this + 5) = v28;
    if ( v5 )
    {
      if ( v6 )
      {
        a2->x += v9;
        a2->y += v10;
        a2[1].x += v9;
        a2[1].y += v10;
      }
      if ( v8 )
      {
        a2[2].x += v11;
        a2[2].y += v12;
        a2[3].x += v11;
        a2[3].y += v12;
      }
    }
  }
}
