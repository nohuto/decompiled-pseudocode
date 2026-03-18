/*
 * XREFs of ?SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1400C751C
 * Callers:
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z @ 0x14002C62C (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1400C916C (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x14016B0D4 (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140060DC8 (--$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140060F1C (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1400C761C (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SpNotifyLSurface(_QWORD *a1, HLSURF a2, int a3, int a4, struct _CD_HLSURF_CREATIONCONTEXT *a5)
{
  __int64 v7; // rbx
  __int64 v9; // r14
  unsigned int v10; // edi
  __int64 v12; // xmm1_8
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF
  __int128 v14; // [rsp+40h] [rbp-38h]
  __int64 v15; // [rsp+50h] [rbp-28h]
  _QWORD *v16; // [rsp+80h] [rbp+8h] BYREF

  v16 = a1;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v7 = a1[6];
  v9 = a3;
  GreAcquireSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v7);
  if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v16) )
  {
    *(_QWORD *)&v13 = a2;
    DWORD2(v13) = a4;
    if ( a5 )
    {
      v12 = *((_QWORD *)a5 + 2);
      v14 = *(_OWORD *)a5;
      v15 = v12;
    }
    v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int128 *))a1[428])(
            a1[223],
            65541 - (unsigned int)((_DWORD)v9 != 0),
            40LL,
            &v13);
    EtwBindLogicalSurfaceRHEvent(a2, v9);
  }
  else
  {
    v10 = -1073741822;
  }
  if ( v7 )
    GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v7);
  return v10;
}
