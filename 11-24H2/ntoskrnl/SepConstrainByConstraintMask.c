/*
 * XREFs of SepConstrainByConstraintMask @ 0x14042D230
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

void __fastcall SepConstrainByConstraintMask(int a1, int a2, char *a3, char *a4, bool *a5, unsigned int a6, _BYTE *a7)
{
  int v7; // r11d
  signed __int64 v8; // r9
  __int64 v9; // rsi
  bool *v10; // r11
  int v11; // ebx

  *a7 = 0;
  if ( a1 != -1 )
  {
    if ( a6 )
    {
      v8 = a4 - a3;
      v9 = a6;
      v10 = a5;
      do
      {
        v11 = a1 & *(_DWORD *)a3;
        if ( v11 != *(_DWORD *)a3 )
        {
          *a7 = 1;
          *(_DWORD *)a3 = v11;
          if ( (a2 & 0x2000000) != 0 )
          {
            if ( v11 )
            {
              *(_DWORD *)&a3[v8] = 0;
              if ( a5 )
                *v10 = 1;
            }
            else
            {
              *(_DWORD *)&a3[v8] = -1073741790;
              if ( a5 )
                *v10 = 0;
            }
          }
          else
          {
            *(_DWORD *)&a3[v8] = -1073741790;
            if ( a5 )
              *v10 = *(_DWORD *)a3 != 0;
          }
        }
        a3 += 4;
        ++v10;
        --v9;
      }
      while ( v9 );
    }
    else
    {
      v7 = a1 & *(_DWORD *)a3;
      if ( v7 != *(_DWORD *)a3 )
      {
        *a7 = 1;
        *(_DWORD *)a3 = v7;
        if ( (a2 & 0x2000000) != 0 )
        {
          if ( v7 )
          {
            *(_DWORD *)a4 = 0;
            if ( a5 )
              *a5 = 1;
          }
          else
          {
            *(_DWORD *)a4 = -1073741790;
            if ( a5 )
              *a5 = 0;
          }
        }
        else
        {
          *(_DWORD *)a4 = -1073741790;
          if ( a5 )
            *a5 = *(_DWORD *)a3 != 0;
        }
      }
    }
  }
}
