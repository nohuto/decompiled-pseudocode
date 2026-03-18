/*
 * XREFs of ?vCleanupSurfaces@@YAXK@Z @ 0x1400146F8
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x140015750 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x14000DEDC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F398 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     HmgNextOwned @ 0x14001F530 (HmgNextOwned.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140022264 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x140036A58 (--1SURFREF@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x140037010 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

void __fastcall vCleanupSurfaces(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 i; // rcx
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  _BYTE v8[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]
  HSURF v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v2 = a1;
  v10 = 0LL;
  for ( i = 0LL; ; i = v4 )
  {
    v4 = HmgNextOwned(i, v2, &v10);
    if ( !v4 )
      break;
    if ( (BYTE2(v10) & 0x1F) == 5 )
    {
      SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v11);
      SURFREF::SURFREF((SURFREF *)v8, v10);
      if ( v9 )
      {
        v5 = *(_DWORD *)(v9 + 112);
        if ( v5 >= 0 || (v5 & 0x40000) != 0 )
        {
          v6 = SURFACE::bDeleteSurface(v9, 0LL, 0LL);
          v7 = v9;
          if ( v6 )
            v7 = 0LL;
          v9 = v7;
        }
      }
      SURFREF::~SURFREF((SURFREF *)v8);
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v11);
    }
    v2 = a1;
  }
}
