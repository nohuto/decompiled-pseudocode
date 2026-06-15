/*
 * XREFs of ??1?$unique_ptr@VDuckingDescriptor@@U?$default_delete@VDuckingDescriptor@@@std@@@std@@QEAA@XZ @ 0x18002C2EC
 * Callers:
 *     ?RuntimeClassInitialize@CDuckingManager@@QEAAJXZ @ 0x18002E5CC (-RuntimeClassInitialize@CDuckingManager@@QEAAJXZ.c)
 * Callees:
 *     ??_GDuckingDescriptor@@UEAAPEAXI@Z @ 0x18002CE10 (--_GDuckingDescriptor@@UEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<DuckingDescriptor>::~unique_ptr<DuckingDescriptor>(DuckingDescriptor **a1)
{
  DuckingDescriptor *v1; // rcx
  void *result; // rax

  v1 = *a1;
  if ( v1 )
    return DuckingDescriptor::`scalar deleting destructor'(v1, 1u);
  return result;
}
