/*
 * XREFs of MiComputeNumaCosts @ 0x140C4F904
 * Callers:
 *     MmInitSystem @ 0x140BE02E8 (MmInitSystem.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void MiComputeNumaCosts()
{
  ULONG_PTR v0; // rdi
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v2; // rbx
  unsigned int v3; // r9d
  unsigned int i; // r8d
  unsigned int v5; // r11d
  __int64 v6; // rax

  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    v0 = 2LL * (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes;
    Pool2 = (unsigned __int16 *)ExAllocatePool2(0x100uLL, v0, 0x616D754EuLL);
    v2 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, KiNodeGraph, v0);
      v3 = (unsigned __int16)KeNumberNodes;
      for ( i = 0; i < v3; ++i )
      {
        v5 = 0;
        do
        {
          v6 = i * v3 + v5++;
          *(_DWORD *)(qword_140E2DC10 + 4LL * (unsigned int)v6) = v2[v6];
        }
        while ( v5 < v3 );
      }
      ExFreePoolWithTag(v2, 0);
    }
  }
}
