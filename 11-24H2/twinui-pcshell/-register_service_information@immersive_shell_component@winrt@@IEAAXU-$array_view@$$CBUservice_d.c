/*
 * XREFs of ?register_service_information@immersive_shell_component@winrt@@IEAAXU?$array_view@$$CBUservice_description@immersive_shell_component@winrt@@@2@@Z @ 0x18014A694
 * Callers:
 *     ??0TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180149580 (--0TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0TouchGestureComponent@@QEAA@XZ @ 0x18026F730 (--0TouchGestureComponent@@QEAA@XZ.c)
 *     ??0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180284A28 (--0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802933BC (--0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??$_Insert_counted_range@PEBUservice_description@immersive_shell_component@winrt@@@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@@1@PEBUservice_description@immersive_shell_component@winrt@@_K@Z @ 0x18014ABC0 (--$_Insert_counted_range@PEBUservice_description@immersive_shell_component@winrt@@@-$vector@User.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::immersive_shell_component::register_service_information(RTL_SRWLOCK *a1, __int64 a2)
{
  RTL_SRWLOCK *v4; // rsi

  v4 = a1 + 10;
  AcquireSRWLockExclusive(a1 + 10);
  std::vector<winrt::immersive_shell_component::service_description>::_Insert_counted_range<winrt::immersive_shell_component::service_description const *>(
    &a1[6],
    a1[7].Ptr,
    *(_QWORD *)a2,
    *(unsigned int *)(a2 + 8));
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
