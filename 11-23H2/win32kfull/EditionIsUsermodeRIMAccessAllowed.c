/*
 * XREFs of EditionIsUsermodeRIMAccessAllowed @ 0x1C01ABA40
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0042A70 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 EditionIsUsermodeRIMAccessAllowed()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 CurrentProcess; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  char v10; // [rsp+30h] [rbp+8h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v10);
  CurrentProcess = PsGetCurrentProcess(v1, v0, v2);
  v6 = IsProcessDwm(CurrentProcess);
  if ( !v10 )
    UserSessionSwitchLeaveCrit(v5, v4, v7, v8);
  return v6;
}
