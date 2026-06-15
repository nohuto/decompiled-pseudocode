/*
 * XREFs of ??1?$unique_ptr@UAuxiliaryInputDescriptor@@U?$default_delete@UAuxiliaryInputDescriptor@@@std@@@std@@QEAA@XZ @ 0x1800EEE10
 * Callers:
 *     ?ConfigureAuxiliaryInputStream@CSharedStreamGroupProxy@@IEAAJXZ @ 0x1800A6330 (-ConfigureAuxiliaryInputStream@CSharedStreamGroupProxy@@IEAAJXZ.c)
 *     _CSharedStreamGroupProxy::ConfigureAuxiliaryInputStream_::_1_::dtor$0 @ 0x1801637C2 (_CSharedStreamGroupProxy--ConfigureAuxiliaryInputStream_--_1_--dtor$0.c)
 * Callees:
 *     ??_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z @ 0x1800884AC (--_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z.c)
 */

void **__fastcall std::unique_ptr<AuxiliaryInputDescriptor>::~unique_ptr<AuxiliaryInputDescriptor>(void ***a1)
{
  void **v1; // rcx
  void **result; // rax

  v1 = *a1;
  if ( v1 )
    return AuxiliaryInputDescriptor::`scalar deleting destructor'(v1);
  return result;
}
