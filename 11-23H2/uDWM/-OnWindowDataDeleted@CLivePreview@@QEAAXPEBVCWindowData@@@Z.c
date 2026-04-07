/*
 * XREFs of ?OnWindowDataDeleted@CLivePreview@@QEAAXPEBVCWindowData@@@Z @ 0x1800C6C78
 * Callers:
 *     ??1CWindowData@@QEAA@XZ @ 0x180010A48 (--1CWindowData@@QEAA@XZ.c)
 * Callees:
 *     memmove_0 @ 0x180066224 (memmove_0.c)
 */

void __fastcall CLivePreview::OnWindowDataDeleted(CLivePreview *this, const struct CWindowData *a2)
{
  const struct CWindowData **v2; // r8
  const struct CWindowData **v4; // rcx
  const struct CWindowData **v6; // rdx

  v2 = (const struct CWindowData **)*((_QWORD *)this + 63);
  v4 = (const struct CWindowData **)*((_QWORD *)this + 62);
  if ( v4 != v2 )
  {
    while ( 1 )
    {
      v6 = v4 + 1;
      if ( *v4 == a2 )
        break;
      ++v4;
      if ( v6 == v2 )
        return;
    }
    memmove_0(v4, v6, (char *)v2 - (char *)v6);
    *((_QWORD *)this + 63) -= 8LL;
  }
}
