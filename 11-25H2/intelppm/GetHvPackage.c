/*
 * XREFs of GetHvPackage @ 0x140030038
 * Callers:
 *     RegisterHvPackage @ 0x140029000 (RegisterHvPackage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetHvPackage(int a1)
{
  __int64 result; // rax
  int v3; // r8d
  __int64 v4; // r10
  _DWORD *v5; // rdx
  bool v6; // zf
  int v7; // ecx

  result = ExAllocatePool2(64LL, 344LL, 1919119952LL);
  v3 = 0;
  if ( result )
  {
    *(_DWORD *)(result + 32) = a1;
    *(_QWORD *)(result + 24) = result + 16;
    *(_QWORD *)(result + 16) = result + 16;
    if ( dword_140019720 )
    {
      v4 = (unsigned int)dword_140019720;
      v5 = (_DWORD *)(qword_140019718 + 8);
      do
      {
        v6 = a1 == *v5;
        v7 = v3 + 1;
        v5 += 3;
        if ( !v6 )
          v7 = v3;
        v3 = v7;
        --v4;
      }
      while ( v4 );
    }
    *(_DWORD *)(result + 36) = v3;
  }
  return result;
}
