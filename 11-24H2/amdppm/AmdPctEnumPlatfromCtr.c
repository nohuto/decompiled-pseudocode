/*
 * XREFs of AmdPctEnumPlatfromCtr @ 0x140002BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AmdPctEnumPlatfromCtr(__int64 a1, int a2, __int64 a3)
{
  int v4; // r9d
  int v6; // edx
  __int64 v7; // r9
  int v8; // r11d
  _QWORD *v9; // r8
  int v11; // ebx
  _BYTE *v12; // rcx
  __int64 v13; // rax

  v4 = a2 + *(_DWORD *)(a1 + 1248);
  if ( v4 >= 3 )
    return 3;
  v11 = *(_DWORD *)(a1 + 1252);
  v6 = 0;
  if ( v4 >= 0 )
    v6 = v4;
  if ( v6 < v11 )
  {
    v8 = v6 - 2;
    v9 = (_QWORD *)((char *)&unk_140015008 + 48 * v6);
    while ( 1 )
    {
      v12 = 0LL;
      if ( v6 < 0 )
        goto LABEL_5;
      if ( v6 >= 2 )
      {
        if ( v6 < 3 )
        {
          v7 = *(_QWORD *)(*(_QWORD *)(a1 + 1240) + 32LL);
          if ( v7 )
          {
            v13 = v8;
LABEL_18:
            v12 = (_BYTE *)(v7 + 40 * v13);
          }
        }
      }
      else
      {
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 1080) + 312LL);
        if ( v7 )
        {
          v13 = v6;
          goto LABEL_18;
        }
      }
LABEL_5:
      if ( !*v12 || *v9 != a3 )
      {
        ++v6;
        ++v8;
        v9 += 6;
        if ( v6 < v11 )
          continue;
      }
      return (unsigned int)v6;
    }
  }
  return (unsigned int)v6;
}
