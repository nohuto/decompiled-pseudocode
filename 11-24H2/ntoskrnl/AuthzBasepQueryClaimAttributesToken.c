/*
 * XREFs of AuthzBasepQueryClaimAttributesToken @ 0x140A07290
 * Callers:
 *     SeQueryInformationToken @ 0x14090D870 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140AD3370 (NtQueryInformationToken.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     AuthzBasepGetClaimAttributesCopyoutBufferSize @ 0x140A07344 (AuthzBasepGetClaimAttributesCopyoutBufferSize.c)
 *     AuthzBasepCopyoutClaimAttributes @ 0x140A074F4 (AuthzBasepCopyoutClaimAttributes.c)
 */

__int64 __fastcall AuthzBasepQueryClaimAttributesToken(_DWORD *a1, _OWORD *a2, unsigned int a3, _DWORD *a4)
{
  size_t v7; // rsi
  __int64 result; // rax
  int v9; // ebx
  size_t v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  *a4 = 0;
  v7 = a3;
  if ( *a1 )
  {
    result = AuthzBasepGetClaimAttributesCopyoutBufferSize(a1, &v10);
    if ( (int)result >= 0 )
    {
      v9 = v10;
      if ( v10 )
      {
        if ( v7 < v10 )
        {
          result = 3221225507LL;
        }
        else
        {
          memset_0(a2, 0, v7);
          result = AuthzBasepCopyoutClaimAttributes(a1, a2, v7);
        }
        *a4 = v9;
      }
      else
      {
        return 3221225485LL;
      }
    }
  }
  else
  {
    if ( a3 < 0x10 )
    {
      result = 3221225507LL;
    }
    else
    {
      result = 0LL;
      *a2 = 0LL;
      *(_WORD *)a2 = 1;
    }
    *a4 = 16;
  }
  return result;
}
