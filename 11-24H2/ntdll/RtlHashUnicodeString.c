/*
 * XREFs of RtlHashUnicodeString @ 0x1800D5410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlHashUnicodeString(unsigned __int16 *a1, char a2, unsigned int a3, int *a4)
{
  __int64 v4; // rdi
  int v5; // r10d
  unsigned __int16 *v7; // r11
  int v8; // r9d
  unsigned __int64 v9; // rax
  int v11; // ecx

  v4 = qword_1801CD038;
  v5 = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( !a4 )
    return 3221225485LL;
  v7 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  *a4 = 0;
  v8 = *a1 >> 1;
  if ( a3 > 1 )
    return 3221225485LL;
  if ( v8 )
  {
    if ( a2 )
    {
      do
      {
        v9 = *v7++;
        --v8;
        if ( (unsigned int)v9 >= 0x61 )
        {
          if ( (unsigned int)v9 > 0x7A )
          {
            if ( v4 )
            {
              if ( (unsigned __int16)v9 >= 0xC0u )
                LOWORD(v9) = *(_WORD *)(v4
                                      + 2
                                      * ((v9 & 0xF)
                                       + *(unsigned __int16 *)(v4
                                                             + 2LL
                                                             * (((unsigned __int8)v9 >> 4)
                                                              + (unsigned int)*(unsigned __int16 *)(v4 + 2 * (v9 >> 8))))))
                           + v9;
            }
          }
          else
          {
            LOWORD(v9) = v9 - 32;
          }
        }
        v5 = (unsigned __int16)v9 + 65599 * v5;
      }
      while ( v8 );
    }
    else
    {
      do
      {
        v11 = *v7++;
        v5 = v11 + 65599 * v5;
        --v8;
      }
      while ( v8 );
    }
  }
  *a4 = v5;
  return 0LL;
}
