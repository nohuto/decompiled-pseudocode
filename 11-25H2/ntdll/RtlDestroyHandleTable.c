/*
 * XREFs of RtlDestroyHandleTable @ 0x180113A60
 * Callers:
 *     RtlDestroyAtomTable @ 0x1801174F0 (RtlDestroyAtomTable.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall RtlDestroyHandleTable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  v5 = 0;
  v7 = v4;
  if ( v4 )
  {
    if ( *(_DWORD *)(a1 + 8) )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7, a4);
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 40) - v4;
      return (unsigned int)ZwFreeVirtualMemory(-1LL, &v7, &v8, 0x8000LL);
    }
  }
  return v5;
}
