/*
 * XREFs of FilterCreateFilterPropertySets @ 0x140030530
 * Callers:
 *     FilterCreateFilterContext @ 0x14003035C (FilterCreateFilterContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FilterCreateFilterPropertySets(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  int v6; // r9d
  __int64 v7; // rdi
  void *Pool2; // rax
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax

  v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD))(pExtBusDeviceDispatchTable + 80))(a1, a2, 0LL);
  if ( v6 >= 0 )
  {
    v7 = (unsigned int)(*a2 + 4);
    Pool2 = (void *)ExAllocatePool2(64LL, 40 * v7, 1096972357LL);
    *a3 = Pool2;
    if ( Pool2 )
    {
      v9 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Pool2, ExFreePool);
      v6 = v9;
      if ( v9 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD))(pExtBusDeviceDispatchTable + 80))(
               a1,
               a2,
               *a3,
               (unsigned int)v9);
        if ( v6 >= 0 )
        {
          v10 = 5LL * (unsigned int)*a2;
          v11 = *a3;
          *(_OWORD *)(v11 + 8 * v10) = *(_OWORD *)&FilterPinPropertySet;
          *(_OWORD *)(v11 + 8 * v10 + 16) = *(_OWORD *)&off_14001F590;
          *(_QWORD *)(v11 + 8 * v10 + 32) = 0LL;
          v12 = 5LL * (unsigned int)(*a2 + 1);
          v13 = *a3;
          *(_OWORD *)(v13 + 8 * v12) = *(_OWORD *)&FilterAudioPropertySet;
          *(_OWORD *)(v13 + 8 * v12 + 16) = *(_OWORD *)&off_14001F5E0;
          *(_QWORD *)(v13 + 8 * v12 + 32) = 0LL;
          v14 = 5LL * (unsigned int)(*a2 + 2);
          v15 = *a3;
          *(_OWORD *)(v15 + 8 * v14) = *(_OWORD *)&FilterAudioSignalProcessingPropertySet;
          *(_OWORD *)(v15 + 8 * v14 + 16) = *(_OWORD *)&off_14001F568;
          *(_QWORD *)(v15 + 8 * v14 + 32) = 0LL;
          v16 = 5LL * (unsigned int)(*a2 + 3);
          v17 = *a3;
          *(_OWORD *)(v17 + 8 * v16) = *(_OWORD *)&FilterJackDescriptionPropertySet;
          *(_OWORD *)(v17 + 8 * v16 + 16) = *(_OWORD *)&off_14001F5B8;
          *(_QWORD *)(v17 + 8 * v16 + 32) = 0LL;
          *a2 = v7;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v6;
}
