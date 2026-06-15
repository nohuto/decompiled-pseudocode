/*
 * XREFs of ?Invoke@SESSION_EVENT@@UEAAXXZ @ 0x180022590
 * Callers:
 *     <none>
 * Callees:
 *     VADServerUserSessionChanged @ 0x180020E68 (VADServerUserSessionChanged.c)
 */

void __fastcall SESSION_EVENT::Invoke(SESSION_EVENT *this)
{
  VADServerUserSessionChanged(*((_DWORD *)this + 2), *((_QWORD *)this + 2));
  MME_SessionChanged();
}
