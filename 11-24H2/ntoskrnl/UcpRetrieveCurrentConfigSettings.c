/*
 * XREFs of UcpRetrieveCurrentConfigSettings @ 0x140695D0C
 * Callers:
 *     UcpLogEventGenerateDump @ 0x140695B7C (UcpLogEventGenerateDump.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x1406AA1B0 (ZwQueryWnfStateData.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall UcpRetrieveCurrentConfigSettings(_DWORD *a1, _BYTE *a2, _BYTE *a3)
{
  _DWORD *Pool2; // rax
  _DWORD *Buffer; // rbx
  unsigned int v8; // r9d
  __int64 i; // r8
  size_t Size; // [rsp+30h] [rbp-38h] BYREF
  WNF_STATE_NAME StateName; // [rsp+38h] [rbp-30h] BYREF

  Size = 0LL;
  StateName = (WNF_STATE_NAME)WNF_UCP_CLIENT_CONFIG_BUFFER;
  ZwQueryWnfStateData(&StateName, 0LL, 0LL, (PWNF_CHANGE_STAMP)&Size + 1, 0LL, (PULONG)&Size);
  if ( (_DWORD)Size )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL, (unsigned int)Size, 0x72656355u);
    Buffer = Pool2;
    if ( Pool2 )
    {
      memset_0(Pool2, 0, (unsigned int)Size);
      if ( ZwQueryWnfStateData(&StateName, 0LL, 0LL, (PWNF_CHANGE_STAMP)&Size + 1, Buffer, (PULONG)&Size) >= 0
        && *Buffer == 1 )
      {
        v8 = Buffer[1];
        for ( i = 0LL; (unsigned int)i < v8; i = (unsigned int)(i + 1) )
        {
          if ( Buffer[5 * i + 2] == *a1 )
          {
            *a2 = BYTE1(Buffer[5 * i + 6]);
            switch ( Buffer[5 * i + 5] )
            {
              case 1:
                if ( Buffer[5 * i + 4] != a1[2] )
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
            if ( Buffer[5 * i + 3] == a1[1] )
            {
LABEL_15:
              *a3 = Buffer[5 * i + 6];
              break;
            }
          }
        }
      }
      ExFreePoolWithTag(Buffer, 0x72656355u);
    }
  }
}
