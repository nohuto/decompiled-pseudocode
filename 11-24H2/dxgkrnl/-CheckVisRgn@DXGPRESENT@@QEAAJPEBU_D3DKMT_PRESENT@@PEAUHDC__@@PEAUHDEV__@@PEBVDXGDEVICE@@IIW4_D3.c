/*
 * XREFs of ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x140309304
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402ED810 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002FD80 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x140033C28 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x14003503C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x140036924 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x140199AAC (-IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z @ 0x1403092E4 (-DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z.c)
 *     ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x14030A06C (-CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z.c)
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x14030AA60 (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x14030B30C (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x14030B714 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 */

__int64 __fastcall DXGPRESENT::CheckVisRgn(
        DXGPRESENT *this,
        const struct _D3DKMT_PRESENT *a2,
        HDC a3,
        HDEV a4,
        const struct DXGDEVICE *a5,
        unsigned int a6,
        unsigned int a7,
        enum _D3DDDIFORMAT a8,
        int a9)
{
  unsigned int v11; // ebx
  __int64 v12; // r14
  __int64 v13; // r12
  int v14; // r15d
  __int64 v15; // r13
  _DWORD *v16; // r15
  unsigned int (__fastcall *v17)(HDC, char *); // rax
  _DWORD *v18; // r12
  int v19; // r15d
  __int64 v20; // r12
  unsigned int i; // r15d
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int j; // ecx
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // eax
  int v28; // edx
  int v29; // r8d
  __int64 v30; // r12
  __int64 v31; // rcx
  int v32; // eax
  int v33; // r9d
  __int64 v34; // rax
  bool v35; // cl
  unsigned int k; // ecx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r12
  __int64 v41; // rax
  __int64 v42; // r15
  __int64 Value; // r8
  int v44; // edx
  __int64 v45; // rdx
  const struct DXGDEVICE *v46; // r9
  unsigned int v47; // eax
  __int64 v48; // r12
  __int64 v49; // rax
  unsigned int v50; // r13d
  __int16 v51; // ax
  __int64 result; // rax
  HDC v53; // rbx
  HDEV v54; // r14
  const wchar_t *v55; // r9
  unsigned int m; // r15d
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // r8
  signed int v60; // r10d
  int v61; // ecx
  int v62; // eax
  __int64 v63; // rcx
  int v64; // ecx
  int v65; // eax
  signed int v66; // r9d
  signed int v67; // edx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // r10
  __int64 v71; // rcx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v72; // eax
  char v73; // [rsp+50h] [rbp-30h]
  int v74; // [rsp+54h] [rbp-2Ch] BYREF
  __int64 v75; // [rsp+58h] [rbp-28h]
  int v76; // [rsp+60h] [rbp-20h] BYREF
  int v77; // [rsp+64h] [rbp-1Ch]
  __int64 v78; // [rsp+68h] [rbp-18h]
  unsigned int v79[4]; // [rsp+70h] [rbp-10h]

  v11 = 0;
  v12 = *((_QWORD *)a5 + 237);
  v13 = *(_QWORD *)(*((_QWORD *)a5 + 5) + 88LL);
  v78 = v13;
  if ( !(*(unsigned int (**)(void))(v13 + 224))() )
  {
    *((_DWORD *)this + 1) |= 3u;
    *((_QWORD *)this + 6) = a2->hWindow;
    v11 = -1071775737;
    WdLogSingleEntry1(4LL, -1071775737LL);
    WdLogGlobalForLineNumber = 10753;
    return v11;
  }
  v74 = 0;
  v14 = (*(__int64 (__fastcall **)(int *, _QWORD, _QWORD))(v13 + 240))(&v74, 0LL, 0LL);
  v77 = v14;
  v76 = 0;
  LODWORD(v75) = (*(__int64 (__fastcall **)(int *))(v13 + 320))(&v76);
  if ( v14 && !v74 )
  {
    *((_DWORD *)this + 1) |= 3u;
    *((_QWORD *)this + 6) = a2->hWindow;
    return 3223191558LL;
  }
  v15 = 0LL;
  if ( !v14 )
    v15 = v12;
  if ( (a2->Flags.Value & 0x100) != 0 && !v15 )
  {
    *((_DWORD *)this + 1) |= 3u;
    *((_QWORD *)this + 6) = a2->hWindow;
    v11 = -1071775737;
    WdLogSingleEntry1(4LL, -1071775737LL);
    WdLogGlobalForLineNumber = 10795;
    return v11;
  }
  v16 = (_DWORD *)((char *)this + 4);
  *((_DWORD *)this + 1) &= 0xFFFFFF7C;
  if ( !a2->hWindow && (a2->Flags.Value & 0x100) != 0 )
  {
    if ( v15 )
    {
      if ( v15 == *((_QWORD *)a5 + 237) )
      {
LABEL_123:
        v18 = (_DWORD *)((char *)this + 24);
        *(_OWORD *)((char *)this + 24) = *(_OWORD *)(4024LL * a2->VidPnSourceId
                                                   + *(_QWORD *)(*(_QWORD *)(v15 + 3120) + 128LL)
                                                   + 628);
LABEL_9:
        *((_QWORD *)this + 5) = 0LL;
        goto LABEL_10;
      }
      v16 = (_DWORD *)((char *)this + 4);
    }
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10807;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"(pDisplayAdapter != NULL) && (pDisplayAdapter == pDevice->GetDisplayAdapter(pPresent->VidPnSourceId))",
      10807LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_123;
  }
  v17 = *(unsigned int (__fastcall **)(HDC, char *))(v13 + 72);
  v18 = (_DWORD *)((char *)this + 24);
  if ( !v17(a3, (char *)this + 24) )
  {
    WdLogSingleEntry2(3LL, this, a2->hWindow);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 10815;
    return result;
  }
  if ( !(*(unsigned int (__fastcall **)(HDC, char *))(v78 + 328))(a3, (char *)this + 40) )
    goto LABEL_9;
LABEL_10:
  if ( *v18 >= *((_DWORD *)this + 8) || *((_DWORD *)this + 7) >= *((_DWORD *)this + 9) )
  {
    *v16 |= 3u;
    WdLogSingleEntry3(4LL, -1071775738LL, this, a2->VidPnSourceId);
    WdLogGlobalForLineNumber = 10831;
    return 3223191558LL;
  }
  if ( (*((_BYTE *)a5 + 1917) & 1) == 0 )
    *((_DWORD *)this + 16) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2) + 736LL)
                                                                           + 8LL)
                                                               + 536LL))(*(_QWORD *)(*((_QWORD *)a5 + 2) + 744LL));
  v19 = v75;
  if ( !v15 || !(_DWORD)v75 && ADAPTER_DISPLAY::IsInVirtualMode(*(ADAPTER_DISPLAY **)(v15 + 3120), a2->VidPnSourceId) )
  {
    if ( (a2->Flags.Value & 0x10000) == 0 )
    {
      if ( !v77 || !v19 || v76 )
      {
        *((_DWORD *)this + 1) |= 0x10u;
        *((_QWORD *)this + 6) = a2->hWindow;
        WdLogSingleEntry1(4LL, a5);
        WdLogGlobalForLineNumber = 10866;
        return 0LL;
      }
      return 3223192386LL;
    }
    if ( !v15 )
      goto LABEL_42;
  }
  v20 = *(_QWORD *)(v15 + 3120);
  for ( i = 0; i < *(_DWORD *)(v20 + 96); ++i )
  {
    v22 = *(_QWORD *)(v20 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v22 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v22 + 168)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6410;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"IsCoreResourceSharedOwner()",
        6410LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( i >= *(_DWORD *)(v20 + 96) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6411;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"VidPnSourceId < m_NumVidPnSources",
        6411LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( i >= *(_DWORD *)(v20 + 96) )
        continue;
    }
    if ( a5 == *(const struct DXGDEVICE **)(4024LL * i + *(_QWORD *)(v20 + 128) + 728) )
      goto LABEL_42;
  }
  v23 = *(_QWORD *)(v15 + 3120);
  for ( j = 0; j < *(_DWORD *)(v23 + 96); ++j )
  {
    v25 = 4024LL * j;
    v26 = *(_QWORD *)(v23 + 128);
    if ( *(_QWORD *)(v25 + v26 + 728) && *(_DWORD *)(v25 + v26 + 736) == 1 )
    {
      v73 = 1;
      goto LABEL_30;
    }
  }
  v73 = 0;
LABEL_30:
  v27 = *((_DWORD *)this + 10);
  v28 = *((_DWORD *)this + 6);
  v29 = *((_DWORD *)this + 7);
  v30 = *(_QWORD *)(v15 + 3120);
  *(_OWORD *)v79 = 0LL;
  v79[0] = v27 + v28;
  v31 = *((unsigned int *)this + 8);
  v79[2] = v31 + v27;
  v32 = *((_DWORD *)this + 11);
  v79[1] = v32 + v29;
  v33 = *((_DWORD *)this + 9);
  v79[3] = v33 + v32;
  if ( v28 == (_DWORD)v31
    || v29 == v33
    || ((v34 = *((_QWORD *)DXGPROCESS::GetCurrent(v31) + 11)) == 0
      ? (v35 = 0)
      : (v35 = (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v34 + 240))(0LL, 0LL, 0LL) != 0),
        v35) )
  {
LABEL_40:
    if ( !v73 || (v39 = a2->Flags.Value, (v39 & 0x10000) != 0) || v77 )
    {
LABEL_42:
      v40 = v78;
      if ( (a2->Flags.Value & 0x10000) != 0 )
        goto LABEL_160;
      if ( !a2->hWindow )
      {
LABEL_139:
        if ( (a2->Flags.Value & 0x100) != 0 )
        {
          v70 = 4024LL * a2->VidPnSourceId;
          v71 = *(_QWORD *)(*(_QWORD *)(v15 + 3120) + 128LL);
          v42 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v40 + 80))(
                  *(unsigned int *)(v70 + v71 + 628),
                  *(unsigned int *)(v70 + v71 + 632),
                  *(unsigned int *)(v70 + v71 + 636),
                  *(unsigned int *)(v70 + v71 + 640));
          goto LABEL_45;
        }
LABEL_44:
        v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v40 + 80))(0LL, 0LL, 0LL, 0LL);
        v42 = v41;
        if ( v41
          && (*(unsigned int (__fastcall **)(HDC, __int64, _QWORD))(v40 + 88))(
               a3,
               v41,
               HIWORD(a2->Flags.Value) & 1 | 4u) == -1 )
        {
          (*(void (__fastcall **)(__int64))(v40 + 128))(v42);
          v53 = a3;
          v54 = a4;
          WdLogSingleEntry5(6LL, this, a2->hWindow, a3, a4, a2->Flags.Value);
          v55 = L"0x%I64x unable to get VisRgn with hWindow=0x%I64x hdc = 0x%I64x hDev = 0x%I64x PresentFlags = 0x%I64x";
          WdLogGlobalForLineNumber = 11011;
LABEL_64:
          DxgkLogInternalTriageEvent(
            0LL,
            262145LL,
            0xFFFFFFFFLL,
            v55,
            (__int64)this,
            (__int64)a2->hWindow,
            (__int64)v53,
            (__int64)v54,
            a2->Flags.Value);
          return 3221225495LL;
        }
LABEL_45:
        Value = a2->Flags.Value;
        if ( !v42 )
        {
          v53 = a3;
          v54 = a4;
          WdLogSingleEntry5(6LL, this, a2->hWindow, a3, a4, a2->Flags.Value);
          v55 = L"0x%I64x not able to create hVisRgn hWindow = 0x%I64x hdc = 0x%I64x hDev = 0x%I64x PresentFlags = 0x%I64x";
          WdLogGlobalForLineNumber = 11021;
          goto LABEL_64;
        }
        v44 = *((_DWORD *)this + 1);
        if ( (Value & 0x10000) != 0 )
        {
          v45 = v44 | 0x10u;
          if ( a2->hDestination )
            v45 = *((_DWORD *)this + 1) & 0xFFFFFFEF;
        }
        else
        {
          v46 = a5;
          if ( (v44 & 0x20) != 0
            || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2) + 16LL) + 444LL) & 0x10) != 0 && (Value & 3) != 0 )
          {
            v45 = v44 | 0x10u;
LABEL_50:
            *((_DWORD *)this + 1) = v45;
            if ( (v45 & 0x10) != 0
              && (a2->Flags.Value & 0x100) != 0
              && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v15 + 3120), v46, a2->VidPnSourceId)
              && *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v15 + 3120), a2->VidPnSourceId)
                 + 2) == 41 )
            {
              if ( (v72 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value,
                    (*(_BYTE *)&v72 & 1) != 0)
                && (a8 == D3DDDIFMT_P8 || a8 == D3DDDIFMT_A8)
                || (*(_BYTE *)&v72 & 2) != 0 && !a2->hWindow )
              {
                *((_DWORD *)this + 1) &= ~0x10u;
              }
            }
            if ( (*((_DWORD *)this + 1) & 0x10) != 0 )
              goto LABEL_60;
            v47 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, const struct DXGDEVICE *))(v40 + 112))(
                    v42,
                    0LL,
                    0LL,
                    v46);
            v48 = v47;
            if ( v47 )
            {
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 2));
              v49 = operator new[]((unsigned int)v48, 0x4B677844u, 256LL);
              *((_QWORD *)this + 2) = v49;
              if ( v49 )
              {
                v50 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v78 + 112))(v42, (unsigned int)v48, v49);
                if ( v50 > (unsigned int)v48 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 11135;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146LL,
                    0xFFFFFFFFLL,
                    L"RealSize <= RgnDataSize",
                    11135LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                *((_DWORD *)this + 1) |= 2u;
                v40 = v78;
                if ( (a2->Flags.Value & 0x10000) != 0 )
                  v51 = (*(__int64 (__fastcall **)(HWND))(v78 + 392))(a2->hWindow);
                else
                  v51 = 0;
                *((_WORD *)this + 214) = v51;
                if ( v50 <= 0x20 )
                {
                  if ( (unsigned int)DXGPRESENT::ComputeSrcDstRects(this, a2, a6, a7) )
                    (*(void (__fastcall **)(HDC, char *))(v40 + 264))(a3, (char *)this + 128);
                }
                else
                {
                  v11 = DXGPRESENT::CombineRectList(this, a2, a3, a5, a6, a7);
                }
LABEL_60:
                (*(void (__fastcall **)(__int64, __int64, __int64, const struct DXGDEVICE *))(v40 + 128))(
                  v42,
                  v45,
                  Value,
                  v46);
                *((_QWORD *)this + 6) = a2->hWindow;
                return v11;
              }
              WdLogSingleEntry2(6LL, this, v48);
              WdLogGlobalForLineNumber = 11126;
              DxgkLogInternalTriageEvent(
                0LL,
                262145LL,
                0xFFFFFFFFLL,
                L"0x%I64x fails to allocate memory of size 0x%I64x for VisRgnData",
                (__int64)this,
                v48,
                0LL,
                0LL,
                0LL);
            }
            else
            {
              WdLogSingleEntry2(2LL, this, v42);
              WdLogGlobalForLineNumber = 11113;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"0x%I64x fails to get the size for VisRgnData from 0x%I64x",
                (__int64)this,
                v42,
                0LL,
                0LL,
                0LL);
            }
            (*(void (__fastcall **)(__int64))(v78 + 128))(v42);
            return 3221225495LL;
          }
          v45 = *((_DWORD *)this + 1) ^ ((unsigned __int8)*((_DWORD *)this + 1) ^ (unsigned __int8)(16
                                                                                                  * (*(__int64 (__fastcall **)(__int64, HDEV, HWND, __int64))(v40 + 136))(v15, a4, a2->hWindow, v42))) & 0x10u;
        }
        v46 = a5;
        goto LABEL_50;
      }
      if ( !(*(unsigned int (__fastcall **)(HDC))(v78 + 56))(a3)
        || v15 && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v15 + 3120), a5) )
      {
LABEL_160:
        if ( a2->hWindow )
          goto LABEL_44;
        goto LABEL_139;
      }
      *((_DWORD *)this + 1) |= 0x10u;
      *((_QWORD *)this + 6) = a2->hWindow;
      return 0LL;
    }
    WdLogSingleEntry5(4LL, -1071774910LL, this, a2->hSource, v39, a2->VidPnSourceId);
    WdLogGlobalForLineNumber = 10943;
    return 3223192386LL;
  }
  for ( k = 0; k < *(_DWORD *)(v30 + 96); ++k )
  {
    v37 = 4024LL * k;
    v38 = *(_QWORD *)(v30 + 128);
    if ( *(_DWORD *)(v37 + v38 + 736) == 1 && *(_BYTE *)(v37 + v38 + 760) )
      goto LABEL_40;
  }
  for ( m = 0; ; ++m )
  {
    if ( m >= *(_DWORD *)(v30 + 96) )
    {
      v63 = a2->Flags.Value;
      if ( (v63 & 0x100) == 0 && a9 )
      {
        v11 = 261;
        WdLogSingleEntry5(4LL, 261LL, this, a2->hSource, v63, a2->VidPnSourceId);
        WdLogGlobalForLineNumber = 10930;
        return v11;
      }
      goto LABEL_40;
    }
    v57 = 4024LL * m;
    v58 = *(_QWORD *)(v30 + 128);
    v75 = v57;
    if ( *(_BYTE *)(v58 + v57 + 760) )
    {
      if ( DmmIsTargetNonStandard(*(struct DXGADAPTER **)(v30 + 16), *(_DWORD *)(v58 + v57 + 1072)) )
        continue;
      v57 = v75;
    }
    v59 = *(_QWORD *)(v30 + 128);
    v60 = v79[2];
    v61 = *(_DWORD *)(v59 + v57 + 628);
    v62 = *(_DWORD *)(v59 + v57 + 636);
    if ( (int)v79[0] > v61 )
      v61 = v79[0];
    if ( (int)v79[2] < v62 )
      v62 = v79[2];
    if ( v61 < v62 )
    {
      v64 = *(_DWORD *)(v59 + v57 + 632);
      v65 = *(_DWORD *)(v59 + v57 + 640);
      v66 = v79[1];
      v67 = v79[3];
      if ( (int)v79[1] > v64 )
        v64 = v79[1];
      if ( (int)v79[3] < v65 )
        v65 = v79[3];
      if ( v64 < v65 )
      {
        if ( !*(_DWORD *)(4024LL * m + v59 + 736) )
        {
          if ( (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v30, m) )
            goto LABEL_40;
          v66 = v79[1];
          v67 = v79[3];
          v60 = v79[2];
        }
        v68 = 4024LL * m;
        v69 = *(_QWORD *)(v30 + 128);
        if ( (int)v79[0] >= *(_DWORD *)(v68 + v69 + 628)
          && v60 <= *(_DWORD *)(v68 + v69 + 636)
          && v66 >= *(_DWORD *)(v68 + v69 + 632)
          && v67 <= *(_DWORD *)(v68 + v69 + 640) )
        {
          break;
        }
      }
    }
  }
  if ( !*((_DWORD *)a5 + 116) && !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v15 + 3120))
    || DXGDEVICE::AllowLegacyPresent(a5, v67) )
  {
    goto LABEL_40;
  }
  *((_DWORD *)this + 1) |= 3u;
  *((_QWORD *)this + 6) = a2->hWindow;
  WdLogSingleEntry5(4LL, -1071775738LL, this, a2->hSource, a2->Flags.Value, a2->VidPnSourceId);
  WdLogGlobalForLineNumber = 10911;
  if ( !*((_DWORD *)a5 + 116) && v73 )
    *((_DWORD *)this + 1) |= 0x80u;
  return 3223191558LL;
}
