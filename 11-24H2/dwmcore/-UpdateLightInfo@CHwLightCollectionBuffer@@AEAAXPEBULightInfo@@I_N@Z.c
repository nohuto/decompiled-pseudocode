/*
 * XREFs of ?UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I_N@Z @ 0x1801F932C
 * Callers:
 *     ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z @ 0x1801F9268 (-Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z.c)
 * Callees:
 *     ?Transpose@CMILMatrix@@QEAAXXZ @ 0x18015C8A8 (-Transpose@CMILMatrix@@QEAAXXZ.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

void __fastcall CHwLightCollectionBuffer::UpdateLightInfo(
        CHwLightCollectionBuffer *this,
        const struct LightInfo *a2,
        unsigned int a3,
        char a4)
{
  __int64 v4; // r10
  int v7; // xmm0_4
  char v8; // r14
  bool v9; // zf
  char *v10; // r8
  char *v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // ebp
  unsigned int v14; // r9d
  unsigned int v15; // r11d
  __m128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm1
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  int v23; // xmm2_4
  int v24; // xmm2_4
  int v25; // r11d
  __m128 v26; // [rsp+30h] [rbp-68h] BYREF
  __int128 v27; // [rsp+40h] [rbp-58h]
  __int128 v28; // [rsp+50h] [rbp-48h]
  __int128 v29; // [rsp+60h] [rbp-38h]
  int v30; // [rsp+70h] [rbp-28h]

  v4 = a3;
  if ( a3 )
    v7 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  else
    v7 = 0;
  *((_DWORD *)this + 69) = v7;
  v8 = 0;
  v9 = a3 == 0;
  *(_OWORD *)((char *)this + 504) = 0LL;
  v10 = (char *)a2 + 12;
  if ( !v9 )
  {
    v11 = (char *)a2 + 12;
    v12 = v4;
    do
    {
      if ( !*((_DWORD *)v11 - 3) )
      {
        v8 = 1;
        *(__m128 *)((char *)this + 504) = _mm_add_ps(*(__m128 *)(v11 - 8), *(__m128 *)((char *)this + 504));
      }
      v11 += 240;
      --v12;
    }
    while ( v12 );
  }
  *((_DWORD *)this + 4) = -1;
  v13 = 0;
  v14 = 0;
  if ( (_DWORD)v4 )
  {
    v15 = 0;
    do
    {
      if ( v15 >= 8 )
        break;
      if ( *((_DWORD *)v10 - 3) )
      {
        v16 = *(__m128 *)(v10 + 92);
        v17 = *(_OWORD *)(v10 + 108);
        v30 = *((_DWORD *)v10 + 39);
        v26 = v16;
        v18 = *(_OWORD *)(v10 + 124);
        v27 = v17;
        v19 = *(_OWORD *)(v10 + 140);
        v28 = v18;
        v29 = v19;
        CMILMatrix::Transpose(&v26);
        v20 = v27;
        v21 = 112LL * v13;
        v22 = (unsigned __int64)v13++ << 7;
        *(__m128 *)((char *)this + v22 + 20) = v26;
        *(_OWORD *)((char *)this + v22 + 36) = v20;
        *(_OWORD *)((char *)this + v22 + 52) = v28;
        *(_OWORD *)((char *)this + v22 + 68) = v29;
        *(_OWORD *)((char *)this + v22 + 84) = *((_OWORD *)v10 + 10);
        *(_OWORD *)((char *)this + v22 + 100) = *((_OWORD *)v10 + 11);
        *(_OWORD *)((char *)this + v22 + 116) = *((_OWORD *)v10 + 12);
        *(_OWORD *)((char *)this + v22 + 132) = *((_OWORD *)v10 + 13);
        LODWORD(v18) = *((_DWORD *)v10 - 1);
        v23 = *(_DWORD *)v10;
        LODWORD(v20) = *((_DWORD *)v10 + 1);
        *(_DWORD *)((char *)this + v21 + 280) = *((_DWORD *)v10 - 2);
        *(_DWORD *)((char *)this + v21 + 284) = v18;
        *(_DWORD *)((char *)this + v21 + 288) = v23;
        *(_DWORD *)((char *)this + v21 + 292) = v20;
        *(_QWORD *)((char *)this + v21 + 296) = *((_QWORD *)v10 + 3);
        *(_DWORD *)((char *)this + v21 + 304) = *((_DWORD *)v10 + 8);
        *(_DWORD *)((char *)this + v21 + 308) = *((_DWORD *)v10 + 15);
        LODWORD(v18) = *((_DWORD *)v10 + 3);
        LODWORD(v20) = *((_DWORD *)v10 + 4);
        v24 = *((_DWORD *)v10 + 5);
        *(_DWORD *)((char *)this + v21 + 312) = *((_DWORD *)v10 + 2);
        *(_DWORD *)((char *)this + v21 + 316) = v18;
        *(_DWORD *)((char *)this + v21 + 320) = v20;
        *(_DWORD *)((char *)this + v21 + 324) = v24;
        *(_QWORD *)((char *)this + v21 + 328) = *(_QWORD *)(v10 + 36);
        *(_DWORD *)((char *)this + v21 + 336) = *((_DWORD *)v10 + 11);
        *(_DWORD *)((char *)this + v21 + 340) = *((_DWORD *)v10 + 16);
        *(_QWORD *)((char *)this + v21 + 344) = *((_QWORD *)v10 + 6);
        *(_DWORD *)((char *)this + v21 + 352) = *((_DWORD *)v10 + 14);
        *(_DWORD *)((char *)this + v21 + 356) = *((_DWORD *)v10 + 21);
        *(_OWORD *)((char *)this + v21 + 360) = *(_OWORD *)(v10 + 68);
        *(_DWORD *)((char *)this + v21 + 376) = *((_DWORD *)v10 + 22);
        *((_DWORD *)this + 4) = (*((_DWORD *)v10 - 3) << v25) | *((_DWORD *)this + 4) & ~(15 << v25);
        v15 = v25 + 4;
      }
      ++v14;
      v10 += 240;
    }
    while ( v14 < (unsigned int)v4 );
  }
  memset_0((char *)this + 128 * (unsigned __int64)v13 + 20, 0, 256 - ((unsigned __int64)v13 << 7));
  memset_0((char *)this + 112 * v13 + 280, 0, 224 - 112LL * v13);
  if ( v8 || !a4 )
    *((_DWORD *)this + 4) &= ~(15 << (4 * v13));
}
