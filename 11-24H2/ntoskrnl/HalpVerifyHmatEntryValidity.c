/*
 * XREFs of HalpVerifyHmatEntryValidity @ 0x140C14960
 * Callers:
 *     HalpNumaGetHmatConfigSize @ 0x140555730 (HalpNumaGetHmatConfigSize.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpVerifyHmatEntryValidity(unsigned __int16 *a1)
{
  signed int v1; // edx
  int v3; // ecx
  unsigned int v4; // r8d
  int v5; // ecx
  int v6; // eax
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // ecx
  __int64 v10; // rax
  int v11; // r10d
  unsigned int v12; // r11d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned int v15; // ecx

  v1 = 0;
  v3 = *a1;
  v4 = 8;
  if ( !v3 )
  {
    v4 = 40;
    goto LABEL_24;
  }
  v5 = v3 - 1;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v4 = 32;
      if ( *((_DWORD *)a1 + 1) >= 0x20u )
      {
        v6 = a1[15];
        v4 = 2 * v6 + 32;
        if ( (unsigned int)(2 * v6) < 0xFFFFFFE0 )
        {
          if ( *((_QWORD *)a1 + 2) >> 12 > (unsigned __int64)HalpNumaPageCount
            || (v7 = a1[13], *((_QWORD *)a1 + 2) < v7)
            || !(_WORD)v7 )
          {
            v1 = -1073741216;
            return v1 >= 0;
          }
          goto LABEL_24;
        }
LABEL_22:
        v1 = -1073741675;
        return v1 >= 0;
      }
    }
    goto LABEL_24;
  }
  v4 = 32;
  if ( *((_DWORD *)a1 + 1) < 0x20u )
    goto LABEL_24;
  v8 = *((unsigned int *)a1 + 3);
  v4 = -1;
  if ( (unsigned __int64)(4 * v8) > 0xFFFFFFFF )
    goto LABEL_22;
  v9 = 4 * v8 + 32;
  if ( v9 < 0x20 )
    goto LABEL_22;
  v10 = *((unsigned int *)a1 + 4);
  v11 = 4 * v10;
  if ( (unsigned __int64)(4 * v10) > 0xFFFFFFFF )
    goto LABEL_22;
  v12 = v9 + v11;
  if ( v9 + v11 < v9 )
    goto LABEL_22;
  v13 = v8 * v10;
  if ( v13 > 0xFFFFFFFF )
    goto LABEL_22;
  v1 = -1073741675;
  v14 = 2LL * (unsigned int)v13;
  if ( v14 <= 0xFFFFFFFF )
  {
    v15 = v12 + v14;
    if ( v15 >= v12 )
      v4 = v15;
    v1 = v15 < v12 ? 0xC0000095 : 0;
    if ( v15 >= v12 )
    {
LABEL_24:
      if ( *((_DWORD *)a1 + 1) < v4 )
        v1 = -1073741811;
    }
  }
  return v1 >= 0;
}
