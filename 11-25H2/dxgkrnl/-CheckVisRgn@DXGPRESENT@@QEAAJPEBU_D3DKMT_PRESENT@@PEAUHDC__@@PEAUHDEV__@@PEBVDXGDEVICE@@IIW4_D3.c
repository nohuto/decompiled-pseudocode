/*
 * XREFs of ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x140326C50
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402F3D20 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002F740 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x140033D08 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x14003510C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1400369D4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x140197620 (-IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z @ 0x140326C30 (-DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z.c)
 *     ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1403279B8 (-CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z.c)
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x1403283AC (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x140328C5C (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140329064 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
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
  __int64 v49; // r9
  __int64 v50; // rax
  unsigned int v51; // r13d
  __int16 v52; // ax
  __int64 result; // rax
  HDC v54; // rbx
  HDEV v55; // r14
  const wchar_t *v56; // r9
  unsigned int m; // r15d
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // r8
  signed int v61; // r10d
  int v62; // ecx
  int v63; // eax
  __int64 v64; // rcx
  int v65; // ecx
  int v66; // eax
  signed int v67; // r9d
  signed int v68; // edx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // r10
  __int64 v72; // rcx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v73; // eax
  char v74; // [rsp+50h] [rbp-30h]
  int v75; // [rsp+54h] [rbp-2Ch] BYREF
  __int64 v76; // [rsp+58h] [rbp-28h]
  int v77; // [rsp+60h] [rbp-20h] BYREF
  int v78; // [rsp+64h] [rbp-1Ch]
  __int64 v79; // [rsp+68h] [rbp-18h]
  unsigned int v80[4]; // [rsp+70h] [rbp-10h]

  v11 = 0;
  v12 = *((_QWORD *)a5 + 235);
  v13 = *(_QWORD *)(*((_QWORD *)a5 + 5) + 88LL);
  v79 = v13;
  if ( !(*(unsigned int (**)(void))(v13 + 224))() )
  {
    *((_DWORD *)this + 1) |= 3u;
    *((_QWORD *)this + 6) = a2->hWindow;
    v11 = -1071775737;
    WdLogSingleEntry1(4LL, -1071775737LL);
    WdLogGlobalForLineNumber = 10703;
    return v11;
  }
  v75 = 0;
  v14 = (*(__int64 (__fastcall **)(int *, _QWORD, _QWORD))(v13 + 240))(&v75, 0LL, 0LL);
  v78 = v14;
  v77 = 0;
  LODWORD(v76) = (*(__int64 (__fastcall **)(int *))(v13 + 320))(&v77);
  if ( v14 && !v75 )
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
    WdLogGlobalForLineNumber = 10745;
    return v11;
  }
  v16 = (_DWORD *)((char *)this + 4);
  *((_DWORD *)this + 1) &= 0xFFFFFF7C;
  if ( !a2->hWindow && (a2->Flags.Value & 0x100) != 0 )
  {
    if ( v15 )
    {
      if ( v15 == *((_QWORD *)a5 + 235) )
      {
LABEL_123:
        v18 = (_DWORD *)((char *)this + 24);
        *(_OWORD *)((char *)this + 24) = *(_OWORD *)(3984LL * a2->VidPnSourceId
                                                   + *(_QWORD *)(*(_QWORD *)(v15 + 3120) + 128LL)
                                                   + 628);
LABEL_9:
        *((_QWORD *)this + 5) = 0LL;
        goto LABEL_10;
      }
      v16 = (_DWORD *)((char *)this + 4);
    }
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10757;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"(pDisplayAdapter != NULL) && (pDisplayAdapter == pDevice->GetDisplayAdapter(pPresent->VidPnSourceId))",
      10757LL,
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
    WdLogGlobalForLineNumber = 10765;
    return result;
  }
  if ( !(*(unsigned int (__fastcall **)(HDC, char *))(v79 + 328))(a3, (char *)this + 40) )
    goto LABEL_9;
LABEL_10:
  if ( *v18 >= *((_DWORD *)this + 8) || *((_DWORD *)this + 7) >= *((_DWORD *)this + 9) )
  {
    *v16 |= 3u;
    WdLogSingleEntry3(4LL, -1071775738LL, this, a2->VidPnSourceId);
    WdLogGlobalForLineNumber = 10781;
    return 3223191558LL;
  }
  if ( (*((_BYTE *)a5 + 1901) & 1) == 0 )
    *((_DWORD *)this + 16) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2) + 736LL)
                                                                           + 8LL)
                                                               + 536LL))(*(_QWORD *)(*((_QWORD *)a5 + 2) + 744LL));
  v19 = v76;
  if ( !v15 || !(_DWORD)v76 && ADAPTER_DISPLAY::IsInVirtualMode(*(ADAPTER_DISPLAY **)(v15 + 3120), a2->VidPnSourceId) )
  {
    if ( (a2->Flags.Value & 0x10000) == 0 )
    {
      if ( !v78 || !v19 || v77 )
      {
        *((_DWORD *)this + 1) |= 0x10u;
        *((_QWORD *)this + 6) = a2->hWindow;
        WdLogSingleEntry1(4LL, a5);
        WdLogGlobalForLineNumber = 10816;
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
      WdLogGlobalForLineNumber = 6387;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCoreResourceSharedOwner()", 6387LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( i >= *(_DWORD *)(v20 + 96) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6388;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"VidPnSourceId < m_NumVidPnSources",
        6388LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( i >= *(_DWORD *)(v20 + 96) )
        continue;
    }
    if ( a5 == *(const struct DXGDEVICE **)(3984LL * i + *(_QWORD *)(v20 + 128) + 728) )
      goto LABEL_42;
  }
  v23 = *(_QWORD *)(v15 + 3120);
  for ( j = 0; j < *(_DWORD *)(v23 + 96); ++j )
  {
    v25 = 3984LL * j;
    v26 = *(_QWORD *)(v23 + 128);
    if ( *(_QWORD *)(v25 + v26 + 728) && *(_DWORD *)(v25 + v26 + 736) == 1 )
    {
      v74 = 1;
      goto LABEL_30;
    }
  }
  v74 = 0;
LABEL_30:
  v27 = *((_DWORD *)this + 10);
  v28 = *((_DWORD *)this + 6);
  v29 = *((_DWORD *)this + 7);
  v30 = *(_QWORD *)(v15 + 3120);
  *(_OWORD *)v80 = 0LL;
  v80[0] = v27 + v28;
  v31 = *((unsigned int *)this + 8);
  v80[2] = v31 + v27;
  v32 = *((_DWORD *)this + 11);
  v80[1] = v32 + v29;
  v33 = *((_DWORD *)this + 9);
  v80[3] = v33 + v32;
  if ( v28 == (_DWORD)v31
    || v29 == v33
    || ((v34 = *((_QWORD *)DXGPROCESS::GetCurrent(v31) + 11)) == 0
      ? (v35 = 0)
      : (v35 = (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v34 + 240))(0LL, 0LL, 0LL) != 0),
        v35) )
  {
LABEL_40:
    if ( !v74 || (v39 = a2->Flags.Value, (v39 & 0x10000) != 0) || v78 )
    {
LABEL_42:
      v40 = v79;
      if ( (a2->Flags.Value & 0x10000) != 0 )
        goto LABEL_160;
      if ( !a2->hWindow )
      {
LABEL_139:
        if ( (a2->Flags.Value & 0x100) != 0 )
        {
          v71 = 3984LL * a2->VidPnSourceId;
          v72 = *(_QWORD *)(*(_QWORD *)(v15 + 3120) + 128LL);
          v42 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v40 + 80))(
                  *(unsigned int *)(v71 + v72 + 628),
                  *(unsigned int *)(v71 + v72 + 632),
                  *(unsigned int *)(v71 + v72 + 636),
                  *(unsigned int *)(v71 + v72 + 640));
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
          v54 = a3;
          v55 = a4;
          WdLogSingleEntry5(6LL, this, a2->hWindow, a3, a4, a2->Flags.Value);
          v56 = L"0x%I64x unable to get VisRgn with hWindow=0x%I64x hdc = 0x%I64x hDev = 0x%I64x PresentFlags = 0x%I64x";
          WdLogGlobalForLineNumber = 10961;
LABEL_64:
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            0xFFFFFFFFLL,
            v56,
            (__int64)this,
            (__int64)a2->hWindow,
            (__int64)v54,
            (__int64)v55,
            a2->Flags.Value);
          return 3221225495LL;
        }
LABEL_45:
        Value = a2->Flags.Value;
        if ( !v42 )
        {
          v54 = a3;
          v55 = a4;
          WdLogSingleEntry5(6LL, this, a2->hWindow, a3, a4, a2->Flags.Value);
          v56 = L"0x%I64x not able to create hVisRgn hWindow = 0x%I64x hdc = 0x%I64x hDev = 0x%I64x PresentFlags = 0x%I64x";
          WdLogGlobalForLineNumber = 10971;
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
              if ( (v73 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value,
                    (*(_BYTE *)&v73 & 1) != 0)
                && (a8 == D3DDDIFMT_P8 || a8 == D3DDDIFMT_A8)
                || (*(_BYTE *)&v73 & 2) != 0 && !a2->hWindow )
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
              v50 = operator new[]((unsigned int)v48, 0x4B677844u, 256LL, v49);
              *((_QWORD *)this + 2) = v50;
              if ( v50 )
              {
                v51 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v79 + 112))(v42, (unsigned int)v48, v50);
                if ( v51 > (unsigned int)v48 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 11085;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    0xFFFFFFFFLL,
                    L"RealSize <= RgnDataSize",
                    11085LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                *((_DWORD *)this + 1) |= 2u;
                v40 = v79;
                if ( (a2->Flags.Value & 0x10000) != 0 )
                  v52 = (*(__int64 (__fastcall **)(HWND))(v79 + 392))(a2->hWindow);
                else
                  v52 = 0;
                *((_WORD *)this + 214) = v52;
                if ( v51 <= 0x20 )
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
              WdLogGlobalForLineNumber = 11076;
              DxgkLogInternalTriageEvent(
                0LL,
                262145,
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
              WdLogGlobalForLineNumber = 11063;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"0x%I64x fails to get the size for VisRgnData from 0x%I64x",
                (__int64)this,
                v42,
                0LL,
                0LL,
                0LL);
            }
            (*(void (__fastcall **)(__int64))(v79 + 128))(v42);
            return 3221225495LL;
          }
          v45 = *((_DWORD *)this + 1) ^ ((unsigned __int8)*((_DWORD *)this + 1) ^ (unsigned __int8)(16
                                                                                                  * (*(__int64 (__fastcall **)(__int64, HDEV, HWND, __int64))(v40 + 136))(v15, a4, a2->hWindow, v42))) & 0x10u;
        }
        v46 = a5;
        goto LABEL_50;
      }
      if ( !(*(unsigned int (__fastcall **)(HDC))(v79 + 56))(a3)
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
    WdLogGlobalForLineNumber = 10893;
    return 3223192386LL;
  }
  for ( k = 0; k < *(_DWORD *)(v30 + 96); ++k )
  {
    v37 = 3984LL * k;
    v38 = *(_QWORD *)(v30 + 128);
    if ( *(_DWORD *)(v37 + v38 + 736) == 1 && *(_BYTE *)(v37 + v38 + 760) )
      goto LABEL_40;
  }
  for ( m = 0; ; ++m )
  {
    if ( m >= *(_DWORD *)(v30 + 96) )
    {
      v64 = a2->Flags.Value;
      if ( (v64 & 0x100) == 0 && a9 )
      {
        v11 = 261;
        WdLogSingleEntry5(4LL, 261LL, this, a2->hSource, v64, a2->VidPnSourceId);
        WdLogGlobalForLineNumber = 10880;
        return v11;
      }
      goto LABEL_40;
    }
    v58 = 3984LL * m;
    v59 = *(_QWORD *)(v30 + 128);
    v76 = v58;
    if ( *(_BYTE *)(v59 + v58 + 760) )
    {
      if ( DmmIsTargetNonStandard(*(struct DXGADAPTER **)(v30 + 16), *(_DWORD *)(v59 + v58 + 1072)) )
        continue;
      v58 = v76;
    }
    v60 = *(_QWORD *)(v30 + 128);
    v61 = v80[2];
    v62 = *(_DWORD *)(v60 + v58 + 628);
    v63 = *(_DWORD *)(v60 + v58 + 636);
    if ( (int)v80[0] > v62 )
      v62 = v80[0];
    if ( (int)v80[2] < v63 )
      v63 = v80[2];
    if ( v62 < v63 )
    {
      v65 = *(_DWORD *)(v60 + v58 + 632);
      v66 = *(_DWORD *)(v60 + v58 + 640);
      v67 = v80[1];
      v68 = v80[3];
      if ( (int)v80[1] > v65 )
        v65 = v80[1];
      if ( (int)v80[3] < v66 )
        v66 = v80[3];
      if ( v65 < v66 )
      {
        if ( !*(_DWORD *)(3984LL * m + v60 + 736) )
        {
          if ( (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v30, m) )
            goto LABEL_40;
          v67 = v80[1];
          v68 = v80[3];
          v61 = v80[2];
        }
        v69 = 3984LL * m;
        v70 = *(_QWORD *)(v30 + 128);
        if ( (int)v80[0] >= *(_DWORD *)(v69 + v70 + 628)
          && v61 <= *(_DWORD *)(v69 + v70 + 636)
          && v67 >= *(_DWORD *)(v69 + v70 + 632)
          && v68 <= *(_DWORD *)(v69 + v70 + 640) )
        {
          break;
        }
      }
    }
  }
  if ( !*((_DWORD *)a5 + 116) && !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v15 + 3120))
    || DXGDEVICE::AllowLegacyPresent(a5, v68) )
  {
    goto LABEL_40;
  }
  *((_DWORD *)this + 1) |= 3u;
  *((_QWORD *)this + 6) = a2->hWindow;
  WdLogSingleEntry5(4LL, -1071775738LL, this, a2->hSource, a2->Flags.Value, a2->VidPnSourceId);
  WdLogGlobalForLineNumber = 10861;
  if ( !*((_DWORD *)a5 + 116) && v74 )
    *((_DWORD *)this + 1) |= 0x80u;
  return 3223191558LL;
}
