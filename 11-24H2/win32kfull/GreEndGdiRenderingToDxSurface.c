/*
 * XREFs of GreEndGdiRenderingToDxSurface @ 0x1400283A0
 * Callers:
 *     NtGdiEndGdiRendering @ 0x1400281C0 (NtGdiEndGdiRendering.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x14001F1E8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028C7C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreEndGdiRenderingToDxSurface(Gre::Base *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r14d
  struct Gre::Base::SESSION_GLOBALS *v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  __int64 (__fastcall *v14)(__int64, _QWORD, __int64, __int64); // rax
  _BYTE v15[32]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+50h] [rbp-28h]
  __int64 v17; // [rsp+90h] [rbp+18h] BYREF

  v6 = a2;
  if ( a3 )
  {
    LOBYTE(a2) = 1;
    GreDxgkEnableUnorderedWaitsForDevice((unsigned int)a3, a2);
  }
  v8 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v17, v8);
  SURFREF::SURFREF((SURFREF *)v15, (HSURF)a1);
  v9 = 0;
  if ( v16 )
  {
    if ( ((unsigned int)a1 & 0x800000) == 0 )
    {
      if ( (unsigned int)GreGetObjectOwner(a1, 5LL) )
      {
        v10 = v16;
        if ( v16 )
        {
          v11 = *(_QWORD *)(v16 + 48);
          v12 = *(_DWORD *)(v16 + 116) & 8;
          if ( v12 || *(_QWORD *)(v16 + 224) )
          {
            v9 = 1;
            *(_WORD *)(v16 + 102) |= 0x200u;
            if ( v12 )
            {
              v14 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(v11 + 3480);
              v9 = 0;
              if ( v14 )
                v9 = v14(v10 + 24, v6, a4, a3);
            }
          }
        }
      }
    }
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v15);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v17);
  return v9;
}
