/*
 * XREFs of PipInitializeDriverDependentDLLs @ 0x140C524C4
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C0D35C (IopInitializeBootDrivers.c)
 *     PipInitializeCoreDriversAndElam @ 0x140C520B0 (PipInitializeCoreDriversAndElam.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x14036D060 (MmReleaseLoadLock.c)
 *     MiAcquireLoadLock @ 0x14036DF38 (MiAcquireLoadLock.c)
 *     MmFindDataTableEntryByAddress @ 0x14036E0D0 (MmFindDataTableEntryByAddress.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MmCallDllInitialize @ 0x1407D7AC0 (MmCallDllInitialize.c)
 *     PnpDoPolicyCheck @ 0x140BCD638 (PnpDoPolicyCheck.c)
 *     PnpNotifyEarlyLaunchImageLoad @ 0x140C11AF4 (PnpNotifyEarlyLaunchImageLoad.c)
 */

__int64 __fastcall PipInitializeDriverDependentDLLs(int a1, __int64 a2)
{
  _QWORD **v4; // r14
  struct _KTHREAD *Lock; // r15
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  int v8; // ecx
  bool v9; // cl
  bool v10; // zf
  __int64 *DataTableEntryByAddress; // rax
  _BYTE v13[4]; // [rsp+28h] [rbp-39h] BYREF
  int v14; // [rsp+2Ch] [rbp-35h]
  __int128 v15; // [rsp+30h] [rbp-31h]
  int v16; // [rsp+40h] [rbp-21h]
  const WCHAR *v17; // [rsp+48h] [rbp-19h]
  __int128 v18; // [rsp+50h] [rbp-11h]
  __int128 v19; // [rsp+60h] [rbp-1h]
  __int64 v20; // [rsp+70h] [rbp+Fh]
  __int64 v21; // [rsp+78h] [rbp+17h]
  int v22; // [rsp+80h] [rbp+1Fh]
  int v23; // [rsp+84h] [rbp+23h]
  int v24; // [rsp+88h] [rbp+27h]
  int v25; // [rsp+8Ch] [rbp+2Bh]
  int v26; // [rsp+C8h] [rbp+67h] BYREF

  memset_0(v13, 0, 0x68uLL);
  v26 = 0;
  v4 = (_QWORD **)(a2 + 16);
  Lock = MiAcquireLoadLock(1);
  v6 = *v4;
  while ( v6 != v4 )
  {
    v7 = v6;
    v6 = (_QWORD *)*v6;
    if ( (v7[13] & 0x4000000) != 0 )
    {
      v8 = *((_DWORD *)v7 + 57);
      switch ( a1 )
      {
        case 0:
          v10 = (v8 & 1) == 0;
          goto LABEL_11;
        case 1:
          v9 = (*((_DWORD *)v7 + 57) & 2) != 0;
          goto LABEL_8;
        case 2:
          v9 = (v8 & 3) == 0;
LABEL_8:
          if ( v9 )
          {
            v26 = 0;
            memset_0(v13, 0, 0x68uLL);
            v15 = *(_OWORD *)(v7 + 9);
            v14 = v7[28] & 1;
            v22 = *((_DWORD *)v7 + 52);
            v24 = *((_DWORD *)v7 + 54);
            v20 = v7[24];
            v23 = *((_DWORD *)v7 + 53);
            v25 = *((_DWORD *)v7 + 55);
            v21 = v7[25];
            v17 = &word_140C586E0;
            v16 = 0x20000;
            v19 = *((_OWORD *)v7 + 11);
            v18 = *((_OWORD *)v7 + 10);
            PnpNotifyEarlyLaunchImageLoad((__int64)v13, (__int64)&v26);
            v10 = PnpDoPolicyCheck(v26, a1 != 1) == 0;
LABEL_11:
            if ( !v10 )
            {
              DataTableEntryByAddress = MmFindDataTableEntryByAddress(v7[6]);
              MmCallDllInitialize((__int64)DataTableEntryByAddress);
            }
          }
          break;
      }
    }
  }
  return MmReleaseLoadLock(Lock);
}
