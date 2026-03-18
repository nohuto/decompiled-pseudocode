/*
 * XREFs of NtFlipObjectAddPoolBuffer @ 0x140053360
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x14000A8B4 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14000AC94 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ??$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipPropertySet@@@Z @ 0x140040CE0 (--$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipProp.c)
 *     ?AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x140050B60 (-AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z.c)
 *     RtlCopyFromUser @ 0x140065368 (RtlCopyFromUser.c)
 */

__int64 __fastcall NtFlipObjectAddPoolBuffer(void *a1, void *Src, void *a3, void *a4, unsigned int a5, void *a6)
{
  struct FlipManagerObject *v9; // rdi
  unsigned __int64 v10; // r12
  __int64 v11; // r8
  int FlipPropertySet; // ebx
  __int64 v13; // r8
  struct CFlipPropertySet *v14; // rsi
  struct CFlipPropertySet *v16; // [rsp+30h] [rbp-58h] BYREF
  struct FlipManagerObject *v17; // [rsp+38h] [rbp-50h] BYREF
  struct _LUID v18; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-38h]
  struct _LUID v21; // [rsp+58h] [rbp-30h] BYREF

  if ( a1 && Src && a3 && a4 )
  {
    v16 = 0LL;
    v9 = 0LL;
    v17 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    v18 = 0LL;
    RtlCopyFromUser(&v18, a4, 8uLL);
    v21 = v18;
    v19 = 0LL;
    RtlCopyFromUser(&v19, Src, 8uLL);
    v10 = v19;
    v20 = v19;
    KeEnterCriticalRegion();
    FlipPropertySet = CreateFlipPropertySetWorker<CFlipPropertySet>(a5, a6, v11, (__int64)&v16);
    v14 = v16;
    if ( FlipPropertySet >= 0 )
    {
      FlipPropertySet = FlipManagerObject::ResolveHandle(a1, 2u, v13, &v17);
      v9 = v17;
      if ( FlipPropertySet >= 0 )
        FlipPropertySet = FlipManagerObject::AddPoolBuffer(v17, v10, a3, &v21, v14);
    }
    if ( v14 )
      CFlipPropertySetBase::Release(v14);
    if ( v9 )
      ObfDereferenceObject(v9);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)FlipPropertySet;
}
