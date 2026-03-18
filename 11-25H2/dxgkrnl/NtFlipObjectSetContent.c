/*
 * XREFs of NtFlipObjectSetContent @ 0x1400460D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x140009CD4 (-SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x14000A8B4 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14000AC94 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ??$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipPropertySet@@@Z @ 0x140040CE0 (--$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipProp.c)
 *     RtlCopyFromUser @ 0x140065368 (RtlCopyFromUser.c)
 */

__int64 __fastcall NtFlipObjectSetContent(void *a1, void *a2, void *a3, unsigned int a4, void *a5)
{
  int FlipPropertySet; // ebx
  struct CFlipPropertySet *v9; // rdi
  struct FlipManagerObject *v10; // rsi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r13
  __int64 v13; // r8
  struct CFlipPropertySet *v15; // [rsp+20h] [rbp-58h] BYREF
  struct FlipManagerObject *v16; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-38h]
  unsigned __int64 v20; // [rsp+48h] [rbp-30h]

  FlipPropertySet = 0;
  if ( a1 && a2 )
  {
    v9 = 0LL;
    v15 = 0LL;
    v10 = 0LL;
    v16 = 0LL;
    v19 = 0LL;
    v11 = 0LL;
    v20 = 0LL;
    v17 = 0LL;
    RtlCopyFromUser(&v17, a2, 8uLL);
    v19 = v17;
    if ( a3 )
    {
      v18 = 0LL;
      RtlCopyFromUser(&v18, a3, 8uLL);
      v11 = v18;
      v20 = v18;
    }
    v12 = v17;
    KeEnterCriticalRegion();
    if ( a4 )
    {
      FlipPropertySet = CreateFlipPropertySetWorker<CFlipPropertySet>(a4, a5, v13, (__int64)&v15);
      v9 = v15;
    }
    if ( FlipPropertySet >= 0 )
    {
      FlipPropertySet = FlipManagerObject::ResolveHandle(a1, 2u, v13, &v16);
      v10 = v16;
      if ( FlipPropertySet >= 0 )
        FlipPropertySet = FlipManagerObject::SetContent(v16, v12, v11, v9);
    }
    if ( v10 )
      ObfDereferenceObject(v10);
    if ( v9 )
      CFlipPropertySetBase::Release(v9);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)FlipPropertySet;
}
