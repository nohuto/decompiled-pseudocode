/*
 * XREFs of InitializeHvProcessorInfo @ 0x1400424D4
 * Callers:
 *     ProcLibGlobalInit @ 0x140043530 (ProcLibGlobalInit.c)
 * Callees:
 *     <none>
 */

__int64 InitializeHvProcessorInfo()
{
  unsigned int v0; // esi
  int v1; // edi
  __int64 Pool2; // rax
  _DWORD *v3; // r14
  __int64 v4; // r15
  int v5; // eax
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v10; // [rsp+50h] [rbp+30h] BYREF
  int v11; // [rsp+58h] [rbp+38h] BYREF
  int v12; // [rsp+60h] [rbp+40h] BYREF

  v0 = 0;
  v12 = 0;
  v10 = 0;
  v11 = 0;
  v1 = HvlQueryStartedProcessors(&v10, 0LL);
  if ( v1 >= 0 )
  {
    Pool2 = ExAllocatePool2(256LL, 4LL * v10, 1919119952LL);
    v3 = (_DWORD *)Pool2;
    if ( Pool2 )
    {
      v1 = HvlQueryStartedProcessors(&v10, Pool2);
      if ( v1 >= 0 )
      {
        v4 = ExAllocatePool2(256LL, 12LL * v10, 1919119952LL);
        if ( v4 )
        {
          v5 = v10;
          if ( v10 )
          {
            do
            {
              v6 = v0;
              v7 = HvlQueryProcessorTopology((unsigned int)v3[v0], 0LL, &v12, &v11);
              v8 = 3LL * v0++;
              v1 = v7;
              *(_DWORD *)(v4 + 4 * v8) = v3[v6];
              *(_DWORD *)(v4 + 4 * v8 + 4) = v11;
              *(_DWORD *)(v4 + 4 * v8 + 8) = v12;
              v5 = v10;
            }
            while ( v0 < v10 );
          }
          dword_140014B40 = v5;
          qword_140014B38 = v4;
        }
        else
        {
          v1 = -1073741801;
        }
      }
      ExFreePoolWithTag(v3, (ULONG)0);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v1;
}
