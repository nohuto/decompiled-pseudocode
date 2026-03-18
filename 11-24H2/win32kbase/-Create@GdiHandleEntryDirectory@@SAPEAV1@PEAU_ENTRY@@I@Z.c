/*
 * XREFs of ?Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z @ 0x140078E70
 * Callers:
 *     ?Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z @ 0x140078FFC (-Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x14007C364 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?Create@EntryDataLookupTable@GdiHandleEntryTable@@SAPEAV12@I@Z @ 0x14023E30C (-Create@EntryDataLookupTable@GdiHandleEntryTable@@SAPEAV12@I@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 */

struct GdiHandleEntryDirectory *__fastcall GdiHandleEntryDirectory::Create(struct _ENTRY *a1, unsigned int a2)
{
  char *v4; // rdi
  char *v5; // rbx
  struct GdiHandleEntryTable::EntryDataLookupTable *v6; // rax
  struct GdiHandleEntryDirectory *result; // rax

  v4 = (char *)Win32AllocPoolImpl(0x100uLL, 0x810uLL, 0x63746547u);
  if ( !v4 )
    return 0LL;
  v5 = (char *)Win32AllocPoolImpl(0x100uLL, 0x20uLL, 0x63746547u);
  if ( !v5 )
  {
LABEL_5:
    GreDeleteFastMutex(v4);
    return 0LL;
  }
  v6 = GdiHandleEntryTable::EntryDataLookupTable::Create(a2);
  *((_QWORD *)v5 + 3) = v6;
  if ( !v6 )
  {
    GreDeleteFastMutex(v5);
    goto LABEL_5;
  }
  *((_DWORD *)v5 + 3) = -1;
  *((_DWORD *)v5 + 5) = 0;
  *((_DWORD *)v5 + 4) = 0;
  *((_DWORD *)v5 + 2) = a2;
  *(_QWORD *)v5 = a1;
  memset(v4 + 16, 0, 0x7F8uLL);
  result = (struct GdiHandleEntryDirectory *)v4;
  *v4 = 0;
  *((_DWORD *)v4 + 514) = a2;
  *((_QWORD *)v4 + 1) = v5;
  *((_WORD *)v4 + 1) = 1;
  return result;
}
