/*
 * XREFs of vDynamicConvertNewSurfaceDCs @ 0x140086380
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1400846A0 (pProcessDfbSurfacesInternal.c)
 *     bDynamicProcessAllDriverRealizations @ 0x140085BF0 (bDynamicProcessAllDriverRealizations.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x14000D9F4 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001FCA8 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     HmgIncrementShareReferenceCount @ 0x1400357D0 (HmgIncrementShareReferenceCount.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1400358E0 (HmgDecrementShareReferenceCountEx.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x140037010 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     HmgQueryAltLock @ 0x140084650 (HmgQueryAltLock.c)
 *     HmgSafeNextObjt @ 0x140086CD0 (HmgSafeNextObjt.c)
 */

void __fastcall vDynamicConvertNewSurfaceDCs(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v4; // esi
  DC *v5; // rdi
  __int64 v6; // rbx
  struct _BASEOBJECT *v7; // rbp
  DC *v8; // [rsp+50h] [rbp+18h] BYREF
  HSEMAPHORE v9; // [rsp+58h] [rbp+20h] BYREF

  SEMOBJ<20>::SEMOBJ<20>(&v9);
  v4 = 0;
  v8 = 0LL;
  while ( 1 )
  {
    LOBYTE(v3) = 1;
    v4 = HmgSafeNextObjt(v4, v3, &v8);
    if ( !v4 )
      break;
    v5 = v8;
    v6 = *((_QWORD *)v8 + 62);
    if ( v6 )
    {
      if ( (*(_DWORD *)(v6 + 112) & 0x40000) == 0 )
      {
        v7 = *(struct _BASEOBJECT **)(v6 + 560);
        if ( v7 )
        {
          DC::pSurface(v8, *(struct SURFACE **)(v6 + 560));
          *((_DWORD *)v5 + 79) |= 0xFu;
          HmgIncrementShareReferenceCount(v7);
          if ( (unsigned int)HmgQueryAltLock(*(_QWORD *)v6) == 1 )
          {
            *(_QWORD *)(v6 + 560) = 0LL;
            SURFACE::bDeleteSurface(v6, 0, 0);
            if ( v6 == a2 )
              break;
          }
          else
          {
            HmgDecrementShareReferenceCountEx((struct _BASEOBJECT *)v6, 0LL);
          }
        }
      }
    }
  }
  SEMOBJ<20>::vUnlock(&v9);
}
