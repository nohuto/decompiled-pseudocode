/*
 * XREFs of HalpAuditSelectRsdtOrXsdt @ 0x140C162E4
 * Callers:
 *     HalpAuditEnumerateRsdtsInRange @ 0x140C1604C (HalpAuditEnumerateRsdtsInRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAuditSelectRsdtOrXsdt(__int64 a1, __int64 a2)
{
  unsigned int v3; // r9d
  unsigned int i; // r11d
  unsigned int v5; // r10d
  unsigned int v6; // ecx
  __int64 v7; // rcx
  char v8; // r9
  char *v9; // rbx
  char v10; // al
  int v11; // ecx
  __int64 v12; // rax
  int v13; // eax

  v3 = -1072431079;
  for ( i = 0; i < 2; ++i )
  {
    v5 = i == 0 ? 2 : 0;
    v6 = v5;
    if ( *(unsigned __int8 *)(a1 + 15) < v5 )
      v6 = *(unsigned __int8 *)(a1 + 15);
    if ( v6 >= 2 )
    {
      v7 = *(unsigned int *)(a1 + 20);
      if ( (unsigned int)(v7 - 33) > 0x63 )
        continue;
      v8 = 0;
      if ( !(_DWORD)v7 )
        goto LABEL_14;
    }
    else
    {
      v7 = 20LL;
      v8 = 0;
    }
    v9 = (char *)a1;
    do
    {
      v10 = *v9++;
      v8 += v10;
      --v7;
    }
    while ( v7 );
    if ( !v8 )
    {
LABEL_14:
      v11 = *(_DWORD *)(a2 + 12) | 2;
      *(_DWORD *)(a2 + 12) = v11;
      if ( *(unsigned __int8 *)(a1 + 15) < v5 )
        v5 = *(unsigned __int8 *)(a1 + 15);
      if ( v5 >= 2 && (v12 = *(_QWORD *)(a1 + 24)) != 0 )
      {
        *(_QWORD *)a2 = v12;
        *(_DWORD *)(a2 + 12) = v11 | 4;
        v13 = 0;
      }
      else
      {
        *(_QWORD *)a2 = *(unsigned int *)(a1 + 16);
        v13 = *(_DWORD *)(a1 + 20);
      }
      *(_DWORD *)(a2 + 8) = v13;
      return 0;
    }
    v3 = -1073741823;
  }
  return v3;
}
