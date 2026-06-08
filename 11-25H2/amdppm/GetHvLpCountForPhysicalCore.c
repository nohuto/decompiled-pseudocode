/*
 * XREFs of GetHvLpCountForPhysicalCore @ 0x1400259C0
 * Callers:
 *     InitializeHvPhysicalCores @ 0x1400065C0 (InitializeHvPhysicalCores.c)
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
  if ( dword_140014B40 )
  {
    v2 = (unsigned int)dword_140014B40;
    v3 = (_DWORD *)(qword_140014B38 + 4);
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
