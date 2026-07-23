/*
 * XREFs of RtlpValidRelativeAttribute @ 0x18013A0A8
 * Callers:
 *     RtlpValidAttributeAce @ 0x18011DF80 (RtlpValidAttributeAce.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x1800E7158 (RtlStringCbLengthW.c)
 */

char __fastcall RtlpValidRelativeAttribute(unsigned int *a1, unsigned int a2)
{
  unsigned int v4; // eax
  unsigned int v5; // r11d
  unsigned int v6; // r8d
  unsigned __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int j; // edx
  __int64 v11; // rcx
  unsigned int v12; // r10d
  unsigned int i; // esi
  __int64 v14; // rcx
  unsigned int v15; // ecx
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( a2 >= 0x14 && !*((_WORD *)a1 + 3) && (a1[2] & 0xFFC0) == 0 )
    {
      if ( a1[3] )
      {
        if ( a2 >= *a1 )
        {
          v4 = a2 - *a1;
          if ( v4 >= 4 && (int)RtlStringCbLengthW((unsigned int *)((char *)a1 + *a1), v4, &v17) >= 0 )
          {
            v6 = a1[3];
            v7 = 4LL * v6;
            if ( v7 <= 0xFFFFFFFF && a2 - 16 >= (unsigned int)v7 )
            {
              switch ( *((_WORD *)a1 + 2) )
              {
                case 1:
                case 2:
                  while ( v5 < v6 )
                  {
                    v15 = a1[v5 + 4];
                    if ( a2 < v15 || a2 - v15 < 8 )
                      return 0;
                    ++v5;
                  }
                  return 1;
                case 3:
                  for ( i = v5; i < a1[3]; ++i )
                  {
                    v14 = a1[i + 4];
                    if ( a2 < (unsigned int)v14
                      || a2 - (unsigned int)v14 < 2
                      || (int)RtlStringCbLengthW((unsigned int *)((char *)a1 + v14), a2 - (unsigned int)v14, &v17) < 0 )
                    {
                      return 0;
                    }
                  }
                  return 1;
                case 5:
                  for ( j = v5; j < v6; ++j )
                  {
                    v11 = a1[j + 4];
                    if ( a2 < (unsigned int)v11 )
                      return 0;
                    if ( a2 - (unsigned int)v11 < 4 )
                      return 0;
                    v12 = *(unsigned int *)((char *)a1 + v11);
                    if ( !v12 || (int)v11 + 4 < (unsigned int)v11 || a2 - ((_DWORD)v11 + 4) < v12 )
                      return 0;
                  }
                  return 1;
                case 6:
                  while ( v5 < v6 )
                  {
                    v9 = a1[v5 + 4];
                    if ( a2 < (unsigned int)v9 || a2 - (unsigned int)v9 < 8 || *(_QWORD *)((char *)a1 + v9) > 1uLL )
                      return 0;
                    ++v5;
                  }
                  return 1;
                case 0x10:
                  while ( v5 < v6 )
                  {
                    v8 = a1[v5 + 4];
                    if ( a2 < (unsigned int)v8
                      || a2 - (unsigned int)v8 < 4
                      || (int)v8 + 4 < (unsigned int)v8
                      || a2 - ((_DWORD)v8 + 4) < *(unsigned int *)((char *)a1 + v8) )
                    {
                      return 0;
                    }
                    ++v5;
                  }
                  return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
