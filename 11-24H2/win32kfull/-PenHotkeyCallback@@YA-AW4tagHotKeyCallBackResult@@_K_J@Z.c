/*
 * XREFs of ?PenHotkeyCallback@@YA?AW4tagHotKeyCallBackResult@@_K_J@Z @ 0x1402738B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PenHotkeyCallback(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v1 = a1 - 25;
  if ( !v1 )
    goto LABEL_9;
  v2 = v1 - 1;
  if ( !v2 )
    goto LABEL_8;
  v3 = v2 - 1;
  if ( !v3 )
  {
    HIDWORD(v6) = 2;
    goto LABEL_9;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    LODWORD(v6) = 1;
LABEL_8:
    HIDWORD(v6) = 1;
    goto LABEL_9;
  }
  if ( v4 == 1 )
  {
    v6 = 1LL;
LABEL_9:
    SendMessageTo(16LL, &v6, 8LL);
  }
  return 0LL;
}
