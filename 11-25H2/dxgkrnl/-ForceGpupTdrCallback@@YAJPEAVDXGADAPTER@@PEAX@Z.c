/*
 * XREFs of ?ForceGpupTdrCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1401C6B00
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?VidSchEscape@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAU_D3DKMT_VIDSCH_ESCAPE@@@Z @ 0x14006F0A4 (-VidSchEscape@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAU_D3DKMT_VIDSCH_ESCAPE@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

__int64 __fastcall ForceGpupTdrCallback(struct DXGADAPTER *a1, void *a2)
{
  __int64 v2; // rbx
  struct _VIDSCH_GLOBAL *v3; // rdx
  VIDSCH_EXPORT *v4; // rcx
  _OWORD v6[3]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v7[144]; // [rsp+50h] [rbp-A8h] BYREF

  v2 = *((_QWORD *)a1 + 391);
  if ( v2 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 27) + 64LL) + 5144LL) )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v7, a1, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v7, 0LL) >= 0 )
    {
      v3 = *(struct _VIDSCH_GLOBAL **)(v2 + 744);
      v4 = *(VIDSCH_EXPORT **)(v2 + 736);
      memset(v6, 0, sizeof(v6));
      LODWORD(v6[0]) = 6;
      VIDSCH_EXPORT::VidSchEscape(v4, v3, (struct _D3DKMT_VIDSCH_ESCAPE *)v6);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v7);
  }
  return 0LL;
}
