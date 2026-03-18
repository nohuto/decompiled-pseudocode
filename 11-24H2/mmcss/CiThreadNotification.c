/*
 * XREFs of CiThreadNotification @ 0x140003A60
 * Callers:
 *     <none>
 * Callees:
 *     CiThreadLocate @ 0x140003AB0 (CiThreadLocate.c)
 *     CiThreadCleanup @ 0x14000F520 (CiThreadCleanup.c)
 *     CiThreadDereference @ 0x14000F9D0 (CiThreadDereference.c)
 */

void __fastcall CiThreadNotification(HANDLE ProcessId, HANDLE ThreadId, BOOLEAN Create)
{
  __int64 v3; // rax
  __int64 v4; // rbx

  if ( !Create )
  {
    v3 = CiThreadLocate(KeGetCurrentThread(), ThreadId);
    v4 = v3;
    if ( v3 )
    {
      CiThreadCleanup(v3);
      CiThreadDereference(v4);
    }
  }
}
