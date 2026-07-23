/*
 * XREFs of KeSetExecuteOptions @ 0x14048BE20
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     KiReleaseProcessLockExclusive @ 0x1403A2318 (KiReleaseProcessLockExclusive.c)
 *     KiAcquireProcessLockExclusive @ 0x1403A2370 (KiAcquireProcessLockExclusive.c)
 */

__int64 __fastcall KeSetExecuteOptions(__int64 a1, int a2)
{
  char v2; // di
  unsigned int v5; // esi
  __int64 v6; // rdx
  char v7; // al
  unsigned __int8 v8; // al
  unsigned __int8 v9; // cl
  unsigned __int8 v10; // r8
  unsigned __int8 v11; // cl
  unsigned __int8 v12; // r8
  unsigned __int8 v13; // cl
  unsigned __int8 v14; // r8
  unsigned __int8 v15; // cl
  unsigned __int8 v16; // r8
  unsigned __int8 v17; // cl
  char v18; // cl
  char v19; // r8
  bool v20; // zf
  char v21; // cl
  unsigned __int8 v22; // [rsp+38h] [rbp+10h] BYREF

  v22 = 0;
  v2 = a2;
  if ( (a2 & 0xFFFFFF80) != 0 || !*(_QWORD *)(a1 + 784) || *(_WORD *)(a1 + 1772) != 332 )
    return 3221225485LL;
  v5 = -1073741790;
  KiAcquireProcessLockExclusive(a1, &v22);
  v7 = *(_BYTE *)(a1 + 147);
  if ( (v7 & 8) == 0 )
  {
    v8 = v7 & 0xFE;
    if ( (v2 & 1) != 0 )
      v8 = v8 & 0xFC | 1;
    v9 = v8 | 4;
    if ( (v2 & 4) == 0 )
      v9 = v8;
    v10 = v9;
    v11 = v9 | 2;
    if ( (v2 & 2) == 0 )
      v11 = v10;
    v12 = v11;
    v13 = v11 | 0x10;
    if ( (v2 & 0x10) == 0 )
      v13 = v12;
    v14 = v13;
    v15 = v13 | 0x20;
    if ( (v2 & 0x20) == 0 )
      v15 = v14;
    v16 = v15;
    v17 = v15 | 0x40;
    if ( (v2 & 0x40) == 0 )
      v17 = v16;
    v6 = v17;
    v18 = v17 | 8;
    if ( (v2 & 8) == 0 )
      v18 = v6;
    v19 = v18;
    v20 = (v18 & 2) == 0;
    v21 = v18 | 0x30;
    if ( v20 )
      v21 = v19;
    v5 = 0;
    *(_BYTE *)(a1 + 147) = v21;
  }
  LOBYTE(v6) = v22;
  KiReleaseProcessLockExclusive(a1, v6);
  return v5;
}
