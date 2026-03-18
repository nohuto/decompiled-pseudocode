/*
 * XREFs of ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C011D240
 * Callers:
 *     GrePolyPatBlt @ 0x1C0046320 (GrePolyPatBlt.c)
 *     DrawEdge @ 0x1C004650C (DrawEdge.c)
 *     GreGetAppClipBox @ 0x1C00BAD80 (GreGetAppClipBox.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00F5020 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     GreDrawStream @ 0x1C00FA480 (GreDrawStream.c)
 *     GreSetBkMode @ 0x1C0116984 (GreSetBkMode.c)
 *     GreGetDIBColorTable @ 0x1C0117950 (GreGetDIBColorTable.c)
 *     ?GreExtTextOutWInternal@@YAHPEAUHDC__@@HHIPEAUtagRECT@@PEAGHPEAHPEAXKW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0119E44 (-GreExtTextOutWInternal@@YAHPEAUHDC__@@HHIPEAUtagRECT@@PEAGHPEAHPEAXKW4EntryPoint@RFONTOBJ@@@Z.c)
 *     DrawFrameControl @ 0x1C011A100 (DrawFrameControl.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C011D140 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C01364A0 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::vLockIgnoreAttributes(XDCOBJ *this, HDC a2)
{
  HDC v2; // rax
  __int64 v4; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  struct UMPDOBJ *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // ebx

  v2 = a2;
  LOBYTE(a2) = 1;
  v4 = HmgLockEx(v2, a2, *((unsigned int *)this + 3));
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread && (v6 = *ThreadWin32Thread) != 0 && (v7 = *(_QWORD *)(v6 + 40), v7 != v6 + 40) )
      v8 = (struct UMPDOBJ *)(v7 - 40);
    else
      v8 = 0LL;
    v9 = *(_QWORD *)this;
    if ( *(_WORD *)(*(_QWORD *)this + 12LL) == 1 )
    {
      *(_QWORD *)(v9 + 2168) = v8;
      *(_DWORD *)(*(_QWORD *)this + 2176LL) = 0xFFFF;
    }
    else if ( *(struct UMPDOBJ **)(v9 + 2168) != v8 )
    {
      XDCOBJ::LogUmpdCallbackStatus(this, v8);
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
      *(_QWORD *)this = 0LL;
      return;
    }
    v10 = *(_QWORD *)this;
    if ( *((_DWORD *)this + 3) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v10 + 48) + 40LL) & 0x8000) == 0
        || (v11 = *(_DWORD *)(v10 + 2112), v11 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)) )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
        *(_QWORD *)this = 0LL;
      }
    }
    else if ( *(_DWORD *)(v10 + 2112) )
    {
      *(_DWORD *)(v10 + 2112) = 0;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
}
