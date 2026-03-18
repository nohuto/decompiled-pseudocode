/*
 * XREFs of ?Thunk_SetBootstrapProxy_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180270110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IBamoPeer_dataprovider_AutoBamos_Receive<BamoImpl::dataprovider_AutoBamos::BamoPeerImpl>::Thunk_SetBootstrapProxy_5(
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a1,
        unsigned int **a2)
{
  unsigned int v3; // ebx

  v3 = **a2;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a1 + 2) + 16LL))(*((_QWORD *)a1 + 2), v3);
  return Microsoft::BamoImpl::BaseBamoConnectionImpl::SetBootstrapProxy(
           *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)a1 + 3) + 32LL),
           a1,
           v3);
}
