/*
 * XREFs of GetHvLpCountForPhysicalCore @ 0x14002FFF8
 * Callers:
 *     InitializeHvPhysicalCores @ 0x14000BE24 (InitializeHvPhysicalCores.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetHvLpCountForPhysicalCore(int a1)
{
  unsigned int v1; // r8d
  __int64 v2; // r9
  _DWORD *v3; // rax
  bool v4; // zf
  unsigned int v5; // edx

  v1 = 0;
  if ( dword_140019720 )
  {
    v2 = (unsigned int)dword_140019720;
    v3 = (_DWORD *)(qword_140019718 + 4);
    do
    {
      v4 = a1 == *v3;
      v5 = v1 + 1;
      v3 += 3;
      if ( !v4 )
        v5 = v1;
      v1 = v5;
      --v2;
    }
    while ( v2 );
  }
  return v1;
}
