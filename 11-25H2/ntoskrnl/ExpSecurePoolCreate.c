/*
 * XREFs of ExpSecurePoolCreate @ 0x14064C6C0
 * Callers:
 *     ExCreatePool @ 0x140647F80 (ExCreatePool.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     RtlpHpMetadataAlloc @ 0x1403CAF34 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x1403CB6C4 (RtlpHpMetadataFree.c)
 *     VslSecurePoolDestroy @ 0x14058AD48 (VslSecurePoolDestroy.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall ExpSecurePoolCreate(int a1, __int64 a2, ULONG_PTR *a3)
{
  int v5; // ebx
  __int128 v6; // xmm6
  unsigned __int64 v7; // rax
  ULONG_PTR v8; // rdi
  __int64 v9; // rcx
  __int128 v11; // [rsp+28h] [rbp-49h] BYREF
  _BYTE v12[8]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v13; // [rsp+40h] [rbp-31h]
  __int64 v14; // [rsp+48h] [rbp-29h]

  if ( a1 == 2 && a2 )
  {
    v11 = 0LL;
    *(_WORD *)((char *)&v11 + 1) = 1;
    LOBYTE(v11) = 3;
    v6 = v11;
    v7 = RtlpHpMetadataAlloc(0x10uLL, 0x10uLL, 0, (unsigned __int64 *)&v11);
    v8 = v7;
    if ( v7 )
    {
      *(_QWORD *)(v7 + 8) = 0LL;
      *(_DWORD *)v7 = -1347437123;
      *(_DWORD *)(v7 + 4) = 2;
      memset_0(v12, 0, 0x68uLL);
      v13 = a2;
      v5 = VslpEnterIumSecureMode(2u, 0x53u, 0, (__int64)v12);
      if ( v5 < 0 )
      {
        v9 = *(_QWORD *)(v8 + 8);
        if ( v9 )
          VslSecurePoolDestroy(v9);
        v11 = v6;
        RtlpHpMetadataFree(v8, &v11);
      }
      else
      {
        *(_QWORD *)(v8 + 8) = v14;
        *a3 = v8;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
