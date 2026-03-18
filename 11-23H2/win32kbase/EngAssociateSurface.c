/*
 * XREFs of EngAssociateSurface @ 0x1C00B09D0
 * Callers:
 *     ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00B0970 (-StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003F8A0 (--1SURFREF@@QEAA@XZ.c)
 *     ?hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z @ 0x1C0040210 (-hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z.c)
 *     ?dhpdev@SURFACE@@QEAAXPEAUDHPDEV__@@@Z @ 0x1C0047980 (-dhpdev@SURFACE@@QEAAXPEAUDHPDEV__@@@Z.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C008B660 (HmgShareLockCheckIgnoreStockBit.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0159C00 (--0SURFREF@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C0159C24 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

BOOL __stdcall EngAssociateSurface(HSURF hsurf, HDEV hdev, FLONG flHooks)
{
  BOOL v3; // ebx
  FLONG v4; // edi
  unsigned int v6; // ebp
  __int64 v7; // rax
  _BYTE v9[32]; // [rsp+30h] [rbp-38h] BYREF
  SURFACE *v10; // [rsp+50h] [rbp-18h]

  v3 = 0;
  v4 = flHooks & 0xFFFFB7EF;
  v6 = (unsigned int)hsurf;
  if ( hdev )
  {
    SURFREF::SURFREF((SURFREF *)v9);
    v7 = HmgShareLockCheckIgnoreStockBit(v6, 5);
    v10 = (SURFACE *)v7;
    if ( v7 )
    {
      if ( (*(_DWORD *)(v7 + 112) & 0x200000) != 0 )
      {
        *(_QWORD *)(v7 + 136) = 0LL;
        SURFACE::hdev(v10, hdev);
        SURFACE::dhpdev(v10, *((struct DHPDEV__ **)hdev + 221));
        v3 = 1;
        *((_DWORD *)v10 + 28) |= v4;
      }
      else
      {
        TraceLoggingWriteUnsupportedGdiUsage(3LL, *(unsigned int *)(v7 + 112), 0LL, 0LL, 0LL);
      }
    }
    SURFREF::~SURFREF((SURFREF *)v9);
  }
  return v3;
}
