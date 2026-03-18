/*
 * XREFs of ?Uninitialize@NetworkedFontFileTable@@YAXXZ @ 0x1403044A4
 * Callers:
 *     vNetworkedFontFileCleanup @ 0x140305020 (vNetworkedFontFileCleanup.c)
 * Callees:
 *     <none>
 */

void __fastcall NetworkedFontFileTable::Uninitialize(NetworkedFontFileTable *this, __int64 a2)
{
  _QWORD *SiloGlobals; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  _QWORD *v5; // rbx
  struct _RTL_AVL_TABLE *v6; // rdi
  BOOLEAN i; // dl
  HANDLE *v8; // rax
  HANDLE *v9; // rsi

  SiloGlobals = (_QWORD *)UserGetSiloGlobals(this, a2);
  v5 = SiloGlobals;
  if ( SiloGlobals )
  {
    if ( *SiloGlobals )
    {
      GreDeleteSemaphore(*SiloGlobals, v3, v4);
      *v5 = 0LL;
    }
    v6 = (struct _RTL_AVL_TABLE *)v5[1];
    if ( v6 )
    {
      for ( i = 1; ; i = 0 )
      {
        v8 = (HANDLE *)RtlEnumerateGenericTableAvl(v6, i);
        v9 = v8;
        if ( !v8 )
          break;
        ZwClose(*v8);
        RtlDeleteElementGenericTableAvl(v6, v9);
      }
      Win32FreePool((void *)v5[1]);
      v5[1] = 0LL;
    }
  }
}
