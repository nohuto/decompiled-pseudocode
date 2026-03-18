/*
 * XREFs of ?UnInitialize@CInputConfig@@SAXXZ @ 0x1400D089C
 * Callers:
 *     UnInitializeInputComponents @ 0x1400D0638 (UnInitializeInputComponents.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CInputConfig@@AEAA@XZ @ 0x1401F39E8 (--1CInputConfig@@AEAA@XZ.c)
 */

void __fastcall CInputConfig::UnInitialize(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 v2; // rcx
  char *v3; // rbx

  UserSessionState = W32GetUserSessionState(a1);
  v3 = *(char **)(UserSessionState + 18688);
  if ( v3 )
  {
    CInputConfig::~CInputConfig(*(CInputConfig **)(UserSessionState + 18688));
    GreDeleteFastMutex(v3);
  }
  *(_QWORD *)(W32GetUserSessionState(v2) + 18688) = 0LL;
}
