/*
 * XREFs of ?Contains@TrustedFontFileTable@@SA_NPEBG@Z @ 0x1401BAB64
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1400B7F2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$0BG@@@QEAA@PEAUtagSILOGLOBALS@@@Z @ 0x1401BAC38 (--0-$SEMOBJ@$0BG@@@QEAA@PEAUtagSILOGLOBALS@@@Z.c)
 */

bool __fastcall TrustedFontFileTable::Contains(PCWSTR SourceString)
{
  __int64 SiloGlobals; // rax
  __int64 v3; // rbx
  PVOID v4; // rax
  HSEMAPHORE v5; // rbx
  bool v6; // di
  struct _GRETHREAD *v7; // rax
  bool v8; // zf
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  HSEMAPHORE v11; // [rsp+48h] [rbp+10h] BYREF

  SiloGlobals = UserGetSiloGlobals();
  v3 = SiloGlobals;
  if ( !*(_QWORD *)(SiloGlobals + 16) )
    return 0;
  SEMOBJ<22>::SEMOBJ<22>(&v11, SiloGlobals);
  DestinationString = 0LL;
  RtlInitUnicodeStringEx(&DestinationString, SourceString);
  v4 = RtlLookupElementGenericTableAvl(*(PRTL_AVL_TABLE *)(v3 + 24), &DestinationString);
  v5 = v11;
  v6 = v4 != 0LL;
  if ( v11 )
  {
    EtwTraceGreLockReleaseSemaphore(L"TrustedFontFileTable", v11);
    v7 = GreGetCurrentThreadCrossSessionCheck();
    if ( v7 )
    {
      v8 = (*(_QWORD *)v7 & 0xFFFFFFFFFFBFFFFFuLL) == 0;
      *(_QWORD *)v7 &= ~0x400000uLL;
      if ( v8 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v5);
  }
  return v6;
}
