/*
 * XREFs of ?SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x140055BB0
 * Callers:
 *     <none>
 * Callees:
 *     EngAlphaBlend @ 0x14000A5C0 (EngAlphaBlend.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1400505D4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffAlphaBlend @ 0x1400558D4 (OffAlphaBlend.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1400579FC (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x140058164 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

BOOL __fastcall SpAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        RECTL *prclDest,
        struct _RECTL *prclSrc,
        struct _BLENDOBJ *pBlendObj)
{
  int v7; // r15d
  HDEV hdev; // rax
  int v10; // r13d
  struct _SURFOBJ *v12; // rsi
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  int v15; // eax
  PVOID *v16; // rdi
  CLIPOBJ *v17; // r12
  BOOL (__stdcall *v18)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rcx
  struct _POINTL v19; // [rsp+50h] [rbp-B0h] BYREF
  CLIPOBJ *ppco; // [rsp+58h] [rbp-A8h] BYREF
  struct _SURFOBJ *v21; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-98h]
  __int64 v23; // [rsp+70h] [rbp-90h]
  __int64 v24; // [rsp+78h] [rbp-88h]
  __int64 v25; // [rsp+80h] [rbp-80h]
  int v26[2]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v27[912]; // [rsp+90h] [rbp-70h] BYREF

  v7 = 0;
  v19 = 0LL;
  hdev = a2->hdev;
  v10 = 1;
  v25 = (__int64)a4;
  v21 = a1;
  ppco = a3;
  v24 = (__int64)prclDest;
  v23 = (__int64)prclSrc;
  v22 = (__int64)pBlendObj;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 14) != a2 )
  {
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v27, a1, a3, prclDest);
    *(_QWORD *)v26 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v27, &v21, &v19, &ppco) )
          return v10;
        v12 = v21;
        p_pvScan0 = 0LL;
        if ( v21 )
        {
          hsurf = (int)v21[1].hsurf;
          if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
          {
            p_pvScan0 = &v21[-1].pvScan0;
            GreLockDisplayDevice(v21->hdev);
          }
        }
        v15 = (int)a2[1].hsurf;
        v16 = 0LL;
        if ( (v15 & 0x80004000) != 0 && (v15 & 0x200) == 0 )
        {
          v16 = &a2[-1].pvScan0;
          GreLockDisplayDevice(a2->hdev);
        }
        if ( !p_pvScan0 || *((_WORD *)p_pvScan0 + 50) != 1 || EngUpdateDeviceSurface((SURFOBJ *)(p_pvScan0 + 3), &ppco) )
          break;
        if ( v16 )
          GreUnlockDisplayDevice(v16[6]);
LABEL_24:
        GreUnlockDisplayDevice(p_pvScan0[6]);
      }
      v17 = ppco;
      if ( v12->iType == 1 )
      {
        if ( bAllowShareAccess(v12)
          && GreGetCurrentThread()
          && *((_QWORD *)GreGetCurrentThread() + 34)
          && (*((_DWORD *)GreGetCurrentThread() + 87) || *((_DWORD *)GreGetCurrentThread() + 88))
          && (*(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) & 0x10000) != 0 )
        {
          v18 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*((_QWORD *)GreGetCurrentThread() + 34) + 120LL);
          goto LABEL_19;
        }
        if ( v12->iType == 1
          && bAllowShareAccess(v12)
          && GreGetCurrentThread()
          && *((_QWORD *)GreGetCurrentThread() + 34)
          && (*((_DWORD *)GreGetCurrentThread() + 87) || *((_DWORD *)GreGetCurrentThread() + 88)) )
        {
LABEL_41:
          v18 = EngAlphaBlend;
          goto LABEL_19;
        }
      }
      if ( ((__int64)v12[1].hsurf & 0x10000) == 0 )
        goto LABEL_41;
      v7 |= 1u;
      v18 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))*((_QWORD *)v12->hdev + 170);
LABEL_19:
      v10 &= OffAlphaBlend(
               (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int128 *, __int64))v18,
               (LONG *)&v19,
               (__int64)v12,
               v26,
               (__int64)a2,
               v17,
               v25,
               (__int128 *)v24,
               (__int128 *)v23,
               v22);
      if ( (v7 & 1) != 0 )
        v7 &= ~1u;
      if ( v16 )
        GreUnlockDisplayDevice(v16[6]);
      if ( p_pvScan0 )
        goto LABEL_24;
    }
  }
  return EngAlphaBlend(a1, a2, a3, a4, prclDest, prclSrc, pBlendObj);
}
