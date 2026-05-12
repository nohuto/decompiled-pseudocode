/*
 * XREFs of StorProcessNVMeEnumeratorFillInfo @ 0x1400C0D54
 * Callers:
 *     StorAdapterNVMeEnumerateZNS @ 0x1401B8B44 (StorAdapterNVMeEnumerateZNS.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidRemoveTrailingBlanks @ 0x14003310C (RaidRemoveTrailingBlanks.c)
 *     StorCreateAnsiString @ 0x14008EFC8 (StorCreateAnsiString.c)
 *     StorCopyNVMeFirmwareRevision @ 0x1400A1C98 (StorCopyNVMeFirmwareRevision.c)
 *     StorBuildZnsSerialNumber @ 0x1400C0BAC (StorBuildZnsSerialNumber.c)
 *     StorDeleteNVMeIdentity @ 0x1400C0D04 (StorDeleteNVMeIdentity.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall StorProcessNVMeEnumeratorFillInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int AnsiString; // edi
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // r8
  unsigned int v10; // eax
  __int64 v11; // r9
  __int64 Pool; // rax
  __int64 v13; // rsi
  int v14; // r8d
  int v15; // r8d
  _BYTE v17[128]; // [rsp+30h] [rbp-B8h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  AnsiString = 0;
  v6 = *(_QWORD *)(v2 + 3552);
  v7 = *(_QWORD *)(v2 + 3560);
  v8 = *(_QWORD *)(*(_QWORD *)(v2 + 24) + 6000LL);
  memset_0(v17, 0, sizeof(v17));
  if ( !v8
    || !v6
    || !v7
    || (v9 = *(_BYTE *)(v6 + 26) & 0xF, !*(_QWORD *)(v7 + 16 * (v9 + 176)))
    || *(_QWORD *)(v7 + 16 * (v9 + 176)) % ((unsigned __int64)*(unsigned __int16 *)(v6 + 72) + 1)
    || (*(_DWORD *)(v2 + 1952) & 0x20) == 0 )
  {
    AnsiString = -1073741637;
    goto LABEL_20;
  }
  if ( !*(_BYTE *)(v6 + 4 * v9 + 130) && !*(_QWORD *)v6 )
  {
    *(_BYTE *)(a2 + 93) = 0;
    return AnsiString;
  }
  *(_BYTE *)(a2 + 93) = 1;
  v10 = StorBuildZnsSerialNumber(a2, 0LL, (__int64)v17);
  if ( !v10 )
  {
    AnsiString = -1073741811;
LABEL_20:
    StorDeleteNVMeIdentity(a2 + 32);
    return AnsiString;
  }
  AnsiString = StorCreateAnsiString(a2 + 40, v17, v10, v11, *(_QWORD *)(*(_QWORD *)a1 + 8LL));
  if ( (AnsiString & 0x80000000) != 0 )
    goto LABEL_20;
  Pool = RaidAllocatePool(64LL, 108LL, 1129210194LL, *(_QWORD *)(*(_QWORD *)a1 + 8LL));
  *(_QWORD *)(a2 + 80) = Pool;
  v13 = Pool;
  if ( !Pool )
  {
    AnsiString = -1073741801;
    goto LABEL_20;
  }
  memset_0((void *)(Pool + 8), 0, 0x64uLL);
  *(_DWORD *)v13 = 1;
  *(_DWORD *)(v13 + 4) = 108;
  *(_OWORD *)(v13 + 25) = *(_OWORD *)(v8 + 24);
  *(_OWORD *)(v13 + 41) = *(_OWORD *)(v8 + 40);
  *(_QWORD *)(v13 + 57) = *(_QWORD *)(v8 + 56);
  StorCopyNVMeFirmwareRevision(v8, v13 + 90, 0x10u);
  RaidRemoveTrailingBlanks(*(_QWORD *)(a2 + 80) + 25LL, v14 + 49);
  RaidRemoveTrailingBlanks(*(_QWORD *)(a2 + 80) + 90LL, v15 + 1);
  if ( !DisableIEEE1667 )
    *(_WORD *)(a2 + 56) &= ~1u;
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 8) + 1952LL) & 0x20) != 0 )
    *(_WORD *)(a2 + 56) |= 4u;
  return AnsiString;
}
