/*
 * XREFs of UcpRetrieveCurrentConfigSettings @ 0x180158FB4
 * Callers:
 *     UcOnUnexpectedCodePath @ 0x180158AB0 (UcOnUnexpectedCodePath.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     ZwQueryWnfStateData @ 0x180166010 (ZwQueryWnfStateData.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall UcpRetrieveCurrentConfigSettings(_DWORD *a1, _BYTE *a2, _BYTE *a3)
{
  __int64 result; // rax
  _DWORD *v7; // rbx
  __int64 v8; // r9
  __int64 v9; // r8
  _DWORD *v10; // rcx
  size_t Size; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+38h] [rbp-30h] BYREF

  Size = 0LL;
  v12 = WNF_UCP_CLIENT_CONFIG_BUFFER;
  ZwQueryWnfStateData(&v12, 0LL, 0LL, (char *)&Size + 4, 0LL, &Size);
  result = (unsigned int)Size;
  if ( (_DWORD)Size )
  {
    result = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)Size);
    v7 = (_DWORD *)result;
    if ( result )
    {
      memset_thunk_772440563353939046((void *)result, 0, (unsigned int)Size);
      if ( (int)ZwQueryWnfStateData(&v12, 0LL, 0LL, (char *)&Size + 4, v7, &Size) >= 0 && *v7 == 1 )
      {
        v8 = (unsigned int)v7[1];
        v9 = 0LL;
        if ( (_DWORD)v8 )
        {
          v10 = v7 + 5;
          do
          {
            if ( *(v10 - 3) != *a1 )
              goto LABEL_14;
            *a2 = *((_BYTE *)v10 + 5);
            switch ( *v10 )
            {
              case 1:
                if ( *(v10 - 1) != a1[2] )
                  goto LABEL_14;
                break;
              case 2:
                break;
              case 4:
                goto LABEL_16;
              default:
                *a3 = 0;
                goto LABEL_14;
            }
            if ( *(v10 - 2) == a1[1] )
            {
LABEL_16:
              *a3 = v7[5 * v9 + 6];
              return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v7, v8);
            }
LABEL_14:
            v9 = (unsigned int)(v9 + 1);
            v10 += 5;
          }
          while ( (unsigned int)v9 < (unsigned int)v8 );
        }
      }
      return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v7, v8);
    }
  }
  return result;
}
