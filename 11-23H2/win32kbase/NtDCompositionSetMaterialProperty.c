/*
 * XREFs of NtDCompositionSetMaterialProperty @ 0x1C00AF250
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001B580 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C0099744 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?Store@MaterialProperty@@QEAAJPEBUResourceObject@DirectComposition@@@Z @ 0x1C00AF344 (-Store@MaterialProperty@@QEAAJPEBUResourceObject@DirectComposition@@@Z.c)
 *     FindOrCreateMaterialProperty @ 0x1C00AF3B8 (FindOrCreateMaterialProperty.c)
 *     CheckShellExperienceComposerAccess @ 0x1C020A0DC (CheckShellExperienceComposerAccess.c)
 */

__int64 __fastcall NtDCompositionSetMaterialProperty(__int64 a1, __int64 a2, void *a3)
{
  struct _ERESOURCE *v3; // rbx
  const struct DirectComposition::ResourceObject *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // r8
  int v14; // eax
  MaterialProperty *v16; // [rsp+20h] [rbp-28h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v3 = Resource;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v3, 1u);
  v16 = 0LL;
  v7 = 0LL;
  Object = 0LL;
  if ( UserIsCurrentProcessDwm(v9, v8, v10) || (v12 = CheckShellExperienceComposerAccess(v11), v12 >= 0) )
  {
    v12 = FindOrCreateMaterialProperty(a1, a2, &v16);
    if ( v12 >= 0 )
    {
      if ( !a3
        || (LOBYTE(v13) = 1,
            v14 = DirectComposition::ResourceObject::ResolveHandle(
                    a3,
                    1LL,
                    v13,
                    (struct DirectComposition::ResourceObject **)&Object),
            v7 = (const struct DirectComposition::ResourceObject *)Object,
            v12 = v14,
            v14 >= 0) )
      {
        v12 = MaterialProperty::Store(v16, v7);
      }
      if ( v7 )
        ObfDereferenceObject(v7);
    }
  }
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
  return (unsigned int)v12;
}
