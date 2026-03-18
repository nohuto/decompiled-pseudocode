/*
 * XREFs of ?Remove@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x14019F660
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1400B7F2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?GreMakeFontDir@@YAKKPEAEPEAG@Z @ 0x14019EECC (-GreMakeFontDir@@YAKKPEAEPEAG@Z.c)
 *     FreeFileView @ 0x14019F3FC (FreeFileView.c)
 * Callees:
 *     ?W32AcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140094BEC (-W32AcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140095C68 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?LowerBound@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEBA_KAEBI@Z @ 0x1400B65C4 (-LowerBound@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEBA_KAEBI@Z.c)
 *     ?Wait@CPlatformSingleWaiterSignal@NSInstrumentation@@QEAAXXZ @ 0x14033EBB0 (-Wait@CPlatformSingleWaiterSignal@NSInstrumentation@@QEAAXXZ.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

char __fastcall NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::Remove(
        struct W32_PUSH_LOCK *a1,
        _DWORD *a2)
{
  char v4; // di
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r8
  _DWORD *v7; // rcx

  W32AcquirePushLockExclusive(a1);
  v4 = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)a1 + 4, 0, 1);
  _InterlockedAdd((volatile signed __int32 *)a1 + 7, 1u);
  if ( *((_DWORD *)a1 + 6) )
    NSInstrumentation::CPlatformSingleWaiterSignal::Wait((struct W32_PUSH_LOCK *)((char *)a1 + 8));
  v5 = NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::LowerBound((__int64)a1, a2);
  v6 = *((_QWORD *)a1 + 5);
  if ( v6 && v5 < v6 && (v7 = (_DWORD *)(*((_QWORD *)a1 + 6) + 16 * v5), *v7 == *a2) )
  {
    memmove(v7, v7 + 4, 16 * (v6 - v5) - 16);
    --*((_QWORD *)a1 + 5);
  }
  else
  {
    v4 = 0;
  }
  _InterlockedDecrement((volatile signed __int32 *)a1 + 7);
  W32ReleasePushLockExclusive(a1);
  return v4;
}
