/*
 * XREFs of ??1?$unique_ptr@VCInternalMilCmdConnection@@U?$default_delete@VCInternalMilCmdConnection@@@std@@@std@@QEAA@XZ @ 0x180264420
 * Callers:
 *     ?MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z @ 0x180233120 (-MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z.c)
 * Callees:
 *     ??_GCInternalMilCmdConnection@@UEAAPEAXI@Z @ 0x180264470 (--_GCInternalMilCmdConnection@@UEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<CInternalMilCmdConnection>::~unique_ptr<CInternalMilCmdConnection>(
        CInternalMilCmdConnection **a1)
{
  CInternalMilCmdConnection *v1; // rcx
  void *result; // rax

  v1 = *a1;
  if ( v1 )
    return CInternalMilCmdConnection::`scalar deleting destructor'(v1, 1u);
  return result;
}
