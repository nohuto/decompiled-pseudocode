/*
 * XREFs of RtlAllocateAndInitializeSidEx @ 0x14077189C
 * Callers:
 *     EtwpUserInAdminOrLogUsersGroup @ 0x14079A0A0 (EtwpUserInAdminOrLogUsersGroup.c)
 * Callees:
 *     RtlLengthRequiredSid @ 0x140918FE0 (RtlLengthRequiredSid.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlAllocateAndInitializeSidEx(__int64 a1, __int64 a2, _DWORD *a3, __int64 *a4)
{
  __int64 v5; // rdi
  __int64 Pool2; // rax
  __int64 v10; // rcx

  v5 = 2LL;
  RtlLengthRequiredSid(2u);
  Pool2 = ExAllocatePool2(0x41uLL);
  if ( !Pool2 )
    return 3221225495LL;
  *(_BYTE *)Pool2 = 1;
  v10 = Pool2 - (_QWORD)a3;
  *(_DWORD *)(Pool2 + 2) = *(_DWORD *)a1;
  *(_WORD *)(Pool2 + 6) = *(_WORD *)(a1 + 4);
  *(_BYTE *)(Pool2 + 1) = 2;
  do
  {
    *(_DWORD *)((char *)a3 + v10 + 8) = *a3;
    ++a3;
    --v5;
  }
  while ( v5 );
  *a4 = Pool2;
  return 0LL;
}
