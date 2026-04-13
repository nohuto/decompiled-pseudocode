/*
 * XREFs of ??$ActivateInstance@UIProcessContextualSuggestionsEvent@ContentManagement@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIProcessContextualSuggestionsEvent@ContentManagement@@@Z @ 0x1800245FC
 * Callers:
 *     ?EnableContextualSuggestions@ContentManagement@@YAJE@Z @ 0x18002EDA0 (-EnableContextualSuggestions@ContentManagement@@YAJE@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<ContentManagement::IProcessContextualSuggestionsEvent>(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v6 = 0LL;
  v3 = RoActivateInstance(a1, &v6);
  if ( v3 >= 0 )
  {
    v4 = *(_QWORD *)&GUID_8d90e3e1_f1d7_4681_aec8_5c436a53c1d4.Data1
       - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
    if ( *(_QWORD *)&GUID_8d90e3e1_f1d7_4681_aec8_5c436a53c1d4.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
      v4 = *(_QWORD *)GUID_8d90e3e1_f1d7_4681_aec8_5c436a53c1d4.Data4
         - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
    if ( v4 )
    {
      v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v6)(
             v6,
             &GUID_8d90e3e1_f1d7_4681_aec8_5c436a53c1d4,
             a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    else
    {
      *a2 = v6;
    }
  }
  return (unsigned int)v3;
}
