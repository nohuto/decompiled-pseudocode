/*
 * XREFs of IopCheckListForCancelableIrp @ 0x140408C7C
 * Callers:
 *     IopCancelIrpsInFileObjectList @ 0x1404089C0 (IopCancelIrpsInFileObjectList.c)
 * Callees:
 *     <none>
 */

char __fastcall IopCheckListForCancelableIrp(_QWORD **a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, _QWORD *a6)
{
  _QWORD *v7; // r10
  char v8; // r11
  _QWORD *v9; // r9
  signed __int64 v10; // rax
  signed __int64 v11; // r8

  v7 = a5;
  v8 = 1;
  *a6 = 0LL;
  if ( !a5 )
    v7 = *a1;
  while ( a1 != v7 )
  {
    v9 = v7 - 4;
    if ( (v7[7] & 0xFFFFFFFFFFFFFFF9uLL) == a2 && (!a3 || v9[9] == a3) && (!a4 || v9[19] == a4) )
    {
      if ( *((char *)v9 + 67) < *((char *)v9 + 66) + 2 && !*((_BYTE *)v9 + 68) )
      {
        v10 = v9[11];
        v8 = 0;
        do
        {
          v11 = v10;
          v10 = _InterlockedCompareExchange64(v9 + 11, v10 & 0xFFFFFFFFFFFFFFF9uLL | ((v10 & 6) + 2), v10);
        }
        while ( v11 != v10 );
        *a6 = v9;
        return v8;
      }
      v8 = (v9[2] & 0x10000) != 0 ? v8 : 0;
    }
    v7 = (_QWORD *)*v7;
  }
  return v8;
}
