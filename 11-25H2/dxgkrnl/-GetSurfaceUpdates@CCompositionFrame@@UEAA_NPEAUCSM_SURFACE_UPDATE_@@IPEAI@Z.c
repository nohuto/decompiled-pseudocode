/*
 * XREFs of ?GetSurfaceUpdates@CCompositionFrame@@UEAA_NPEAUCSM_SURFACE_UPDATE_@@IPEAI@Z @ 0x14002C1F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x14002CBC8 (-GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall CCompositionFrame::GetSurfaceUpdates(
        CCompositionFrame *this,
        struct CSM_SURFACE_UPDATE_ *a2,
        int a3,
        unsigned int *a4)
{
  unsigned int v7; // edi
  CCompositionFrame *v9; // rbp
  CCompositionFrame *v10; // rcx
  unsigned __int8 v11; // si
  __int64 result; // rax
  unsigned int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // edx
  bool v16; // cf
  char *v17; // r13
  struct CCompositionBuffer *RenderingBuffer; // rax
  struct CCompositionBuffer *v19; // r13
  __int64 v20; // rcx
  char v21; // al
  _DWORD *v22; // rdx
  char *v23; // rax
  char *v24; // r8
  __int64 v25; // rcx
  int v26; // eax
  char *v27; // rcx
  __int128 v28; // xmm0
  int v29; // eax
  HANDLE v30; // rax
  char *v31; // rcx
  unsigned int v32; // eax
  char *v33; // rcx
  CCompositionFrame *v34; // rdx
  char *v35; // r13
  __int64 v36; // rax
  char *v37; // rsi
  __int64 v38; // rbp
  __int64 v39; // rsi
  __int64 v40; // r13
  int v41; // r13d
  char *v42; // rax
  __int64 v43; // rbp
  char v44; // al
  char *v45; // r13
  _DWORD *v46; // rdx
  char *v47; // r8
  __int64 v48; // rcx
  int v49; // eax
  __int128 v50; // xmm0
  HANDLE CurrentThreadId; // rax
  __int64 v52; // rcx
  unsigned int *v53; // rsi
  CCompositionFrame *v54; // rcx
  int v55; // edx
  int v56; // ecx
  __int64 v57; // r8
  int v58; // [rsp+60h] [rbp-68h] BYREF
  char *v59; // [rsp+68h] [rbp-60h]
  __int64 v60; // [rsp+70h] [rbp-58h] BYREF
  __int64 v61; // [rsp+78h] [rbp-50h] BYREF
  __int64 v62; // [rsp+80h] [rbp-48h]
  char *v63; // [rsp+88h] [rbp-40h]
  int v64; // [rsp+D0h] [rbp+8h]
  int v65; // [rsp+D0h] [rbp+8h]
  char *v66; // [rsp+E8h] [rbp+20h] BYREF

  v7 = 0;
  if ( !*((_BYTE *)this + 250) )
  {
    v33 = (char *)*((_QWORD *)this + 29);
    if ( !v33 )
    {
      v34 = (CCompositionFrame *)*((_QWORD *)this + 32);
      if ( v34 != (CCompositionFrame *)((char *)this + 256) )
      {
        v33 = (char *)v34 - 8;
        *((_BYTE *)this + 248) = 1;
        *((_QWORD *)this + 29) = (char *)v34 - 8;
      }
    }
    result = *((unsigned __int8 *)this + 248);
    if ( (_BYTE)result )
    {
      v35 = (char *)a2 + 192;
      v59 = (char *)a2 + 192;
      while ( 1 )
      {
        if ( !a3 )
          goto LABEL_8;
        if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v33 + 72LL))(v33) )
          break;
LABEL_79:
        v54 = *(CCompositionFrame **)(*((_QWORD *)this + 29) + 8LL);
        if ( v54 == (CCompositionFrame *)((char *)this + 256) )
        {
          *((_BYTE *)this + 248) = 0;
          v33 = 0LL;
        }
        else
        {
          v33 = (char *)v54 - 8;
        }
        *((_QWORD *)this + 29) = v33;
        result = *((unsigned __int8 *)this + 248);
        if ( !(_BYTE)result )
          goto LABEL_2;
      }
      v36 = *((_QWORD *)this + 29);
      v63 = (char *)*((_QWORD *)this + 24);
      v37 = v63;
      v62 = *(_QWORD *)(v36 + 48);
      v38 = v62;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v38 + 48, 0LL);
      if ( *(char **)(v38 + 88) == v37 && v37 || *(int *)(v38 + 64) <= 0 )
      {
        v41 = -1073741823;
LABEL_70:
        CurrentThreadId = PsGetCurrentThreadId();
        v52 = v38 + 48;
        if ( CurrentThreadId == *(HANDLE *)(v38 + 56) )
        {
          *(_QWORD *)(v38 + 56) = 0LL;
          ExReleasePushLockExclusiveEx(v52, 0LL);
        }
        else
        {
          ExReleasePushLockSharedEx(v52, 0LL);
        }
        KeLeaveCriticalRegion();
        if ( v41 < 0 )
        {
          v35 = v59;
        }
        else
        {
          v53 = (unsigned int *)*((_QWORD *)this + 29);
          if ( (*(unsigned int (__fastcall **)(unsigned int *))(*(_QWORD *)v53 + 64LL))(v53) != 1 )
            v53 = 0LL;
          if ( v53 )
          {
            if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 2604;
              if ( bTracingEnabled )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
                  McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                    v56,
                    v55,
                    v57,
                    0LL,
                    2,
                    -1,
                    L"m_pGlobal != NULL",
                    2604LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
              }
            }
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304872LL) + 88LL))(
              v38,
              v53[30]);
          }
          a2 = (struct CSM_SURFACE_UPDATE_ *)((char *)a2 + 376);
          v35 = v59 + 376;
          --a3;
          v59 += 376;
          ++v7;
        }
        goto LABEL_79;
      }
      v39 = 0LL;
      if ( *(_DWORD *)(v38 + 136) )
      {
        v40 = *(_QWORD *)(v38 + 128);
        if ( v40 != v38 + 120 )
        {
          v43 = v38 + 120;
          do
          {
            if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v40 - 24) + 24LL))(v40 - 24) )
              break;
            v39 = v40 - 24;
            v40 = *(_QWORD *)(v40 + 8);
          }
          while ( v40 != v43 );
          v38 = v62;
          if ( v39 )
          {
            v60 = 0LL;
            v65 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v39 + 232LL))(v39, &v60);
            v41 = v65;
            if ( v65 < 0 )
              goto LABEL_70;
            v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 168LL))(v39);
            v45 = v59;
            v46 = v59;
            v47 = v59 - 160;
            *(_DWORD *)a2 = 3 - (v44 != 0);
            *(_QWORD *)(v46 - 47) = *(_QWORD *)(v38 + 24);
            *((_QWORD *)v46 - 22) = *(_QWORD *)(v39 + 16);
            *(v46 - 42) = *(_DWORD *)(v60 + 28);
            *(v46 - 41) = *(_DWORD *)(v39 + 292);
            v48 = *(_QWORD *)(v39 + 296);
            LODWORD(v66) = 0;
            *v46 = 10;
            v62 = v48;
            v49 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *, char **))(*(_QWORD *)v48 + 56LL))(
                    v48,
                    v46,
                    v47,
                    &v66);
            if ( (_DWORD)v66 == 2 )
            {
              if ( v49 == -1073741789 )
              {
                (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v62 + 64LL))(v62, v45 - 160);
                *(_DWORD *)v45 = 1;
              }
            }
            else if ( (_DWORD)v66 )
            {
              if ( (_DWORD)v66 == 1 )
                *(_DWORD *)v45 = -1;
            }
            else
            {
              *(_DWORD *)v45 = 0;
            }
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
            *(_OWORD *)(v45 + 4) = *(_OWORD *)(v39 + 304);
            *(_QWORD *)(v45 + 20) = *(_QWORD *)(v39 + 320);
            *((_DWORD *)v45 + 7) = *(_DWORD *)(v39 + 328);
            v50 = *(_OWORD *)(v39 + 48);
            *(_DWORD *)(v39 + 304) = 0;
            *(_BYTE *)(v39 + 43) = 0;
            *((_OWORD *)v45 + 2) = v50;
            *((_OWORD *)v45 + 3) = *(_OWORD *)(v39 + 64);
            *((_OWORD *)v45 + 4) = *(_OWORD *)(v39 + 80);
            *((_OWORD *)v45 + 5) = *(_OWORD *)(v39 + 96);
            *((_OWORD *)v45 + 6) = *(_OWORD *)(v39 + 112);
            *((_OWORD *)v45 + 7) = *(_OWORD *)(v39 + 128);
            *((_OWORD *)v45 + 8) = *(_OWORD *)(v39 + 144);
            *((_OWORD *)v45 + 9) = *(_OWORD *)(v39 + 160);
            *((_OWORD *)v45 + 10) = *(_OWORD *)(v39 + 176);
            *((_DWORD *)v45 + 44) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 192LL))(v39);
            *((_DWORD *)v45 + 45) = *(_DWORD *)(v60 + 80);
            v41 = v65;
            goto LABEL_69;
          }
        }
        v35 = v59;
      }
      memset((char *)a2 + 4, 0, 0x174uLL);
      *(_DWORD *)a2 = 2;
      *(_QWORD *)(v35 - 188) = *(_QWORD *)(v38 + 24);
      v41 = 0;
LABEL_69:
      *(_QWORD *)(v38 + 88) = v63;
      goto LABEL_70;
    }
  }
LABEL_2:
  v9 = (CCompositionFrame *)*((_QWORD *)this + 30);
  *((_BYTE *)this + 250) = 1;
  if ( !v9 )
  {
    v10 = (CCompositionFrame *)*((_QWORD *)this + 34);
    if ( v10 != (CCompositionFrame *)((char *)this + 272) )
    {
      *((_QWORD *)this + 30) = v10;
      v9 = v10;
      *((_BYTE *)this + 249) = 1;
    }
  }
  v11 = *((_BYTE *)this + 249);
  if ( v11 )
  {
    while ( 1 )
    {
      if ( !a3 )
        goto LABEL_7;
      v13 = *((_DWORD *)v9 + 20);
      v14 = 0LL;
      v15 = *((_DWORD *)v9 + 16);
      v16 = v13 < v15;
      if ( v13 == v15 )
      {
        v13 = 0;
        *((_DWORD *)v9 + 20) = 0;
        v16 = v15 != 0;
      }
      if ( v16 )
        v14 = *((_QWORD *)v9 + 7) + 32LL * v13;
      if ( v14 )
        break;
LABEL_33:
      v9 = (CCompositionFrame *)**((_QWORD **)this + 30);
      if ( v9 == (CCompositionFrame *)((char *)this + 272) )
      {
        *((_BYTE *)this + 249) = 0;
        v9 = 0LL;
      }
      v11 = *((_BYTE *)this + 249);
      *((_QWORD *)this + 30) = v9;
      if ( !v11 )
        goto LABEL_6;
    }
    v17 = (char *)a2 + 192;
    v66 = (char *)a2 + 192;
    while ( 1 )
    {
      if ( !a3 )
        goto LABEL_7;
      v59 = *(char **)(v14 + 8);
      v60 = *((_QWORD *)this + 24);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v59 + 48, 0LL);
      v64 = -1073741823;
      if ( (*((_QWORD *)v59 + 11) != v60 || !v60) && *((int *)v59 + 16) > 0 )
      {
        RenderingBuffer = CCompositionSurface::GetRenderingBuffer((CCompositionSurface *)(v59 + 40));
        v19 = RenderingBuffer;
        if ( RenderingBuffer )
        {
          v20 = *(_QWORD *)RenderingBuffer;
          v61 = 0LL;
          v64 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, __int64 *))(v20 + 232))(RenderingBuffer, &v61);
          if ( v64 < 0 )
          {
            v17 = v66;
            goto LABEL_26;
          }
          v21 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v19 + 168LL))(v19);
          v22 = v66;
          v16 = v21 != 0;
          v23 = v59;
          v24 = v66 - 160;
          *(_DWORD *)a2 = 3 - v16;
          *(_QWORD *)(v22 - 47) = *((_QWORD *)v23 + 3);
          *((_QWORD *)v22 - 22) = *((_QWORD *)v19 + 2);
          v63 = v24;
          *(v22 - 42) = *(_DWORD *)(v61 + 28);
          *(v22 - 41) = *((_DWORD *)v19 + 73);
          v25 = *((_QWORD *)v19 + 37);
          v58 = 0;
          *v22 = 10;
          v62 = v25;
          v26 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *, int *))(*(_QWORD *)v25 + 56LL))(
                  v25,
                  v22,
                  v24,
                  &v58);
          if ( v58 == 2 )
          {
            if ( v26 == -1073741789 )
            {
              (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v62 + 64LL))(v62, v63);
              *(_DWORD *)v66 = 1;
            }
          }
          else if ( v58 )
          {
            if ( v58 == 1 )
              *(_DWORD *)v66 = -1;
          }
          else
          {
            *(_DWORD *)v66 = 0;
          }
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
          v27 = v66;
          *(_OWORD *)(v66 + 4) = *((_OWORD *)v19 + 19);
          *(_QWORD *)(v27 + 20) = *((_QWORD *)v19 + 40);
          *((_DWORD *)v27 + 7) = *((_DWORD *)v19 + 82);
          v28 = *((_OWORD *)v19 + 3);
          *((_DWORD *)v19 + 76) = 0;
          *((_BYTE *)v19 + 43) = 0;
          *((_OWORD *)v27 + 2) = v28;
          *((_OWORD *)v27 + 3) = *((_OWORD *)v19 + 4);
          *((_OWORD *)v27 + 4) = *((_OWORD *)v19 + 5);
          *((_OWORD *)v27 + 5) = *((_OWORD *)v19 + 6);
          *((_OWORD *)v27 + 6) = *((_OWORD *)v19 + 7);
          *((_OWORD *)v27 + 7) = *((_OWORD *)v19 + 8);
          *((_OWORD *)v27 + 8) = *((_OWORD *)v19 + 9);
          *((_OWORD *)v27 + 9) = *((_OWORD *)v19 + 10);
          *((_OWORD *)v27 + 10) = *((_OWORD *)v19 + 11);
          v29 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v19 + 192LL))(v19);
          v17 = v66;
          *((_DWORD *)v66 + 44) = v29;
          *((_DWORD *)v17 + 45) = *(_DWORD *)(v61 + 80);
        }
        else
        {
          memset((char *)a2 + 4, 0, 0x174uLL);
          v42 = v59;
          v17 = v66;
          *(_DWORD *)a2 = 2;
          *(_QWORD *)(v17 - 188) = *((_QWORD *)v42 + 3);
          v64 = 0;
        }
        *((_QWORD *)v59 + 11) = v60;
      }
LABEL_26:
      v30 = PsGetCurrentThreadId();
      v31 = v59 + 48;
      if ( v30 == *((HANDLE *)v59 + 7) )
      {
        *((_QWORD *)v59 + 7) = 0LL;
        ExReleasePushLockExclusiveEx(v31, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v31, 0LL);
      }
      KeLeaveCriticalRegion();
      if ( v64 >= 0 )
      {
        v17 += 376;
        a2 = (struct CSM_SURFACE_UPDATE_ *)((char *)a2 + 376);
        --a3;
        v66 = v17;
        ++v7;
      }
      v32 = *((_DWORD *)v9 + 20) + 1;
      v14 = 0LL;
      *((_DWORD *)v9 + 20) = v32;
      if ( v32 < *((_DWORD *)v9 + 16) )
        v14 = *((_QWORD *)v9 + 7) + 32LL * v32;
      if ( !v14 )
        goto LABEL_33;
    }
  }
LABEL_6:
  *((_BYTE *)this + 250) = 0;
LABEL_7:
  result = v11;
LABEL_8:
  *a4 = v7;
  return result;
}
