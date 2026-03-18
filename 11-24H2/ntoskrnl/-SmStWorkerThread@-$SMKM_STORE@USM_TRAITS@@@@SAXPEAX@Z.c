/*
 * XREFs of ?SmStWorkerThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14049EDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402794F0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStUnhandledExceptionFilter@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST_STORE_EXCEPTION_SOURCE@1@@Z @ 0x14060A9C8 (-SmStUnhandledExceptionFilter@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStWorkerThread(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx

  v3 = *a1;
  if ( *(char *)(*a1 + 6837) < 0 )
  {
    LOBYTE(v3) = *(_BYTE *)(v3 + 7596);
    KeGetCurrentThread()[1].SavedApcStateFill[15] = v3;
  }
  return SMKM_STORE<SM_TRAITS>::SmStWorker(a1, v3, a3);
}
