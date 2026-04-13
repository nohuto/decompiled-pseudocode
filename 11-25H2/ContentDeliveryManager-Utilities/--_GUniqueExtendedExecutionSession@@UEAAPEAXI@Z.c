/*
 * XREFs of ??_GUniqueExtendedExecutionSession@@UEAAPEAXI@Z @ 0x18008D160
 * Callers:
 *     <none>
 * Callees:
 *     ??1UniqueExtendedExecutionSession@@UEAA@XZ @ 0x18008CEA4 (--1UniqueExtendedExecutionSession@@UEAA@XZ.c)
 */

UniqueExtendedExecutionSession *__fastcall UniqueExtendedExecutionSession::`scalar deleting destructor'(
        UniqueExtendedExecutionSession *this,
        char a2)
{
  UniqueExtendedExecutionSession::~UniqueExtendedExecutionSession(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
