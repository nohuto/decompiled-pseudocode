/*
 * XREFs of HvpViewMapCreateView @ 0x14096821C
 * Callers:
 *     HvpViewMapCreateViewsForRegion @ 0x140967F8C (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14096AEDC (HvpViewMapPromoteRangeToMapping.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x1404631DC (CmSiProtectViewOfSection.c)
 *     CmSiAllocateMemory @ 0x14048071C (CmSiAllocateMemory.c)
 *     CmSiMapViewOfSection @ 0x140487B00 (CmSiMapViewOfSection.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HvpViewMapFreeView @ 0x140A40FA4 (HvpViewMapFreeView.c)
 */

__int64 __fastcall HvpViewMapCreateView(__int64 a1, LARGE_INTEGER a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v6; // rbx
  void *Memory; // rax
  void *v10; // rdi
  ULONG_PTR v11; // rbp
  ULONG_PTR v12; // rcx
  NTSTATUS v13; // ebx
  int v15; // [rsp+28h] [rbp-40h]
  __int64 v16; // [rsp+78h] [rbp+10h] BYREF

  LODWORD(v16) = 0;
  v6 = (unsigned __int64)(unsigned int)(a3 - a2.LowPart) >> 12;
  Memory = (void *)CmSiAllocateMemory(v6 + 72, 0x35384D43u);
  v10 = Memory;
  if ( Memory )
  {
    memset_0(Memory, 0, v6 + 72);
    *((_QWORD *)v10 + 4) = a3;
    *((LARGE_INTEGER *)v10 + 3) = a2;
    v11 = a3 - a2.QuadPart;
    v13 = CmSiMapViewOfSection(
            *(void **)a1,
            *(HANDLE **)(a1 + 24),
            a2,
            v11,
            ((*(_DWORD *)(a1 + 32) & 1) == 0) << 13,
            v15,
            (PVOID *)v10 + 7);
    if ( v13 < 0
      || (v13 = CmSiProtectViewOfSection(v12, *(void ***)(a1 + 24), *((void **)v10 + 7), v11, 1u, (ULONG *)&v16), v13 < 0) )
    {
      HvpViewMapFreeView(a1, v10);
    }
    else
    {
      *a4 = v10;
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v13;
}
