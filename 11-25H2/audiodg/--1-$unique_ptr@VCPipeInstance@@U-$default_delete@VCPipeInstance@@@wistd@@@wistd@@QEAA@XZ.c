/*
 * XREFs of ??1?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@QEAA@XZ @ 0x14004982C
 * Callers:
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$6 @ 0x140096049 (_CAudioDeviceGraph--Initialize_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

CPipeInstance *__fastcall wistd::unique_ptr<CPipeInstance,wistd::default_delete<CPipeInstance>>::~unique_ptr<CPipeInstance,wistd::default_delete<CPipeInstance>>(
        CPipeInstance **a1)
{
  CPipeInstance *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return CPipeInstance::`scalar deleting destructor'(result);
  return result;
}
