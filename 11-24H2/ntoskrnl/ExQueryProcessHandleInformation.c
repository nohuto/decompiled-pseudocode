/*
 * XREFs of ExQueryProcessHandleInformation @ 0x1409C6748
 * Callers:
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 * Callees:
 *     ExLockHandleTableEntry @ 0x140401530 (ExLockHandleTableEntry.c)
 *     ExGetHandlePointer @ 0x14041B770 (ExGetHandlePointer.c)
 *     ExpLookupHandleTableEntry @ 0x1408481F0 (ExpLookupHandleTableEntry.c)
 *     ExUnlockHandleTableEntry @ 0x140891F80 (ExUnlockHandleTableEntry.c)
 *     ExpGetNextHandleTableEntry @ 0x1409C6940 (ExpGetNextHandleTableEntry.c)
 */

__int64 __fastcall ExQueryProcessHandleInformation(unsigned int *a1, _QWORD *a2, int a3, int *a4)
{
  __int64 *v6; // rdi
  int v7; // r14d
  unsigned int v8; // r15d
  __int64 v9; // rbx
  signed __int64 *NextHandleTableEntry; // rax
  unsigned int v11; // r9d
  unsigned int v12; // r11d
  __int64 *v13; // rsi
  unsigned __int64 HandlePointer; // r8
  unsigned int v15; // r9d
  int v16; // eax
  int v19; // [rsp+20h] [rbp-68h]
  int v20; // [rsp+24h] [rbp-64h]
  int v21; // [rsp+28h] [rbp-60h]
  __int64 v22; // [rsp+30h] [rbp-58h] BYREF
  __int64 v23; // [rsp+38h] [rbp-50h]
  __int64 v24; // [rsp+40h] [rbp-48h]
  unsigned __int64 v25; // [rsp+48h] [rbp-40h]
  unsigned int v27; // [rsp+A0h] [rbp+18h]

  v6 = a2 + 2;
  v25 = (unsigned int)(a3 - 16) / 0x28uLL;
  v27 = 0;
  v7 = 16;
  v8 = 0;
  v9 = 4LL;
  NextHandleTableEntry = (signed __int64 *)ExpLookupHandleTableEntry(a1, 4LL);
  v22 = 4LL;
  while ( 1 )
  {
    v13 = NextHandleTableEntry;
    if ( !NextHandleTableEntry )
      break;
    if ( v12 >= v11 )
    {
      if ( (v9 & 0x3FC) != 0 && *NextHandleTableEntry )
      {
        v7 += 40;
        v8 = -1073741820;
      }
    }
    else if ( ExLockHandleTableEntry((__int64)a1, NextHandleTableEntry) )
    {
      HandlePointer = ExGetHandlePointer(v13);
      v15 = *((_DWORD *)v13 + 2);
      v16 = ((__int64)*(unsigned int *)v13 >> 17) & 7 | 8;
      if ( (v15 & 0x2000000) == 0 )
        LOBYTE(v16) = ((__int64)*(unsigned int *)v13 >> 17) & 7;
      v21 = v16 & 7;
      v20 = *(unsigned __int8 *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)]
                               + 40);
      v24 = *(_QWORD *)HandlePointer;
      v23 = *(_QWORD *)(HandlePointer + 8);
      v19 = v15 & 0x1FFFFFF;
      ExUnlockHandleTableEntry((__int64)a1, v13);
      v7 += 40;
      ++v27;
      *v6 = v9;
      v6[1] = v23;
      v6[2] = v24;
      *((_DWORD *)v6 + 6) = v19;
      *((_DWORD *)v6 + 7) = v20;
      *((_DWORD *)v6 + 8) = v21;
      *((_DWORD *)v6 + 9) = 0;
      *a2 = v27;
      v6 += 5;
    }
    NextHandleTableEntry = (signed __int64 *)ExpGetNextHandleTableEntry(a1, v13, &v22);
    v9 = v22;
    v11 = v25;
  }
  if ( a4 )
    *a4 = v7;
  return v8;
}
