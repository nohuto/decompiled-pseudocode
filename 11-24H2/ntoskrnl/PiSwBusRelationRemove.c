/*
 * XREFs of PiSwBusRelationRemove @ 0x1409F32DC
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1409F13D4 (PiSwIrpStartCreateWorker.c)
 *     PiSwProcessRemove @ 0x1409F3978 (PiSwProcessRemove.c)
 *     PiSwCloseDevice @ 0x140A90544 (PiSwCloseDevice.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1403E4330 (RtlDeleteElementGenericTableAvl.c)
 *     McTemplateK0zzz_EtwWriteTransfer @ 0x1405A554C (McTemplateK0zzz_EtwWriteTransfer.c)
 *     PiSwDeviceDereference @ 0x1409F3E68 (PiSwDeviceDereference.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwBusRelationRemove(const wchar_t **P, __int64 a2, __int64 a3)
{
  char *v3; // rdi
  _QWORD *v5; // rax
  const wchar_t *v6; // rdx
  wchar_t *v7; // rcx
  _QWORD *v8; // rsi
  _QWORD *v9; // rdx
  void *v10; // rdi

  v3 = (char *)(P + 14);
  if ( (byte_140EEFF64 & 0x40) != 0 )
    McTemplateK0zzz_EtwWriteTransfer(
      (__int64)P,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_RelationRemove,
      a3,
      P[1],
      P[2],
      *(const wchar_t **)(*(_QWORD *)v3 + 8LL));
  v5 = P + 12;
  v6 = P[12];
  if ( *((const wchar_t ***)v6 + 1) != P + 12 || (v7 = (wchar_t *)P[13], *(_QWORD **)v7 != v5) )
    __fastfail(3u);
  *(_QWORD *)v7 = v6;
  v8 = v3;
  *((_QWORD *)v6 + 1) = v7;
  if ( v7 != v6 )
    v8 = P + 14;
  P[13] = (const wchar_t *)(P + 12);
  *v5 = v5;
  v9 = *(_QWORD **)v3;
  if ( *(_QWORD *)(*(_QWORD *)v3 + 16LL) == *(_QWORD *)v3 + 16LL )
  {
    v10 = (void *)v9[1];
    RtlDeleteElementGenericTableAvl(&PiSwBusRelationsTable, v9);
    if ( v10 )
      ExFreePoolWithTag(v10, 0x57706E50u);
  }
  *v8 = 0LL;
  return PiSwDeviceDereference(P);
}
