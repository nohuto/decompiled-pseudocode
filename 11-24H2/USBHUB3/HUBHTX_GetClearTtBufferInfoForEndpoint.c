/*
 * XREFs of HUBHTX_GetClearTtBufferInfoForEndpoint @ 0x1400045C4
 * Callers:
 *     HUBHTX_ClearTTBuffer @ 0x140002E70 (HUBHTX_ClearTTBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBHTX_GetClearTtBufferInfoForEndpoint(__int64 a1, __int64 a2, char a3, _WORD *a4)
{
  bool v5; // cc
  unsigned int v7; // r10d
  _QWORD *v8; // rdi
  _QWORD *i; // rax
  unsigned int v10; // ebx
  __int64 v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rax
  __int16 v15; // dx
  __int16 v16; // cx

  v5 = *(_DWORD *)(a1 + 172) <= 1u;
  v7 = -1073741823;
  *a4 = 0;
  if ( v5 )
  {
    if ( a2 == *(_QWORD *)(a1 + 88) )
    {
      *a4 = a3 & 0xF | (16 * (*(_WORD *)(a1 + 1656) & 0x7F));
      return 0;
    }
    else
    {
      v8 = (_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL);
      for ( i = (_QWORD *)*v8; ; i = (_QWORD *)v13[1] )
      {
        v13 = i - 1;
        if ( v8 == i )
          break;
        v10 = *((_DWORD *)v13 + 6);
        v11 = 0LL;
        if ( v10 )
        {
          v12 = v13 + 5;
          while ( *v12 != a2 )
          {
            v11 = (unsigned int)(v11 + 1);
            v12 += 10;
            if ( (unsigned int)v11 >= v10 )
              goto LABEL_9;
          }
          v14 = v13[10 * v11 + 9];
          if ( (*(_BYTE *)(v14 + 3) & 3) != 0 )
          {
            if ( (*(_BYTE *)(v14 + 3) & 3) != 2 )
              return v7;
            v15 = 4096;
          }
          else
          {
            v15 = 0;
          }
          v16 = v15 ^ a3 & 0xF ^ (16 * (*(_WORD *)(a1 + 1656) & 0x7F));
          *a4 = v16;
          if ( a3 < 0 )
            *a4 = v16 | 0x8000;
          return 0;
        }
LABEL_9:
        ;
      }
    }
  }
  return v7;
}
