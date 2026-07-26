/*
 * XREFs of ?ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z @ 0x14016CD90
 * Callers:
 *     ?SetKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W_K@Z @ 0x1401541D0 (-SetKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W_K@Z.c)
 *     ?SetKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@_K@Z @ 0x140154BE0 (-SetKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@_K@Z.c)
 *     ?ReadKnobFromKey@NetSetupKnobCollection@@EEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x140154E20 (-ReadKnobFromKey@NetSetupKnobCollection@@EEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z.c)
 *     ?ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x14016CB90 (-ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Si @ 0x14009EC18 (WPP_RECORDER_SF_Si.c)
 *     WPP_RECORDER_SF_Sii @ 0x1400D6484 (WPP_RECORDER_SF_Sii.c)
 *     WPP_RECORDER_SF_Siii @ 0x1400D696C (WPP_RECORDER_SF_Siii.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KnobCollection::ValidateKnobValue(
        KnobCollection *this,
        unsigned __int64 *a2,
        const struct KnobDescriptor *a3)
{
  ConfigKnobFlag Flags; // eax
  unsigned __int64 MaximumValue; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 MinimumValue; // r8
  unsigned __int8 (__fastcall *v11)(_QWORD, const struct KnobDescriptor *, unsigned __int64 *); // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // r8
  int v14; // [rsp+20h] [rbp-38h]

  Flags = a3->Flags;
  if ( (Flags & 2) != 0 )
  {
    if ( *a2 >= 2 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Si(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          1u,
          0xBu,
          (struct _GUID *)&WPP_0d3df21b34c634c4ec6d6bcb69b42c7f_Traceguids,
          a3->Name,
          *a2);
      return 3221225621LL;
    }
  }
  else if ( (Flags & 4) == 0 && *a2 > 0xFFFFFFFF )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Si(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        1u,
        0xCu,
        (struct _GUID *)&WPP_0d3df21b34c634c4ec6d6bcb69b42c7f_Traceguids,
        a3->Name,
        *a2);
    return 3221225621LL;
  }
  MaximumValue = a3->MaximumValue;
  if ( *(_OWORD *)&a3->MinimumValue != 0LL )
  {
    v9 = *a2;
    MinimumValue = a3->MinimumValue;
    if ( *a2 < MinimumValue || v9 > MaximumValue )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Siii(*((_QWORD *)WPP_GLOBAL_Control + 8), v9, MinimumValue, (__int64)this, v14, a3->Name);
      return 3221227787LL;
    }
  }
  if ( (Flags & 0x40) == 0 || *a2 && ((*a2 - 1) & *a2) == 0 )
  {
    v11 = (unsigned __int8 (__fastcall *)(_QWORD, const struct KnobDescriptor *, unsigned __int64 *))*((_QWORD *)this + 4);
    if ( v11 )
    {
      v12 = *a2;
      if ( !v11(*((_QWORD *)this + 6), a3, a2) )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Si(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            1u,
            0xFu,
            (struct _GUID *)&WPP_0d3df21b34c634c4ec6d6bcb69b42c7f_Traceguids,
            a3->Name,
            v12);
        return 3221227787LL;
      }
      if ( v12 != *a2 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Sii(*((_QWORD *)WPP_GLOBAL_Control + 8), 4u, v13, 0x10u, v14, a3->Name);
    }
    return 0LL;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Si(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      1u,
      0xEu,
      (struct _GUID *)&WPP_0d3df21b34c634c4ec6d6bcb69b42c7f_Traceguids,
      a3->Name,
      *a2);
  return 3221227787LL;
}
