/*
 * XREFs of ?ProcessVendorMessages@LampArrayDevice@@AEAAXPEAUViewClientListEntry@1@@Z @ 0x180069BF8
 * Callers:
 *     ?UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z @ 0x180060434 (-UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?load@?$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA?AW4GestureOperationState@@W4memory_order@2@@Z @ 0x1800959FC (-load@-$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA-AW4GestureOperationState@@W4memor.c)
 *     ?ReceiveVendorReport@HidLampArrayDevice@@QEAAJEPEAE0@Z @ 0x1800EAF84 (-ReceiveVendorReport@HidLampArrayDevice@@QEAAJEPEAE0@Z.c)
 *     ?SendVendorReport@HidLampArrayDevice@@QEAAJEEPEBE@Z @ 0x1800EB320 (-SendVendorReport@HidLampArrayDevice@@QEAAJEEPEBE@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall LampArrayDevice::ProcessVendorMessages(
        LampArrayDevice *this,
        struct LampArrayDevice::ViewClientListEntry *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r10
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // eax

  if ( a2 && (unsigned int)std::_Atomic_storage<enum GestureOperationState,4>::load(*((_QWORD *)a2 + 4) + 4108LL) == 1 )
  {
    v5 = *(_QWORD *)(v3 + 32);
    if ( *(_DWORD *)(v5 + 4104) == 1 )
    {
      v7 = HidLampArrayDevice::SendVendorReport(
             *(HidLampArrayDevice **)(v4 + 24),
             *(_BYTE *)(v5 + 4112),
             *(_BYTE *)(v5 + 4113),
             (const unsigned __int8 *)(v5 + 4114));
    }
    else
    {
      if ( *(_DWORD *)(v5 + 4104) != 2 )
      {
        v6 = -2147418113;
LABEL_10:
        *(_DWORD *)(*((_QWORD *)a2 + 4) + 4180LL) = v6;
        _InterlockedExchange((volatile __int32 *)(*((_QWORD *)a2 + 4) + 4108LL), 2);
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 72LL))(*((_QWORD *)a2 + 2));
        return;
      }
      v7 = HidLampArrayDevice::ReceiveVendorReport(
             *(HidLampArrayDevice **)(v4 + 24),
             *(_BYTE *)(v5 + 4112),
             (unsigned __int8 *)(v5 + 4113),
             (unsigned __int8 *)(v5 + 4114));
    }
    v6 = v7;
    goto LABEL_10;
  }
}
