/*
 * XREFs of ?Open@RegistryKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x14015B2E0
 * Callers:
 *     ?Open@ExecutionContextCpuKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x140149B90 (-Open@ExecutionContextCpuKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x14015AC50 (-Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140064730 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 */

__int64 __fastcall RegistryKnobCollection::Open(RegistryKnobCollection *this, unsigned int a2, void **a3)
{
  int v6; // edx
  unsigned int v7; // edi
  int v9; // r9d

  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    a3,
    0LL);
  v7 = IoOpenDriverRegistryKey(**((_QWORD **)this + 3), 2LL, a2);
  if ( v7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 10;
LABEL_10:
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        1,
        v9,
        (struct _GUID *)&WPP_5727a9fad38f371d27467642e4002c95_Traceguids,
        v7);
    }
  }
  else
  {
    if ( (a2 & 2) != 0
      || (wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
            a3 + 1,
            0LL),
          (v7 = IoOpenDriverRegistryKey(**((_QWORD **)this + 3), 0LL, a2)) == 0) )
    {
      *((_BYTE *)a3 + 16) = 1;
      return 0LL;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 11;
      goto LABEL_10;
    }
  }
  return v7;
}
