/*
 * XREFs of Control_Transfer_DetermineTransferMechanism @ 0x14001EFE0
 * Callers:
 *     <none>
 * Callees:
 *     CommonBuffer_AcquireBuffer @ 0x14001F318 (CommonBuffer_AcquireBuffer.c)
 */

void __fastcall Control_Transfer_DetermineTransferMechanism(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v3; // edx
  __int64 v4; // r8
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  int v9; // ecx

  v1 = *(_QWORD *)(a1 + 360);
  v3 = *(_DWORD *)(v1 + 104);
  v4 = *(_QWORD *)(v1 + 48);
  if ( !v3 )
  {
    v9 = 0;
    goto LABEL_15;
  }
  if ( *(_BYTE *)(a1 + 328) && v3 <= 8 && (*(_DWORD *)(v4 + 32) & 1) == 0 )
  {
    v9 = 1;
    goto LABEL_15;
  }
  if ( *(_WORD *)(v4 + 2) != 56 )
  {
    switch ( *(_WORD *)(v4 + 2) )
    {
      case '9':
      case ':':
        goto LABEL_8;
      default:
        break;
    }
  }
  v5 = *(_QWORD **)(v4 + 48);
  if ( v5 && *v5 )
  {
LABEL_17:
    v9 = 3;
    goto LABEL_15;
  }
LABEL_8:
  if ( v3 > *(_DWORD *)(a1 + 24) )
    goto LABEL_17;
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v6 = (_QWORD *)(a1 + 224);
  v7 = *(_QWORD **)(a1 + 224);
  if ( v7 == (_QWORD *)(a1 + 224) )
  {
    v7 = (_QWORD *)CommonBuffer_AcquireBuffer(*(PVOID *)(*(_QWORD *)(a1 + 40) + 120LL));
  }
  else
  {
    if ( (_QWORD *)v7[1] != v6 || (v8 = *v7, *(_QWORD **)(*v7 + 8LL) != v7) )
      __fastfail(3u);
    *v6 = v8;
    *(_QWORD *)(v8 + 8) = v6;
    v7[1] = v7;
    *v7 = v7;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  *(_QWORD *)(v1 + 88) = v7;
  if ( !v7 )
    goto LABEL_17;
  v9 = 2;
LABEL_15:
  *(_DWORD *)(v1 + 64) = v9;
}
