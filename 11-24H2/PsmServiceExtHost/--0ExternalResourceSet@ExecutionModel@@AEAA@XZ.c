/*
 * XREFs of ??0ExternalResourceSet@ExecutionModel@@AEAA@XZ @ 0x18005CFF8
 * Callers:
 *     ?ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAV12@@Z @ 0x18005CF58 (-ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAV12@@Z.c)
 * Callees:
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x1800128B8 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 *     ??0?$list@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@V?$allocator@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@@utl@@@utl@@QEAA@XZ @ 0x180012E4C (--0-$list@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@V-$allocator@UExte.c)
 */

ExecutionModel::ExternalResourceSet *__fastcall ExecutionModel::ExternalResourceSet::ExternalResourceSet(
        ExecutionModel::ExternalResourceSet *this)
{
  ExecutionModel::ExternalResourceSet *result; // rax
  __int64 v3; // rdx

  ExecutionModel::BaseResourceSet::BaseResourceSet(this);
  *(_QWORD *)this = &ExecutionModel::ExternalResourceSet::`vftable';
  *((_QWORD *)this + 162) = 0LL;
  *((_QWORD *)this + 163) = 0LL;
  utl::list<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage,utl::allocator<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>::list<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage,utl::allocator<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>((_QWORD *)this + 164);
  result = this;
  *((_QWORD *)this + 167) = v3;
  *((_QWORD *)this + 168) = v3;
  *((_DWORD *)this + 338) = v3;
  return result;
}
