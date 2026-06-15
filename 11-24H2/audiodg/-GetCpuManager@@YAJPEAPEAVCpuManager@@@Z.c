/*
 * XREFs of ?GetCpuManager@@YAJPEAPEAVCpuManager@@@Z @ 0x1400683BC
 * Callers:
 *     ?AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z @ 0x140048D80 (-AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetCpuManager(struct CpuManager **a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( qword_1400C46E8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1400C46E8 + 8LL))(qword_1400C46E8);
    *a1 = (struct CpuManager *)qword_1400C46E8;
  }
  else
  {
    return (unsigned int)-2147023728;
  }
  return v2;
}
