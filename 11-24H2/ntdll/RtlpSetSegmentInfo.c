/*
 * XREFs of RtlpSetSegmentInfo @ 0x1800A16F0
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x1800554A0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180056DE0 (RtlpLocalInfoAllocFromCache.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlpLogHeapAffinitySlotAssign @ 0x18014AA0C (RtlpLogHeapAffinitySlotAssign.c)
 */

__int64 __fastcall RtlpSetSegmentInfo(volatile signed __int64 **a1, volatile signed __int64 *a2)
{
  unsigned int v4; // ebx
  unsigned int v6; // r8d
  unsigned int i; // edx
  signed __int32 v8; // esi
  volatile signed __int64 *v9; // r9
  int v10; // r8d
  signed __int64 v11; // rcx
  int v12; // r8d
  signed __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  signed __int64 v16; // [rsp+40h] [rbp+8h]
  signed __int64 v17; // [rsp+40h] [rbp+8h]

  v4 = 1;
  if ( *a1 != a2 )
  {
    v6 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
    for ( i = 0; ; ++i )
    {
      if ( i > v6 )
        return 0;
      v8 = *((_DWORD *)a1 + 8);
      if ( v8 >= 0 )
      {
        if ( !(_WORD)v8 )
          return 0;
        if ( _InterlockedCompareExchange((volatile signed __int32 *)a1 + 8, v8 | 0x80000000, v8) == v8 )
          break;
      }
    }
    if ( v8 == -1 )
      return 0;
    if ( v8 )
    {
      v9 = *a1;
      v10 = -*((unsigned __int16 *)a1 + 20);
      _m_prefetchw((const void *)(*a1 + 20));
      do
      {
        v11 = *((_QWORD *)v9 + 20);
        LODWORD(v16) = v11 + v10;
        HIDWORD(v16) = HIDWORD(v11) - 1;
      }
      while ( _InterlockedCompareExchange64(v9 + 20, v16, v11) != v11 );
      v12 = *((unsigned __int16 *)a1 + 20);
      do
      {
        v13 = *((_QWORD *)a2 + 20);
        if ( v12 )
          v14 = HIDWORD(v13) + 1;
        else
          v14 = HIDWORD(v13) - 1;
        HIDWORD(v17) = v14;
        LODWORD(v17) = v13 + v12;
      }
      while ( _InterlockedCompareExchange64(a2 + 20, v17, v13) != v13 );
      *a1 = a2;
      if ( RtlGetCurrentServiceSessionId() )
        v15 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v15 = 2147353472LL;
      if ( *(_BYTE *)v15 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapAffinitySlotAssign(
          *(_QWORD *)(*(_QWORD *)(*a2 + 24) + 24LL),
          a1[1],
          (unsigned int)LOBYTE(NtCurrentTeb()->HeapData) - 1);
    }
    else
    {
      v4 = 0;
    }
    *((_DWORD *)a1 + 8) = v8;
  }
  return v4;
}
