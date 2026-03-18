/*
 * XREFs of ?Initialize@CursorApiRouter@@SAJXZ @ 0x1402DA570
 * Callers:
 *     EditionDriverInitialize @ 0x140238F20 (EditionDriverInitialize.c)
 * Callees:
 *     ??0CursorApiRouter@@AEAA@XZ @ 0x1402D9C1C (--0CursorApiRouter@@AEAA@XZ.c)
 */

__int64 CursorApiRouter::Initialize(void)
{
  CursorApiRouter *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  CursorApiRouter *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v0 = (CursorApiRouter *)Win32AllocPoolZInit(128LL, 1702130773LL);
  v3 = 0LL;
  if ( v0 )
    v3 = CursorApiRouter::CursorApiRouter(v0);
  *(_QWORD *)(W32GetUserSessionState(v2, v1) + 36360) = v3;
  return *(_QWORD *)(W32GetUserSessionState(v5, v4) + 36360) == 0LL ? 0xC0000017 : 0;
}
