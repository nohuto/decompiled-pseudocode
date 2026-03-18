/*
 * XREFs of ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x14018C7DC
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x140193B2C (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x14036DEB0 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
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
