/*
 * XREFs of Bulk_TransferData_Free @ 0x140019840
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x140019A00 (Bulk_ProcessTransferEventWithED1.c)
 * Callees:
 *     <none>
 */

void __fastcall Bulk_TransferData_Free(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rsi
  _QWORD *v4; // rcx
  struct _MDL *v5; // rcx
  __int64 v6; // r8

  v1 = *(_QWORD **)(a1 + 96);
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 56);
    *(_BYTE *)(v3 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
    v4 = *(_QWORD **)(v3 + 232);
    if ( *v4 != v3 + 224 )
      __fastfail(3u);
    v1[1] = v4;
    *v1 = v3 + 224;
    *v4 = v1;
    *(_QWORD *)(v3 + 232) = v1;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), *(_BYTE *)(v3 + 104));
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  v5 = *(struct _MDL **)(a1 + 80);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 48);
    if ( *(_WORD *)(v6 + 2) != 56 )
    {
      switch ( *(_WORD *)(v6 + 2) )
      {
        case '9':
        case ':':
          goto LABEL_9;
        default:
          break;
      }
    }
    if ( v5 != *(struct _MDL **)(v6 + 48) )
    {
LABEL_9:
      if ( v5 != *(struct _MDL **)(*(_QWORD *)(a1 + 56) + 120LL) )
      {
        IoFreeMdl(v5);
        *(_QWORD *)(a1 + 80) = 0LL;
      }
    }
  }
  *(_BYTE *)(a1 + 16) = 0;
}
