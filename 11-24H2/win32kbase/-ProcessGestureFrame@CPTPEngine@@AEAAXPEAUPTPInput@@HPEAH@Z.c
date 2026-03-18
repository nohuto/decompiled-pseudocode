/*
 * XREFs of ?ProcessGestureFrame@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z @ 0x1400F19E4
 * Callers:
 *     ?DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB368 (-DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEnginePointerNode@@@Z @ 0x1400F1D80 (-SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEngin.c)
 *     ?FixupGestureContact@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@H@Z @ 0x1400F1E08 (-FixupGestureContact@CPTPEngine@@AEAAXPEAUPTPEnginePointerNode@@H@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall CPTPEngine::ProcessGestureFrame(CPTPEngine *this, struct PTPInput *a2, unsigned int a3, int *a4)
{
  __int64 v4; // rax
  CPTPEngine *v6; // r10
  __int64 *v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rax
  char *v17; // rbp
  __int128 v18; // xmm1
  int *v19; // r8
  int v20; // esi
  char *v21; // r9
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  int v27; // r11d
  __int64 v28; // rbx
  int v29; // eax
  __int64 v30; // r9
  bool v31; // di
  char v32; // bp
  char v33; // bl
  char v34; // r8
  unsigned int v35; // esi
  char *v36; // r9
  __int64 v37; // r11
  int v38; // eax
  int v39; // ecx
  BOOL v40; // r8d
  __int64 v41; // r11
  __int64 v42; // [rsp+40h] [rbp-2C8h] BYREF
  __int64 v43; // [rsp+70h] [rbp-298h]
  char v44; // [rsp+78h] [rbp-290h] BYREF
  char v45; // [rsp+84h] [rbp-284h] BYREF

  v4 = 4LL;
  v6 = this;
  v8 = &v42;
  do
  {
    v9 = *((_OWORD *)a2 + 1);
    *(_OWORD *)v8 = *(_OWORD *)a2;
    v10 = *((_OWORD *)a2 + 2);
    *((_OWORD *)v8 + 1) = v9;
    v11 = *((_OWORD *)a2 + 3);
    *((_OWORD *)v8 + 2) = v10;
    v12 = *((_OWORD *)a2 + 4);
    *((_OWORD *)v8 + 3) = v11;
    v13 = *((_OWORD *)a2 + 5);
    *((_OWORD *)v8 + 4) = v12;
    v14 = *((_OWORD *)a2 + 6);
    *((_OWORD *)v8 + 5) = v13;
    v15 = *((_OWORD *)a2 + 7);
    a2 = (struct PTPInput *)((char *)a2 + 128);
    *((_OWORD *)v8 + 6) = v14;
    v8 += 16;
    *((_OWORD *)v8 - 1) = v15;
    --v4;
  }
  while ( v4 );
  v16 = *((_QWORD *)a2 + 14);
  v17 = 0LL;
  v18 = *((_OWORD *)a2 + 1);
  v19 = 0LL;
  v20 = 0;
  *(_OWORD *)v8 = *(_OWORD *)a2;
  v21 = &v44;
  v22 = *((_OWORD *)a2 + 2);
  *((_OWORD *)v8 + 1) = v18;
  v23 = *((_OWORD *)a2 + 3);
  *((_OWORD *)v8 + 2) = v22;
  v24 = *((_OWORD *)a2 + 4);
  *((_OWORD *)v8 + 3) = v23;
  v25 = *((_OWORD *)a2 + 5);
  *((_OWORD *)v8 + 4) = v24;
  v26 = *((_OWORD *)a2 + 6);
  *((_OWORD *)v8 + 5) = v25;
  *((_OWORD *)v8 + 6) = v26;
  v8[14] = v16;
  v27 = v43;
  if ( (_DWORD)v43 )
  {
    v28 = (unsigned int)v43;
    do
    {
      v19 = (int *)((char *)v6 + 328 * (unsigned int)(*((_DWORD *)v21 + 1) % *((_DWORD *)v6 + 4)) + 816);
      v29 = *v19;
      if ( (*v19 & 1) != 0 && (v29 & 0x800) == 0 )
      {
        ++v20;
        v17 = v21;
        *v19 = v29 & 0x7FFFFFFF;
      }
      v21 += 96;
      --v28;
    }
    while ( v28 );
  }
  v30 = v42;
  v31 = !a3
     && *((_DWORD *)v6 + 702) > 2u
     && v42 - *((_QWORD *)v6 + 373) < *((_QWORD *)v6 + 12) * (unsigned __int64)*((unsigned int *)v6 + 808) / 0x3E8;
  if ( v20 != 1 || (*((_DWORD *)v17 + 3) & 0x40000) != 0 || *((_DWORD *)v6 + 6) )
  {
    v32 = 0;
    goto LABEL_13;
  }
  v32 = 1;
  if ( (*v19 & 0x40000) == 0 )
  {
    *v19 |= 0x40000u;
    *((_QWORD *)v6 + 370) = v30;
  }
  if ( v30 - *((_QWORD *)v6 + 370) < *((_QWORD *)v6 + 12) * (unsigned __int64)*((unsigned int *)v6 + 788) / 0x3E8 )
  {
LABEL_13:
    v33 = 0;
    v34 = 1;
    if ( !v31 )
      goto LABEL_14;
    goto LABEL_49;
  }
  *v19 &= 0xFFFBFBFF;
  v19[1] |= 2u;
  v34 = 1;
  v33 = 0;
LABEL_49:
  v31 = 1;
LABEL_14:
  v35 = 0;
  if ( v27 )
  {
    v36 = &v45;
    do
    {
      v37 = 328LL * (unsigned int)(*((_DWORD *)v36 - 2) % *((_DWORD *)v6 + 4));
      v38 = *(_DWORD *)((char *)v6 + v37 + 816);
      v39 = v38;
      if ( (v38 & 1) != 0 && v31 && (v38 & 2) != 0 )
      {
        v39 = v38 | 0x800;
        *(_DWORD *)((char *)v6 + v37 + 816) = v38 | 0x800;
      }
      if ( (v39 & 1) == 0 || (v39 & 0x800) != 0 )
      {
        *(_DWORD *)v36 = 0;
        *(_QWORD *)(v36 + 28) = 0LL;
      }
      else
      {
        v40 = (v39 & 0x40000000) != 0 || (*(_DWORD *)v36 & 0x2000) != 0;
        if ( (v39 & 2) != 0 )
          *(_DWORD *)v36 = *(_DWORD *)v36 & 0xFFFCFFFF | 0x10000;
        if ( v31 )
          *(_DWORD *)v36 = 0x40000;
        if ( (*(_DWORD *)v36 & 0x40000) == 0 )
          v33 = 1;
        CPTPEngine::FixupGestureContact(v6, (struct PTPEnginePointerNode *)(v36 - 12), v40);
        v34 = 0;
        if ( !v32 )
          *(_DWORD *)((char *)v6 + v41 + 816) &= ~0x40000u;
      }
      ++v35;
      v36 += 96;
    }
    while ( v35 < (unsigned int)v43 );
  }
  if ( !v31 && !v34 && v33 || (*a4 = 1, !v34) )
    CBasePTPEngine::SendGestureOutput(v6, 3LL, a3);
}
