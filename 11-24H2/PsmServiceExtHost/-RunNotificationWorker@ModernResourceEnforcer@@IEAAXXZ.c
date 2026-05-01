/*
 * XREFs of ?RunNotificationWorker@ModernResourceEnforcer@@IEAAXXZ @ 0x18005BF4C
 * Callers:
 *     ?NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18005BE70 (-NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK.c)
 * Callees:
 *     ??1ModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAA@XZ @ 0x18005C0C0 (--1ModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180071DAC (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ModernResourceEnforcer::RunNotificationWorker(ModernResourceEnforcer *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbp
  _QWORD **v3; // rsi
  _QWORD *v4; // rbx
  __int64 v5; // r10
  _QWORD *v6; // rbx
  unsigned int v7; // ecx
  _QWORD *v8; // r9
  _QWORD *v9; // r11
  _QWORD *v10; // rax

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 224);
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 224));
  v3 = (_QWORD **)((char *)this + 272);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v10 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v10;
    v10[1] = v3;
    *(_OWORD *)v4 = 0LL;
    RtlLeaveCriticalSection(v1);
    v5 = *((_QWORD *)this + 36);
    v6 = v4 - 17;
    if ( v5 )
    {
      if ( *(_DWORD *)v6 == 1 )
      {
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD *, _QWORD, _DWORD, _QWORD))(*(_QWORD *)v5 + 24LL))(
          v5,
          v6[1],
          v6 + 5,
          *((unsigned int *)v6 + 27),
          *((_DWORD *)v6 + 28),
          v6[15]);
      }
      else if ( *(_DWORD *)v6 == 2 )
      {
        v7 = *((_DWORD *)v6 + 32);
        if ( v7 > 1 )
        {
          v8 = (_QWORD *)v6[14];
          v9 = (_QWORD *)v6[15];
        }
        else
        {
          v8 = v6 + 14;
          v9 = v6 + 15;
        }
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD *, _QWORD, _QWORD *, _QWORD *, unsigned int, _DWORD))(*(_QWORD *)v5 + 32LL))(
          v5,
          v6[1],
          v6 + 5,
          *((unsigned int *)v6 + 27),
          v8,
          v9,
          v7,
          *((_DWORD *)v6 + 33));
      }
    }
    if ( v6 )
    {
      ModernResourceEnforcer::ModernResourceEnforcerWorkItem::~ModernResourceEnforcerWorkItem((ModernResourceEnforcer::ModernResourceEnforcerWorkItem *)v6);
      operator delete(v6);
    }
    RtlEnterCriticalSection(v1);
  }
  *((_DWORD *)this + 74) &= ~1u;
  RtlLeaveCriticalSection(v1);
}
