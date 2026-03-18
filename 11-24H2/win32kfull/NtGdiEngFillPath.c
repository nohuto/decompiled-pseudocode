/*
 * XREFs of NtGdiEngFillPath @ 0x1402074A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D8F54 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1400D90F4 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D93B4 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1400DA1A8 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400DBCE4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400DBE64 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400DBEDC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     EngFillPath @ 0x1400E1DC0 (EngFillPath.c)
 *     ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x14021B100 (-CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z.c)
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1403389B8 (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiEngFillPath(
        struct _SURFOBJ *a1,
        __int64 a2,
        struct _CLIPOBJ *a3,
        struct _BRUSHOBJ *a4,
        ULONG64 a5,
        MIX mix,
        FLONG flOptions)
{
  unsigned int v11; // ebx
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v13; // r9
  UMPDOBJ *v14; // rdi
  SURFOBJ *v16; // r14
  struct _PATHOBJ *v17; // r15
  struct _CLIPOBJ *DDIOBJ; // rsi
  BRUSHOBJ *v19; // rdi
  const void *v20; // rdx
  POINTL pptlBrushOrg; // [rsp+48h] [rbp-110h] BYREF
  struct _BRUSHOBJ v22; // [rsp+50h] [rbp-108h] BYREF
  SURFOBJ *pso[8]; // [rsp+70h] [rbp-E8h] BYREF
  struct W32_PUSH_LOCK *v24[4]; // [rsp+B0h] [rbp-A8h] BYREF
  UMPDOBJ *v25; // [rsp+D0h] [rbp-88h]

  v11 = 0;
  pptlBrushOrg = 0LL;
  memset(&v22, 0, sizeof(v22));
  CurrentThread = GreGetCurrentThread((__int64)a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v24, CurrentThread);
  v14 = v25;
  if ( v25 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)v25, v13);
    v16 = pso[0];
    v17 = (struct _PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v14, a2);
    if ( v16 )
      DDIOBJ = UMPDOBJ::GetDDIOBJ(v14, a3, &v16->sizlBitmap);
    else
      DDIOBJ = 0LL;
    v19 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v14, (__int64)a4);
    if ( !v19 )
      v19 = CaptureAndFakeBRUSHOBJ(a4, &v22);
    if ( v16 )
    {
      if ( v19 )
      {
        if ( v17 )
        {
          if ( DDIOBJ )
          {
            if ( !DDIOBJ->iMode )
            {
              v20 = (const void *)a5;
              if ( a5 )
              {
                if ( a5 >= MmUserProbeAddress )
                  v20 = (const void *)MmUserProbeAddress;
                RtlCopyVolatileMemory(&pptlBrushOrg, v20, 8uLL);
                if ( (unsigned int)bCheckSurfacePath(v16, v17, DDIOBJ)
                  && ((((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) == 0 || v19->iSolidColor == -1) )
                {
                  if ( EngFillPath(v16, v17, DDIOBJ, v19, &pptlBrushOrg, mix, flOptions) )
                    v11 = 1;
                }
              }
            }
          }
        }
      }
    }
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v24);
    return v11;
  }
  else
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v24);
    return 0LL;
  }
}
