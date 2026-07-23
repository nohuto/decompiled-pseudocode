/*
 * XREFs of PiSwBusRelationAdd @ 0x1409F2DD8
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1409F13D4 (PiSwIrpStartCreateWorker.c)
 *     PiSwProcessRemove @ 0x1409F3978 (PiSwProcessRemove.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1403E40F0 (RtlInsertElementGenericTableAvl.c)
 *     McTemplateK0zzz_EtwWriteTransfer @ 0x1405A554C (McTemplateK0zzz_EtwWriteTransfer.c)
 *     McTemplateK0zzzd_EtwWriteTransfer @ 0x1405A5664 (McTemplateK0zzzd_EtwWriteTransfer.c)
 *     PnpAllocatePWSTR @ 0x1408D1794 (PnpAllocatePWSTR.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwBusRelationAdd(wchar_t *a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  PVOID v8; // rsi
  signed int v9; // ebx
  _WORD *v10; // rax
  _QWORD *inserted; // rax
  __int64 *v13; // rdx
  char *v14; // rax
  _OWORD Buffer[2]; // [rsp+40h] [rbp-20h] BYREF
  BOOLEAN NewElement; // [rsp+A0h] [rbp+40h] BYREF
  PVOID P; // [rsp+A8h] [rbp+48h] BYREF

  P = 0LL;
  memset(Buffer, 0, sizeof(Buffer));
  NewElement = 0;
  if ( (byte_140EEFF64 & 0x40) != 0 )
    McTemplateK0zzz_EtwWriteTransfer(
      (__int64)a1,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_RelationAdd_Start,
      a3,
      *(const wchar_t **)(a2 + 8),
      *(const wchar_t **)(a2 + 16),
      a1);
  v5 = PnpAllocatePWSTR(a1, 0xC8uLL, 0x57706E50u, &P);
  v8 = P;
  v9 = v5;
  if ( v5 >= 0 )
  {
    v9 = 0;
    if ( P )
    {
      v10 = P;
      v6 = 0x7FFFLL;
      v7 = 2LL;
      do
      {
        if ( !*v10 )
          break;
        ++v10;
        --v6;
      }
      while ( v6 );
      v9 = v6 == 0 ? 0xC000000D : 0;
      if ( v6 )
      {
        *((_QWORD *)&Buffer[0] + 1) = P;
        LOWORD(Buffer[0]) = 2 * (0x7FFF - v6);
        WORD1(Buffer[0]) = LOWORD(Buffer[0]) + 2;
      }
    }
    if ( v9 >= 0 )
    {
      inserted = RtlInsertElementGenericTableAvl(&PiSwBusRelationsTable, Buffer, 0x20u, &NewElement);
      if ( inserted )
      {
        if ( NewElement )
        {
          P = 0LL;
          inserted[3] = inserted + 2;
          inserted[2] = inserted + 2;
        }
        *(_QWORD *)(a2 + 112) = inserted;
        v6 = a2 + 96;
        v13 = (__int64 *)inserted[3];
        v14 = (char *)(inserted + 2);
        if ( (char *)*v13 != v14 )
          __fastfail(3u);
        *(_QWORD *)v6 = v14;
        *(_QWORD *)(a2 + 104) = v13;
        *v13 = v6;
        *((_QWORD *)v14 + 1) = v6;
        _InterlockedIncrement((volatile signed __int32 *)a2);
        v8 = P;
      }
      else
      {
        v9 = -1073741670;
      }
    }
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0x57706E50u);
  if ( (byte_140EEFF64 & 0x40) != 0 )
    McTemplateK0zzzd_EtwWriteTransfer(
      v6,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_RelationAdd_Stop,
      v7,
      *(const wchar_t **)(a2 + 8),
      *(const wchar_t **)(a2 + 16),
      a1,
      v9);
  return (unsigned int)v9;
}
