/*
 * XREFs of ?ProcessSetTransform@CVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VECTORSHAPE_SETTRANSFORM@@@Z @ 0x1801322DC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetTransform@CVectorShape@@QEAAJPEAVCComponentTransform2D@@@Z @ 0x180132388 (-SetTransform@CVectorShape@@QEAAJPEAVCComponentTransform2D@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVectorShape::ProcessSetTransform(
        CVectorShape *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VECTORSHAPE_SETTRANSFORM *a3)
{
  unsigned int v3; // r9d
  __int64 v5; // rax
  struct CComponentTransform2D *v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  struct CComponentTransform2D *v10; // rcx

  v3 = *((_DWORD *)a3 + 2);
  if ( v3 && v3 < *((_DWORD *)a2 + 7) && (v5 = *((_QWORD *)a2 + 5), *(_DWORD *)(*((_DWORD *)a2 + 6) * v3 + v5)) )
  {
    v10 = *(struct CComponentTransform2D **)(*((_DWORD *)a2 + 6) * v3 + v5 + 8);
    v6 = v10;
    if ( v10
      && !(*(unsigned __int8 (__fastcall **)(struct CComponentTransform2D *, __int64))(*(_QWORD *)v10 + 64LL))(
            v10,
            29LL) )
    {
      v8 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x3Au, 0LL);
      return v8;
    }
  }
  else
  {
    v6 = 0LL;
  }
  v7 = CVectorShape::SetTransform(this, v6);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x3Du, 0LL);
  return v8;
}
