/*
 * XREFs of DwmAsyncProcessSurfaceComplete @ 0x1401DAF10
 * Callers:
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1401DAD5C (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x140062E44 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall DwmAsyncProcessSurfaceComplete(PVOID Object, __int64 a2, __int64 a3)
{
  unsigned int i; // r14d
  __int64 v6; // rdx
  int v7; // ecx
  unsigned int v8; // ebx
  __int64 v9; // rdi
  unsigned int v10; // ecx
  __int64 v11; // rbp
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  unsigned int v24; // eax
  int v25; // edx
  unsigned int v26; // r10d
  __int64 v27; // rax
  __int64 v28; // rcx
  _OWORD *v29; // rax
  __int128 v30; // xmm1
  _OWORD *v31; // rcx
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  int v43; // [rsp+20h] [rbp-128h] BYREF
  __int16 v44; // [rsp+24h] [rbp-124h]
  char v45[34]; // [rsp+26h] [rbp-122h] BYREF
  __int128 v46; // [rsp+48h] [rbp-100h]
  __int128 v47; // [rsp+58h] [rbp-F0h]
  __int128 v48; // [rsp+68h] [rbp-E0h]
  __int128 v49; // [rsp+78h] [rbp-D0h]
  __int128 v50; // [rsp+88h] [rbp-C0h]
  __int128 v51; // [rsp+98h] [rbp-B0h]
  __int128 v52; // [rsp+A8h] [rbp-A0h]
  __int128 v53; // [rsp+B8h] [rbp-90h]
  __int128 v54; // [rsp+C8h] [rbp-80h]
  __int128 v55; // [rsp+D8h] [rbp-70h]
  __int128 v56; // [rsp+E8h] [rbp-60h]
  __int128 v57; // [rsp+F8h] [rbp-50h]
  int v58; // [rsp+108h] [rbp-40h]

  i = -1073741823;
  IncrementDWMWindowUniqueness((__int64)Object, a2, a3);
  v8 = 0;
  if ( Object )
  {
    v9 = *(_QWORD *)(W32GetSessionState(v7, v6) + 96);
    v10 = *(_DWORD *)(v9 + 716);
    if ( v10 )
    {
      do
      {
        v11 = 196LL * v8;
        if ( a2 == *(_QWORD *)(v9 + v11 + 888) )
        {
          memset_0(v45, 0, 0xE6uLL);
          v43 = 15466692;
          v44 = 0x8000;
          v12 = (_OWORD *)(v11 + v9 + 720);
          v13 = v12[1];
          v46 = *v12;
          v14 = v12[2];
          v47 = v13;
          v15 = v12[3];
          v48 = v14;
          v16 = v12[4];
          v49 = v15;
          v17 = v12[5];
          v50 = v16;
          v18 = v12[6];
          v51 = v17;
          v19 = v12[7];
          v12 += 8;
          v52 = v18;
          v20 = *v12;
          v53 = v19;
          v21 = v12[1];
          v54 = v20;
          v22 = v12[2];
          v55 = v21;
          v23 = v12[3];
          LODWORD(v12) = *((_DWORD *)v12 + 16);
          v56 = v22;
          v57 = v23;
          v58 = (int)v12;
          HIDWORD(v46) |= 0x100u;
          EtwUpdateEvent(*(_QWORD *)((char *)&v46 + 4));
          v24 = LpcRequestPort(Object, &v43);
          v25 = *(_DWORD *)(v9 + 716);
          v26 = v8;
          for ( i = v24; v26 < v25 - 1; v25 = *(_DWORD *)(v9 + 716) )
          {
            v27 = 196LL * (v26 + 1);
            v28 = v26++;
            v29 = (_OWORD *)(v9 + v27 + 720);
            v30 = v29[1];
            v31 = (_OWORD *)(v9 + 196 * v28 + 720);
            *v31 = *v29;
            v32 = v29[2];
            v31[1] = v30;
            v33 = v29[3];
            v31[2] = v32;
            v34 = v29[4];
            v31[3] = v33;
            v35 = v29[5];
            v31[4] = v34;
            v36 = v29[6];
            v31[5] = v35;
            v37 = v29[7];
            v29 += 8;
            v31[6] = v36;
            v31 += 8;
            v38 = *v29;
            *(v31 - 1) = v37;
            v39 = v29[1];
            *v31 = v38;
            v40 = v29[2];
            v31[1] = v39;
            v41 = v29[3];
            LODWORD(v29) = *((_DWORD *)v29 + 16);
            v31[2] = v40;
            v31[3] = v41;
            *((_DWORD *)v31 + 16) = (_DWORD)v29;
          }
          v10 = v25 - 1;
          *(_DWORD *)(v9 + 716) = v25 - 1;
        }
        else
        {
          ++v8;
        }
      }
      while ( v8 < v10 );
    }
    ObfDereferenceObject(Object);
  }
  return i;
}
