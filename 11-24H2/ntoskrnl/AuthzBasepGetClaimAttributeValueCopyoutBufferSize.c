/*
 * XREFs of AuthzBasepGetClaimAttributeValueCopyoutBufferSize @ 0x140A03924
 * Callers:
 *     AuthzBasepGetClaimAttributesCopyoutBufferSize @ 0x140A03874 (AuthzBasepGetClaimAttributesCopyoutBufferSize.c)
 * Callees:
 *     RtlULongLongMult @ 0x14042A2B0 (RtlULongLongMult.c)
 */

NTSTATUS __fastcall AuthzBasepGetClaimAttributeValueCopyoutBufferSize(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  __int64 ***v6; // r10
  unsigned __int64 v7; // rcx
  __int64 **i; // rdx
  unsigned __int64 v9; // r8
  NTSTATUS result; // eax
  ULONGLONG v11; // r11
  __int64 v12; // r10
  ULONGLONG v13; // r11
  __int64 ***v14; // r10
  __int64 **v15; // rdx
  unsigned __int64 v16; // r8
  __int64 v17; // r10
  ULONGLONG v18; // r11
  __int64 ***v19; // r10
  __int64 **j; // rdx
  unsigned __int64 v21; // r8
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  pullResult = 0LL;
  v3 = *a2;
  switch ( *(_WORD *)(a1 + 48) )
  {
    case 1:
    case 2:
      goto LABEL_19;
    case 3:
      v4 = (v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v4 >= v3 )
      {
        v5 = 8LL * *(unsigned int *)(a1 + 60);
        if ( is_mul_ok(8uLL, *(unsigned int *)(a1 + 60)) && v5 + v4 >= v4 )
        {
          v6 = (__int64 ***)(a1 + 72);
          v7 = v4 + v5;
          for ( i = *v6; i != (__int64 **)v6; i = (__int64 **)*i )
          {
            v9 = v7 + *((unsigned __int16 *)i + 20);
            if ( v9 < v7 )
              return -1073741675;
            v7 = v9 + 2;
            if ( v9 + 2 < v9 )
              return -1073741675;
          }
          goto LABEL_22;
        }
      }
      return -1073741675;
    case 4:
      if ( ((v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL) >= v3 )
      {
        result = RtlULongLongMult(0x10uLL, *(unsigned int *)(a1 + 60), &pullResult);
        if ( result < 0 )
          return result;
        v7 = v18 + pullResult;
        if ( v18 + pullResult >= v18 )
        {
          v19 = (__int64 ***)(v17 + 72);
          for ( j = *v19; j != (__int64 **)v19; j = (__int64 **)*j )
          {
            v21 = v7 + *((unsigned __int16 *)j + 24);
            if ( v21 < v7 )
              return -1073741675;
            v7 = v21 + 2;
            if ( v21 + 2 < v21 )
              return -1073741675;
          }
          goto LABEL_22;
        }
      }
      return -1073741675;
    case 5:
      goto LABEL_23;
    case 6:
LABEL_19:
      if ( ((v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL) >= v3 )
      {
        result = RtlULongLongMult(8uLL, *(unsigned int *)(a1 + 60), &pullResult);
        if ( result >= 0 )
        {
          v7 = v11 + pullResult;
          if ( v11 + pullResult >= v11 )
          {
LABEL_22:
            result = 0;
            *a2 = v7;
            return result;
          }
          return -1073741675;
        }
        return result;
      }
      return -1073741675;
  }
  if ( *(_WORD *)(a1 + 48) != 16 )
    return -1073741811;
LABEL_23:
  if ( ((v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL) < v3 )
    return -1073741675;
  result = RtlULongLongMult(0x10uLL, *(unsigned int *)(a1 + 60), &pullResult);
  if ( result >= 0 )
  {
    v7 = v13 + pullResult;
    if ( v13 + pullResult >= v13 )
    {
      v14 = (__int64 ***)(v12 + 72);
      v15 = *v14;
      while ( v15 != (__int64 **)v14 )
      {
        v16 = v7 + *((unsigned int *)v15 + 12);
        if ( v16 < v7 )
          return -1073741675;
        v15 = (__int64 **)*v15;
        v7 = v16;
      }
      goto LABEL_22;
    }
    return -1073741675;
  }
  return result;
}
