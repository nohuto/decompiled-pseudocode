/*
 * XREFs of ?UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z @ 0x140149774
 * Callers:
 *     ?ClearKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W@Z @ 0x140148DA0 (-ClearKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W@Z.c)
 *     ?ClearKnobStoreValue@KnobNamespace@@AEAAJPEB_W_N@Z @ 0x140148E30 (-ClearKnobStoreValue@KnobNamespace@@AEAAJPEB_W_N@Z.c)
 *     ?SetKnobStoreValue@KnobNamespace@@AEAAJPEB_W_K_N@Z @ 0x1401495CC (-SetKnobStoreValue@KnobNamespace@@AEAAJPEB_W_K_N@Z.c)
 * Callees:
 *     ?GetCurrentValue@KnobDescriptor@@QEBA_KXZ @ 0x1400635B0 (-GetCurrentValue@KnobDescriptor@@QEBA_KXZ.c)
 *     ??1KnobTransaction@@QEAA@XZ @ 0x14006FED0 (--1KnobTransaction@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ?CommitSingleKnob@KnobCollection@@QEAAXAEBUKnobDescriptor@@AEAUKnobState@@_K_N@Z @ 0x1401499A8 (-CommitSingleKnob@KnobCollection@@QEAAXAEBUKnobDescriptor@@AEAUKnobState@@_K_N@Z.c)
 *     ?ReadKnobFromStore@KnobCollection@@QEAAJAEAUKnobTransaction@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x140162D30 (-ReadKnobFromStore@KnobCollection@@QEAAJAEAUKnobTransaction@@AEBUKnobDescriptor@@AEAUKnobState@@.c)
 */

void __fastcall KnobNamespace::UpdateSingleKnob(
        KnobNamespace *this,
        struct KnobCollection *a2,
        struct KnobDescriptor *a3,
        struct KnobState *a4)
{
  unsigned __int64 CurrentValue; // rax
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  char v9; // [rsp+40h] [rbp-18h]

  v9 = 0;
  v8 = 0LL;
  if ( (**(unsigned int (__fastcall ***)(struct KnobCollection *, __int64, __int128 *))a2)(a2, 1LL, &v8)
    || KnobCollection::ReadKnobFromStore(a2, (struct KnobTransaction *)&v8, a3, a4) )
  {
    *(_QWORD *)a4 = a3->DefaultValue;
    *((_DWORD *)a4 + 4) = 1;
  }
  CurrentValue = KnobDescriptor::GetCurrentValue(a3);
  KnobCollection::CommitSingleKnob(a2, a3, a4, CurrentValue, 0);
  KnobTransaction::~KnobTransaction((KnobTransaction *)&v8);
}
