/*
 * XREFs of ?KiAdvanceReadyQueueEnumeratorToNextProcessor@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x1402D9AE0
 * Callers:
 *     ?KiAdvanceReadyQueueEnumeratorToNextList@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z @ 0x1402D9568 (-KiAdvanceReadyQueueEnumeratorToNextList@@YAJPEAU_KI_READY_QUEUE_ENUMERATOR@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAdvanceReadyQueueEnumeratorToNextProcessor(struct _KI_READY_QUEUE_ENUMERATOR *a1)
{
  unsigned int v1; // esi
  _BYTE *v2; // r9
  char v3; // di
  unsigned int v4; // r8d
  unsigned int v5; // r10d
  bool v6; // zf
  unsigned int v7; // eax
  int v8; // r11d
  __int64 v9; // r10
  char v10; // al

  v1 = *(_DWORD *)a1;
  v2 = (char *)a1 + 8;
  v3 = *((_BYTE *)a1 + 9);
  v4 = 0;
  do
  {
    v5 = (unsigned __int8)++*((_BYTE *)a1 + 10);
    if ( v5 >= v1 )
    {
      *((_BYTE *)a1 + 10) = 0;
      v2 = (char *)a1 + 8;
      LOBYTE(v5) = 0;
    }
    if ( (_BYTE)v5 == v3 )
    {
      v6 = (*((_DWORD *)a1 + 1) & ~(1 << *v2)) == 0;
      v7 = *((_DWORD *)a1 + 1) & ~(1 << *v2);
      *((_DWORD *)a1 + 1) = v7;
      if ( v6 )
        return (unsigned int)-2147483622;
      _BitScanReverse(&v7, v7);
      *v2 = v7;
    }
    v8 = 1 << *v2;
    v9 = 6LL * (unsigned __int8)v5;
  }
  while ( ((*((_DWORD *)a1 + 2 * v9 + 22) | *((_DWORD *)a1 + 2 * v9 + 23)) & v8) == 0 );
  *((_BYTE *)a1 + 11) = 0;
  v10 = 0;
  if ( (v8 & *((_DWORD *)a1 + 2 * v9 + 22)) != 0 )
  {
    *((_BYTE *)a1 + 11) = 1;
    v10 = 1;
  }
  if ( (v8 & *((_DWORD *)a1 + 2 * v9 + 23)) != 0 )
    *((_BYTE *)a1 + 11) = v10 | 2;
  return v4;
}
