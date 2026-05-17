/*
 * XREFs of RtlSetThreadIsCritical @ 0x180112F20
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     ZwQueryInformationThread @ 0x1801636C0 (ZwQueryInformationThread.c)
 */

__int64 __fastcall RtlSetThreadIsCritical(unsigned __int8 a1, _BYTE *a2, char a3)
{
  int v4; // edi
  __int64 result; // rax
  int v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0;
  v4 = a1;
  if ( a2 )
    *a2 = 0;
  if ( a3 && (NtCurrentTeb()->ProcessEnvironmentBlock->NtGlobalFlag & 0x100000) == 0 )
    return 3221225473LL;
  if ( !a2 )
  {
LABEL_10:
    v6 = v4;
    return NtSetInformationThread(-2LL, 18LL, &v6);
  }
  result = ZwQueryInformationThread(-2LL, 18LL, &v6);
  if ( (int)result >= 0 )
  {
    *a2 = v6;
    goto LABEL_10;
  }
  return result;
}
