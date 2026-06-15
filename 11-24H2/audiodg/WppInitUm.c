/*
 * XREFs of WppInitUm @ 0x14004AC68
 * Callers:
 *     wWinMain @ 0x14004AAF4 (wWinMain.c)
 * Callees:
 *     <none>
 */

__int64 WppInitUm()
{
  _QWORD *v0; // rbx
  __int64 *v1; // rdi
  __int64 v2; // r8
  __int64 result; // rax

  v0 = WPP_GLOBAL_Control;
  v1 = &WPP_REGISTRATION_GUIDS;
  while ( v0 )
  {
    v2 = *v1++;
    v0[4] = v2;
    result = EtwRegisterTraceGuidsW(WppControlCallback, v0, v2);
    v0 = (_QWORD *)*v0;
  }
  return result;
}
