/*
 * XREFs of ?BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x14032053C
 * Callers:
 *     NtGdiBRUSHOBJ_pvGetRbrush @ 0x14021B380 (NtGdiBRUSHOBJ_pvGetRbrush.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z @ 0x14011F460 (-vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x14011F570 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1401226C8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 */

PVOID __fastcall BRUSHOBJ_pvGetRbrushUMPD(struct _BRUSHOBJ *a1, __int64 a2)
{
  PVOID result; // rax
  _QWORD *pvRbrush; // rax
  int RealizedBrush; // eax
  __int64 v6; // rdx
  char *v7; // rcx

  if ( a1->iSolidColor != -1 )
    return 0LL;
  result = a1->pvRbrush;
  if ( result )
    return result;
  if ( (unsigned int)bUMPDSecurityGateEx((__int64)a1, a2) )
  {
    pvRbrush = a1[3].pvRbrush;
    if ( !pvRbrush || !pvRbrush[6] )
      return 0LL;
  }
  RealizedBrush = bGetRealizedBrush(
                    *(struct BRUSH **)&a1[4].flColorType,
                    (struct EBRUSHOBJ *)a1,
                    *(__int64 (__fastcall **)(struct _BRUSHOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _XLATEOBJ *, unsigned int))(*((_QWORD *)a1[3].pvRbrush + 6) + 2776LL));
  v7 = (char *)a1->pvRbrush;
  if ( !RealizedBrush )
  {
    if ( v7 )
    {
      EngFreeUserMem(v7 - 16);
      a1->pvRbrush = 0LL;
    }
    return 0LL;
  }
  if ( !v7 )
    return 0LL;
  if ( !*((_QWORD *)GreGetCurrentThread((__int64)v7, v6) + 8) )
    vTryToCacheRealization(
      (struct EBRUSHOBJ *)a1,
      (struct RBRUSH *)((char *)a1->pvRbrush - 16),
      *(struct BRUSH **)&a1[4].flColorType,
      0);
  return a1->pvRbrush;
}
