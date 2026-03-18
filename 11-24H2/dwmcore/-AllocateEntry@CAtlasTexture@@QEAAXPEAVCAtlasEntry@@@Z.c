/*
 * XREFs of ?AllocateEntry@CAtlasTexture@@QEAAXPEAVCAtlasEntry@@@Z @ 0x180063850
 * Callers:
 *     ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x1800636E8 (-AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

void __fastcall CAtlasTexture::AllocateEntry(CAtlasTexture *this, struct CAtlasEntry *a2)
{
  __int64 i; // rax
  __int64 v3; // r9
  void *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 6) )
      ModuleFailFastForHRESULT(-2003304315, retaddr);
    v3 = *((_QWORD *)this + 2);
    if ( !*(_QWORD *)(v3 + 8 * i) )
      break;
  }
  --*((_DWORD *)this + 7);
  *(_QWORD *)(v3 + 8 * i) = a2;
  if ( *(_QWORD *)a2 )
    ModuleFailFastForHRESULT(-2003292412, retaddr);
  *(_QWORD *)a2 = this;
  *((_DWORD *)a2 + 4) = i + 1;
}
