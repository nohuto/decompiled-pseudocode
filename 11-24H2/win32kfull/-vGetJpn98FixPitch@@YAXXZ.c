/*
 * XREFs of ?vGetJpn98FixPitch@@YAXXZ @ 0x14026B264
 * Callers:
 *     GrepFontSubSystemInitialize @ 0x140102580 (GrepFontSubSystemInitialize.c)
 * Callees:
 *     ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x140115D68 (-GetGreRegKey@@YAJPEAPEAXKPEBG@Z.c)
 *     bQueryFntCacheReg @ 0x1401161F4 (bQueryFntCacheReg.c)
 */

void vGetJpn98FixPitch(void)
{
  int v0; // ebx
  __int64 v1; // rdx
  int v2; // ecx
  __int64 SessionState; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  Handle = 0LL;
  v4 = 0;
  if ( GetGreRegKey(
         &Handle,
         0x80000000,
         L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize") >= 0 )
  {
    if ( (unsigned int)bQueryFntCacheReg(Handle, L"Jpn98FixPitch", &v4) )
    {
      SessionState = W32GetSessionState(v2, v1);
      LOBYTE(v0) = v4 != 0;
      *(_DWORD *)(*(_QWORD *)(SessionState + 96) + 19608LL) = v0;
    }
    ZwClose(Handle);
  }
}
