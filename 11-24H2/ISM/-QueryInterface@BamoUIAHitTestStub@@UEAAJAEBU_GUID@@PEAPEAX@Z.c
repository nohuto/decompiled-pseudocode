/*
 * XREFs of ?QueryInterface@BamoUIAHitTestStub@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B7360
 * Callers:
 *     ?QueryInterface@BamoUIAHitTestStub@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B73F0 (-QueryInterface@BamoUIAHitTestStub@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoUIAHitTestStub::QueryInterface(BamoUIAHitTestStub *this, const struct _GUID *a2, void **a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rax
  void *v6; // rdx

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  v4 = 0;
  if ( !v3 )
    goto LABEL_8;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_edfcaf4b_97c5_44d9_8fe6_9a2c11a9b8de.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_edfcaf4b_97c5_44d9_8fe6_9a2c11a9b8de.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_edfcaf4b_97c5_44d9_8fe6_9a2c11a9b8de.Data4;
  if ( v5 )
  {
    *a3 = 0LL;
  }
  else
  {
LABEL_8:
    v6 = (void *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    *a3 = v6;
    if ( v6 )
    {
      (**(void (__fastcall ***)(BamoUIAHitTestStub *))this)(this);
      return v4;
    }
  }
  return (unsigned int)-2147467262;
}
