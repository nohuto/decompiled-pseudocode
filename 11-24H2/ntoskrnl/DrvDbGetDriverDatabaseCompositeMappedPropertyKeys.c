/*
 * XREFs of DrvDbGetDriverDatabaseCompositeMappedPropertyKeys @ 0x14082226C
 * Callers:
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x14082237C (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 * Callees:
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140924EA0 (DrvDbGetDriverDatabaseMappedProperty.c)
 */

__int64 __fastcall DrvDbGetDriverDatabaseCompositeMappedPropertyKeys(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        unsigned int *a8)
{
  unsigned int *v8; // rdi
  __int64 result; // rax
  __int64 v10; // rsi
  __int64 v12; // rbp
  __int64 i; // rbx
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // ecx
  int v19; // [rsp+88h] [rbp+20h] BYREF
  int v20; // [rsp+8Ch] [rbp+24h]

  v20 = HIDWORD(a4);
  v8 = a8;
  result = 0LL;
  v19 = 0;
  v10 = 0LL;
  a5 = 0;
  v12 = a6;
  for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
  {
    result = DrvDbGetDriverDatabaseMappedProperty(a1, a2, a3, off_140E0A430[i], &v19, 0LL, 0, &a5);
    if ( (_DWORD)result != -1073741772 )
    {
      if ( (_DWORD)result && (_DWORD)result != -1073741789 )
        return result;
      if ( v12 )
      {
        if ( (unsigned int)v10 < a7 )
        {
          v16 = 5 * v10;
          v10 = (unsigned int)(v10 + 1);
          v17 = off_140E0A430[i];
          *(_OWORD *)(v12 + 4 * v16) = *(_OWORD *)v17;
          *(_DWORD *)(v12 + 4 * v16 + 16) = *(_DWORD *)(v17 + 16);
        }
      }
      v18 = *v8 + 1;
      if ( v18 < *v8 )
      {
        *v8 = 0;
        return 3221225621LL;
      }
      *v8 = v18;
    }
    result = 0LL;
  }
  return result;
}
