/*
 * XREFs of PiSwCloseDescendants @ 0x140A81628
 * Callers:
 *     PiSwIrpCleanup @ 0x14072E8F0 (PiSwIrpCleanup.c)
 *     PiSwProcessParentRemoveIrp @ 0x1409BEA08 (PiSwProcessParentRemoveIrp.c)
 *     PiSwCloseDescendants @ 0x140A81628 (PiSwCloseDescendants.c)
 * Callees:
 *     McTemplateK0z_EtwWriteTransfer @ 0x1404CE1B0 (McTemplateK0z_EtwWriteTransfer.c)
 *     PiSwFindBusRelations @ 0x1408B8918 (PiSwFindBusRelations.c)
 *     PiSwCloseDescendants @ 0x140A81628 (PiSwCloseDescendants.c)
 *     PiSwCloseDevice @ 0x140A90544 (PiSwCloseDevice.c)
 */

int __fastcall PiSwCloseDescendants(__int64 a1, char a2)
{
  _QWORD *BusRelations; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rdi
  _QWORD **v9; // rdi
  _QWORD *v10; // rbx
  _QWORD *v11; // rsi

  BusRelations = PiSwFindBusRelations(a1);
  v8 = BusRelations;
  if ( BusRelations )
  {
    if ( (byte_140EEFF64 & 0x40) != 0 )
      LODWORD(BusRelations) = McTemplateK0z_EtwWriteTransfer(
                                v6,
                                (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_CloseDescendants,
                                v7,
                                *(const wchar_t **)(a1 + 8));
    v9 = (_QWORD **)(v8 + 2);
    v10 = *v9;
    while ( v10 != v9 )
    {
      v11 = v10 - 12;
      v10 = (_QWORD *)*v10;
      LODWORD(BusRelations) = *((_DWORD *)v11 + 1);
      if ( ((unsigned __int8)BusRelations & 1) == 0 )
      {
        if ( !a2 || (BusRelations = v11 + 16, (_QWORD *)*BusRelations == BusRelations) )
        {
          LOBYTE(v5) = a2;
          PiSwCloseDescendants(v11 + 9, v5);
          LODWORD(BusRelations) = PiSwCloseDevice(v11);
        }
      }
    }
  }
  return (int)BusRelations;
}
