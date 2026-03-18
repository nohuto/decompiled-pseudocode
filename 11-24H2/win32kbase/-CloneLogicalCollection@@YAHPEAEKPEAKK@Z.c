/*
 * XREFs of ?CloneLogicalCollection@@YAHPEAEKPEAKK@Z @ 0x1401E831C
 * Callers:
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1401E7C64 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 * Callees:
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall CloneLogicalCollection(unsigned __int8 *a1, int a2, unsigned int *a3, unsigned int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 UserSessionState; // rax
  __int64 v12; // rbx
  __int64 result; // rax

  if ( a4 <= *(_DWORD *)(W32GetUserSessionState(a1) + 248) )
    return 0LL;
  v10 = a4 - *(_DWORD *)(W32GetUserSessionState(v8) + 248) + 1;
  if ( a2 - *a3 <= v10 )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v9);
  v12 = *a3;
  memmove(&a1[v12], &a1[*(unsigned int *)(UserSessionState + 248)], v10);
  result = 1LL;
  *a3 = v12 + v10;
  return result;
}
