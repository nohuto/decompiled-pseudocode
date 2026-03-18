/*
 * XREFs of ??1CActivationObjectManager@@AEAA@XZ @ 0x1401A6970
 * Callers:
 *     UnInitializeInputComponents @ 0x1400D0638 (UnInitializeInputComponents.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

void __fastcall CActivationObjectManager::~CActivationObjectManager(CActivationObjectManager *this)
{
  char *v1; // rcx

  v1 = (char *)*((_QWORD *)this + 1);
  if ( v1 )
    GreDeleteFastMutex(v1);
}
