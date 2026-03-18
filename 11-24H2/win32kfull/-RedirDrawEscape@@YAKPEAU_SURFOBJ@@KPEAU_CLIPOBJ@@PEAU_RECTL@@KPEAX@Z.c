/*
 * XREFs of ?RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x1402FCF80
 * Callers:
 *     <none>
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140014E94 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1401D5CDC (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ @ 0x1401D9928 (--1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1402FCA7C (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1REDIROPEN@@QEAA@XZ @ 0x1402FCAC4 (--1REDIROPEN@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RedirDrawEscape(
        struct _SURFOBJ *a1,
        unsigned int a2,
        struct _CLIPOBJ *a3,
        struct _RECTL *a4,
        unsigned int a5,
        void *a6)
{
  _QWORD *v10; // rbx
  void *v11; // rsi
  unsigned int v12; // ebp
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v16; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE v17[8]; // [rsp+48h] [rbp-D0h] BYREF
  struct SURFACE *v18[2]; // [rsp+50h] [rbp-C8h] BYREF
  HDC v19[18]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 HDEV; // [rsp+120h] [rbp+8h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)v18, a1);
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v19, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(HDEV + 40) & 0x20000) != 0 )
        {
          v10 = **(_QWORD ***)(HDEV + 1784);
          if ( v10 )
          {
            v11 = a6;
            v12 = a5;
            do
            {
              v13 = v10[6];
              v16 = v13;
              if ( v13
                && (*(_DWORD *)(v13 + 1808) & 0x8000000) != 0
                && (*(_DWORD *)(v13 + 2112) & 0x8000) != 0
                && *(_QWORD *)(*(_QWORD *)(v13 + 1776) + 272LL) )
              {
                MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                  (MARK_ACCDRV_NOTIFICATION *)v17,
                  (struct PDEVOBJ *)&v16,
                  a1);
                (*(void (__fastcall **)(struct _SURFOBJ *, _QWORD, struct _CLIPOBJ *, struct _RECTL *, unsigned int, void *))(*(_QWORD *)(v14 + 1776) + 272LL))(
                  a1,
                  a2,
                  a3,
                  a4,
                  v12,
                  v11);
                MARK_ACCDRV_NOTIFICATION::~MARK_ACCDRV_NOTIFICATION((MARK_ACCDRV_NOTIFICATION *)v17);
              }
              v10 = (_QWORD *)*v10;
            }
            while ( v10 );
          }
        }
        DEVLOCKOBJ::~DEVLOCKOBJ(v19);
      }
    }
  }
  REDIROPEN::~REDIROPEN(v18);
  return 0LL;
}
