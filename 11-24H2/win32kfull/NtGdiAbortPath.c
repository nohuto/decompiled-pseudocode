/*
 * XREFs of NtGdiAbortPath @ 0x140336A40
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestroy@DC@@QEAAXXZ @ 0x1400E624C (-vDestroy@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiAbortPath(HDC a1)
{
  DC *v1; // rcx
  unsigned int v2; // ebx
  int v3; // eax
  DC *v5[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  v1 = v5[0];
  v2 = 0;
  if ( v5[0] )
  {
    if ( *((_QWORD *)v5[0] + 25) )
    {
      v3 = *((_DWORD *)v5[0] + 62);
      if ( (v3 & 2) != 0 )
      {
        *((_DWORD *)v5[0] + 62) = v3 & 0xFFFFFFFD;
        v1 = v5[0];
      }
      DC::vDestroy(v1);
    }
    v2 = 1;
  }
  else
  {
    EngSetLastError(6u);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
  return v2;
}
