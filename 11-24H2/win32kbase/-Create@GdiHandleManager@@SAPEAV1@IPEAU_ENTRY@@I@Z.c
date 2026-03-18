/*
 * XREFs of ?Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z @ 0x140078FFC
 * Callers:
 *     HmgCreate @ 0x1400798EC (HmgCreate.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z @ 0x140078E70 (-Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x14007C364 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 */

struct GdiHandleManager *__fastcall GdiHandleManager::Create(unsigned int a1, struct _ENTRY *a2, unsigned int a3)
{
  char *v6; // rax
  char *v7; // rbx
  struct GdiHandleEntryDirectory *v9; // rax

  if ( a3 < 0x10000 && a3 < a1 )
    return 0LL;
  v6 = (char *)Win32AllocPoolImpl(0x100uLL, 0x20uLL, 0x636D6847u);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  *(_DWORD *)v6 = 0;
  *((_DWORD *)v6 + 1) = 0;
  *((_QWORD *)v6 + 3) = 0LL;
  *((_DWORD *)v6 + 2) = a1;
  v9 = GdiHandleEntryDirectory::Create(a2, a3);
  *((_QWORD *)v7 + 2) = v9;
  if ( !v9 )
  {
    GreDeleteFastMutex(v7);
    return 0LL;
  }
  return (struct GdiHandleManager *)v7;
}
