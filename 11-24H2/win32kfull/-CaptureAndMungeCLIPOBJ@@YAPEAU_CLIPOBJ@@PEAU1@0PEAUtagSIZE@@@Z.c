/*
 * XREFs of ?CaptureAndMungeCLIPOBJ@@YAPEAU_CLIPOBJ@@PEAU1@0PEAUtagSIZE@@@Z @ 0x1401FE374
 * Callers:
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400DBE64 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

struct _CLIPOBJ *__fastcall CaptureAndMungeCLIPOBJ(struct _CLIPOBJ *a1, struct _CLIPOBJ *a2, struct tagSIZE *a3)
{
  struct _CLIPOBJ *v5; // rdx
  BYTE v6; // r8
  int v7; // eax
  int v8; // eax
  LONG cx; // eax
  LONG cy; // ecx
  _BYTE v12[24]; // [rsp+20h] [rbp-38h] BYREF

  v5 = a1;
  memset(v12, 0, sizeof(v12));
  if ( a1 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v5 = (struct _CLIPOBJ *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v12, v5, 0x18uLL);
    if ( a2 )
    {
      v6 = v12[20];
      if ( v12[20] )
      {
        if ( v12[20] != 1 )
          return 0LL;
        if ( a3 )
        {
          v7 = *(_DWORD *)&v12[4];
          if ( *(int *)&v12[4] < 0 )
            v7 = 0;
          *(_DWORD *)&v12[4] = v7;
          v8 = *(_DWORD *)&v12[8];
          if ( *(int *)&v12[8] < 0 )
            v8 = 0;
          *(_DWORD *)&v12[8] = v8;
          cx = *(_DWORD *)&v12[12];
          if ( a3->cx < *(int *)&v12[12] )
            cx = a3->cx;
          *(_DWORD *)&v12[12] = cx;
          cy = *(_DWORD *)&v12[16];
          if ( a3->cy < *(int *)&v12[16] )
            cy = a3->cy;
          *(_DWORD *)&v12[16] = cy;
        }
        a2->rclBounds = *(RECTL *)&v12[4];
      }
      a2->iDComplexity = v6;
    }
  }
  return a2;
}
