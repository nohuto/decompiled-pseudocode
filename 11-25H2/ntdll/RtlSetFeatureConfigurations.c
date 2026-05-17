/*
 * XREFs of RtlSetFeatureConfigurations @ 0x1801147E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     ZwSetSystemInformation @ 0x180166990 (ZwSetSystemInformation.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlSetFeatureConfigurations(_QWORD *a1, int a2, const void *a3, unsigned __int64 a4)
{
  unsigned __int64 v7; // rbx
  int v8; // ebp
  unsigned int v9; // edi
  __int64 Heap; // rax
  __int64 v11; // rsi
  int v12; // ebx
  __int64 v13; // r9

  if ( a4 > 0xFFFFFFFF )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v7 = 32LL * (unsigned int)a4;
    v8 = a4;
    if ( v7 <= 0xFFFFFFFF && (unsigned int)v7 < 0xFFFFFFE8 )
    {
      Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v7 + 24));
      v9 = 0;
      v11 = Heap;
      if ( Heap )
      {
        *(_DWORD *)Heap = 0;
        *(_DWORD *)(Heap + 16) = a2;
        if ( a1 )
          *(_QWORD *)(Heap + 8) = *a1;
        *(_DWORD *)(Heap + 20) = v8;
        memmove((void *)(Heap + 24), a3, (unsigned int)v7);
        v12 = ZwSetSystemInformation(210LL, v11, (unsigned int)(v7 + 24));
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11, v13);
        if ( v12 < 0 )
          return (unsigned int)v12;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  return v9;
}
