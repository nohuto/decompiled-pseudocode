/*
 * XREFs of ?QueryInterface@BamoHapticDeviceManagerStub@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18018C340
 * Callers:
 *     ?QueryInterface@BamoHapticDeviceManagerStub@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18018C3C0 (-QueryInterface@BamoHapticDeviceManagerStub@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoHapticDeviceManagerStub::QueryInterface(
        BamoHapticDeviceManagerStub *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  void *v4; // rdx

  if ( (*(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
     || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4)
    && (*(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_e0a26699_51bb_60de_4fef_cdff9adf1526.Data1
     || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_e0a26699_51bb_60de_4fef_cdff9adf1526.Data4) )
  {
    *a3 = 0LL;
    return (unsigned int)-2147467262;
  }
  v3 = 0;
  v4 = (void *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  *a3 = v4;
  if ( !v4 )
    return (unsigned int)-2147467262;
  (**(void (__fastcall ***)(BamoHapticDeviceManagerStub *))this)(this);
  return v3;
}
