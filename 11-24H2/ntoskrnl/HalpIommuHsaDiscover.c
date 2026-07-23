/*
 * XREFs of HalpIommuHsaDiscover @ 0x140C17508
 * Callers:
 *     HalpIommuRegisterBuiltinPlugins @ 0x14056511C (HalpIommuRegisterBuiltinPlugins.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x14045F918 (HalpAcpiGetTable.c)
 *     HalpIommuProcessIvhdEntry @ 0x14056F048 (HalpIommuProcessIvhdEntry.c)
 */

int __fastcall HalpIommuHsaDiscover(unsigned __int64 *a1)
{
  __int64 Table; // rax
  __int64 v3; // r14
  __int64 v4; // rax
  unsigned __int64 v5; // rbp
  int v6; // eax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int8 v9; // bl
  __int64 v10; // rax
  _BYTE *v11; // rdx
  int result; // eax
  __int64 v13; // rax
  _BYTE *v14; // rdx
  char v15; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  qword_140F8EAC8 = (__int64)&HsaIvhdList;
  HsaIvhdList = (__int64)&HsaIvhdList;
  v15 = 0;
  if ( HalpExtEnvLoaderBlock )
  {
    Table = HalpAcpiGetTable(HalpExtEnvLoaderBlock, 1397904969, 0, 0);
    v3 = Table;
    if ( Table )
    {
      v4 = *(unsigned int *)(Table + 4);
      if ( (unsigned int)v4 >= 0x5A )
      {
        v5 = v3 + v4;
        v6 = *(_DWORD *)(v3 + 36);
        if ( (v6 & 1) != 0 )
        {
          v7 = v3 + 48;
          if ( (v6 & 2) == 0 )
            goto LABEL_17;
          v8 = v3 + 48;
LABEL_7:
          v9 = 1;
          while ( v8 < v5 )
          {
            if ( v8 + 4 > v5 )
              return -1073741811;
            v10 = *(unsigned __int16 *)(v8 + 2);
            if ( (unsigned int)v10 < 4 || v8 + v10 > v5 )
              return -1073741811;
            v11 = (_BYTE *)v8;
            v8 += *(unsigned __int16 *)(v8 + 2);
            if ( *v11 == 64 )
            {
              result = HalpIommuProcessIvhdEntry(v3, (__int64)v11, &v15);
              if ( result < 0 )
                return result;
              if ( v9 && !v15 )
                goto LABEL_7;
              v9 = 0;
            }
          }
          while ( v7 < v5 )
          {
            if ( v7 + 4 > v5 )
              return -1073741811;
            v13 = *(unsigned __int16 *)(v7 + 2);
            if ( (unsigned int)v13 < 4 || v7 + v13 > v5 )
              return -1073741811;
            v14 = (_BYTE *)v7;
            v7 += *(unsigned __int16 *)(v7 + 2);
            if ( *v14 == 17 )
            {
              result = HalpIommuProcessIvhdEntry(v3, (__int64)v14, &v15);
              if ( result < 0 )
                return result;
              if ( !v9 || v15 )
LABEL_17:
                v9 = 0;
              else
                v9 = 1;
            }
          }
          *a1 = (2LL * v9) ^ (*a1 ^ (2LL * v9)) & 0xFFFFFFFFFFFFFFFDuLL;
        }
      }
    }
  }
  return 0;
}
