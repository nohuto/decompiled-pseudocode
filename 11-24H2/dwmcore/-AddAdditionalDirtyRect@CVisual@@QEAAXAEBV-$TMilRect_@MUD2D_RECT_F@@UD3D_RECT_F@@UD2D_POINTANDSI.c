/*
 * XREFs of ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800315A0
 * Callers:
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z @ 0x180031108 (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AFF0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FDF0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800BDF3C (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 * Callees:
 *     ??0CMergedDirtyRect@@QEAA@XZ @ 0x18001A92C (--0CMergedDirtyRect@@QEAA@XZ.c)
 *     ?Allocate@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@CAPEAV12@I@Z @ 0x1800330D8 (-Allocate@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@CAPEAV12@I@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?Merge@?$CRectangleCollection@$03@@QEAA_NII@Z @ 0x180241388 (-Merge@-$CRectangleCollection@$03@@QEAA_NII@Z.c)
 *     ?EnsureWeights@?$CRectangleCollection@$03@@AEAAXXZ @ 0x180241428 (-EnsureWeights@-$CRectangleCollection@$03@@AEAAXXZ.c)
 *     ?UpdateOverhead@?$CRectangleCollection@$03@@AEAAXII@Z @ 0x18024148C (-UpdateOverhead@-$CRectangleCollection@$03@@AEAAXII@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::AddAdditionalDirtyRect(__int64 a1, const struct D2D_RECT_F *a2, char a3)
{
  _DWORD *v6; // r8
  unsigned int v7; // r15d
  __int64 v8; // rax
  _BYTE *v9; // rdx
  unsigned int i; // ecx
  CMergedDirtyRect **v11; // rbx
  CMergedDirtyRect *v12; // rbx
  __int64 v13; // rax
  bool v14; // zf
  unsigned int *v15; // rbx
  unsigned __int64 v16; // rdx
  const char *v17; // r9
  unsigned int v18; // eax
  __int64 v19; // rax
  void *v20; // r9
  void *v21; // r8
  struct CProcessAttribution *(__fastcall *v22)(CResource *__hidden); // rax
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rbx
  char v26; // al
  __int64 v27; // rax
  struct CProcessAttribution *(__fastcall *v28)(CResource *__hidden); // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rbp
  __int64 v33; // r14
  unsigned __int64 v34; // rdi
  __int64 v35; // rcx
  _QWORD *v36; // rcx
  void (__fastcall *v37)(_QWORD *, __int64, __int64, void *); // rax
  __int64 v38; // rdx
  const char *v39; // r9
  unsigned int v40; // eax
  float v41; // xmm0_4
  float *v42; // r9
  unsigned int v43; // edx
  int v44; // ecx
  unsigned int v45; // r11d
  unsigned int v46; // r10d
  unsigned int v47; // esi
  unsigned int v48; // eax
  int v49; // edx
  unsigned int v50; // r8d
  unsigned int v51; // r8d
  unsigned int v52; // eax
  int v53; // ebp
  unsigned int v54; // eax
  __int64 v55; // r8
  __int64 v56; // rdx
  unsigned __int64 v57; // rsi
  __int64 v58; // rbp
  __int64 v59; // rbx
  __int64 v60; // rcx
  _QWORD *v61; // rcx
  _QWORD *v62; // r12
  HANDLE ProcessHeap; // rax
  CMergedDirtyRect *v64; // rax
  CMergedDirtyRect *v65; // rbx
  _DWORD *v66; // r14
  unsigned int v67; // ecx
  _BYTE *v68; // rax
  void (__fastcall *v69)(_QWORD *, __int64, __int64, void *); // rax
  __int64 v70; // rdx
  float v71; // xmm0_4
  unsigned int v72; // eax
  int v73; // ecx
  unsigned int v74; // r10d
  unsigned int v75; // r11d
  unsigned int k; // esi
  int v77; // edx
  unsigned int v78; // eax
  unsigned int v79; // r8d
  unsigned int v80; // r8d
  unsigned int v81; // eax
  int v82; // ebp
  unsigned int v83; // edx
  __int64 *v84; // r13
  __int64 v85; // rax
  _BYTE *v86; // rdx
  __int64 j; // rcx
  CMergedDirtyRect **v88; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *Src; // [rsp+50h] [rbp+8h]
  void *Srca; // [rsp+50h] [rbp+8h]

  if ( (*(_BYTE *)(a1 + 96) & 4) != 0 || a2->right <= a2->left || a2->bottom <= a2->top )
    return;
  v6 = *(_DWORD **)(a1 + 232);
  v7 = 0;
  if ( (*v6 & 0x40000000) != 0 )
  {
    v8 = (unsigned int)v6[1];
    v9 = v6 + 2;
    for ( i = 0; i < (unsigned int)v8; ++v9 )
    {
      if ( *v9 == 2 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v8 )
      v11 = 0LL;
    else
      v11 = (CMergedDirtyRect **)((char *)v6 + 8LL * i - (((_BYTE)v8 + 15) & 7) + v8 + 15);
    v12 = *v11;
    if ( v12 )
      goto LABEL_10;
    v62 = (_QWORD *)(a1 + 232);
  }
  else
  {
    v62 = (_QWORD *)(a1 + 232);
  }
  ProcessHeap = GetProcessHeap();
  v64 = (CMergedDirtyRect *)HeapAlloc(ProcessHeap, 0, 0x160uLL);
  v65 = v64;
  if ( !v64 || (memset_0(v64, 0, 0x160uLL), (v12 = CMergedDirtyRect::CMergedDirtyRect(v65)) == 0LL) )
  {
    CVisual::PropagateFlags(a1, 4LL);
    return;
  }
  v66 = *(_DWORD **)(a1 + 232);
  if ( (*v66 & 0x40000000) != 0 )
  {
    v85 = (unsigned int)v66[1];
    v86 = v66 + 2;
    for ( j = 0LL; (unsigned int)j < (unsigned int)v85; ++v86 )
    {
      if ( *v86 == 2 )
        break;
      j = (unsigned int)(j + 1);
    }
    if ( (unsigned int)j >= (unsigned int)v85 )
      v88 = 0LL;
    else
      v88 = (CMergedDirtyRect **)((char *)v66 + v85 + 8 * j - (((_BYTE)v85 + 15) & 7) + 15);
    *v88 = v12;
  }
  else
  {
    v67 = v66[1];
    v68 = v66 + 2;
    Srca = v66 + 2;
    if ( v67 )
    {
      do
      {
        if ( !*v68 )
          break;
        ++v7;
        ++v68;
      }
      while ( v7 < v67 );
    }
    if ( v7 == v67 )
    {
      v84 = *(__int64 **)(a1 + 232);
      v66 = (_DWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::Allocate(v67 + 4);
      *v62 = v66;
      if ( v84 != &_pfnDefaultDliFailureHook2 )
      {
        *v66 = *(_DWORD *)v84;
        memcpy_0(v66 + 2, Srca, *((unsigned int *)v84 + 1));
        memcpy_0(
          (char *)v66 + (unsigned int)v66[1] + 15LL - (((unsigned __int8)v66[1] + 15) & 7),
          (char *)v84 + *((unsigned int *)v84 + 1) + 15LL - (((unsigned __int8)*((_DWORD *)v84 + 1) + 15) & 7),
          8LL * *((unsigned int *)v84 + 1));
        operator delete(v84);
      }
    }
    *v66 |= 0x40000000u;
    *((_BYTE *)v66 + v7 + 8) = 2;
    *(_QWORD *)((char *)v66 + (unsigned int)v66[1] + 8LL * v7 - (((unsigned __int8)v66[1] + 15) & 7) + 15) = v12;
  }
LABEL_10:
  v13 = 0LL;
  if ( a3 )
  {
    if ( g_pComposition )
      v13 = *((_QWORD *)g_pComposition + 111);
    if ( *(_QWORD *)v12 != v13 )
    {
      *(_QWORD *)v12 = 0LL;
      v14 = *((_BYTE *)v12 + 176) == 0xFF;
      *((_DWORD *)v12 + 2) = 0;
      *((_BYTE *)v12 + 172) = 0;
      if ( !v14 )
        *((_BYTE *)v12 + 176) = 0;
      v14 = *((_BYTE *)v12 + 348) == 0xFF;
      *((_DWORD *)v12 + 45) = 0;
      *((_BYTE *)v12 + 344) = 0;
      if ( !v14 )
        *((_BYTE *)v12 + 348) = 0;
      *(_QWORD *)v12 = v13;
    }
    v15 = (unsigned int *)((char *)v12 + 8);
    if ( !IsEmpty(a2) )
    {
      if ( *((_BYTE *)v15 + 168) == 1 )
        *((_BYTE *)v15 + 168) = 0;
      *(struct D2D_RECT_F *)&v15[4 * *v15 + 1] = *a2;
      v18 = *v15 + 1;
      *v15 = v18;
      if ( v18 <= 4 )
      {
LABEL_23:
        *((_BYTE *)v15 + 164) = 1;
        goto LABEL_24;
      }
      if ( v18 > 5 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x3E,
          (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\MergedRect.h",
          v17);
      if ( *((_BYTE *)v15 + 164) )
        CRectangleCollection<4>::EnsureWeights(v15);
      else
        CRectangleCollection<4>::UpdateOverhead(v15, 4LL, 0xFFFFFFFFLL);
      CRectangleCollection<4>::EnsureWeights(v15);
      v71 = *((float *)v15 + 21);
      v42 = (float *)(v15 + 25);
      v72 = 0;
      v73 = 1;
      v74 = 0;
      v75 = 1;
      for ( k = 1; k < 0xA; k += 3 )
      {
        if ( v71 == 0.0 )
          break;
        v77 = v73 + 1;
        v78 = v72 + 1;
        v79 = 0;
        if ( v78 != v73 )
        {
          v77 = v73;
          v79 = v78;
        }
        if ( v71 > *(v42 - 2) )
        {
          v71 = *(v42 - 2);
          v74 = v79;
          v75 = v77;
        }
        if ( v71 == 0.0 )
          break;
        v80 = v79 + 1;
        v73 = v77;
        if ( v80 == v77 )
          v73 = v77 + 1;
        v81 = 0;
        if ( v80 != v77 )
          v81 = v80;
        v82 = v73;
        if ( v71 > *v42 )
        {
          v71 = *v42;
          v74 = v81;
          v75 = v73;
        }
        if ( v71 == 0.0 )
          break;
        v83 = v81 + 1;
        if ( v81 + 1 == v73 )
          ++v73;
        v72 = 0;
        if ( v83 != v82 )
          v72 = v83;
        if ( v71 > v42[2] )
        {
          v71 = v42[2];
          v74 = v72;
          v75 = v73;
        }
        v42 += 6;
      }
      v55 = v75;
      v56 = v74;
      goto LABEL_160;
    }
  }
  else
  {
    if ( g_pComposition )
      v13 = *((_QWORD *)g_pComposition + 111);
    if ( *(_QWORD *)v12 != v13 )
    {
      *(_QWORD *)v12 = 0LL;
      v14 = *((_BYTE *)v12 + 176) == 0xFF;
      *((_DWORD *)v12 + 2) = 0;
      *((_BYTE *)v12 + 172) = 0;
      if ( !v14 )
        *((_BYTE *)v12 + 176) = 0;
      v14 = *((_BYTE *)v12 + 348) == 0xFF;
      *((_DWORD *)v12 + 45) = 0;
      *((_BYTE *)v12 + 344) = 0;
      if ( !v14 )
        *((_BYTE *)v12 + 348) = 0;
      *(_QWORD *)v12 = v13;
    }
    v15 = (unsigned int *)((char *)v12 + 180);
    if ( !IsEmpty(a2) )
    {
      if ( *((_BYTE *)v15 + 168) == 1 )
        *((_BYTE *)v15 + 168) = 0;
      *(struct D2D_RECT_F *)&v15[4 * *v15 + 1] = *a2;
      v40 = *v15 + 1;
      *v15 = v40;
      if ( v40 <= 4 )
        goto LABEL_23;
      if ( v40 > 5 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x3E,
          (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\MergedRect.h",
          v39);
      if ( *((_BYTE *)v15 + 164) )
        CRectangleCollection<4>::EnsureWeights(v15);
      else
        CRectangleCollection<4>::UpdateOverhead(v15, 4LL, 0xFFFFFFFFLL);
      CRectangleCollection<4>::EnsureWeights(v15);
      v41 = *((float *)v15 + 21);
      v42 = (float *)(v15 + 25);
      v43 = 0;
      v44 = 1;
      v45 = 0;
      v46 = 1;
      v47 = 1;
      do
      {
        if ( v41 == 0.0 )
          break;
        v48 = v43 + 1;
        v49 = v44 + 1;
        v50 = 0;
        if ( v48 != v44 )
        {
          v49 = v44;
          v50 = v48;
        }
        if ( v41 > *(v42 - 2) )
        {
          v41 = *(v42 - 2);
          v45 = v50;
          v47 = v49;
        }
        if ( v41 == 0.0 )
          break;
        v51 = v50 + 1;
        v44 = v49;
        if ( v51 == v49 )
          v44 = v49 + 1;
        v52 = 0;
        if ( v51 != v49 )
          v52 = v51;
        v53 = v44;
        if ( v41 > *v42 )
        {
          v41 = *v42;
          v45 = v52;
          v47 = v44;
        }
        if ( v41 == 0.0 )
          break;
        v54 = v52 + 1;
        if ( v54 == v44 )
          ++v44;
        v43 = 0;
        if ( v54 != v53 )
          v43 = v54;
        if ( v41 > v42[2] )
        {
          v41 = v42[2];
          v45 = v43;
          v47 = v44;
        }
        v46 += 3;
        v42 += 6;
      }
      while ( v46 < 0xA );
      v55 = v47;
      v56 = v45;
LABEL_160:
      CRectangleCollection<4>::Merge(v15, v56, v55, v42);
    }
  }
LABEL_24:
  v19 = *(_QWORD *)(a1 + 32);
  if ( (v19 & 2) != 0 )
    v19 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v19) = v19 & 1;
  v20 = &CCachedVisualImage::NotifyOnChanged;
  v21 = &CVisualSurface::NotifyOnChanged;
  if ( (_DWORD)v19 )
  {
    v57 = 0LL;
    v58 = (unsigned int)v19;
    v59 = 16LL;
    do
    {
      v60 = *(_QWORD *)(a1 + 32);
      if ( (v60 & 2) != 0 )
        v16 = *(_QWORD *)(v60 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v16 = *(_QWORD *)(a1 + 32) & 1LL;
      if ( v57 >= v16 )
      {
        v61 = 0LL;
      }
      else if ( v16 == 1 )
      {
        v61 = (_QWORD *)(v60 & 0xFFFFFFFFFFFFFFFCuLL);
      }
      else
      {
        _mm_lfence();
        v61 = *(_QWORD **)((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + v59);
      }
      if ( v61 != *(_QWORD **)(a1 + 88) )
      {
        v69 = *(void (__fastcall **)(_QWORD *, __int64, __int64, void *))(*v61 + 80LL);
        if ( (char *)v69 == (char *)&CCachedVisualImage::NotifyOnChanged )
        {
          CResource::NotifyOnChanged(v61, 6LL, a1);
        }
        else if ( (char *)v69 == (char *)&CVisualSurface::NotifyOnChanged )
        {
          v70 = 6LL;
          if ( a1 != v61[9] )
            v70 = 1LL;
          CResource::NotifyOnChanged(v61, v70, a1);
        }
        else
        {
          v69(v61, 1LL, a1, &CCachedVisualImage::NotifyOnChanged);
        }
        v21 = &CVisualSurface::NotifyOnChanged;
        v20 = &CCachedVisualImage::NotifyOnChanged;
      }
      ++v57;
      v59 += 8LL;
      --v58;
    }
    while ( v58 );
  }
  v22 = *(struct CProcessAttribution *(__fastcall **)(CResource *__hidden))(*(_QWORD *)a1 + 160LL);
  if ( v22 == CResource::GetProcessAttributionNoRef )
  {
    v23 = *(_QWORD *)(a1 + 56);
    if ( !v23 )
    {
      *(_BYTE *)(a1 + 96) |= 8u;
      v24 = 0LL;
      Src = 0LL;
      goto LABEL_32;
    }
    v24 = *(_QWORD *)(v23 + 64);
  }
  else
  {
    v24 = ((__int64 (__fastcall *)(__int64, unsigned __int64, void *, void *))v22)(
            a1,
            v16,
            &CVisualSurface::NotifyOnChanged,
            &CCachedVisualImage::NotifyOnChanged);
  }
  *(_BYTE *)(a1 + 96) |= 8u;
  Src = (void *)v24;
  if ( v24 )
    ++*(_DWORD *)(v24 + 28);
LABEL_32:
  v25 = *(_QWORD *)(a1 + 88);
  if ( (*(_BYTE *)(a1 + 106) & 0x40) != 0 )
  {
    while ( 1 )
    {
      if ( !v25 )
        return;
      v26 = *(_BYTE *)(v25 + 96);
      if ( v26 < 0 )
        return;
      *(_BYTE *)(v25 + 96) = v26 | 0x80;
      v27 = *(_QWORD *)(v25 + 32);
      if ( (v27 & 2) != 0 )
        v27 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v27) = v27 & 1;
      if ( (_DWORD)v27 )
      {
        v32 = 16LL;
        v33 = (unsigned int)v27;
        v34 = 0LL;
        do
        {
          v35 = *(_QWORD *)(v25 + 32);
          if ( (v35 & 2) != 0 )
            v16 = *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            v16 = *(_QWORD *)(v25 + 32) & 1LL;
          if ( v34 >= v16 )
          {
            v36 = 0LL;
          }
          else if ( v16 == 1 )
          {
            v36 = (_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFCuLL);
          }
          else
          {
            _mm_lfence();
            v36 = *(_QWORD **)((*(_QWORD *)(v25 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + v32);
          }
          if ( v36 != *(_QWORD **)(v25 + 88) )
          {
            v37 = *(void (__fastcall **)(_QWORD *, __int64, __int64, void *))(*v36 + 80LL);
            if ( (char *)v37 == (char *)&CCachedVisualImage::NotifyOnChanged )
            {
              CResource::NotifyOnChanged(v36, 6LL, v25);
            }
            else if ( (char *)v37 == (char *)&CVisualSurface::NotifyOnChanged )
            {
              v38 = 6LL;
              if ( v25 != v36[9] )
                v38 = 1LL;
              CResource::NotifyOnChanged(v36, v38, v25);
            }
            else
            {
              v37(v36, 1LL, v25, v20);
            }
          }
          ++v34;
          v32 += 8LL;
          --v33;
        }
        while ( v33 );
        v24 = (__int64)Src;
      }
      v28 = *(struct CProcessAttribution *(__fastcall **)(CResource *__hidden))(*(_QWORD *)v25 + 160LL);
      if ( v28 != CResource::GetProcessAttributionNoRef )
        break;
      v29 = *(_QWORD *)(v25 + 56);
      if ( v29 )
      {
        v30 = *(_QWORD *)(v29 + 64);
        goto LABEL_41;
      }
LABEL_44:
      v31 = v25;
      v25 = *(_QWORD *)(v25 + 88);
      if ( (*(_BYTE *)(v31 + 106) & 0x40) == 0 )
        return;
    }
    if ( v28 == CWindowNode::GetProcessAttributionNoRef )
      v30 = *(_QWORD *)(v25 + 824);
    else
      v30 = ((__int64 (__fastcall *)(__int64, unsigned __int64, void *, void *))v28)(v25, v16, v21, v20);
LABEL_41:
    if ( v30 )
    {
      if ( v24 != v30 )
      {
        ++*(_DWORD *)(v30 + 24);
        v24 = v30;
        Src = (void *)v30;
      }
    }
    goto LABEL_44;
  }
}
