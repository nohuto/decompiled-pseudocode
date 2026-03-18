/*
 * XREFs of GreSelectRedirectionBitmap @ 0x1400CD670
 * Callers:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x140020810 (-vClearRendering@DC@@QEAAXXZ.c)
 *     UpdateRedirectedDCE @ 0x14002F480 (UpdateRedirectedDCE.c)
 *     InvalidateDCE @ 0x14002F704 (InvalidateDCE.c)
 *     ?UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z @ 0x140285424 (-UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x14001F1E8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1400CDC4C (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1400CDC98 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1400CDCC4 (--0SURFREF@@QEAA@XZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1401481EC (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x14014823C (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreSelectRedirectionBitmap(HDC a1, HSURF a2)
{
  unsigned int v2; // edi
  HDC v5; // r15
  __int64 v6; // r14
  DC *v7; // rcx
  __int64 *v8; // rbx
  int v9; // eax
  unsigned int v10; // edx
  DC *v11; // rcx
  int v12; // eax
  SFMALTLOGICALSURFACEREF *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  HSURF v19; // rdx
  __int64 ***v20; // rax
  __int64 **v21; // rdx
  int v22; // ecx
  DC *v23; // rdx
  DC *v24; // rdx
  DC *v25[10]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v26[32]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v27; // [rsp+98h] [rbp-70h]
  _BYTE v28[32]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v29; // [rsp+C0h] [rbp-48h]
  _BYTE v30[32]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v31; // [rsp+E8h] [rbp-20h]
  _BYTE v32[32]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v33; // [rsp+110h] [rbp+8h]

  v2 = 0;
  v5 = a1;
  v6 = 0LL;
  while ( 1 )
  {
    if ( !v5 )
      return 1LL;
    DCOBJA::DCOBJA((DCOBJA *)v25, v5);
    v7 = v25[0];
    if ( !v25[0] )
      goto LABEL_27;
    v8 = (__int64 *)*((_QWORD *)v25[0] + 6);
    if ( (*((_DWORD *)v25[0] + 10) & 1) != 0 )
      break;
    if ( a2 && a1 == v5 )
    {
      SURFREF::SURFREF((SURFREF *)v30);
      v16 = v8[3];
      if ( v8 != (__int64 *)v16 && v16 && (*(_DWORD *)(v16 + 40) & 0x20000) != 0 )
      {
        SURFREF::SURFREF((SURFREF *)v32, a2);
        if ( v33 && (*(_DWORD *)(v33 + 116) & 1) != 0 )
        {
          v20 = *(__int64 ****)(v33 + 40);
          v21 = *v20;
          v22 = *((_DWORD *)v20 + 4);
          while ( v21[6] != v8 )
          {
            v21 = (__int64 **)*v21;
            if ( !--v22 )
              goto LABEL_35;
          }
          a2 = *(HSURF *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 24) + 8LL) + 8LL * *((unsigned int *)v21 + 4)) + 8LL);
        }
LABEL_35:
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v32);
      }
      LOBYTE(v15) = 5;
      v31 = HmgShareLockCheck(a2, v15);
      v6 = v31;
      v14 = (SFMALTLOGICALSURFACEREF *)v30;
      if ( !v31 )
        goto LABEL_26;
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v30);
      v7 = v25[0];
    }
    if ( (*((_DWORD *)v7 + 9) & 0x4000) != 0 )
    {
      v17 = *((_QWORD *)v7 + 62);
      if ( v17 )
      {
        SURFREF::SURFREF((SURFREF *)v26, *(HSURF *)(v17 + 32));
        if ( v27 )
          DEC_SHARE_REF_CNT(v27);
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v26);
        v7 = v25[0];
      }
    }
    if ( a2 )
    {
      SURFREF::SURFREF((SURFREF *)v26, a2);
      if ( v27 )
        INC_SHARE_REF_CNT(v27);
      *((_DWORD *)v25[0] + 9) |= 0x4000u;
      v9 = *(_DWORD *)(v6 + 112);
      if ( (v9 & 0x800) == 0 )
        *(_DWORD *)(v6 + 112) = v9 | 0x800;
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v26);
    }
    else
    {
      v6 = v8[318];
      *((_DWORD *)v7 + 9) &= ~0x4000u;
    }
    v10 = *((_DWORD *)v25[0] + 9) | 0x8000;
    if ( (*(_DWORD *)(v6 + 112) & 0x200) == 0 )
      v10 = *((_DWORD *)v25[0] + 9) & 0xFFFF7FFF;
    *((_DWORD *)v25[0] + 9) = v10;
    v11 = v25[0];
    *((_QWORD *)v25[0] + 62) = v6;
    if ( (*(_DWORD *)(v6 + 116) & 0x800) != 0 )
    {
      DC::vSetDpiScaling(
        v11,
        _mm_unpacklo_ps((__m128)*(unsigned int *)(v6 + 660), (__m128)*(unsigned int *)(v6 + 664)).m128_u64[0]);
    }
    else
    {
      v12 = *((_DWORD *)v11 + 130);
      if ( (v12 & 1) != 0 )
      {
        *((_DWORD *)v11 + 9) |= 0x10u;
        *(_QWORD *)((char *)v11 + 524) = 0LL;
        *((_DWORD *)v11 + 130) = v12 & 0xFFFFFFF8 | 4;
        *(_QWORD *)((char *)v11 + 532) = 0LL;
        DC::vUpdateCachedDPIScaleValue(v11);
      }
    }
    *((_QWORD *)v25[0] + 64) = *(_QWORD *)(v6 + 56);
    *((_DWORD *)v25[0] + 79) |= 0xFu;
    if ( *((int *)v25[0] + 26) > 1 )
      v5 = (HDC)*((_QWORD *)v25[0] + 14);
    else
      v5 = 0LL;
    DCOBJA::~DCOBJA((DCOBJA *)v25);
  }
  v18 = *((_DWORD *)v25[0] + 9);
  v19 = (HSURF)*((_QWORD *)v25[0] + 63);
  if ( (v18 & 0x4000) == 0 )
  {
    *((_DWORD *)v25[0] + 9) = v18 | 0x40000;
    *((_QWORD *)v25[0] + 265) = a2;
LABEL_60:
    DCOBJA::~DCOBJA((DCOBJA *)v25);
    return 1LL;
  }
  if ( !v19 )
    v19 = (HSURF)**((_QWORD **)v25[0] + 62);
  SURFREF::SURFREF((SURFREF *)v28, v19);
  if ( !v29 )
    goto LABEL_25;
  if ( !a2 )
  {
    v23 = v25[0];
    if ( (*((_DWORD *)v25[0] + 9) & 0x40000) == 0 )
    {
      INC_SHARE_REF_CNT(v29);
      v23 = v25[0];
    }
    *((_DWORD *)v23 + 9) |= 0x40000u;
    *((_QWORD *)v25[0] + 265) = 0LL;
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v28);
    goto LABEL_60;
  }
  SURFREF::SURFREF((SURFREF *)v26, a2);
  if ( v27 )
  {
    if ( v29 != v27 )
    {
      v24 = v25[0];
      if ( (*((_DWORD *)v25[0] + 9) & 0x40000) == 0 )
      {
        INC_SHARE_REF_CNT(v29);
        v24 = v25[0];
      }
      *((_DWORD *)v24 + 9) |= 0x40000u;
      *((_QWORD *)v25[0] + 265) = a2;
    }
    v2 = 1;
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v26);
LABEL_25:
  v14 = (SFMALTLOGICALSURFACEREF *)v28;
LABEL_26:
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF(v14);
LABEL_27:
  DCOBJA::~DCOBJA((DCOBJA *)v25);
  return v2;
}
