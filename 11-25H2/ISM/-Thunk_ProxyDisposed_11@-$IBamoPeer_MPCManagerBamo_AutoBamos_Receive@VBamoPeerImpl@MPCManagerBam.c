/*
 * XREFs of ?Thunk_ProxyDisposed_11@?$IBamoPeer_MPCManagerBamo_AutoBamos_Receive@VBamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800762E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IBamoPeer_MPCManagerBamo_AutoBamos_Receive<BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl>::Thunk_ProxyDisposed_11(
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a1,
        unsigned int **a2)
{
  return Microsoft::BamoImpl::BaseBamoConnectionImpl::ProxyDisposed(
           *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)a1 + 3) + 32LL),
           a1,
           **a2);
}
