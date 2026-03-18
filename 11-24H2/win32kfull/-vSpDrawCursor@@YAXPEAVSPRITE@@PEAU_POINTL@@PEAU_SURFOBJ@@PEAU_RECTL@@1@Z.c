/*
 * XREFs of ?vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z @ 0x14032CDFC
 * Callers:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14004F4C0 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x14000FB40 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1400505D4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400CB47C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     OffBitBlt @ 0x140180CC4 (OffBitBlt.c)
 */

void __fastcall vSpDrawCursor(
        struct SPRITE *a1,
        struct _POINTL *a2,
        struct _SURFOBJ *a3,
        struct _RECTL *a4,
        struct _POINTL *a5)
{
  __int64 v8; // rbx
  struct Gre::Base::SESSION_GLOBALS *v9; // rax
  PVOID *p_pvScan0; // rdi
  int hsurf; // eax
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // ecx
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  BOOL (__stdcall *v26)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct _POINTL *v35; // r12
  Gre::Base *v36; // r13
  __int64 v37; // r15
  _DWORD *v38; // r14
  __int64 v39; // rbx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  BOOL (__stdcall *v51)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  struct _RECTL *v60; // [rsp+48h] [rbp-31h]
  Gre::Base *v61; // [rsp+78h] [rbp-1h] BYREF
  _QWORD v62[9]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v63; // [rsp+D8h] [rbp+5Fh] BYREF
  LONG *v64; // [rsp+E0h] [rbp+67h]
  struct _RECTL *v65; // [rsp+F0h] [rbp+77h]

  v65 = a4;
  v64 = (LONG *)a2;
  v63 = 0LL;
  if ( *((_QWORD *)a1 + 15) )
  {
    v8 = *((_QWORD *)a1 + 2);
    v61 = 0LL;
    v9 = Gre::Base::Globals(a1);
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          (Gre::Base *)&v61,
                          0LL,
                          0,
                          *((_QWORD *)v9 + 475),
                          *(_QWORD *)(*(_QWORD *)(v8 + 32) + 104LL),
                          *((_QWORD *)v9 + 471),
                          *((_QWORD *)v9 + 471),
                          0,
                          0xFFFFFF,
                          0,
                          0) )
    {
LABEL_58:
      EXLATEOBJ::vAltUnlock(&v61);
      return;
    }
    p_pvScan0 = 0LL;
    if ( a3 )
    {
      hsurf = (int)a3[1].hsurf;
      if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
      {
        p_pvScan0 = &a3[-1].pvScan0;
        GreLockDisplayDevice(a3->hdev);
      }
    }
    v12 = *((_QWORD *)a1 + 15);
    v13 = 0LL;
    v62[0] = 0LL;
    if ( v12 )
    {
      v14 = *(_DWORD *)(v12 + 88);
      if ( (v14 & 0x80004000) != 0 && (v14 & 0x200) == 0 )
      {
        v13 = v12 - 24;
        GreLockDisplayDevice(*(_QWORD *)(v12 - 24 + 48));
      }
    }
    v15 = *((_QWORD *)a1 + 15);
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && GreGetCurrentThread(v17, v16)
        && *((_QWORD *)GreGetCurrentThread(v19, v18) + 34)
        && (*((_DWORD *)GreGetCurrentThread(v21, v20) + 87) || *((_DWORD *)GreGetCurrentThread(v23, v22) + 88)) )
      {
        v25 = *((_QWORD *)GreGetCurrentThread(v23, v22) + 34);
        if ( (*(_DWORD *)(v25 + 20) & 1) != 0 )
        {
          v26 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)GreGetCurrentThread(v25, v24) + 34) + 72LL);
          goto LABEL_28;
        }
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && GreGetCurrentThread(v28, v27)
        && *((_QWORD *)GreGetCurrentThread(v30, v29) + 34)
        && (*((_DWORD *)GreGetCurrentThread(v32, v31) + 87) || *((_DWORD *)GreGetCurrentThread(v34, v33) + 88)) )
      {
        goto LABEL_27;
      }
    }
    if ( ((__int64)a3[1].hsurf & 1) == 0 )
LABEL_27:
      v26 = EngBitBlt;
    else
      v26 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 164);
LABEL_28:
    v35 = a5;
    v60 = a4;
    v36 = v61;
    OffBitBlt(
      (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v26,
      v64,
      (__int64)a3,
      v62,
      v15,
      0LL,
      0LL,
      (__int64)v61,
      &v60->left,
      (__int64 *)a5,
      0LL,
      0LL,
      0LL,
      34952);
    if ( v13 )
      GreUnlockDisplayDevice(*(_QWORD *)(v13 + 48));
    v37 = *((_QWORD *)a1 + 16);
    LODWORD(v63) = v35->x;
    if ( v37 )
    {
      v38 = (_DWORD *)((char *)a1 + 136);
      HIDWORD(v63) = v35->y;
      v36 = 0LL;
      v39 = 0LL;
    }
    else
    {
      v37 = *((_QWORD *)a1 + 15);
      v38 = v62;
      HIDWORD(v63) = v35->y + (*(int *)(v37 + 36) >> 1);
      v39 = 0LL;
      if ( !v37 )
      {
LABEL_37:
        if ( a3->iType != 1 )
          goto LABEL_51;
        if ( bAllowShareAccess(a3)
          && GreGetCurrentThread(v42, v41)
          && *((_QWORD *)GreGetCurrentThread(v44, v43) + 34)
          && (*((_DWORD *)GreGetCurrentThread(v46, v45) + 87) || *((_DWORD *)GreGetCurrentThread(v48, v47) + 88)) )
        {
          v50 = *((_QWORD *)GreGetCurrentThread(v48, v47) + 34);
          if ( (*(_DWORD *)(v50 + 20) & 1) != 0 )
          {
            v51 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)GreGetCurrentThread(v50, v49) + 34) + 72LL);
LABEL_54:
            OffBitBlt(
              (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v51,
              v64,
              (__int64)a3,
              v38,
              v37,
              0LL,
              0LL,
              (__int64)v36,
              &v65->left,
              &v63,
              0LL,
              0LL,
              0LL,
              26214);
            if ( v39 )
              GreUnlockDisplayDevice(*(_QWORD *)(v39 + 48));
            if ( p_pvScan0 )
              GreUnlockDisplayDevice(p_pvScan0[6]);
            goto LABEL_58;
          }
        }
        if ( a3->iType != 1
          || !bAllowShareAccess(a3)
          || !GreGetCurrentThread(v53, v52)
          || !*((_QWORD *)GreGetCurrentThread(v55, v54) + 34)
          || !*((_DWORD *)GreGetCurrentThread(v57, v56) + 87) && !*((_DWORD *)GreGetCurrentThread(v59, v58) + 88) )
        {
LABEL_51:
          if ( ((__int64)a3[1].hsurf & 1) != 0 )
          {
            v51 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 164);
            goto LABEL_54;
          }
        }
        v51 = EngBitBlt;
        goto LABEL_54;
      }
    }
    v40 = *(_DWORD *)(v37 + 88);
    if ( (v40 & 0x80004000) != 0 && (v40 & 0x200) == 0 )
    {
      v39 = v37 - 24;
      GreLockDisplayDevice(*(_QWORD *)(v37 - 24 + 48));
    }
    goto LABEL_37;
  }
}
