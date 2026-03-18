/*
 * XREFs of ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x14018EA10
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x140195E9C (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x14035B368 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::DestroySerializeFStateTransitWorker(DXGADAPTER *this)
{
  if ( *((_QWORD *)this + 404) )
  {
    if ( *((_QWORD *)this + 504) )
    {
      *((_BYTE *)this + 4040) = 1;
      KeSetEvent((PRKEVENT)this + 163, 0, 0);
      ZwWaitForSingleObject(*((HANDLE *)this + 504), 0, 0LL);
      ZwClose(*((HANDLE *)this + 504));
      *((_QWORD *)this + 504) = 0LL;
    }
  }
}
