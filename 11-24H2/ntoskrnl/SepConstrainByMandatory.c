/*
 * XREFs of SepConstrainByMandatory @ 0x14042D060
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

void __fastcall SepConstrainByMandatory(__int64 a1, int a2, char *a3, char *a4, bool *a5, unsigned int a6)
{
  int v6; // r10d
  signed __int64 v7; // r9
  bool *v8; // r10
  __int64 v9; // rdi
  int v10; // r11d

  if ( *(_DWORD *)(a1 + 8) && (!*(_BYTE *)(a1 + 5) || !*(_BYTE *)(a1 + 4) || !*(_BYTE *)(a1 + 6)) )
  {
    if ( a6 )
    {
      v7 = a4 - a3;
      v8 = a5;
      v9 = a6;
      do
      {
        v10 = *(_DWORD *)a3 & *(_DWORD *)a1;
        if ( v10 != *(_DWORD *)a3 )
        {
          *(_DWORD *)a3 = v10;
          if ( (a2 & 0x2000000) != 0 )
          {
            if ( v10 )
            {
              *(_DWORD *)&a3[v7] = 0;
              if ( a5 )
                *v8 = 1;
            }
            else
            {
              *(_DWORD *)&a3[v7] = -1073741790;
              if ( a5 )
                *v8 = 0;
            }
          }
          else
          {
            *(_DWORD *)&a3[v7] = -1073741790;
            if ( a5 )
              *v8 = *(_DWORD *)a3 != 0;
          }
        }
        a3 += 4;
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    else
    {
      v6 = *(_DWORD *)a3 & *(_DWORD *)a1;
      if ( v6 != *(_DWORD *)a3 )
      {
        *(_DWORD *)a3 = v6;
        if ( (a2 & 0x2000000) != 0 )
        {
          if ( v6 )
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
