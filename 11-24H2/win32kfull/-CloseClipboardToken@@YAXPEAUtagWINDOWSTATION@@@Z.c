/*
 * XREFs of ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1401E8C8C
 * Callers:
 *     xxxCloseClipboard @ 0x14003D880 (xxxCloseClipboard.c)
 *     ForceEmptyClipboard @ 0x1401E8C1C (ForceEmptyClipboard.c)
 * Callees:
 *     <none>
 */

void __fastcall CloseClipboardToken(struct tagWINDOWSTATION *a1)
{
  void *v2; // rcx
  int v3; // eax

  v2 = (void *)*((_QWORD *)a1 + 20);
  if ( v2 )
  {
    v3 = *((_DWORD *)a1 + 16);
    if ( (v3 & 0x400) != 0 )
    {
      *((_DWORD *)a1 + 16) = v3 & 0xFFFFFBFF;
      ObfDereferenceObjectWithTag(v2, 0x746C6644u);
    }
    else
    {
      ObfDereferenceObject(v2);
    }
    *((_QWORD *)a1 + 20) = 0LL;
  }
}
