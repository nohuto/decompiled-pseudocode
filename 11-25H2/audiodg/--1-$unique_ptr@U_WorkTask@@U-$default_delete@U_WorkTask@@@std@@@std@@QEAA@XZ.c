/*
 * XREFs of ??1?$unique_ptr@U_WorkTask@@U?$default_delete@U_WorkTask@@@std@@@std@@QEAA@XZ @ 0x14003DAF4
 * Callers:
 *     _CSerialWorkQueue::QueueWorkItem_::_1_::dtor$2 @ 0x140091CAB (_CSerialWorkQueue--QueueWorkItem_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

_WorkTask *__fastcall std::unique_ptr<_WorkTask>::~unique_ptr<_WorkTask>(_WorkTask **a1)
{
  _WorkTask *v1; // rcx
  _WorkTask *result; // rax

  v1 = *a1;
  if ( v1 )
    return _WorkTask::`scalar deleting destructor'(v1);
  return result;
}
