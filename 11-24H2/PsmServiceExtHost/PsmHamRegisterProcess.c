/*
 * XREFs of PsmHamRegisterProcess @ 0x1800386D0
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z @ 0x180038AE8 (-HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z.c)
 */

int __fastcall PsmHamRegisterProcess(
        void *a1,
        void *a2,
        struct _PSM_APP_IDENTITY *a3,
        unsigned __int64 a4,
        unsigned int a5,
        void *a6)
{
  return HamSrvRegisterProcess((struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 2248), a1, a2, a3, a4, a5, a6);
}
