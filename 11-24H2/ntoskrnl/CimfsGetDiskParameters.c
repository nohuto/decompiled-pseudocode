/*
 * XREFs of CimfsGetDiskParameters @ 0x140C5FDE4
 * Callers:
 *     IopGetBootDiskInformationLite @ 0x140C1FD74 (IopGetBootDiskInformationLite.c)
 *     CimfsInitialize @ 0x140C5FEBC (CimfsInitialize.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall CimfsGetDiskParameters(__int64 a1, _DWORD *a2, _QWORD *a3, _OWORD *a4, _DWORD *a5)
{
  unsigned int v9; // ebp
  int v10; // eax
  _DWORD *v11; // rax

  v9 = -1073741811;
  if ( a1 && a2 && *(_DWORD *)(a1 + 4) == 6 && !*(_DWORD *)(a1 + 36) )
  {
    memset_0(a2, 0, 0x90uLL);
    a2[6] = *(_DWORD *)a1;
    v10 = *(_DWORD *)(a1 + 40);
    if ( v10 == 1 )
    {
      v11 = (_DWORD *)(a1 + 44);
      if ( a3 )
        *a3 = v11;
      if ( a5 )
        *a5 = *v11;
      *((_QWORD *)a2 + 1) = *(_QWORD *)(a1 + 20);
      return 0;
    }
    if ( !v10 )
    {
      *a2 = 1;
      if ( a3 )
        *a3 = a1 + 44;
      if ( a4 )
        *a4 = *(_OWORD *)(a1 + 44);
      *((_OWORD *)a2 + 3) = *(_OWORD *)(a1 + 20);
      return 0;
    }
  }
  return v9;
}
