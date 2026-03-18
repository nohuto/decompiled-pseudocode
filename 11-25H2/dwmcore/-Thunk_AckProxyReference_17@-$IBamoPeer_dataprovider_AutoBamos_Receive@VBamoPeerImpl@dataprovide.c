/*
 * XREFs of ?Thunk_AckProxyReference_17@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18027A470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IBamoPeer_dataprovider_AutoBamos_Receive<BamoImpl::dataprovider_AutoBamos::BamoPeerImpl>::Thunk_AckProxyReference_17(
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a1,
        __int64 a2)
{
  return Microsoft::BamoImpl::BaseBamoConnectionImpl::AckProxyReference(
           *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)a1 + 3) + 32LL),
           a1,
           **(_DWORD **)a2,
           **(_BYTE **)(a2 + 8));
}
