/*
 * XREFs of EtwpDequeueFreeBuffer @ 0x18001E890
 * Callers:
 *     EtwpGetFreeBuffer @ 0x18001DD08 (EtwpGetFreeBuffer.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EtwpDequeueFreeBuffer(__int64 a1)
{
  _QWORD **v2; // rcx
  _QWORD *v3; // rdx
  _QWORD *v4; // rdx
  _QWORD **v5; // rcx
  _QWORD *v6; // rdx

  v2 = *(_QWORD ***)(a1 + 280);
  v3 = 0LL;
  if ( v2 != *(_QWORD ***)(a1 + 288) )
  {
    v4 = *v2;
    *v2 = (_QWORD *)**v2;
    if ( v4 == *(_QWORD **)(a1 + 288) )
      *(_QWORD *)(a1 + 288) = *(_QWORD *)(a1 + 280);
    v3 = v4 - 4;
  }
  if ( v3 )
    goto LABEL_11;
  while ( 1 )
  {
    v5 = *(_QWORD ***)(a1 + 232);
    v3 = 0LL;
    if ( v5 != *(_QWORD ***)(a1 + 240) )
    {
      v6 = *v5;
      *v5 = (_QWORD *)**v5;
      if ( v6 == *(_QWORD **)(a1 + 240) )
        *(_QWORD *)(a1 + 240) = *(_QWORD *)(a1 + 232);
      v3 = v6 - 4;
    }
    if ( !v3 )
      break;
LABEL_11:
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 212));
    if ( !*((_DWORD *)v3 + 3) && !*((_DWORD *)v3 + 11) )
    {
      *((_DWORD *)v3 + 1) = 0;
      *((_DWORD *)v3 + 2) = 72;
      *((_WORD *)v3 + 27) = 0;
      v3[4] = 0LL;
      *((_DWORD *)v3 + 11) = 1;
      return v3;
    }
    **(_QWORD **)(a1 + 288) = v3 + 4;
    *(_QWORD *)(a1 + 288) = v3 + 4;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 212));
  }
  return v3;
}
