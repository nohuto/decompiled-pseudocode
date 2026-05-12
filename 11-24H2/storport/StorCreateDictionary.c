/*
 * XREFs of StorCreateDictionary @ 0x14003C2F8
 * Callers:
 *     RaidCreateAdapter @ 0x140043580 (RaidCreateAdapter.c)
 *     NvmeAdapterCreateNvmeController @ 0x14019DFDC (NvmeAdapterCreateNvmeController.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorCreateDictionary(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  _QWORD *Pool2; // rax
  _QWORD *v8; // rcx

  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 32) = StorCompareUlongKey;
  v6 = a2;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = 512;
  *(_QWORD *)(a1 + 24) = a4;
  *(_QWORD *)(a1 + 40) = StorHashUlongKey;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 16LL * a2, 1952672068LL);
  v8 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  if ( a2 )
  {
    do
    {
      Pool2[1] = Pool2;
      *Pool2 = Pool2;
      Pool2 += 2;
      --v6;
    }
    while ( v6 );
  }
  *(_QWORD *)(a1 + 16) = v8;
  return 0LL;
}
