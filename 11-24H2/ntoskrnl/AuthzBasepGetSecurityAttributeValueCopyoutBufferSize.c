/*
 * XREFs of AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x1403B82E0
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B7650 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1403B7C30 (AuthzBasepQuerySecurityAttributesToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(__int64 a1, unsigned __int64 *a2)
{
  int v2; // r8d
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r8
  unsigned int v6; // r9d
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  __int64 *v12; // rax
  unsigned __int64 v13; // r8
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  int v17; // r8d
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  __int64 *v20; // r11
  __int64 *v21; // rcx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r8
  __int64 v24; // rax
  __int64 *v25; // r11
  __int64 *v26; // rcx
  unsigned __int64 v27; // r8

  v2 = *(unsigned __int16 *)(a1 + 48);
  v4 = *a2;
  if ( v2 != 6 )
  {
    if ( v2 == 3 )
    {
      v10 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v10 >= v4 )
      {
        v11 = 16LL * *(unsigned int *)(a1 + 60);
        v6 = 0;
        if ( is_mul_ok(0x10uLL, *(unsigned int *)(a1 + 60)) )
        {
          v8 = v10 + v11;
          if ( v10 + v11 >= v10 )
          {
            v12 = *(__int64 **)(a1 + 72);
            while ( v12 != (__int64 *)(a1 + 72) )
            {
              v13 = v8 + *((unsigned __int16 *)v12 + 20);
              if ( v13 < v8 )
                return (unsigned int)-1073741675;
              v12 = (__int64 *)*v12;
              v8 = v13;
            }
            goto LABEL_5;
          }
        }
      }
    }
    else
    {
      v14 = v2 - 1;
      if ( !v14 )
        goto LABEL_2;
      v15 = v14 - 1;
      if ( !v15 )
        goto LABEL_2;
      v16 = v15 - 2;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 && v17 != 11 )
          return (unsigned int)-1073741811;
        v18 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v18 >= v4 )
        {
          v19 = 16LL * *(unsigned int *)(a1 + 60);
          v6 = 0;
          if ( is_mul_ok(0x10uLL, *(unsigned int *)(a1 + 60)) )
          {
            v8 = v18 + v19;
            if ( v18 + v19 >= v18 )
            {
              v20 = (__int64 *)(a1 + 72);
              v21 = *(__int64 **)(a1 + 72);
              while ( v21 != v20 )
              {
                v22 = v8 + *((unsigned int *)v21 + 12);
                if ( v22 < v8 )
                  return (unsigned int)-1073741675;
                v21 = (__int64 *)*v21;
                v8 = v22;
              }
              goto LABEL_5;
            }
          }
        }
      }
      else
      {
        v23 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v23 >= v4 )
        {
          v24 = 24LL * *(unsigned int *)(a1 + 60);
          v6 = 0;
          if ( is_mul_ok(0x18uLL, *(unsigned int *)(a1 + 60)) )
          {
            v8 = v23 + v24;
            if ( v23 + v24 >= v23 )
            {
              v25 = (__int64 *)(a1 + 72);
              v26 = *(__int64 **)(a1 + 72);
              while ( v26 != v25 )
              {
                v27 = v8 + *((unsigned __int16 *)v26 + 24);
                if ( v27 < v8 )
                  return (unsigned int)-1073741675;
                v26 = (__int64 *)*v26;
                v8 = v27;
              }
              goto LABEL_5;
            }
          }
        }
      }
    }
    return (unsigned int)-1073741675;
  }
LABEL_2:
  v5 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v5 < v4 )
    return (unsigned int)-1073741675;
  v6 = 0;
  v7 = 8LL * *(unsigned int *)(a1 + 60);
  if ( !is_mul_ok(8uLL, *(unsigned int *)(a1 + 60)) )
    return (unsigned int)-1073741675;
  v8 = v5 + v7;
  if ( v5 + v7 < v5 )
    return (unsigned int)-1073741675;
LABEL_5:
  *a2 = v8;
  return v6;
}
