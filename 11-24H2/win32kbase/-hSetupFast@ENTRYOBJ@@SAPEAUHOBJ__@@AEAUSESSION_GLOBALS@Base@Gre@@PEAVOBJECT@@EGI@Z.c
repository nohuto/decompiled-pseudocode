/*
 * XREFs of ?hSetupFast@ENTRYOBJ@@SAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EGI@Z @ 0x1401C1F94
 * Callers:
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x14001E494 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     HmgAllocFast @ 0x1401C21B0 (HmgAllocFast.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x14000F160 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140039940 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GetEntrySkipInUseValidation@GdiHandleManager@@QEAAPEAU_ENTRY@@I@Z @ 0x1400B68C4 (-GetEntrySkipInUseValidation@GdiHandleManager@@QEAAPEAU_ENTRY@@I@Z.c)
 *     ?SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z @ 0x1400B6F38 (-SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z.c)
 *     UMPDGetThreadClientPID @ 0x140135174 (UMPDGetThreadClientPID.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

struct HOBJ__ *__fastcall ENTRYOBJ::hSetupFast(
        GdiHandleManager **a1,
        struct OBJECT *a2,
        char a3,
        unsigned __int16 a4,
        unsigned int a5)
{
  unsigned int v6; // r15d
  struct _ENTRY *EntrySkipInUseValidation; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _GRETHREAD *CurrentThread; // r14
  __int64 v13; // rbp
  unsigned __int64 v14; // rsi
  __int64 (__fastcall *v15)(struct _GRETHREAD *); // rax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int16 v18; // ax
  unsigned __int64 v19; // rbx
  signed __int32 v21[8]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int16 v23; // [rsp+80h] [rbp+18h]

  LOBYTE(v23) = a3;
  v6 = a4;
  EntrySkipInUseValidation = GdiHandleManager::GetEntrySkipInUseValidation(a1[709], a5);
  CurrentThread = GreGetCurrentThread(v9);
  if ( !CurrentThread || (v6 & 0x10) != 0 )
    v13 = 0LL;
  else
    v13 = *((_QWORD *)CurrentThread + 8);
  *((_BYTE *)EntrySkipInUseValidation + 14) = a3;
  *((_BYTE *)EntrySkipInUseValidation + 15) = 0;
  *((_QWORD *)EntrySkipInUseValidation + 2) = 0LL;
  if ( (v6 & 8) != 0 )
  {
    LODWORD(v14) = 0;
  }
  else if ( v13 )
  {
    v14 = (unsigned __int64)UMPDGetThreadClientPID((__int64)CurrentThread, v10) & 0xFFFFFFFE;
  }
  else
  {
    v14 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  }
  if ( (v6 & 1) != 0 )
  {
    if ( v13 )
    {
      v15 = *(__int64 (__fastcall **)(struct _GRETHREAD *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v11, 1LL) + 24)
                                                          + 1568LL);
      if ( v15 )
        v16 = v15(CurrentThread);
      else
        v16 = 0LL;
      *((_QWORD *)a2 + 2) = v16;
    }
    else
    {
      *((_QWORD *)a2 + 2) = KeGetCurrentThread();
    }
  }
  *((_WORD *)a2 + 6) = v6 & 1;
  *((_DWORD *)a2 + 2) = (v6 >> 1) & 1;
  if ( CurrentThread )
  {
    v17 = *((_QWORD *)CurrentThread + 42);
    if ( v17 )
    {
      if ( *(_BYTE *)(v17 + 80) )
      {
        if ( (v6 & 1) != 0 )
          *((_WORD *)a2 + 7) |= 0x20u;
        else
          GrepCaptureLiveMemoryDump(0x190u, 52LL, 3LL, (__int64)a2, 0LL, 0);
      }
    }
  }
  HIBYTE(v23) = BYTE2(a5);
  v18 = v23;
  *((_WORD *)EntrySkipInUseValidation + 6) = v23;
  *((_QWORD *)EntrySkipInUseValidation + 2) = 0LL;
  *((_DWORD *)EntrySkipInUseValidation + 2) = v14;
  if ( (v6 & 0x40) != 0 )
  {
    v18 = v23 | 0x80;
    *((_WORD *)EntrySkipInUseValidation + 6) = v23 | 0x80;
  }
  if ( (v6 & 0x80) != 0 )
    *((_BYTE *)EntrySkipInUseValidation + 15) |= 1u;
  *((_BYTE *)EntrySkipInUseValidation + 7) = -1;
  *(_DWORD *)EntrySkipInUseValidation = a5;
  v19 = (unsigned __int16)a5 | (unsigned __int64)(v18 << 16);
  *(_QWORD *)a2 = v19;
  _InterlockedOr(v21, 0);
  GdiHandleManager::SetEntryObject(a1[709], a5, a2);
  return (struct HOBJ__ *)v19;
}
