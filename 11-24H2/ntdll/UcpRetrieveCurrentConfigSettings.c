/*
 * XREFs of UcpRetrieveCurrentConfigSettings @ 0x180155DC4
 * Callers:
 *     UcOnUnexpectedCodePath @ 0x1801558C0 (UcOnUnexpectedCodePath.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     ZwQueryWnfStateData @ 0x180162E40 (ZwQueryWnfStateData.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

int __fastcall UcpRetrieveCurrentConfigSettings(_DWORD *a1, _BYTE *a2, _BYTE *a3)
{
  _DWORD *Heap; // rax
  _DWORD *Buffer; // rbx
  unsigned int v8; // r9d
  __int64 v9; // r8
  _DWORD *v10; // rcx
  SIZE_T Size; // [rsp+30h] [rbp-38h] BYREF
  WNF_STATE_NAME StateName; // [rsp+38h] [rbp-30h] BYREF

  Size = 0LL;
  StateName = (WNF_STATE_NAME)WNF_UCP_CLIENT_CONFIG_BUFFER;
  ZwQueryWnfStateData(&StateName, 0LL, 0LL, (PWNF_CHANGE_STAMP)&Size + 1, 0LL, (PULONG)&Size);
  LODWORD(Heap) = Size;
  if ( (_DWORD)Size )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)Size);
    Buffer = Heap;
    if ( Heap )
    {
      memset_thunk_772440563353939046(Heap, 0, (unsigned int)Size);
      if ( ZwQueryWnfStateData(&StateName, 0LL, 0LL, (PWNF_CHANGE_STAMP)&Size + 1, Buffer, (PULONG)&Size) >= 0
        && *Buffer == 1 )
      {
        v8 = Buffer[1];
        v9 = 0LL;
        if ( v8 )
        {
          v10 = Buffer + 5;
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
              *a3 = Buffer[5 * v9 + 6];
              break;
            }
LABEL_14:
            v9 = (unsigned int)(v9 + 1);
            v10 += 5;
          }
          while ( (unsigned int)v9 < v8 );
        }
      }
      LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
    }
  }
  return (int)Heap;
}
