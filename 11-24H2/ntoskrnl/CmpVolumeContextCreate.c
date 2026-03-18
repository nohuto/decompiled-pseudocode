/*
 * XREFs of CmpVolumeContextCreate @ 0x1407D8810
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x140966DB8 (CmpVolumeManagerGetContextForFile.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     CmSiAllocateMemory @ 0x140485138 (CmSiAllocateMemory.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CmpVolumeContextStart @ 0x1407D89C0 (CmpVolumeContextStart.c)
 *     CmpVolumeContextCleanup @ 0x140A9BCE4 (CmpVolumeContextCleanup.c)
 */

__int64 __fastcall CmpVolumeContextCreate(__int64 a1, __int64 a2, struct _PRIVILEGE_SET **a3)
{
  struct _PRIVILEGE_SET *Memory; // rax
  unsigned int v6; // edi
  struct _PRIVILEGE_SET *v7; // rbx
  __int64 v8; // rdx
  int v9; // esi

  Memory = (struct _PRIVILEGE_SET *)CmSiAllocateMemory();
  v6 = 0;
  v7 = Memory;
  if ( Memory )
  {
    memset_0(Memory, 0, 0x48uLL);
    *(_QWORD *)&v7[1].Control = 1LL;
    v9 = CmpVolumeContextStart(v7, v8, a2);
    if ( v9 < 0 )
    {
      CmpVolumeContextCleanup(v7);
      CmSiFreeMemory(v7);
      return (unsigned int)v9;
    }
    else
    {
      *a3 = v7;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
