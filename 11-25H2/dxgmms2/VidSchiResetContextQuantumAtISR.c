/*
 * XREFs of VidSchiResetContextQuantumAtISR @ 0x140037DE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0piixqq_EtwWriteTransfer @ 0x140018838 (McTemplateK0piixqq_EtwWriteTransfer.c)
 */

char __fastcall VidSchiResetContextQuantumAtISR(__int64 a1)
{
  __int64 v1; // r8
  char v2; // bl
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 96);
  v2 = 0;
  if ( *(_BYTE *)(a1 + 640)
    || (*(_DWORD *)(*(_QWORD *)(v1 + 24) + 2792LL) & 8) == 0
    || gulPriorityToYieldPriorityBand[*(unsigned int *)(a1 + 404)] )
  {
    *(_QWORD *)(a1 + 440) = *(_QWORD *)(a1 + 472);
    *(_BYTE *)(a1 + 640) = 0;
LABEL_3:
    v2 = 1;
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 436), 3, 2);
    goto LABEL_4;
  }
  if ( *(_QWORD *)(v1 + 2128) )
    v4 = *(_QWORD *)(v1 + 2136);
  else
    v4 = *(_QWORD *)(a1 + 472);
  if ( *(_BYTE *)(v1 + 2144) && *(__int64 *)(a1 + 440) <= 0 )
  {
    v5 = *(_QWORD *)(v1 + 2120);
    if ( *(_QWORD *)(a1 + 488) == v5 )
      v4 = 0LL;
    else
      *(_QWORD *)(a1 + 488) = v5;
  }
  v6 = v4 + *(_QWORD *)(a1 + 440);
  *(_QWORD *)(a1 + 440) = v6;
  if ( v6 > 0 )
  {
    v7 = *(_QWORD *)(a1 + 472);
    if ( v6 > v7 )
      *(_QWORD *)(a1 + 440) = v7;
    goto LABEL_3;
  }
LABEL_4:
  if ( (byte_140081241 & 2) != 0 )
    McTemplateK0piixqq_EtwWriteTransfer();
  return v2;
}
