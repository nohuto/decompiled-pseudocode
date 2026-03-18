/*
 * XREFs of ?vGetSubRect@RGNOBJ@@QEBAXPEAU_RECTL@@@Z @ 0x140029C60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall RGNOBJ::vGetSubRect(RGNOBJ *this, struct _RECTL *a2)
{
  char *SystemArgument1; // rsi
  __int64 v4; // rbp
  struct _RECTL v5; // xmm0

  SystemArgument1 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
  v4 = *(_QWORD *)this;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(SystemArgument1 + 8, 2LL);
    (*(void (__fastcall **)(__int64, struct _RECTL *))(*(_QWORD *)SystemArgument1 + 80LL))(
      (v4 + 24) & -(__int64)(v4 != 0),
      a2);
    ExReleasePushLockSharedEx(SystemArgument1 + 8, 2LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    if ( *(_DWORD *)(v4 + 40) > 0x38u )
      v5 = (struct _RECTL)xmmword_140259EE0;
    else
      v5 = *(struct _RECTL *)(*(_QWORD *)this + 52LL);
    *a2 = v5;
  }
}
