/*
 * XREFs of ?HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z @ 0x180043CC8
 * Callers:
 *     ?HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x18001B3A0 (-HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z @ 0x180083434 (-HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z.c)
 * Callees:
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001834C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x18001E824 (-HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180043DFC (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180043E88 (-HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionModel@@@Z @ 0x180044184 (-HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionM.c)
 */

__int64 __fastcall HampAppGetInterruptiveUIState(struct _HAM_APPLICATION *a1)
{
  struct _RM_HAM_ACTIVITY_HOST *v1; // rax
  unsigned int HasExternalResourceAccess; // edi
  struct _RM_HAM_ACTIVITY_HOST *v3; // rbx
  unsigned int v4; // edx

  v1 = HampAppTryReferenceMixedHost(a1);
  HasExternalResourceAccess = 0;
  v3 = v1;
  if ( v1 )
  {
    HampHostAcquireLockSharedEx(v1, 0);
    HasExternalResourceAccess = HampHostHasExternalResourceAccess(v3, 27LL);
    HampHostReleaseLockSharedEx(v3, v4);
    RmHamHostDereference(v3);
  }
  return HasExternalResourceAccess;
}
