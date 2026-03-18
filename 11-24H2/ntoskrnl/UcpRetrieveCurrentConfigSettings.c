/*
 * XREFs of UcpRetrieveCurrentConfigSettings @ 0x140694C3C
 * Callers:
 *     UcpLogEventGenerateDump @ 0x140694AAC (UcpLogEventGenerateDump.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x1406A9210 (ZwQueryWnfStateData.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall UcpRetrieveCurrentConfigSettings(_DWORD *a1, _BYTE *a2, _BYTE *a3)
{
  _DWORD *Pool2; // rax
  _DWORD *v7; // rbx
  unsigned int v8; // r9d
  __int64 i; // r8
  size_t Size; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+38h] [rbp-30h] BYREF

  Size = 0LL;
  v11 = WNF_UCP_CLIENT_CONFIG_BUFFER;
  ZwQueryWnfStateData(&v11, 0LL, 0LL, (char *)&Size + 4, 0LL, &Size);
  if ( (_DWORD)Size )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
    v7 = Pool2;
    if ( Pool2 )
    {
      memset_0(Pool2, 0, (unsigned int)Size);
      if ( (int)ZwQueryWnfStateData(&v11, 0LL, 0LL, (char *)&Size + 4, v7, &Size) >= 0 && *v7 == 1 )
      {
        v8 = v7[1];
        for ( i = 0LL; (unsigned int)i < v8; i = (unsigned int)(i + 1) )
        {
          if ( v7[5 * i + 2] == *a1 )
          {
            *a2 = BYTE1(v7[5 * i + 6]);
            switch ( v7[5 * i + 5] )
            {
              case 1:
                if ( v7[5 * i + 4] != a1[2] )
                  continue;
                break;
              case 2:
                break;
              case 4:
                goto LABEL_15;
              default:
                *a3 = 0;
                continue;
            }
            if ( v7[5 * i + 3] == a1[1] )
            {
LABEL_15:
              *a3 = v7[5 * i + 6];
              break;
            }
          }
        }
      }
      ExFreePoolWithTag(v7, 0x72656355u);
    }
  }
}
