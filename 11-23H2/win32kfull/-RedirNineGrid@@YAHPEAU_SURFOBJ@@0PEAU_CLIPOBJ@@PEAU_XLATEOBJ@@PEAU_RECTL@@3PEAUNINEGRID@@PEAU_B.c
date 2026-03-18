/*
 * XREFs of ?RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C02A4930
 * Callers:
 *     <none>
 * Callees:
 *     EngNineGrid @ 0x1C0057300 (EngNineGrid.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011C6C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C015A4DE (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C02A25FC (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02A3844 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02A5DE8 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirNineGrid(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct NINEGRID *a7,
        struct _BLENDOBJ *a8,
        void *a9)
{
  __int64 v13; // rcx
  void *v14; // r13
  __int64 HDEV; // rbx
  __int64 v16; // rdx
  Gre::Base *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  struct _DISPSURF *i; // rbx
  __int64 v22; // rdi
  struct _SURFOBJ *DevBitmap; // rax
  __int64 v24; // r11
  unsigned int v25; // ebx
  __int64 v27; // [rsp+58h] [rbp-81h] BYREF
  struct SURFACE *v28; // [rsp+60h] [rbp-79h] BYREF
  struct SURFACE *v29; // [rsp+68h] [rbp-71h] BYREF
  __int128 v30; // [rsp+78h] [rbp-61h] BYREF
  __int64 v31; // [rsp+88h] [rbp-51h]
  int v32; // [rsp+90h] [rbp-49h]
  _QWORD v33[2]; // [rsp+98h] [rbp-41h] BYREF
  _BYTE v34[40]; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v35; // [rsp+D0h] [rbp-9h]
  __int64 v36; // [rsp+D8h] [rbp-1h]
  __int64 v37; // [rsp+118h] [rbp+3Fh] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v29, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v28, a2);
  v14 = a9;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v13);
      if ( HDEV )
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v33);
        v36 = 0LL;
        v35 = 0LL;
        v33[0] = 0LL;
        v20 = *(_DWORD *)(HDEV + 40);
        v30 = 0LL;
        v32 = 1;
        if ( (v20 & 1) != 0 )
        {
          Gre::Base::Globals(v17);
          *(_QWORD *)&v30 = *(_QWORD *)(HDEV + 48);
          v31 = HDEV;
          GreAcquireSemaphore(v30);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v30, 11LL);
        }
        if ( (*(_DWORD *)(HDEV + 40) & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(HDEV + 1768); i; i = *(struct _DISPSURF **)i )
          {
            v22 = *((_QWORD *)i + 6);
            v37 = v22;
            if ( v22 )
            {
              if ( (*(_DWORD *)(v22 + 1792) & 0x8000000) != 0 && (*(_DWORD *)(v22 + 2096) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v22 + 1760) + 792LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v27,
                    (struct PDEVOBJ *)&v37,
                    a1);
                  GetDevBitmap(i, a2);
                  DevBitmap = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, struct NINEGRID *, struct _BLENDOBJ *, void *))(*(_QWORD *)(v22 + 1760) + 792LL))(
                    DevBitmap,
                    v24,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7,
                    a8,
                    v14);
                  if ( v27 )
                    *(_WORD *)(v27 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v30, v16, v18, v19);
        if ( v33[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v33);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v34);
      }
    }
  }
  v25 = EngNineGrid((int)a1, (__int64)a2, (int)a3, (int)a4, (__int64)a5, (__int64)a6, (__int64)a7, (__int64)a8);
  if ( v28 )
    bMakeOpaque(v28);
  if ( v29 )
    bMakeOpaque(v29);
  return v25;
}
