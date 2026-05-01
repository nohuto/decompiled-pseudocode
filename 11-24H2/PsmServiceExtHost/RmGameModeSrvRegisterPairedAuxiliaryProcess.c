/*
 * XREFs of RmGameModeSrvRegisterPairedAuxiliaryProcess @ 0x180089900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RmGameModeSrvRegisterPairedAuxiliaryProcess(
        struct _RM_SERVICE_GLOBALS *a1,
        void *a2,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a3,
        void *a4,
        unsigned int a5)
{
  return RmSrvGameModeRegisterPairedAuxiliaryProcess(a1, a2, a3, a4, a5);
}
