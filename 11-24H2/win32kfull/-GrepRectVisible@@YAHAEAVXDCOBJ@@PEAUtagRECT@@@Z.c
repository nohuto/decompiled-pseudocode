/*
 * XREFs of ?GrepRectVisible@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1400C3D24
 * Callers:
 *     NtGdiRectVisible @ 0x1400C3C40 (NtGdiRectVisible.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000A534 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x140016CFC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x14001D1D8 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     bCvtPts1 @ 0x1400C5774 (bCvtPts1.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400CDFD8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400CE0C4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z @ 0x1400DB51C (-bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z @ 0x1400DB55C (-bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x140141924 (--0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GrepRectVisible(struct XDCOBJ *this, struct _RECTL *a2)
{
  unsigned int v4; // esi
  struct REGION *v5; // rax
  __int64 v6; // rcx
  struct _RECTL v7; // xmm0
  int v8; // ebx
  unsigned int v9; // edi
  __int64 v10; // r9
  __int64 v11; // rbx
  LONG v12; // ecx
  LONG v13; // eax
  __int64 v14; // r8
  __int64 v15; // rdx
  LONG right; // eax
  LONG left; // edx
  struct _RECTL *v19; // r9
  __int64 v20; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+30h] [rbp-D0h] BYREF
  struct REGION *v22; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  bool v24; // [rsp+48h] [rbp-B8h]
  __int128 v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h]
  int v27; // [rsp+68h] [rbp-98h]
  _QWORD v28[14]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v29[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v30; // [rsp+E8h] [rbp-18h]
  struct _RECTL v31; // [rsp+160h] [rbp+60h] BYREF
  struct _POINTL v32; // [rsp+170h] [rbp+70h] BYREF
  struct _POINTL v33; // [rsp+178h] [rbp+78h] BYREF
  LONG v34; // [rsp+180h] [rbp+80h]
  LONG bottom; // [rsp+184h] [rbp+84h]
  LONG v36; // [rsp+188h] [rbp+88h]
  LONG v37; // [rsp+18Ch] [rbp+8Ch]

  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v28);
  v4 = 0;
  v26 = 0LL;
  v25 = 0LL;
  v27 = 0;
  v28[0] = 0LL;
  memset(&v28[10], 0, 24);
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v25, this, 1) )
  {
    DEVLOCKOBJ::~DEVLOCKOBJ((HDC *)&v25);
    return 1LL;
  }
  v5 = XDCOBJ::prgnEffRao((DC **)this);
  v6 = *(_QWORD *)this;
  v7 = *a2;
  v22 = v5;
  v31 = v7;
  v8 = *(_DWORD *)(*(_QWORD *)(v6 + 976) + 208LL);
  DC::QuickInitXform(v6, &v20, 2147484164LL);
  v9 = 2;
  v23 = v20;
  v24 = v8 != 2;
  if ( (*(_BYTE *)(v20 + 32) & 1) == 0 )
  {
    right = a2->right;
    left = a2->left;
    v32.y = a2->top;
    v33.x = right;
    v33.y = v32.y;
    v34 = right;
    bottom = a2->bottom;
    v37 = bottom;
    v32.x = left;
    v36 = left;
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v29);
    if ( v30 )
    {
      if ( EPATHOBJ::bMoveTo((EPATHOBJ *)v29, (const struct EXFORMOBJR *)&v23, &v32)
        && EPATHOBJ::bPolyLineTo((EPATHOBJ *)v29, (const struct EXFORMOBJR *)&v23, &v33, 3u)
        && EPATHOBJ::bCloseFigure((EPATHOBJ *)v29) )
      {
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v20, (struct EPATHOBJ *)v29, 1u, v19);
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v21);
        if ( v20 && v21 )
        {
          if ( !RGNOBJ::bMerge((RGNOBJ *)&v21, (struct RGNOBJ *)&v22, (struct RGNOBJ *)&v20, 8u)
            || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v21) == 1 )
          {
            v9 = 1;
          }
        }
        else
        {
          EngSetLastError(8u);
          v9 = -1;
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v21);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v20);
        goto LABEL_14;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v9 = -1;
LABEL_14:
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v29);
    DEVLOCKOBJ::~DEVLOCKOBJ((HDC *)&v25);
    return v9;
  }
  EXFORMOBJ::vOrder((EXFORMOBJ *)&v23, &v31);
  v11 = *(_QWORD *)this;
  if ( ((*(_BYTE *)(v23 + 32) & 0x43) == 0x43 || (unsigned int)bCvtPts1(v23, &v31, 2LL, v10))
    && (*(_BYTE *)(*(_QWORD *)(v11 + 976) + 108LL) & 1) != 0 )
  {
    v13 = v31.left + 1;
    v12 = v31.right + 1;
    ++v31.left;
    ++v31.right;
  }
  else
  {
    v12 = v31.right;
    v13 = v31.left;
  }
  v14 = *(_QWORD *)this;
  v15 = *(_DWORD *)(*(_QWORD *)this + 40LL) & 1;
  v31.left = *(_DWORD *)(*(_QWORD *)this + 8 * v15 + 1016) + v13;
  v31.right = *(_DWORD *)(v14 + 8 * v15 + 1016) + v12;
  v31.top += *(_DWORD *)(v14 + 8 * v15 + 1020);
  v31.bottom += *(_DWORD *)(v14 + 8 * v15 + 1020);
  LOBYTE(v4) = RGNOBJ::bInside((RGNOBJ *)&v22, &v31) == 2;
  DEVLOCKOBJ::~DEVLOCKOBJ((HDC *)&v25);
  return v4;
}
