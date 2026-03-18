/*
 * XREFs of ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x1C026DC88
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0006FD0 (NtGdiDdDDICreateDCFromMemory.c)
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C0026F2C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011C6C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C026E848 (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 */

__int64 __fastcall DxEngSyncPaletteTableWithDevice(HPALETTE a1, HDEV a2)
{
  unsigned int v3; // esi
  Gre::Base *v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int128 v10; // [rsp+20h] [rbp-29h] BYREF
  HDEV v11; // [rsp+30h] [rbp-19h]
  int v12; // [rsp+38h] [rbp-11h]
  _QWORD v13[2]; // [rsp+40h] [rbp-9h] BYREF
  _BYTE v14[40]; // [rsp+50h] [rbp+7h] BYREF
  __int64 v15; // [rsp+78h] [rbp+2Fh]
  __int64 v16; // [rsp+80h] [rbp+37h]
  __int64 v17; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v18; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v19; // [rsp+C8h] [rbp+7Fh] BYREF

  v3 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v17, a1);
  if ( a2 && v17 )
  {
    v19 = *((_QWORD *)a2 + 7);
    GreAcquireSemaphore(v19);
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v13);
    v16 = 0LL;
    v15 = 0LL;
    v13[0] = 0LL;
    v3 = 1;
    v5 = *((_DWORD *)a2 + 10);
    v10 = 0LL;
    v12 = 1;
    if ( (v5 & 1) != 0 )
    {
      Gre::Base::Globals(v4);
      *(_QWORD *)&v10 = *((_QWORD *)a2 + 6);
      v11 = a2;
      GreAcquireSemaphore(v10);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v10, 11LL);
    }
    v18 = *((_QWORD *)Gre::Base::Globals(v4) + 5);
    GreAcquireSemaphore(v18);
    XEPALOBJ::apalColorSet((XEPALOBJ *)&v17, *((struct PALETTE **)a2 + 222));
    SEMOBJ::vUnlock((SEMOBJ *)&v18);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v10, v6, v7, v8);
    if ( v13[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v13);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v14);
    SEMOBJ::vUnlock((SEMOBJ *)&v19);
  }
  if ( v17 )
    DEC_SHARE_REF_CNT(v17);
  return v3;
}
