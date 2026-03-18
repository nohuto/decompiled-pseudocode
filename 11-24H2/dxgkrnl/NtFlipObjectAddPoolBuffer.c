/*
 * XREFs of NtFlipObjectAddPoolBuffer @ 0x140053010
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x140019DE8 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14001A1D4 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ??$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipPropertySet@@@Z @ 0x140040790 (--$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipProp.c)
 *     ?AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x1400505D0 (-AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z.c)
 *     RtlCopyFromUser @ 0x140064F88 (RtlCopyFromUser.c)
 */

__int64 __fastcall NtFlipObjectAddPoolBuffer(void *a1, void *Src, void *a3, void *a4, unsigned int a5, void *a6)
{
  struct FlipManagerObject *v9; // rdi
  unsigned __int64 v10; // r12
  __int64 v11; // r8
  int v12; // ebx
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
    v12 = CreateFlipPropertySetWorker<CFlipPropertySet>(a5, a6, v11, &v16);
    v14 = v16;
    if ( v12 >= 0 )
    {
      v12 = FlipManagerObject::ResolveHandle(a1, 2u, v13, &v17);
      v9 = v17;
      if ( v12 >= 0 )
        v12 = FlipManagerObject::AddPoolBuffer(v17, v10, a3, &v21, v14);
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
  return (unsigned int)v12;
}
