/*
 * XREFs of AlpcFreeCompletionListMessage @ 0x1800D76C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl AlpcFreeCompletionListMessage(PVOID CompletionList, PPORT_MESSAGE Message)
{
  unsigned __int64 v4; // rax
  int v5; // edx
  _PORT_MESSAGE *v6; // rbx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rax
  volatile signed __int32 *v9; // r11
  int v10; // r9d
  unsigned int v11; // ecx
  unsigned __int64 v12; // rdx

  if ( ((unsigned __int8)Message & 0x3F) == 0 )
  {
    v4 = (unsigned __int64)Message + (unsigned __int16)Message->u1.s1.TotalLength;
    if ( *((_DWORD *)CompletionList + 9) )
    {
      if ( (v4 & 7) != 0 )
        v5 = 8 - (v4 & 7);
      else
        v5 = 0;
      v4 += (unsigned int)(v5 + *((_DWORD *)CompletionList + 10));
    }
    if ( (unsigned __int64)Message < v4 )
    {
      v6 = (_PORT_MESSAGE *)((char *)CompletionList + *((unsigned int *)CompletionList + 7));
      if ( Message >= v6 && v4 <= (unsigned __int64)v6 + *((unsigned int *)CompletionList + 8) )
      {
        v7 = (unsigned __int64)((char *)Message - (char *)v6) >> 6;
        v8 = ((v4 - (unsigned __int64)v6 + 63) >> 6) - v7;
        v9 = (volatile signed __int32 *)((char *)CompletionList + 4 * (v7 >> 5) + *((unsigned int *)CompletionList + 5));
        v10 = v7 & 0x1F;
        if ( v10 )
        {
          v11 = v8;
          if ( (unsigned int)(32 - v10) <= v8 )
            v11 = 32 - v10;
          _InterlockedAnd(v9++, ~(((1 << v11) - 1) << v10));
          v8 -= v11;
        }
        if ( v8 >= 0x20 )
        {
          v12 = v8 >> 5;
          v8 += -32LL * (v8 >> 5);
          do
          {
            _InterlockedAnd(v9++, 0);
            --v12;
          }
          while ( v12 );
        }
        if ( v8 )
          _InterlockedAnd(v9, -1 << v8);
        _InterlockedIncrement((volatile signed __int32 *)CompletionList + 48);
      }
    }
  }
}
