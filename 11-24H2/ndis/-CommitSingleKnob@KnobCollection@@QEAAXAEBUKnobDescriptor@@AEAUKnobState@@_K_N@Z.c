/*
 * XREFs of ?CommitSingleKnob@KnobCollection@@QEAAXAEBUKnobDescriptor@@AEAUKnobState@@_K_N@Z @ 0x1401499A8
 * Callers:
 *     ?SetKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W_K@Z @ 0x140149500 (-SetKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W_K@Z.c)
 *     ?UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z @ 0x140149774 (-UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z.c)
 *     ?CommitUpdatedKnobValues@KnobCollection@@QEAAX_N@Z @ 0x140162BD0 (-CommitUpdatedKnobValues@KnobCollection@@QEAAX_N@Z.c)
 * Callees:
 *     ?SetCurrentValue@KnobDescriptor@@QEBAX_K@Z @ 0x140072FD0 (-SetCurrentValue@KnobDescriptor@@QEBAX_K@Z.c)
 *     WPP_RECORDER_SF_Sii @ 0x1400CEE44 (WPP_RECORDER_SF_Sii.c)
 *     WPP_RECORDER_SF_SiiD @ 0x1400CEFCC (WPP_RECORDER_SF_SiiD.c)
 *     WPP_RECORDER_SF_Siid @ 0x1400CF17C (WPP_RECORDER_SF_Siid_ea_1400CF17C.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall KnobCollection::CommitSingleKnob(
        KnobCollection *this,
        struct KnobDescriptor *a2,
        struct KnobState *a3,
        __int64 a4,
        bool a5)
{
  __int64 (__fastcall *v7)(_QWORD, struct KnobDescriptor *, _QWORD); // rax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+20h] [rbp-38h]

  if ( (a2->Flags & 0x20) == 0 && !a5 )
  {
    *((_DWORD *)a3 + 2) = -1073741102;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Sii(*((_QWORD *)WPP_GLOBAL_Control + 8), 3u, (__int64)a3, 0x11u, v13, a2->Name);
    return;
  }
  v7 = (__int64 (__fastcall *)(_QWORD, struct KnobDescriptor *, _QWORD))*((_QWORD *)this + 5);
  v8 = *(_QWORD *)a3;
  if ( !v7 )
  {
LABEL_9:
    KnobDescriptor::SetCurrentValue(a2, v8);
    goto LABEL_10;
  }
  v9 = v7(*((_QWORD *)this + 6), a2, *(_QWORD *)a3);
  if ( v9 != 255 )
  {
    if ( v9 )
      goto LABEL_11;
    v8 = *(_QWORD *)a3;
    goto LABEL_9;
  }
LABEL_10:
  v9 = 0;
LABEL_11:
  *((_DWORD *)a3 + 2) = v9;
  if ( v9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Siid(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, v11, v12, v13, a2->Name);
  }
  else
  {
    *((_DWORD *)a3 + 3) = *((_DWORD *)a3 + 4);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_SiiD(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, v11, v12, v13, a2->Name);
  }
}
