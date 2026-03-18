/*
 * XREFs of ?NlsSetKeyStateToggle@@YAXE@Z @ 0x14014AAA4
 * Callers:
 *     NlsKbdInitializePerSystem @ 0x14014A750 (NlsKbdInitializePerSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall NlsSetKeyStateToggle(__int64 a1)
{
  char v1; // di
  __int64 v2; // rcx
  unsigned __int64 v3; // rbx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx

  v1 = a1;
  v3 = (unsigned __int64)(unsigned __int8)a1 >> 2;
  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 18944) )
  {
    v5 = *(_QWORD *)(W32GetUserSessionState(v2) + 18944);
    v2 = *(unsigned __int8 *)(v5 + v3 + 280);
    LODWORD(v2) = v2 | (1 << (2 * (v1 & 3) + 1));
    *(_BYTE *)(v5 + v3 + 280) = v2;
  }
  UserSessionState = W32GetUserSessionState(v2);
  *(_BYTE *)(UserSessionState + v3 + 14336) |= 1 << (2 * (v1 & 3) + 1);
}
