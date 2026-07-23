/*
 * XREFs of RtlAllocateAndInitializeSidEx @ 0x18013A5D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlLengthRequiredSid @ 0x180060A20 (RtlLengthRequiredSid.c)
 */

NTSTATUS __cdecl RtlAllocateAndInitializeSidEx(
        PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
        UCHAR SubAuthorityCount,
        PULONG SubAuthorities,
        PSID *Sid)
{
  __int64 v4; // rsi
  ULONG v9; // ebx
  ULONG v10; // eax
  char *Heap; // rax
  __int64 v12; // r8
  signed __int64 v13; // rdx

  v4 = SubAuthorityCount;
  if ( SubAuthorityCount > 0xFu )
    return -1073741811;
  v9 = NtdllBaseTag;
  v10 = RtlLengthRequiredSid(SubAuthorityCount);
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, v9 + 1310720, v10);
  if ( !Heap )
    return -1073741801;
  *Heap = 1;
  *(_DWORD *)(Heap + 2) = *(_DWORD *)IdentifierAuthority->Value;
  *((_WORD *)Heap + 3) = *(_WORD *)&IdentifierAuthority->Value[4];
  Heap[1] = v4;
  if ( (_BYTE)v4 )
  {
    v12 = v4;
    v13 = Heap - (char *)SubAuthorities;
    do
    {
      *(PULONG)((char *)SubAuthorities + v13 + 8) = *SubAuthorities;
      ++SubAuthorities;
      --v12;
    }
    while ( v12 );
  }
  *Sid = Heap;
  return 0;
}
