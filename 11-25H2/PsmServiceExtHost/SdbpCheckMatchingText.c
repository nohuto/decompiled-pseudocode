/*
 * XREFs of SdbpCheckMatchingText @ 0x18009A040
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbpCheckMatchingTextEntry @ 0x18009A16C (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x18009AD58 (SdbpGetMatchingTextAttributes.c)
 *     AslFree @ 0x18009D6FC (AslFree.c)
 */

__int64 __fastcall SdbpCheckMatchingText(_DWORD *a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  unsigned int v6; // edi
  __int64 v9; // rbx
  int v11; // [rsp+50h] [rbp-20h] BYREF
  int v12; // [rsp+54h] [rbp-1Ch] BYREF
  int v13; // [rsp+58h] [rbp-18h] BYREF
  int v14; // [rsp+5Ch] [rbp-14h] BYREF
  __int64 v15; // [rsp+60h] [rbp-10h] BYREF
  __int64 v16; // [rsp+68h] [rbp-8h] BYREF
  int v17; // [rsp+90h] [rbp+20h] BYREF

  v6 = 0;
  v17 = 0x2000;
  *a1 = 0;
  v14 = 0;
  v13 = 0;
  v16 = 0LL;
  v15 = 0LL;
  v12 = 0;
  v11 = 0;
  if ( (unsigned int)SdbpGetMatchingTextAttributes(
                       a3,
                       a5,
                       (unsigned int)&v16,
                       (unsigned int)&v15,
                       (__int64)&v12,
                       (__int64)&v11,
                       (__int64)&v17)
    && (v9 = a6, (unsigned int)SdbpCheckMatchingTextEntry(a2, a6, v16, v15, v12, v11, v17, (__int64)&v14, (__int64)&v13)) )
  {
    v6 = 1;
    *(_DWORD *)(v9 + 80) |= v13;
    *a1 = v14;
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  if ( v15 )
    AslFree(NtCurrentPeb()->ProcessHeap, v15);
  return v6;
}
