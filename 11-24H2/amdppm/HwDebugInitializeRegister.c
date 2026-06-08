/*
 * XREFs of HwDebugInitializeRegister @ 0x14003A414
 * Callers:
 *     HwDebugCreateRegisterGroup @ 0x140039EB4 (HwDebugCreateRegisterGroup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HwDebugInitializeRegister(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  _BYTE *v3; // r8
  __int64 v4; // r10
  char v5; // cl

  __readmsr(*(_DWORD *)(a1 + 8));
  v2 = 0LL;
  if ( *(_BYTE *)(a1 + 16) )
  {
    v3 = (_BYTE *)(*(_QWORD *)(a1 + 24) + 9LL);
    v4 = *(unsigned __int8 *)(a1 + 16);
    do
    {
      v5 = *(v3 - 1);
      if ( v5 == 64 )
        v2 = -1LL;
      else
        v2 |= ((1LL << v5) - 1) << *v3;
      v3 += 16;
      --v4;
    }
    while ( v4 );
  }
  *(_QWORD *)(a2 + 8) = v2;
  return 0LL;
}
