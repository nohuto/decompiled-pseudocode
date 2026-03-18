/*
 * XREFs of ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1400DA544
 * Callers:
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1400D9600 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 *     ?UMPDDrvGetGlyphMode@@YAKPEAUDHPDEV__@@PEAU_FONTOBJ@@@Z @ 0x1401E56C0 (-UMPDDrvGetGlyphMode@@YAKPEAUDHPDEV__@@PEAU_FONTOBJ@@@Z.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x140215600 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x140332CB0 (-UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x140333150 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x140334430 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400B3CE0 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400B3D30 (-AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1400D8D1C (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?LowerBound@?$CSortedVector@_K_K@NSInstrumentation@@QEBA_KAEB_K@Z @ 0x140101290 (-LowerBound@-$CSortedVector@_K_K@NSInstrumentation@@QEBA_KAEB_K@Z.c)
 */

__int64 __fastcall UMPDOBJ::pfo(UMPDOBJ *this, struct _FONTOBJ **a2, __int64 a3)
{
  struct _FONTOBJ *v3; // rax
  unsigned __int64 iFile; // rdi
  __int128 v7; // xmm2
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  struct W32_PUSH_LOCK *v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  NSInstrumentation::CPrioritizedWriterLock *v14; // rsi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  _QWORD *v17; // rdx
  bool v18; // bl
  __int128 v20; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v21[3]; // [rsp+40h] [rbp-48h] BYREF

  v3 = *a2;
  if ( !*a2 )
    return 1LL;
  iFile = v3->iFile;
  v7 = *(_OWORD *)&v3->iTTUniq;
  v8 = *(_OWORD *)&v3->pvConsumer;
  v20 = *(_OWORD *)&v3->iUniq;
  v9 = *(_OWORD *)&v3->sizLogResPpi.cx;
  v21[0] = v7;
  v21[1] = v9;
  v21[2] = v8;
  if ( iFile >= (unsigned __int64)MmSystemRangeStart )
  {
    v10 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(W32GetSessionState(this, a2, a3) + 96) + 24248LL);
    GreAcquirePushLockShared(v10);
    v14 = *(NSInstrumentation::CPrioritizedWriterLock **)(*(_QWORD *)(W32GetSessionState(v12, v11, v13) + 96) + 24176LL);
    NSInstrumentation::CPrioritizedWriterLock::AcquireShared(v14);
    v15 = *((_QWORD *)v14 + 5);
    v18 = 0;
    if ( v15 )
    {
      v16 = NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::LowerBound(v14, (char *)v21 + 8);
      if ( v16 < v15 )
      {
        v17 = (_QWORD *)(16 * v16 + *((_QWORD *)v14 + 6));
        if ( *v17 == iFile )
        {
          if ( v17 )
            v18 = 1;
        }
      }
    }
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(v14);
    if ( v18 )
      iFile = 0LL;
    *((_QWORD *)&v21[0] + 1) = iFile;
    if ( v10 )
      GreReleasePushLockShared(v10);
  }
  return UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 192), (const void **)a2, 0x40u, &v20);
}
