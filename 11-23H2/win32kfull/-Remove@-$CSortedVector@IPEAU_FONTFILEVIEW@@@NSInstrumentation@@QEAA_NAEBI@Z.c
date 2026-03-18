/*
 * XREFs of ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C007FE0C
 * Callers:
 *     FreeFileView @ 0x1C00C5AB8 (FreeFileView.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C01135E0 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     GreMakeFontDir @ 0x1C02D5048 (GreMakeFontDir.c)
 * Callees:
 *     ?LowerBound@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEBA_KAEBI@Z @ 0x1C01156CC (-LowerBound@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEBA_KAEBI@Z.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     ??1?$CAutoExclusiveCReaderWriterLock@VCPrioritizedWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAA@XZ @ 0x1C0269F98 (--1-$CAutoExclusiveCReaderWriterLock@VCPrioritizedWriterLock@NSInstrumentation@@@NSInstrumentati.c)
 *     ?Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ @ 0x1C030553C (-Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ.c)
 */

char __fastcall NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(__int64 a1, _DWORD *a2)
{
  char v4; // di
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r8
  _DWORD *v7; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1, 0LL);
  v4 = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 16), 0, 1);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 28), 1u);
  if ( *(_DWORD *)(a1 + 24) )
    NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPlatformSingleWatierSignal *)(a1 + 8));
  v5 = NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LowerBound(a1, a2);
  v6 = *(_QWORD *)(a1 + 40);
  if ( !v6 || v5 >= v6 )
  {
    v4 = 0;
    goto LABEL_7;
  }
  v7 = (_DWORD *)(*(_QWORD *)(a1 + 48) + 16 * v5);
  if ( *v7 == *a2 )
  {
    memmove(v7, v7 + 4, 16 * (v6 - v5) - 16);
    --*(_QWORD *)(a1 + 40);
LABEL_7:
    NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPrioritizedWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPrioritizedWriterLock>(&v9);
    return v4;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 28));
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return 0;
}
