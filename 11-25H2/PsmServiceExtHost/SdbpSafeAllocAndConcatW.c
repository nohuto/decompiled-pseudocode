/*
 * XREFs of SdbpSafeAllocAndConcatW @ 0x180093E60
 * Callers:
 *     SdbpGetMergeRedirectPathInternal @ 0x1800931E0 (SdbpGetMergeRedirectPathInternal.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     RtlStringCchCopyNW @ 0x180091D74 (RtlStringCchCopyNW.c)
 *     RtlStringCchLengthW @ 0x180091DC4 (RtlStringCchLengthW.c)
 *     RtlStringCopyWorkerW_0 @ 0x180091DF4 (RtlStringCopyWorkerW_0.c)
 *     RtlStringLengthWorkerW @ 0x180091E50 (RtlStringLengthWorkerW.c)
 *     AslFree @ 0x18009D6FC (AslFree.c)
 */

__int64 __fastcall SdbpSafeAllocAndConcatW(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v6; // r11
  int v7; // ebp
  int v10; // ebx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rdi
  _WORD *Heap; // rax
  _WORD *v15; // rsi
  int v16; // eax
  __int64 v17; // r8
  unsigned __int64 v18; // r11
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v20; // [rsp+70h] [rbp+18h] BYREF

  v20 = a3;
  v6 = a3;
  v7 = a2;
  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  if ( !a4 )
    return 3221225714LL;
  if ( !a3 )
  {
    v10 = RtlStringCchLengthW(a2, 0x7FFFFFFFLL, &v20);
    if ( v10 < 0 )
      goto LABEL_27;
    v6 = v20;
  }
  v11 = a5;
  if ( !a5 )
  {
    v10 = RtlStringCchLengthW(a4, 0x7FFFFFFFLL, &a5);
    if ( v10 >= 0 )
    {
      v11 = a5;
      goto LABEL_13;
    }
LABEL_27:
    AslLogCallPrintf(1LL);
    return (unsigned int)v10;
  }
LABEL_13:
  v12 = v6 + v11;
  if ( v6 + v11 < v6 || (v13 = v12 + 1, v12 + 1 < v12) )
  {
    v10 = -1073741675;
    goto LABEL_27;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2 * v13);
  v15 = Heap;
  if ( Heap )
  {
    v10 = RtlStringCchCopyNW(Heap, v13, v7, v20);
    if ( v10 < 0 )
    {
LABEL_24:
      AslLogCallPrintf(1LL);
      AslFree(NtCurrentPeb()->ProcessHeap, v15);
      return (unsigned int)v10;
    }
    v19 = 0LL;
    if ( (unsigned __int64)(v13 - 1) <= 0x7FFFFFFE )
    {
      v16 = RtlStringLengthWorkerW(v15, v13, &v19);
      if ( v16 >= 0 )
      {
        if ( a5 > v18 )
          goto LABEL_21;
        v16 = RtlStringCopyWorkerW_0(&v15[v19], v13 - v19, v17, a4, a5);
      }
      v10 = v16;
      if ( v16 >= 0 )
      {
        *a1 = v15;
        return (unsigned int)v10;
      }
      goto LABEL_24;
    }
LABEL_21:
    v10 = -1073741811;
    goto LABEL_24;
  }
  return (unsigned int)-1073741801;
}
