/*
 * XREFs of ?GetCpuManager@@YAJPEAPEAVCpuManager@@@Z @ 0x14006842C
 * Callers:
 *     ?AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z @ 0x140049080 (-AddToCpuManager@GraphStreamingResourceManager@@UEAAJ_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetCpuManager(struct CpuManager **a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( qword_1400C4768 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1400C4768 + 8LL))(qword_1400C4768);
    *a1 = (struct CpuManager *)qword_1400C4768;
  }
  else
  {
    return (unsigned int)-2147023728;
  }
  return v2;
}
