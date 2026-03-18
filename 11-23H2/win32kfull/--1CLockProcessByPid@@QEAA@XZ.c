/*
 * XREFs of ??1CLockProcessByPid@@QEAA@XZ @ 0x1C01B2614
 * Callers:
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C0043124 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CLockProcessByPid::~CLockProcessByPid(void **this)
{
  void *v1; // rcx

  v1 = *this;
  if ( v1 )
    ObfDereferenceObject(v1);
}
