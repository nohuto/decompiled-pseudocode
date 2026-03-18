/*
 * XREFs of ?Thunk_ProxyDisposed_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18027A7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IBamoPeer_dataprovider_AutoBamos_Receive<BamoImpl::dataprovider_AutoBamos::BamoPeerImpl>::Thunk_ProxyDisposed_5(
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a1,
        int **a2)
{
  return Microsoft::BamoImpl::BaseBamoConnectionImpl::ProxyDisposed(
           *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)a1 + 3) + 32LL),
           a1,
           **a2);
}
