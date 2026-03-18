/*
 * XREFs of RIMDevChangeDoUsermodeCallback @ 0x1401EEC48
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1401EE990 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxClientRimDevCallback @ 0x1401EEE90 (xxxClientRimDevCallback.c)
 */

void __fastcall RIMDevChangeDoUsermodeCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rax
  __int16 v11; // dx
  __int16 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax

  v2 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(v2 + 392);
  if ( *(_DWORD *)(v2 + 120) != 3
    && PtiCurrent(a1, a2)
    && PtiCurrent(v6, v5)
    && *(_QWORD *)(v4 + 32) == PsGetCurrentProcess(v7)
    && *(_QWORD *)(v4 + 832) )
  {
    *(_BYTE *)(v4 + 82) = 1;
    if ( *(_BYTE *)(v4 + 80) && !*(_BYTE *)(v4 + 81) || (*(_DWORD *)(v4 + 1076) & 2) != 0 )
      RIMUnlockExclusive(v4 + 760);
    RIMUnlockExclusive(v4 + 104);
    RawInputManagerDeviceObjectReference(v2);
    v10 = PtiCurrent(v9, v8);
    v11 = 0;
    v12 = 0;
    *((_QWORD *)v10 + 192) = v2;
    if ( *(_DWORD *)(v2 + 120) == 2 )
    {
      v13 = *(_QWORD *)(v2 + 512);
      if ( v13 )
      {
        v11 = *(_WORD *)(v13 + 40);
        v12 = *(_WORD *)(v13 + 42);
      }
    }
    v14 = *(_QWORD *)(v2 + 88);
    if ( (*(_DWORD *)(v2 + 240) & 0x2000) != 0 )
    {
      if ( *(_DWORD *)a1 == 1 )
      {
        *(_DWORD *)a1 = 2;
      }
      else if ( *(_DWORD *)a1 == 4 )
      {
        *(_DWORD *)a1 = 3;
      }
      v17 = *(_DWORD *)(v2 + 240);
      if ( (v17 & 0x80000) != 0 || (v17 & 0x100000) != 0 )
        v14 = *(_QWORD *)(v2 + 400);
    }
    xxxClientRimDevCallback(
      *(_DWORD *)a1,
      *(_DWORD *)(a1 + 4),
      *(_DWORD *)(a1 + 8),
      *(_QWORD *)(v4 + 72),
      v14,
      v11,
      v12,
      *(_QWORD *)(v4 + 400),
      *(_QWORD *)(v4 + 832));
    *((_QWORD *)PtiCurrent(v16, v15) + 192) = 0LL;
    RIMLockExclusive(v4 + 104);
    if ( *(_BYTE *)(v4 + 80) && !*(_BYTE *)(v4 + 81) || (*(_DWORD *)(v4 + 1076) & 2) != 0 )
      RIMLockExclusive(v4 + 760);
    *(_BYTE *)(v4 + 82) = 0;
    RIMSignalAllDispositionWaiters(v4);
    if ( (*(_DWORD *)(v2 + 256) & 0x80u) != 0 || (*(_DWORD *)(v2 + 240) & 0x2000) != 0 )
    {
      if ( *(_DWORD *)a1 == 2 )
        *(_DWORD *)(v2 + 240) |= 0x1000000u;
      if ( *(_DWORD *)a1 == 3 )
        *(_DWORD *)(v2 + 240) |= 0x2000000u;
    }
    RawInputManagerDeviceObjectDereference(v2);
  }
}
