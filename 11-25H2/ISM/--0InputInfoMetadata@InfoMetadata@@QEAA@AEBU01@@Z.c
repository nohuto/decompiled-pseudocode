/*
 * XREFs of ??0InputInfoMetadata@InfoMetadata@@QEAA@AEBU01@@Z @ 0x1800557F0
 * Callers:
 *     ??$_Emplace_reallocate@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@AEAAPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@1@QEAU21@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@Z @ 0x180055248 (--$_Emplace_reallocate@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@-$vector@U-$pair@W4I.c)
 *     ?AddInput@InfoMetadata@@QEAAXW4InputType@@UInputInfoMetadata@1@@Z @ 0x1800556E0 (-AddInput@InfoMetadata@@QEAAXW4InputType@@UInputInfoMetadata@1@@Z.c)
 * Callees:
 *     ??0?$function@$$A6AXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@Z@std@@QEAA@AEBV01@@Z @ 0x1800952EC (--0-$function@$$A6AXPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal_to@_ea_1800952EC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
InfoMetadata::InputInfoMetadata *__fastcall InfoMetadata::InputInfoMetadata::InputInfoMetadata(
        InfoMetadata::InputInfoMetadata *this,
        const struct InfoMetadata::InputInfoMetadata *a2)
{
  __int64 (__fastcall ***v4)(_QWORD, char *); // rcx

  ((void (*)(void))std::function<void (InputInfo *,std::unordered_set<unsigned long> &)>::function<void (InputInfo *,std::unordered_set<unsigned long> &)>)();
  std::function<void (InputInfo *,std::unordered_set<unsigned long> &)>::function<void (InputInfo *,std::unordered_set<unsigned long> &)>(
    (char *)this + 64,
    (char *)a2 + 64);
  *((_QWORD *)this + 23) = 0LL;
  v4 = (__int64 (__fastcall ***)(_QWORD, char *))*((_QWORD *)a2 + 23);
  if ( v4 )
    *((_QWORD *)this + 23) = (**v4)(v4, (char *)this + 128);
  std::function<void (InputInfo *,std::unordered_set<unsigned long> &)>::function<void (InputInfo *,std::unordered_set<unsigned long> &)>(
    (char *)this + 192,
    (char *)a2 + 192);
  std::function<void (InputInfo *,std::unordered_set<unsigned long> &)>::function<void (InputInfo *,std::unordered_set<unsigned long> &)>(
    (char *)this + 256,
    (char *)a2 + 256);
  std::function<void (InputInfo *,std::unordered_set<unsigned long> &)>::function<void (InputInfo *,std::unordered_set<unsigned long> &)>(
    (char *)this + 320,
    (char *)a2 + 320);
  return this;
}
