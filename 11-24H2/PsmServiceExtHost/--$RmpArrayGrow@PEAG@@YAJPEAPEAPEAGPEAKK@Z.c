/*
 * XREFs of ??$RmpArrayGrow@PEAG@@YAJPEAPEAPEAGPEAKK@Z @ 0x18006BE94
 * Callers:
 *     ?HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z @ 0x1800445F0 (-HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF00 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?RmpReallocateHeap@@YAPEAXPEAX_K@Z @ 0x180046A54 (-RmpReallocateHeap@@YAPEAXPEAX_K@Z.c)
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x1800575E0 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 */

__int64 __fastcall RmpArrayGrow<unsigned short *>(void **a1, unsigned int *a2, unsigned int a3)
{
  int v5; // ebx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned int v8; // ebp
  char *Heap; // rax
  PVOID v10; // rdi
  unsigned __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  if ( *a2 < a3 )
  {
    v6 = a3 - 1;
    if ( ((unsigned int)v6 & a3) != 0 )
      v7 = ((((((((v6 >> 1) | (unsigned int)v6) >> 2) | (v6 >> 1) | (unsigned int)v6) >> 4) | (((v6 >> 1) | (unsigned int)v6) >> 2) | (v6 >> 1) | (unsigned int)v6) >> 8) | (((((v6 >> 1) | (unsigned int)v6) >> 2) | (v6 >> 1) | (unsigned int)v6) >> 4) | (((v6 >> 1) | (unsigned int)v6) >> 2) | (v6 >> 1) | (unsigned int)v6 | (((((((((v6 >> 1) | (unsigned int)v6) >> 2) | (v6 >> 1) | (unsigned int)v6) >> 4) | (((v6 >> 1) | (unsigned int)v6) >> 2) | (v6 >> 1) | (unsigned int)v6) >> 8) | (((((v6 >> 1) | (unsigned int)v6) >> 2) | (v6 >> 1) | (unsigned int)v6) >> 4) | (((v6 >> 1) | (unsigned int)v6) >> 2) | (v6 >> 1) | (unsigned int)v6) >> 16))
         + 1;
    else
      v7 = 2 * a3;
    if ( v7 > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
    v8 = v7;
    v5 = RtlULongLongMult((unsigned int)v7, 8uLL, &v12);
    if ( v5 < 0 )
    {
      return (unsigned int)-1073741675;
    }
    else
    {
      if ( *a1 )
        Heap = (char *)RmpReallocateHeap(*a1, v12);
      else
        Heap = (char *)HampAllocateHeap(v12);
      v10 = Heap;
      if ( Heap )
      {
        memset_0(&Heap[8 * *a2], 0, 8LL * (v8 - *a2));
        *a2 = v8;
        *a1 = v10;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v5;
}
